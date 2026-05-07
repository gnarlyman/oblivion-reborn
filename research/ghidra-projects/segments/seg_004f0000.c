
void FUN_004f0030(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x30) + 4);
    uVar3 = 0;
    if (uVar1 != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x30) + 8);
      piVar4 = piVar2;
      do {
        if (*piVar4 != 0) {
          local_8 = piVar2[uVar3];
          goto joined_r0x004f006a;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < uVar1);
    }
    local_8 = 0;
joined_r0x004f006a:
    while (local_8 != 0) {
      local_c = (int *)0x0;
      FUN_00452600(&local_8,local_4,&local_c);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 0x10))(1);
      }
    }
  }
  FUN_007c2a40();
  return;
}



undefined1 FUN_004f00c0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 10:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x25:
    case 0x29:
      uVar2 = 1;
    }
  }
  return uVar2;
}



void FUN_004f0120(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (int *)0x0) && (((uint)param_1[2] >> 0xe & 1) == 0)) {
    FUN_00401020(&DAT_00a2f830);
    cVar1 = FUN_004f00c0(param_1);
    if (cVar1 == '\0') {
      FUN_00446cb0(param_1);
      FUN_00401040();
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x174))();
    uVar2 = FUN_004efe40(uVar2);
    FUN_0055e000(uVar2,&stack0x00000000);
    puVar3 = (undefined4 *)FUN_00401f00(8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    FUN_00452570(uVar2,puVar3);
    FUN_00446cb0(param_1);
    FUN_00401040();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004f027b) */
/* WARNING: Removing unreachable block (ram,0x004f0289) */
/* WARNING: Removing unreachable block (ram,0x004f028e) */

void FUN_004f01f0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (((uint)param_1[2] >> 0xe & 1) == 0)) {
    FUN_00401020(&DAT_00a2f830);
    cVar1 = FUN_004f00c0(param_1);
    if (cVar1 == '\0') {
      FUN_0065c620(param_1);
      FUN_00401040();
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x174))();
    uVar2 = FUN_004efe40(uVar2);
    FUN_0055e000(uVar2,&stack0x00000000);
    FUN_00401040();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004f0346) */
/* WARNING: Removing unreachable block (ram,0x004f034c) */
/* WARNING: Removing unreachable block (ram,0x004f0350) */
/* WARNING: Removing unreachable block (ram,0x004f0366) */

void FUN_004f02b0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  FUN_00401020(&DAT_00a2f830);
  iVar1 = *(int *)(in_ECX + 0x78);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x78));
    *(int *)(in_ECX + 0x78) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x74) = 0;
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x68) != 0) {
    piVar3 = *(int **)(in_ECX + 0x6c);
    do {
      if (*piVar3 != 0) {
        iStack_c = (*(int **)(in_ECX + 0x6c))[uVar2];
        goto joined_r0x004f031b;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x68));
  }
  iStack_c = 0;
joined_r0x004f031b:
  while (iStack_c != 0) {
    FUN_00452600(&iStack_c,auStack_8,&stack0xfffffff0);
  }
  FUN_007c2a40();
  FUN_00401040();
  return;
}



void FUN_004f03a0(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0)) {
    FUN_004ef1f0();
    FUN_004d35d0(param_1);
  }
  return;
}



void FUN_004f03d0(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x34) != 0)) {
    FUN_004cecd0();
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004f044a) */
/* WARNING: Removing unreachable block (ram,0x004f0450) */
/* WARNING: Removing unreachable block (ram,0x004f0456) */
/* WARNING: Removing unreachable block (ram,0x004f045b) */

void FUN_004f03f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00401020(&DAT_00a2f830);
    uVar5 = FUN_004c9aa0();
    sVar4 = FUN_004c9a80();
    FUN_0055e000(uVar5 & 0xffff | (int)sVar4 << 0x10,&stack0x00000000);
    for (piVar1 = (int *)(in_ECX + 0x74);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      iVar6 = FUN_006ecc80();
      if (iVar6 != param_1) {
        uVar7 = (**(code **)(*piVar2 + 0x174))();
        cVar3 = FUN_004cc540(uVar7);
        if (cVar3 != '\0') {
          FUN_004d35d0(piVar2);
        }
      }
    }
    FUN_00401040();
  }
  return;
}



void FUN_004f04d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_ECX + 0x60);
  if (iVar1 != 0) {
    uVar3 = 0;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar4 = *(int **)(iVar1 + 8);
      do {
        if (*piVar4 != 0) {
          local_8 = (*(int **)(iVar1 + 8))[uVar3];
          goto joined_r0x004f050b;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < *(uint *)(iVar1 + 4));
    }
    local_8 = 0;
joined_r0x004f050b:
    while (local_8 != 0) {
      local_c = (undefined4 *)0x0;
      FUN_00452600(&local_8,local_4,&local_c);
      puVar2 = local_c;
      if (local_c != (undefined4 *)0x0) {
        iVar1 = local_c[1];
        while (iVar1 != 0) {
          iVar1 = *(int *)(puVar2[1] + 4);
          FUN_00401f20(puVar2[1]);
          puVar2[1] = iVar1;
        }
        *puVar2 = 0;
        FUN_00401f20(puVar2);
      }
    }
    FUN_007c2a40();
    if (*(undefined4 **)(in_ECX + 0x60) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x60))(1);
    }
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  return;
}



undefined4 FUN_004f05a0(float *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_8;
  float local_4;
  
  local_8 = 0;
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    local_4 = param_1[1];
    FUN_0055e000((int)(short)((int)ROUND(*param_1) >> 0xc) << 0x10 |
                 (int)ROUND(local_4) >> 0xc & 0xffffU,&local_8);
    uVar1 = local_8;
  }
  return uVar1;
}



void FUN_004f0600(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f05a0(param_1);
  FUN_004bc4a0(param_1,uVar1);
  return;
}



undefined4 * FUN_004f0620(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  do {
    iVar3 = in_ECX;
    in_ECX = *(int *)(iVar3 + 0x7c);
  } while (*(int *)(iVar3 + 0x7c) != 0);
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar3 + 0x34) != 0)) {
    FUN_004cb520(puVar2);
  }
  for (piVar4 = (int *)(DAT_00b33a98 + 0xc); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar1 = *piVar4;
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x7c) == iVar3)) && (puVar2 != (undefined4 *)0x0)) &&
       (*(int *)(iVar1 + 0x34) != 0)) {
      FUN_004cb520(puVar2);
    }
  }
  return puVar2;
}



int * FUN_004f06a0(char *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  char *_Str1;
  int iVar5;
  int in_ECX;
  int *piVar6;
  char *_Str2;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if (param_1 == (char *)0x0) {
    return (int *)0x0;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x30) + 4);
  uVar4 = 0;
  piVar3 = (int *)0x0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x30) + 8);
    piVar6 = piVar2;
    do {
      if (*piVar6 != 0) {
        local_8 = piVar2[uVar4];
        goto joined_r0x004f06db;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 < uVar1);
  }
  local_8 = 0;
joined_r0x004f06db:
  while ((local_8 != 0 && (piVar3 == (int *)0x0))) {
    local_c = piVar3;
    FUN_00452600(&local_8,local_4,&local_c);
    piVar2 = local_c;
    if (local_c != (int *)0x0) {
      _Str2 = param_1;
      _Str1 = (char *)(**(code **)(*local_c + 0xd4))();
      iVar5 = __stricmp(_Str1,_Str2);
      if (iVar5 == 0) {
        piVar3 = piVar2;
      }
    }
  }
  return piVar3;
}



void FUN_004f0750(undefined4 param_1,float param_2,undefined4 param_3,float param_4,int param_5,
                 undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 != 0) {
    iVar4 = FUN_009828c0();
    iVar4 = iVar4 >> 0xc;
    iVar5 = FUN_009828c0();
    uVar6 = iVar5 >> 0xc;
    iVar5 = FUN_004efe80(iVar4,uVar6);
    local_8 = 0;
    if ((iVar5 == 0) ||
       (cVar3 = FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6), cVar3 != '\0')) {
      do {
        local_8 = local_8 + 2;
        iVar4 = iVar4 + -1;
        iVar5 = 0;
        uVar6 = uVar6 - 1;
        local_10 = 0;
        if (0 < local_8) {
          do {
            if ((((iVar4 < 0x8000) && ((int)uVar6 < 0x8000)) && (-0x8001 < iVar4)) &&
               (-0x8001 < (int)uVar6)) {
              local_14 = 0;
              cVar3 = FUN_0055e000((int)(short)iVar4 << 0x10 | uVar6 & 0xffff,&local_14);
              if ((((cVar3 != '\0') && (local_14 != 0)) &&
                  ((param_2 == 3.4028235e+38 ||
                   (fVar8 = (float10)FUN_004c9da0(param_1), fVar8 < (float10)param_2)))) &&
                 ((param_4 == 3.4028235e+38 ||
                  (fVar8 = (float10)FUN_004c9da0(param_3), fVar8 < (float10)param_4)))) {
                local_10 = local_10 + 1;
                cVar3 = FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6);
                if (cVar3 == '\0') {
                  return;
                }
              }
            }
            else {
              local_14 = iVar4;
              FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
                           ,0xffff8000,0x7fff);
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_8);
        }
        iVar5 = 0;
        local_14 = iVar4;
        if (0 < local_8) {
          do {
            if ((((iVar4 < 0x8000) && ((int)uVar6 < 0x8000)) && (-0x8001 < iVar4)) &&
               (-0x8001 < (int)uVar6)) {
              local_4 = 0;
              cVar3 = FUN_0055e000((int)(short)iVar4 << 0x10 | uVar6 & 0xffff,&local_4);
              if ((((cVar3 != '\0') && (local_4 != 0)) &&
                  ((param_2 == 3.4028235e+38 ||
                   (fVar8 = (float10)FUN_004c9da0(param_1), fVar8 < (float10)param_2)))) &&
                 ((param_4 == 3.4028235e+38 ||
                  (fVar8 = (float10)FUN_004c9da0(param_3), fVar8 < (float10)param_4)))) {
                local_10 = local_10 + 1;
                cVar3 = FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6);
                if (cVar3 == '\0') {
                  return;
                }
              }
            }
            else {
              FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
                           ,0xffff8000,0x7fff);
            }
            iVar5 = iVar5 + 1;
            uVar6 = uVar6 + 1;
          } while (iVar5 < local_8);
        }
        local_4 = 0;
        if (0 < local_8) {
          do {
            if ((((iVar4 < 0x8000) && ((int)uVar6 < 0x8000)) && (-0x8001 < iVar4)) &&
               (-0x8001 < (int)uVar6)) {
              piVar1 = *(int **)(local_c + 0x30);
              uVar7 = (int)(short)iVar4 << 0x10 | uVar6 & 0xffff;
              iVar4 = (**(code **)(*piVar1 + 4))(uVar7);
              for (puVar2 = *(undefined4 **)(piVar1[2] + iVar4 * 4); puVar2 != (undefined4 *)0x0;
                  puVar2 = (undefined4 *)*puVar2) {
                cVar3 = (**(code **)(*piVar1 + 8))(uVar7,puVar2[1]);
                if (cVar3 != '\0') {
                  if (((puVar2[2] != 0) &&
                      ((param_2 == 3.4028235e+38 ||
                       (fVar8 = (float10)FUN_004c9da0(param_1), fVar8 < (float10)param_2)))) &&
                     ((param_4 == 3.4028235e+38 ||
                      (fVar8 = (float10)FUN_004c9da0(param_3), fVar8 < (float10)param_4)))) {
                    local_10 = local_10 + 1;
                    cVar3 = FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6);
                    if (cVar3 == '\0') {
                      return;
                    }
                  }
                  break;
                }
              }
            }
            else {
              FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
                           ,0xffff8000,0x7fff);
              local_14 = iVar4;
            }
            local_4 = local_4 + 1;
            iVar4 = local_14 + -1;
            local_14 = iVar4;
          } while (local_4 < local_8);
        }
        local_4 = 0;
        if (0 < local_8) {
          do {
            if (((iVar4 < 0x8000) && ((int)uVar6 < 0x8000)) &&
               ((-0x8001 < iVar4 && (-0x8001 < (int)uVar6)))) {
              piVar1 = *(int **)(local_c + 0x30);
              uVar7 = (int)(short)iVar4 << 0x10 | uVar6 & 0xffff;
              iVar4 = (**(code **)(*piVar1 + 4))(uVar7);
              for (puVar2 = *(undefined4 **)(piVar1[2] + iVar4 * 4); iVar4 = local_14,
                  puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
                cVar3 = (**(code **)(*piVar1 + 8))(uVar7,puVar2[1]);
                if (cVar3 != '\0') {
                  iVar4 = local_14;
                  if (((puVar2[2] != 0) &&
                      ((param_2 == 3.4028235e+38 ||
                       (fVar8 = (float10)FUN_004c9da0(param_1), iVar4 = local_14,
                       fVar8 < (float10)param_2)))) &&
                     ((param_4 == 3.4028235e+38 ||
                      (fVar8 = (float10)FUN_004c9da0(param_3), iVar4 = local_14,
                      fVar8 < (float10)param_4)))) {
                    local_10 = local_10 + 1;
                    cVar3 = FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6);
                    iVar4 = local_14;
                    if (cVar3 == '\0') {
                      return;
                    }
                  }
                  break;
                }
              }
            }
            else {
              FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
                           ,0xffff8000,0x7fff);
            }
            local_4 = local_4 + 1;
            uVar6 = uVar6 - 1;
          } while (local_4 < local_8);
        }
      } while (local_10 != 0);
      if (*(int *)(local_c + 0x34) != 0) {
        FUN_004cbc20(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



undefined4 FUN_004f0da0(undefined2 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xd8) != '\0') {
    uVar1 = FUN_004d6760(CONCAT22(param_1,param_2),&param_1);
    return uVar1;
  }
  return 1;
}



void FUN_004f0de0(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a48184;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a48228;
  return;
}



void FUN_004f0e30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a481c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004f0e50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a481c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f0e80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6748;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a48248;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a481a4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f0ef0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6778;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a48228;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a48184;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f0f60(void)

{
  FUN_0044d810();
  return;
}



void FUN_004f0f70(byte param_1)

{
  FUN_004f0e80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f0f90(byte param_1)

{
  FUN_004f0ef0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f0fb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6828;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4829c;
  in_ECX[6] = &PTR_FUN_00a48284;
  in_ECX[9] = &PTR_FUN_00a48268;
  local_4 = 6;
  if (DAT_00b33abc == in_ECX) {
    DAT_00b33abc = (undefined4 *)0x0;
  }
  FUN_004f02b0(uVar1);
  thunk_FUN_0046b170();
  FUN_004f04d0();
  FUN_004f0030();
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  in_ECX[0xc] = 0;
  if ((int *)in_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xd] + 0x10))(1);
  }
  in_ECX[0xd] = 0;
  if ((int *)in_ECX[0x15] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x15] + 0x10))(1);
  }
  FUN_00401f20(in_ECX[0x2a]);
  local_4._0_1_ = 5;
  FUN_004f0e80();
  FUN_00401f20(in_ECX[0x30]);
  in_ECX[0x30] = 0;
  *(undefined2 *)((int)in_ECX + 0xc6) = 0;
  *(undefined2 *)(in_ECX + 0x31) = 0;
  local_4._0_1_ = 3;
  FUN_004f0ef0();
  local_4._0_1_ = 2;
  FUN_004ec590();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00470040();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004f1240(int param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined1 local_4 [4];
  
  piVar7 = param_2;
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b0301c;
  ppuVar10 = &PTR_PTR_00b02f9c;
  uVar9 = 0;
  uVar3 = FUN_0046c360(param_1,param_2);
  iVar4 = FUN_009832e6(uVar3,uVar9,ppuVar10,ppuVar11,uVar12);
  FUN_007c2a40();
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x30) + 4);
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = *(int **)(*(int *)(in_ECX + 0x30) + 8);
    piVar8 = piVar6;
    do {
      if (*piVar8 != 0) {
        param_1 = piVar6[uVar5];
        goto joined_r0x004f12ab;
      }
      uVar5 = uVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar5 < uVar1);
  }
  param_1 = 0;
joined_r0x004f12ab:
  while (param_1 != 0) {
    param_2 = (int *)0x0;
    FUN_00452600(&param_1,local_4,&param_2);
    if (param_2 != (int *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x38))(0,piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      piVar6 = (int *)FUN_009832e6(uVar3);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x90))(1);
        FUN_004efef0(piVar6);
      }
    }
  }
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x38))
                      (0,piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    piVar6 = (int *)FUN_009832e6(uVar3);
    if (piVar6 != (int *)0x0) {
      *(int **)(iVar4 + 0x34) = piVar6;
      (**(code **)(*piVar6 + 0x90))(1);
    }
  }
  if (*(int *)(iVar4 + 0x34) != 0) {
    FUN_004d3a00(iVar4);
  }
  if (*(int **)(in_ECX + 0x54) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x38))
                      (0,piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b09654,0);
    piVar7 = (int *)FUN_009832e6(uVar3);
    if (piVar7 != (int *)0x0) {
      if (*(int **)(iVar4 + 0x54) != (int *)0x0) {
        (**(code **)(**(int **)(iVar4 + 0x54) + 0x10))(1);
      }
      *(int **)(iVar4 + 0x54) = piVar7;
      pcVar2 = *(code **)(*piVar7 + 0x90);
      piVar7[0xb] = iVar4;
      (*pcVar2)(1);
    }
  }
  return iVar4;
}



int * FUN_004f1630(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char local_15;
  int local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  uVar2 = param_2;
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_15 = '\x01';
  piVar5 = (int *)FUN_004efe80(param_1,param_2);
  DAT_00b33aa0 = in_ECX;
  if ((piVar5 == (int *)0x0) || (cVar3 = FUN_004c9f80(uVar4), cVar3 == '\0')) {
    uVar4 = 0;
    for (piVar1 = in_ECX + 4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 != 0) {
        uVar4 = uVar4 + 1;
      }
    }
    param_2 = 0;
    if (uVar4 != 0) {
      do {
        FUN_0046b680(param_2);
        iVar6 = FUN_004520f0();
        if (((iVar6 != 0) && (cVar3 = FUN_0044faa0(), cVar3 != '\0')) &&
           (cVar3 = FUN_004ef520(iVar6,param_1,uVar2), cVar3 != '\0')) {
          if (piVar5 == (int *)0x0) {
            iVar7 = FUN_00401f00(0x58);
            if (iVar7 != 0) {
              local_4 = piVar5;
              piVar5 = (int *)FUN_004d3210();
            }
            local_4 = (int *)0xffffffff;
            FUN_004c9800(0);
            FUN_004ca710();
            FUN_004c9ac0(param_1,uVar2);
            FUN_004efef0(piVar5);
            iVar7 = FUN_00459790(in_ECX[3],param_1,uVar2);
            if (iVar7 != 0) {
              FUN_0046c300(iVar7,1);
            }
            local_15 = FUN_00447050(piVar5,iVar6);
          }
          cVar3 = FUN_004d1340(iVar6);
          if (cVar3 == '\0') {
            local_15 = '\0';
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < uVar4);
    }
    if (piVar5 != (int *)0x0) {
      FUN_004c9f90(1);
      cVar3 = FUN_0045a500();
      param_2 = CONCAT31(param_2._1_3_,cVar3);
      FUN_0045a530(cVar3 == '\0');
      (**(code **)(*piVar5 + 0x6c))();
      FUN_0045a530(param_2);
      FUN_004f03f0(piVar5);
    }
    if (local_15 == '\0') {
      uVar8 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
      FUN_004a7a60("Failed to load temporary data for cell (%i, %i) in worldspace \'%s\' (%08X).",
                   param_1,uVar2,uVar8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar5;
}



void FUN_004f1840(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_004c9cf0();
    if (iVar2 == in_ECX) {
      iVar2 = FUN_0046b680(0xffffffff);
      if (iVar2 != 0) {
        cVar1 = FUN_0044faa0();
        if (cVar1 == '\0') {
          FUN_004d1570();
          return;
        }
      }
      FUN_004d1570();
      FUN_00463a90(param_1);
      FUN_004effc0(param_1);
      (**(code **)(*param_1 + 0x10))(1);
    }
  }
  return;
}



undefined4 FUN_004f18b0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  do {
    iVar4 = in_ECX;
    *param_3 = 0;
    *param_4 = 0;
    in_ECX = *(int *)(iVar4 + 0x7c);
  } while (in_ECX != 0);
  piVar2 = (int *)(iVar4 + 0x10);
  iVar4 = 0;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  do {
    if (*piVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    return 0;
  }
  while( true ) {
    FUN_0046b680(iVar4);
    iVar3 = FUN_004520f0();
    if (((iVar3 != 0) && (cVar1 = FUN_004ef520(iVar3,param_1,param_2), cVar1 != '\0')) &&
       (cVar1 = FUN_004d1990(iVar3), cVar1 != '\0')) break;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return 0;
    }
  }
  *param_3 = iVar3;
  *param_4 = *(undefined4 *)(iVar3 + 0x25c);
  return 1;
}



void FUN_004f1990(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  
  iVar4 = param_3;
  do {
    if (iVar4 == 0) {
      return;
    }
    cVar2 = '\0';
    if (DAT_00b09db0 == '\0') {
      uVar5 = 0;
      for (piVar1 = (int *)(in_ECX + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          uVar5 = uVar5 + 1;
        }
      }
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          FUN_0046b680(uVar6);
          iVar4 = FUN_004520f0();
          if (((iVar4 != 0) && (cVar3 = FUN_004ef520(iVar4,param_1,param_2), cVar3 != '\0')) &&
             (cVar3 = FUN_004d43f0(iVar4,in_ECX,param_1,param_2,param_3), cVar3 != '\0')) {
            cVar2 = '\x01';
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
        goto LAB_004f1a3f;
      }
    }
    else {
      cVar2 = FUN_004d16d0(param_5,param_3,param_4);
LAB_004f1a3f:
      if (cVar2 != '\0') {
        return;
      }
    }
    in_ECX = *(int *)(in_ECX + 0x7c);
    iVar4 = in_ECX;
  } while( true );
}



undefined1 * FUN_004f1a60(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7c) == 0) {
    puVar1 = *(undefined1 **)(in_ECX + 0x28);
  }
  else {
    puVar1 = *(undefined1 **)(*(int *)(in_ECX + 0x7c) + 0x28);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  return puVar1;
}



void FUN_004f1a80(float *param_1)

{
  FUN_004efe80((int)ROUND(*param_1) >> 0xc,(int)ROUND(param_1[1]) >> 0xc);
  return;
}



void FUN_004f1ac0(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  float10 fVar14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b685b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 0x170))(uVar4), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*piVar3 + 0x170))(), *(char *)(iVar5 + 4) == ')')) {
    if (*(int *)(in_ECX + 0x60) == 0) {
      param_1 = (int *)FUN_00401f00(0x10);
      uStack_4 = 0;
      if (param_1 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_004f0de0(0x25);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x60) = uVar6;
    }
    (**(code **)(*piVar3 + 0x170))();
    fVar13 = (float10)(**(code **)(*piVar3 + 0xec))();
    fVar14 = (float10)FUN_004a9730();
    param_1 = (int *)(float)(fVar14 * (float10)(double)fVar13);
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x174))();
    fVar1 = *pfVar7 - (float)param_1;
    iVar5 = (**(code **)(*piVar3 + 0x174))();
    uVar4 = (int)ROUND(*(float *)(iVar5 + 4) - (float)param_1) >> 0xc;
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x174))();
    fVar2 = *pfVar7 + (float)param_1;
    iVar5 = (**(code **)(*piVar3 + 0x174))();
    iVar10 = (int)ROUND(*(float *)(iVar5 + 4) + (float)param_1) >> 0xc;
    for (iVar5 = (int)ROUND(fVar1) >> 0xc; iVar5 <= (int)ROUND(fVar2) >> 0xc; iVar5 = iVar5 + 1) {
      if ((int)uVar4 <= iVar10) {
        uVar11 = uVar4;
        do {
          uVar12 = uVar11 & 0xffff | (int)(short)iVar5 << 0x10;
          param_1 = (int *)0x0;
          FUN_0055e000(uVar12,&param_1);
          piVar8 = param_1;
          if (param_1 == (int *)0x0) {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = 0;
              piVar8[1] = 0;
            }
            FUN_00452570(uVar12,piVar8);
          }
          if (*piVar8 != 0) {
            piVar9 = (int *)FUN_00401f00(8);
            if (piVar9 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              *piVar9 = *piVar8;
              piVar9[1] = 0;
            }
            piVar9[1] = piVar8[1];
            piVar8[1] = (int)piVar9;
          }
          uVar11 = uVar11 + 1;
          *piVar8 = (int)piVar3;
        } while ((int)uVar11 <= iVar10);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f1d20(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a481c4;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a483d0;
  return;
}



void FUN_004f1d70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6888;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a483d0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a481c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f1de0(byte param_1)

{
  FUN_004f0fb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f1e00(void)

{
  char cVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  cVar1 = FUN_0046b660();
  if (cVar1 == '\0') {
    *(byte *)(in_ECX + 0x5c) = *(byte *)(in_ECX + 0x5c) | 1;
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined2 *)(in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  thunk_FUN_0046b090();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004f1e70(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b68c6;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  cVar4 = FUN_004511c0(local_14);
  if (cVar4 != '5') {
    uVar5 = 0;
    goto LAB_004f2242;
  }
  cVar4 = FUN_0044faa0();
  if (cVar4 != '\0') {
    in_ECX[0x2f] = *(int *)(param_1 + 0x25c);
  }
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar6 = FUN_004510b0();
  while (iVar6 != 0) {
    if (iVar6 < 0x4d414e44) {
      if (iVar6 == 0x4d414e43) {
        local_18 = 0.0;
        FUN_004510e0(&local_18);
        in_ECX[0x16] = (int)local_18;
      }
      else if (iVar6 < 0x41544145) {
        if (iVar6 == 0x41544144) {
          FUN_0046bda0(param_1,in_ECX + 0x17,1);
        }
        else if (iVar6 == 0x304d414e) {
          FUN_00450c20(&local_28,8);
          fVar1 = local_28;
          if ((float)in_ECX[0x26] < local_28) {
            fVar1 = (float)in_ECX[0x26];
          }
          in_ECX[0x26] = (int)fVar1;
          local_18 = local_24;
          if ((float)in_ECX[0x27] < local_24) {
            local_18 = (float)in_ECX[0x27];
          }
          in_ECX[0x27] = (int)local_18;
          cVar4 = FUN_0044faa0();
          if (cVar4 != '\0') {
            in_ECX[0x2b] = (int)local_28;
            in_ECX[0x2c] = (int)local_24;
          }
        }
        else if (iVar6 == 0x324d414e) {
          local_18 = 0.0;
          FUN_004510e0(&local_18);
          in_ECX[0x20] = (int)local_18;
        }
        else if (iVar6 == 0x394d414e) {
          FUN_00450c20(&local_20,8);
          fVar1 = local_20;
          if (local_20 < (float)in_ECX[0x28]) {
            fVar1 = (float)in_ECX[0x28];
          }
          in_ECX[0x28] = (int)fVar1;
          local_18 = local_1c;
          if (local_1c < (float)in_ECX[0x29]) {
            local_18 = (float)in_ECX[0x29];
          }
          in_ECX[0x29] = (int)local_18;
          cVar4 = FUN_0044faa0();
          if (cVar4 != '\0') {
            in_ECX[0x2d] = (int)local_20;
            in_ECX[0x2e] = (int)local_1c;
          }
        }
      }
      else if (iVar6 == 0x44494445) {
        FUN_00450c20(&stack0xffffffcc,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffcc);
      }
      else if (iVar6 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          FUN_0046c7a0(0,param_1);
        }
        else {
          FUN_0046c7a0(in_ECX + 6,param_1);
        }
      }
    }
    else if (iVar6 < 0x4d414e58) {
      if (iVar6 == 0x4d414e57) {
        local_18 = 0.0;
        FUN_004510e0(&local_18);
        in_ECX[0x1f] = (int)local_18;
      }
      else if (iVar6 == 0x4d414e4d) {
        FUN_00450c20(in_ECX + 0x21,0x10);
      }
      else if (iVar6 == 0x4d414e53) {
        local_18 = 0.0;
        FUN_004510e0(&local_18);
        in_ECX[0x25] = (int)local_18;
      }
    }
    else if (iVar6 == 0x4e4f4349) {
      if (in_ECX == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = in_ECX + 9;
      }
      FUN_004700e0(piVar7,param_1);
    }
    else if ((iVar6 == 0x5453464f) && (uVar2 = *(uint *)(param_1 + 0x254), uVar2 != 0)) {
      if (in_ECX[0x2a] != 0) {
        FUN_00401f20(in_ECX[0x2a]);
      }
      iVar6 = FUN_00401f00(uVar2 & 0xfffffffc);
      in_ECX[0x2a] = iVar6;
      FUN_00450c20(iVar6,0);
    }
    cVar4 = FUN_0044fea0();
    if (cVar4 == '\0') break;
    iVar6 = FUN_004510b0();
  }
  puVar3 = (undefined4 *)in_ECX[0xc];
  if ((puVar3[3] == 0) && ((*(byte *)(in_ECX + 0x17) & 1) == 0)) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    cVar4 = FUN_0046b660();
    if (cVar4 == '\0') {
      local_18 = (float)FUN_00401f00(0x10);
      local_8 = 1;
      if (local_18 == 0.0) goto LAB_004f223b;
      iVar6 = FUN_004f1d20(0x2bd);
    }
    else {
      local_18 = (float)FUN_00401f00(0x10);
      local_8 = 0;
      if (local_18 == 0.0) {
LAB_004f223b:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004f1d20(0x1b59);
      }
    }
    in_ECX[0xc] = iVar6;
  }
  uVar5 = 1;
LAB_004f2242:
  *unaff_FS_OFFSET = local_10;
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f2270(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  int in_ECX;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  char local_1d;
  int *local_1c;
  uint local_18;
  undefined1 local_10 [12];
  
  if ((_DAT_00b360c8 & 1) == 0) {
    _DAT_00b360c8 = _DAT_00b360c8 | 1;
    DAT_00b360c0 = (char *)0x0;
    _DAT_00b360c4 = 0;
    _DAT_00b360c6 = 0;
    _atexit(FUN_00a1c070);
  }
  if ((_DAT_00b360c8 & 2) == 0) {
    _DAT_00b360c8 = _DAT_00b360c8 | 2;
  }
  if (DAT_00b33a98 == 0) {
    return 0;
  }
  if (DAT_00b360bc == in_ECX) {
    if (((param_2 == _DAT_00b360b0) && (param_3 == _DAT_00b360b4)) && (param_4 == _DAT_00b360b8)) {
      FUN_004028d0(DAT_00b360c0,0);
      return 0;
    }
  }
  else {
    FUN_004028d0(&DAT_00a2f7ec,0);
  }
  _DAT_00b360b0 = param_2;
  _DAT_00b360b4 = param_3;
  _DAT_00b360b8 = param_4;
  DAT_00b360bc = in_ECX;
  FUN_004028d0(&DAT_00a2f7ec,0);
  iVar4 = FUN_0044a270(param_2,param_3,in_ECX,0);
  if (iVar4 == 0) {
    if (*(int *)(DAT_00b33a98 + 0xbc) == 0) {
      local_1c = (int *)0x0;
    }
    else {
      local_1c = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4);
    }
    FUN_004a6950(&param_2);
    local_18 = 0xffffffff;
    local_1d = '\0';
joined_r0x004f2455:
    do {
      if ((local_1c == (int *)0x0) || (iVar4 = *local_1c, iVar4 == 0)) goto LAB_004f2579;
      if ((((*(uint *)(iVar4 + 8) >> 5 & 1) == 0) &&
          ((*(int *)(iVar4 + 0x20) == in_ECX &&
           (piVar6 = *(int **)(iVar4 + 0x1c), piVar6 != (int *)0x0)))) &&
         ((piVar6[1] != 0 || (*piVar6 != 0)))) {
        iVar5 = **(int **)(DAT_00b33a98 + 0xcd8);
        uVar10 = FUN_004a4460(4);
        piVar6 = (int *)(**(code **)(iVar5 + 0x10))(uVar10);
        if (piVar6 == (int *)0x0) {
          local_1c = (int *)local_1c[1];
        }
        else {
          for (piVar2 = *(int **)(iVar4 + 0x1c); (piVar2 != (int *)0x0 && (*piVar2 != 0));
              piVar2 = (int *)piVar2[1]) {
            cVar3 = FUN_004a7330(local_10);
            if (cVar3 != '\0') {
              iVar4 = piVar6[1];
              if ((char)iVar4 == '\0') {
                if ((local_1d != '\0') || ((int)(uint)*(byte *)((int)piVar6 + 6) <= (int)local_18))
                {
                  local_1c = (int *)local_1c[1];
                  goto joined_r0x004f2455;
                }
              }
              else if ((local_1d != '\0') &&
                      ((int)(uint)*(byte *)((int)piVar6 + 6) <= (int)local_18)) {
                local_1c = (int *)local_1c[1];
                goto joined_r0x004f2455;
              }
              local_18 = (uint)*(byte *)((int)piVar6 + 6);
              (**(code **)(*piVar6 + 0x24))(param_1);
              local_1c = (int *)local_1c[1];
              local_1d = (char)iVar4;
              goto joined_r0x004f2455;
            }
          }
          local_1c = (int *)local_1c[1];
        }
      }
      else {
        local_1c = (int *)local_1c[1];
      }
    } while( true );
  }
  iVar5 = FUN_004c9b40(1);
  if (iVar5 != 0) {
    iVar5 = **(int **)(DAT_00b33a98 + 0xcd8);
    uVar10 = 4;
    fVar11 = param_2;
    fVar12 = param_3;
    fVar13 = param_4;
    iVar14 = in_ECX;
    FUN_004c9b40(1);
    uVar10 = FUN_004a67b0(uVar10,fVar11,fVar12,fVar13,iVar14);
    piVar6 = (int *)(**(code **)(iVar5 + 0x10))(uVar10);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x24))(param_1);
      goto LAB_004f2579;
    }
  }
  puVar9 = *(undefined1 **)(iVar4 + 0x1c);
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = &DAT_00a2f7ec;
  }
  FUN_004028d0(puVar9,0);
LAB_004f2579:
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    pcVar7 = (char *)*param_1;
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uVar8 = (int)pcVar7 - (int)pcVar1;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 1);
  }
  if (uVar8 == 0) {
    puVar9 = *(undefined1 **)(in_ECX + 0x1c);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_00a2f7ec;
    }
    FUN_004028d0(puVar9,0);
  }
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    pcVar7 = (char *)*param_1;
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uVar8 = (int)pcVar7 - (int)pcVar1;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 1);
  }
  if (uVar8 == 0) {
    FUN_004028d0(DAT_00b35c0c,0);
  }
  if ((DAT_00b360c0 == (char *)0x0) || ((char *)*param_1 == (char *)0x0)) {
    iVar4 = (uint)(DAT_00b360c0 == (char *)0x0) * 2 + -1;
  }
  else {
    iVar4 = __stricmp((char *)*param_1,DAT_00b360c0);
  }
  if (iVar4 == 0) {
    return 0;
  }
  FUN_004028d0(*param_1,0);
  return 1;
}



void FUN_004f2630(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b68f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 0x5c) & 4) != 0) {
    FUN_00432860(uVar2);
    FUN_00447db0(0xfffffffd);
    FUN_004426f0(in_ECX);
    FUN_00459f80(in_ECX);
    FUN_004b8420(0x25);
    uVar2 = *(uint *)(*(int *)(in_ECX + 0x30) + 4);
    uVar3 = 0;
    local_4 = 0;
    if (uVar2 != 0) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + 8);
      piVar4 = piVar1;
      do {
        if (*piVar4 != 0) {
          local_24 = piVar1[uVar3];
          goto joined_r0x004f26d0;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < uVar2);
    }
    local_24 = 0;
joined_r0x004f26d0:
    while (local_24 != 0) {
      local_28 = 0;
      FUN_00452600(&local_24,local_20,&local_28);
      if (local_28 != 0) {
        FUN_004cbe50(local_1c);
      }
    }
    if (*(int *)(in_ECX + 0x34) != 0) {
      FUN_004cbe50(local_1c);
    }
    FUN_00447db0(0xffffffff);
    FUN_00432890();
    FUN_007c2a40();
    local_4 = 0xffffffff;
    FUN_004b8470();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_004f2770(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  undefined1 uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_29;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined **local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6928;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0x25;
  local_29 = 0;
  local_1c = &PTR_FUN_00a44968;
  local_10 = 0;
  local_14 = (void *)FUN_00401f00(0x94,uVar3);
  _memset(local_14,0,local_18 * 4);
  local_1c = &PTR_FUN_00a449e8;
  uVar3 = *(uint *)(*(int *)(in_ECX + 0x30) + 4);
  uVar4 = 0;
  local_4 = 0;
  if (uVar3 != 0) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + 8);
    piVar6 = piVar1;
    do {
      if (*piVar6 != 0) {
        local_24 = piVar1[uVar4];
        goto joined_r0x004f281a;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 < uVar3);
  }
  local_24 = 0;
joined_r0x004f281a:
  while (local_24 != 0) {
    local_28 = 0;
    FUN_00452600(&local_24,local_20,&local_28);
    if ((local_28 != 0) && (cVar2 = FUN_004cc070(&local_1c), cVar2 != '\0')) {
      local_29 = 1;
    }
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    cVar2 = FUN_004cc070(&local_1c);
    uVar5 = 1;
    if (cVar2 != '\0') goto LAB_004f2877;
  }
  uVar5 = local_29;
LAB_004f2877:
  FUN_007c2a40();
  local_4 = 0xffffffff;
  FUN_004b8470();
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_004f28b0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint auStack_20 [3];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6958;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 0x36) = 0;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = 0;
  uVar3 = (**(code **)(*in_ECX + 0xd4))(uVar2);
  FUN_00402e30(&local_14,"Data\\DistantLOD\\%s.cmp",uVar3);
  uVar3 = local_14;
  piVar4 = (int *)FUN_00431690(local_14,0,0x800);
  if (piVar4 != (int *)0x0) {
    FUN_007c2a40();
    (**(code **)(*piVar4 + 0x18))(0,0);
    uVar2 = (**(code **)(*piVar4 + 0x1c))();
    uVar2 = uVar2 >> 2;
    if ((char)piVar4[9] != '\0') {
      while (uVar2 = uVar2 - 1, uVar2 != 0) {
        (**(code **)(*piVar4 + 0x38))(auStack_20,4);
        uVar5 = auStack_20[0] & 0xffff | (int)(short)(auStack_20[0] >> 0x10) << 0x10;
        cVar1 = FUN_004d6760(uVar5,&stack0xffffffdb);
        if (cVar1 == '\0') {
          FUN_00452570(uVar5,1);
        }
      }
      *(undefined1 *)(in_ECX + 0x36) = 1;
      (**(code **)(*piVar4 + 0x38))(in_ECX + 0x37,4);
    }
    (**(code **)*piVar4)(1);
    uVar3 = local_14;
  }
  FUN_00401f20(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f29f0(byte param_1)

{
  FUN_004f1d70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f2a10(void)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b69db;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar2);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046ffd0();
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_00a4829c;
  in_ECX[6] = &PTR_FUN_00a48284;
  in_ECX[9] = &PTR_FUN_00a48268;
  FUN_004ea450();
  local_4._0_1_ = 3;
  in_ECX[0x19] = &PTR_FUN_00a48184;
  in_ECX[0x1a] = 0x25;
  in_ECX[0x1c] = 0;
  pvVar3 = (void *)FUN_00401f00(0x94);
  in_ECX[0x1b] = pvVar3;
  _memset(pvVar3,0,in_ECX[0x1a] * 4);
  in_ECX[0x19] = &PTR_FUN_00a48228;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x30] = 0;
  *(undefined2 *)(in_ECX + 0x31) = 0;
  *(undefined2 *)((int)in_ECX + 0xc6) = 0;
  local_4._0_1_ = 5;
  in_ECX[0x32] = &PTR_FUN_00a481a4;
  in_ECX[0x33] = 0x25;
  in_ECX[0x35] = 0;
  pvVar3 = (void *)FUN_00401f00(0x94);
  in_ECX[0x34] = pvVar3;
  _memset(pvVar3,0,in_ECX[0x33] * 4);
  in_ECX[0x32] = &PTR_FUN_00a48248;
  local_4._0_1_ = 6;
  *(undefined1 *)(in_ECX + 1) = 0x35;
  in_ECX[0x12] = in_ECX;
  iVar4 = FUN_00401f00(0x10);
  local_4._0_1_ = 7;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004f1d20(0x25);
  }
  in_ECX[0xc] = uVar5;
  in_ECX[0x27] = 0x7f7fffff;
  in_ECX[0xd] = 0;
  in_ECX[0x26] = 0x7f7fffff;
  in_ECX[0x15] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  in_ECX[0x29] = 0xff7fffff;
  in_ECX[0x28] = 0xff7fffff;
  uVar5 = DAT_00b3fc80;
  in_ECX[0x2d] = DAT_00b3fc80;
  uVar1 = DAT_00b3fc84;
  in_ECX[0x2b] = uVar5;
  in_ECX[0x2e] = uVar1;
  in_ECX[0x2c] = uVar1;
  FUN_004f1e00();
  in_ECX[0x37] = 7;
  in_ECX[0x18] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2f] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004f2c10(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  int *in_ECX;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  char *pcVar16;
  int *local_30;
  void *pvStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009b6a0b;
  local_14 = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    local_30 = (int *)in_ECX[0x16];
    if (local_30 != (int *)0x0) {
      uVar5 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_30,uVar5);
      uVar5 = FUN_0046b250(local_30,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d98,0);
      iVar6 = FUN_009832e6(uVar5);
      if (iVar6 == 0) {
        iVar7 = FUN_00404e50();
        if (iVar7 == 0) {
          iVar7 = in_ECX[3];
          pcVar16 = "Unable to find climate (%08X) on owner worldspace (%08X).";
        }
        else {
          iVar7 = (**(code **)(*in_ECX + 0xd4))();
          pcVar16 = "Unable to find climate (%08X) on owner worldspace \"%s\".";
        }
        FUN_004a7a60(pcVar16,local_30,iVar7);
      }
      in_ECX[0x16] = iVar6;
    }
    local_30 = (int *)in_ECX[0x20];
    if (local_30 != (int *)0x0) {
      uVar5 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_30,uVar5);
      uVar5 = FUN_0046b250(local_30,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d7c,0);
      iVar6 = FUN_009832e6(uVar5);
      if (iVar6 == 0) {
        iVar7 = FUN_00404e50();
        if (iVar7 == 0) {
          iVar7 = in_ECX[3];
          pcVar16 = "Unable to find water type (%08X) on owner worldspace (%08X).";
        }
        else {
          iVar7 = (**(code **)(*in_ECX + 0xd4))();
          pcVar16 = "Unable to find water type (%08X) on owner worldspace \"%s\".";
        }
        FUN_004a7a60(pcVar16,local_30,iVar7);
      }
      in_ECX[0x20] = iVar6;
    }
    local_30 = (int *)in_ECX[0x1f];
    if (local_30 != (int *)0x0) {
      uVar5 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_30,uVar5);
      uVar5 = FUN_0046b250(local_30,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      iVar6 = FUN_009832e6(uVar5);
      if (iVar6 == 0) {
        iVar7 = FUN_00404e50();
        if (iVar7 == 0) {
          iVar7 = in_ECX[3];
          pcVar16 = "Unable to find landscape world (%08X) on owner worldspace (%08X).";
        }
        else {
          iVar7 = (**(code **)(*in_ECX + 0xd4))();
          pcVar16 = "Unable to find landscape world (%08X) on owner worldspace \"%s\".";
        }
        FUN_004a7a60(pcVar16,local_30,iVar7);
      }
      in_ECX[0x1f] = iVar6;
    }
    FUN_0046ab80(1);
  }
  uVar13 = *(uint *)(in_ECX[0xc] + 4);
  uVar8 = 0;
  if (uVar13 != 0) {
    piVar14 = *(int **)(in_ECX[0xc] + 8);
    piVar12 = piVar14;
    do {
      if (*piVar12 != 0) {
        pvStack_2c = (void *)piVar14[uVar8];
        goto joined_r0x004f2e2a;
      }
      uVar8 = uVar8 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar8 < uVar13);
  }
  pvStack_2c = (void *)0x0;
joined_r0x004f2e2a:
  while (pvStack_2c != (void *)0x0) {
    local_30 = (int *)0x0;
    FUN_00452600(&pvStack_2c,&iStack_24,&local_30);
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 0x6c))();
    }
  }
  if ((int *)in_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xd] + 0x6c))(uVar4);
  }
  if (in_ECX[0x2a] == 0) {
    iVar6 = FUN_0046b680(0);
    if ((((iVar6 != 0) && (iVar6 = FUN_004520f0(), iVar6 != 0)) &&
        (cVar3 = FUN_0044faa0(), cVar3 != '\0')) && (cVar3 = FUN_00451920(in_ECX), cVar3 != '\0')) {
      iVar7 = FUN_009828c0();
      iVar9 = FUN_009828c0();
      uVar4 = ((iVar7 >> 0xc) - (iVar9 >> 0xc)) + 1;
      iVar7 = FUN_009828c0();
      iVar9 = FUN_009828c0();
      uVar13 = ((iVar7 >> 0xc) - (iVar9 >> 0xc)) + 1;
      if ((uVar4 < 1000) && (uVar13 < 1000)) {
        uVar5 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
        FUN_004a7a60("Offset collection for worldspace \'%s\' (%08X) is not optimal.",uVar5);
        uVar13 = uVar13 * uVar4;
        lVar1 = (ulonglong)uVar13 * 4;
        pvVar10 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        pvStack_2c = pvVar10;
        _memset(pvVar10,0,uVar13 * 4);
        FUN_004518b0(1);
        bVar2 = false;
        if ((int *)(iVar6 + 0x23c) != (int *)0x0) {
          while (pvVar10 = pvStack_2c, !bVar2) {
            iVar7 = *(int *)(iVar6 + 0x23c);
            if (iVar7 == DAT_00b05e20) {
              bVar15 = true;
              bVar2 = true;
              switch(*(undefined4 *)(iVar6 + 0x248)) {
              case 1:
              case 4:
              case 5:
                bVar15 = false;
              case 6:
              case 8:
              case 9:
              case 10:
                bVar2 = false;
                if (bVar15) {
                  FUN_00451580();
                }
                else {
LAB_004f3091:
                  FUN_004518b0(1);
                }
              }
            }
            else if (iVar7 == DAT_00b06048) {
              iStack_20 = 0;
              uStack_1c = 0;
              if ((*(uint *)(iVar6 + 0x244) & 0x400) == 0) {
                bVar15 = false;
                iVar7 = FUN_004510b0();
                while ((iVar7 != 0 && (!bVar15))) {
                  bVar15 = iVar7 == 0x434c4358;
                  if (bVar15) {
                    FUN_00450c20(&iStack_20,8);
                    FUN_00451160();
                  }
                  cVar3 = FUN_0044fea0();
                  if (cVar3 == '\0') break;
                  iVar7 = FUN_004510b0();
                }
                iVar7 = FUN_004eeef0(iStack_20,uStack_1c);
                if (iVar7 != -1) {
                  *(int *)((int)pvStack_2c + iVar7 * 4) = *(int *)(iVar6 + 0x25c) - in_ECX[0x2f];
                }
              }
              FUN_004518b0(1);
            }
            else if (iVar7 == DAT_00b0609c) {
              FUN_004518b0(1);
            }
            else {
              if (iVar7 == DAT_00b060a8) goto LAB_004f3091;
              bVar2 = true;
            }
          }
        }
        in_ECX[0x2a] = (int)pvVar10;
      }
    }
  }
  else if (DAT_00b09db8 != '\0') {
    iStack_24 = in_ECX[0x26];
    iVar6 = FUN_009828c0();
    iStack_24 = in_ECX[0x27];
    iVar6 = iVar6 >> 0xc;
    iVar7 = FUN_009828c0();
    iStack_24 = in_ECX[0x28];
    pvStack_2c = (void *)(iVar7 >> 0xc);
    iStack_24 = FUN_009828c0();
    iStack_28 = in_ECX[0x29];
    iStack_24 = iStack_24 >> 0xc;
    iStack_28 = FUN_009828c0();
    iStack_28 = iStack_28 >> 0xc;
    iVar9 = FUN_0046b680(0);
    if ((((iVar9 != 0) && (local_30 = (int *)FUN_004520f0(), local_30 != (int *)0x0)) &&
        (cVar3 = FUN_0044faa0(), cVar3 != '\0')) &&
       (pvVar10 = (void *)(iVar7 >> 0xc), iVar6 <= iStack_24)) {
      do {
        if ((int)pvStack_2c <= iStack_28) {
          do {
            iVar7 = FUN_004eeef0(iVar6,pvVar10);
            piVar14 = (int *)0x0;
            if ((-1 < iVar7) && (iVar7 = *(int *)(in_ECX[0x2a] + iVar7 * 4), iVar7 != 0)) {
              FUN_00451460(in_ECX[0x2f] + iVar7);
              iStack_20 = FUN_00401f00(0x58);
              uStack_c = 0;
              if (iStack_20 != 0) {
                piVar14 = (int *)FUN_004d3210();
              }
              uStack_c = 0xffffffff;
              FUN_004c9800(0);
              FUN_004ca710();
              cVar3 = FUN_00447050(piVar14,local_30);
              if (((cVar3 == '\0') || (iVar7 = FUN_004c9a80(), iVar7 != iVar6)) ||
                 (pvVar11 = (void *)FUN_004c9aa0(), pvVar11 != pvVar10)) {
                uVar5 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
                FUN_004a7a60("Failed to find cell (%i, %i) in world \'%s\' (%08X).",iVar6,pvVar10,
                             uVar5);
              }
              FUN_004effc0(piVar14);
              if (piVar14 != (int *)0x0) {
                (**(code **)(*piVar14 + 0x10))(1);
              }
            }
            pvVar10 = (void *)((int)pvVar10 + 1);
          } while ((int)pvVar10 <= iStack_28);
        }
        iVar6 = iVar6 + 1;
        pvVar10 = pvStack_2c;
      } while (iVar6 <= iStack_24);
    }
  }
  FUN_004f28b0();
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_004f32a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_ECX + 0x200);
  iVar3 = iVar1 * 0x10;
  iVar4 = iVar3 + in_ECX;
  *param_1 = *(undefined4 *)(iVar3 + in_ECX);
  param_1[1] = *(undefined4 *)(iVar4 + 4);
  uVar2 = *(undefined4 *)(iVar4 + 0xc);
  param_1[2] = *(undefined4 *)(iVar4 + 8);
  *(int *)(in_ECX + 0x200) = iVar1 + -1;
  param_1[3] = uVar2;
  return;
}



void FUN_004f32e0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x141] = 0xffffffff;
  in_ECX[0x1c2] = 0xffffffff;
  *in_ECX = 0;
  return;
}



void FUN_004f3300(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  FUN_0040fec0(&DAT_00a2f864,(&PTR_s_Expression_Error__NOERROR_00b09dc0)[param_1]);
  return;
}



int FUN_004f3320(undefined4 *param_1,char *param_2,uint *param_3,char param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  size_t _Size;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_c;
  char *local_8;
  
  pcVar9 = (char *)*param_1;
  *param_3 = 0x10;
  bVar3 = true;
  cVar7 = *pcVar9;
  while (pcVar10 = param_2, cVar7 != '\0') {
    if (' ' < cVar7) {
      cVar7 = *pcVar9;
      if (cVar7 != '\0') {
        local_c = pcVar9 + -0xb0a12d;
        goto LAB_004f3390;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    if ((param_4 != '\0') && (param_5 != (int *)0x0)) {
      *param_5 = *param_5 + 1;
    }
    cVar7 = *pcVar9;
  }
  goto LAB_004f3600;
  while( true ) {
    cVar7 = *pcVar9;
    bVar3 = false;
    if (cVar7 == '\0') break;
LAB_004f3390:
    if (cVar7 == 'X') {
      if ((0xfff < *(short *)(pcVar9 + 1)) && (*(short *)(pcVar9 + 1) < 0x1171)) {
        _Size = (size_t)(short)(*(short *)(pcVar9 + 3) + 5);
        _memcpy(pcVar10,pcVar9,_Size);
        pcVar10 = pcVar10 + _Size;
        pcVar9 = pcVar9 + _Size;
        break;
      }
LAB_004f3434:
      bVar4 = false;
      uVar8 = 0;
      pcVar6 = &DAT_00b0a12d;
      local_8 = local_c;
      do {
        cVar1 = *pcVar6;
        pcVar5 = pcVar6;
        while( true ) {
          if (cVar1 == '\0') {
            bVar2 = true;
            goto LAB_004f3477;
          }
          if (cVar1 != local_8[(int)pcVar5]) break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
          bVar4 = true;
        }
        local_8 = local_8 + -8;
        uVar8 = uVar8 + 1;
        bVar2 = false;
        pcVar6 = pcVar6 + 8;
      } while (uVar8 < 0x10);
LAB_004f3477:
      *param_3 = uVar8;
      if (bVar2) {
        if (bVar3) {
          pcVar6 = &DAT_00b0a12d + uVar8 * 8;
          cVar7 = (&DAT_00b0a12d)[uVar8 * 8];
          while (cVar7 != '\0') {
            pcVar6 = pcVar6 + 1;
            *pcVar10 = cVar7;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
            cVar7 = *pcVar6;
          }
        }
        else {
          *param_3 = 0x10;
        }
        break;
      }
      if (bVar4) {
        FUN_004f3300(5);
      }
      *pcVar10 = cVar7;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
      local_c = local_c + 1;
    }
    else {
      if (((((cVar7 != 's') && (cVar7 != 'l')) && (cVar7 != 'f')) &&
          ((cVar7 != 'G' && (cVar7 != 'Z')))) && (cVar7 != 'r')) {
        if (cVar7 == 'n') {
          *pcVar10 = *pcVar9;
          pcVar10[1] = pcVar9[1];
          cVar7 = pcVar9[2];
          pcVar10 = pcVar10 + 2;
          pcVar9 = pcVar9 + 2;
        }
        else {
          if (cVar7 != 'z') {
            if (cVar7 == '\"') {
              pcVar9 = pcVar9 + 1;
              *pcVar10 = '\"';
              cVar7 = *pcVar9;
              pcVar10 = pcVar10 + 1;
              if (cVar7 != '\0') goto LAB_004f35a8;
              goto LAB_004f35ba;
            }
            if ((cVar7 != ' ') && (cVar7 != '\t')) goto LAB_004f3434;
            break;
          }
          *pcVar10 = *pcVar9;
          pcVar10[1] = pcVar9[1];
          pcVar10[2] = pcVar9[2];
          pcVar10[3] = pcVar9[3];
          pcVar10[4] = pcVar9[4];
          pcVar10[5] = pcVar9[5];
          cVar7 = pcVar9[6];
          pcVar10 = pcVar10 + 6;
          pcVar9 = pcVar9 + 6;
        }
        *pcVar10 = cVar7;
        pcVar10[1] = pcVar9[1];
        pcVar10[2] = pcVar9[2];
        pcVar10 = pcVar10 + 3;
        pcVar9 = pcVar9 + 3;
        break;
      }
      *pcVar10 = cVar7;
      pcVar10[1] = pcVar9[1];
      pcVar10[2] = pcVar9[2];
      local_c = local_c + 3;
      pcVar10 = pcVar10 + 3;
      pcVar9 = pcVar9 + 3;
      if (cVar7 != 'r') break;
    }
  }
  goto LAB_004f3600;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    *pcVar10 = cVar7;
    cVar7 = *pcVar9;
    pcVar10 = pcVar10 + 1;
    if (cVar7 == '\0') break;
LAB_004f35a8:
    if (cVar7 == '\"') goto LAB_004f35bf;
  }
LAB_004f35ba:
  if (*pcVar9 == '\"') {
LAB_004f35bf:
    *pcVar10 = *pcVar9;
    pcVar10 = pcVar10 + 1;
    pcVar9 = pcVar9 + 1;
  }
LAB_004f3600:
  *pcVar10 = '\0';
  *param_1 = pcVar9;
  return (int)pcVar10 - (int)param_2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 FUN_004f3620(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,size_t param_6,undefined4 param_7)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  char cVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  int *in_ECX;
  byte bVar11;
  undefined4 uVar12;
  undefined1 auStack_2d4 [4];
  uint local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int local_2ac;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int *local_29c;
  int local_298;
  void *local_294;
  int local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  uint local_26c;
  undefined1 local_268 [16];
  char local_258 [64];
  undefined1 local_218 [524];
  uint local_c;
  
  local_c = DAT_00b30aac ^ (uint)auStack_2d4;
  local_284 = param_3;
  local_288 = param_5;
  local_27c = param_2;
  local_280 = param_4;
  local_294 = param_1;
  local_298 = 0x10;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c8 = 0.0;
  if ((param_6 != 0) && (*in_ECX == 0)) {
    in_ECX[0x1c2] = -1;
    local_29c = in_ECX;
    _memcpy(local_218,param_1,param_6);
    local_28c = local_218;
    local_218[param_6] = 0;
    local_290 = FUN_004f3320(&local_28c,local_258,&local_298,param_7,&local_294);
    uVar12 = local_284;
    while (local_284 = uVar12, local_290 != 0) {
      if (0xd < local_298 - 2U) {
        iVar8 = FUN_0047d550(local_258);
        if (iVar8 == 0) {
          iVar8 = FUN_0047d5b0(local_258);
          local_2d0 = CONCAT31(local_2d0._1_3_,1);
          if (iVar8 == 0) {
            local_2a0 = 0;
            if ((char)param_7 == '\0') {
              cVar5 = FUN_004fab20(&local_2c8,local_258,&local_2a0,param_2,uVar12,local_280,
                                   local_288,0);
              if (cVar5 == '\0') goto LAB_004f4023;
            }
            else {
              FUN_004fab20(&local_2c8,local_294,&local_2a0,param_2,uVar12,local_280,local_288,
                           param_7);
            }
          }
          else {
            local_2c8 = _atof(local_258);
          }
        }
        else {
          local_2d0 = local_2d0 & 0xffffff00;
          lVar9 = _atol(local_258);
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,lVar9);
        }
        in_ECX[0x1c2] = in_ECX[0x1c2] + 1;
        local_26c = local_2c8._4_4_;
        puVar6 = (uint *)(in_ECX + in_ECX[0x1c2] * 4 + 0x142);
        *puVar6 = local_2d0;
        puVar6[1] = local_2cc;
        puVar6[2] = (uint)local_2c8;
        puVar6[3] = local_2c8._4_4_;
        goto LAB_004f3fb0;
      }
      if (in_ECX[0x1c2] == -1) {
LAB_004f4004:
        uVar12 = 3;
        goto LAB_004f4027;
      }
      iVar8 = in_ECX[0x1c2];
      local_2ac = in_ECX[iVar8 * 4 + 0x143];
      iVar2 = in_ECX[iVar8 * 4 + 0x142];
      iVar3 = in_ECX[iVar8 * 4 + 0x144];
      iStack_2a4 = in_ECX[iVar8 * 4 + 0x145];
      dVar4 = *(double *)(in_ECX + iVar8 * 4 + 0x144);
      in_ECX[0x1c2] = iVar8 + -1;
      cVar5 = (char)iVar2;
      local_2a8 = iVar3;
      if (local_298 == 0xf) {
        if (cVar5 == '\0') {
          local_2c8._4_4_ = (uint)((ulonglong)local_2c8 >> 0x20);
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,-iVar3);
        }
        else {
          local_2c8 = -dVar4;
        }
        in_ECX[0x1c2] = in_ECX[0x1c2] + 1;
        local_2d0._1_3_ = (uint3)(local_2d0 >> 8);
        local_2d0 = CONCAT31(local_2d0._1_3_,cVar5);
        puVar6 = (uint *)(in_ECX + in_ECX[0x1c2] * 4 + 0x142);
        *puVar6 = local_2d0;
        puVar6[1] = local_2cc;
        puVar6[2] = (uint)local_2c8;
        puVar6[3] = local_2c8._4_4_;
        goto LAB_004f3fb0;
      }
      if (in_ECX[0x1c2] == -1) goto LAB_004f4004;
      puVar7 = (undefined4 *)FUN_004f32a0(local_268);
      local_2bc = puVar7[1];
      pdVar1 = (double *)(puVar7 + 2);
      iVar8 = *(int *)pdVar1;
      uStack_2b4 = puVar7[3];
      cVar10 = (char)*puVar7;
      local_2b8 = iVar8;
      switch(local_298) {
      case 2:
        local_2d0 = local_2d0 & 0xffffff00;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            if ((iVar8 != 0) && (iVar3 != 0)) {
              local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
              break;
            }
          }
          else if (iVar8 != 0) {
            dVar4 = 0.0;
LAB_004f38ce:
            bVar11 = (byte)((ushort)((ushort)(NAN(dVar4) ||
                                             NAN((double)CONCAT44(iStack_2a4,local_2a8))) << 10) >>
                           8) |
                     (byte)((ushort)((ushort)(dVar4 == (double)CONCAT44(iStack_2a4,local_2a8)) <<
                                    0xe) >> 8);
            goto LAB_004f38d2;
          }
        }
        else {
          dVar4 = 0.0;
          if (cVar5 == '\0') {
            if ((*pdVar1 != 0.0) && (iVar3 != 0)) {
              local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
              break;
            }
          }
          else if (*pdVar1 != 0.0) goto LAB_004f38ce;
        }
        goto LAB_004f3e6b;
      case 3:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            if (iVar8 == 0) {
              if (iVar3 == 0) goto LAB_004f3e6b;
              local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
              break;
            }
          }
          else if (iVar8 == 0) {
            dVar4 = 0.0;
            goto LAB_004f38ce;
          }
LAB_004f38dd:
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else if (cVar5 == '\0') {
          if (*pdVar1 != 0.0) goto LAB_004f38dd;
          if (iVar3 == 0) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if ((*pdVar1 == 0.0) && ((double)CONCAT44(iStack_2a4,local_2a8) == 0.0))
          goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 4:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar8 <= iVar3));
          }
          else {
            if ((double)iVar8 < (double)CONCAT44(iStack_2a4,local_2a8) ==
                ((double)iVar8 == (double)CONCAT44(iStack_2a4,local_2a8))) goto LAB_004f3e6b;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
          }
        }
        else if (cVar5 == '\0') {
          if ((double)local_2a8 < *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if ((double)CONCAT44(iStack_2a4,local_2a8) < *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 5:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar8 < iVar3));
          }
          else {
            if ((double)CONCAT44(iStack_2a4,local_2a8) <= (double)iVar8) goto LAB_004f3e6b;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
          }
        }
        else if (cVar5 == '\0') {
          if ((double)local_2a8 <= *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if ((double)CONCAT44(iStack_2a4,local_2a8) <= *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 6:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar3 <= iVar8));
          }
          else {
            if ((double)iVar8 < (double)CONCAT44(iStack_2a4,local_2a8)) goto LAB_004f3e6b;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
          }
        }
        else if (cVar5 == '\0') {
          if ((double)local_2a8 < *pdVar1 == ((double)local_2a8 == *pdVar1)) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if ((double)CONCAT44(iStack_2a4,local_2a8) < *pdVar1 ==
              ((double)CONCAT44(iStack_2a4,local_2a8) == *pdVar1)) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 7:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar3 < iVar8));
          }
          else {
            if ((double)iVar8 <= (double)CONCAT44(iStack_2a4,local_2a8)) goto LAB_004f3e6b;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
          }
        }
        else if (cVar5 == '\0') {
          if (*pdVar1 <= (double)local_2a8) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if (*pdVar1 <= (double)CONCAT44(iStack_2a4,local_2a8)) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 8:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar8 == iVar3));
          }
          else {
            if ((double)iVar8 != (double)CONCAT44(iStack_2a4,local_2a8)) goto LAB_004f3e6b;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
          }
        }
        else if (cVar5 == '\0') {
          if ((double)local_2a8 != *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        else {
          if ((double)CONCAT44(iStack_2a4,local_2a8) != *pdVar1) goto LAB_004f3e6b;
          local_2c8 = (double)CONCAT44(local_2c8._4_4_,1);
        }
        break;
      case 9:
        local_2d0 = (uint)local_2d0._1_3_ << 8;
        if (cVar10 != '\0') {
          if (cVar5 == '\0') {
            bVar11 = (byte)((ushort)((ushort)(NAN((double)local_2a8) || NAN(*pdVar1)) << 10) >> 8) |
                     (byte)((ushort)((ushort)((double)local_2a8 == *pdVar1) << 0xe) >> 8);
          }
          else {
            bVar11 = (byte)((ushort)((ushort)(NAN((double)CONCAT44(iStack_2a4,local_2a8)) ||
                                             NAN(*pdVar1)) << 10) >> 8) |
                     (byte)((ushort)((ushort)((double)CONCAT44(iStack_2a4,local_2a8) == *pdVar1) <<
                                    0xe) >> 8);
          }
LAB_004f38d2:
          if ((POPCOUNT(bVar11) & 1U) == 0) goto LAB_004f38dd;
          goto LAB_004f3e6b;
        }
        if (cVar5 != '\0') {
          dVar4 = (double)iVar8;
          goto LAB_004f38ce;
        }
        local_2c8 = (double)CONCAT44(local_2c8._4_4_,(uint)(iVar8 != iVar3));
        break;
      case 10:
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2d0 = (uint)local_2d0._1_3_ << 8;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar8 - iVar3);
          }
          else {
            local_2d0 = CONCAT31(local_2d0._1_3_,1);
            local_2c8 = (double)iVar8 - (double)CONCAT44(iStack_2a4,local_2a8);
          }
        }
        else {
          local_2d0 = CONCAT31(local_2d0._1_3_,1);
          if (cVar5 == '\0') {
            local_2c8 = *pdVar1 - (double)local_2a8;
          }
          else {
            local_2c8 = *pdVar1 - (double)CONCAT44(iStack_2a4,local_2a8);
          }
        }
        break;
      case 0xb:
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2d0 = (uint)local_2d0._1_3_ << 8;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar3 + iVar8);
          }
          else {
            local_2d0 = CONCAT31(local_2d0._1_3_,1);
            local_2c8 = (double)iVar8 + (double)CONCAT44(iStack_2a4,local_2a8);
          }
        }
        else {
          local_2d0 = CONCAT31(local_2d0._1_3_,1);
          if (cVar5 == '\0') {
            local_2c8 = (double)local_2a8 + *pdVar1;
          }
          else {
            local_2c8 = (double)CONCAT44(iStack_2a4,local_2a8) + *pdVar1;
          }
        }
        break;
      case 0xc:
        if (cVar10 == '\0') {
          if (cVar5 == '\0') {
            local_2d0 = (uint)local_2d0._1_3_ << 8;
            local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar3 * iVar8);
          }
          else {
            local_2d0 = CONCAT31(local_2d0._1_3_,1);
            local_2c8 = (double)iVar8 * (double)CONCAT44(iStack_2a4,local_2a8);
          }
        }
        else {
          local_2d0 = CONCAT31(local_2d0._1_3_,1);
          if (cVar5 == '\0') {
            local_2c8 = (double)local_2a8 * *pdVar1;
          }
          else {
            local_2c8 = (double)CONCAT44(iStack_2a4,local_2a8) * *pdVar1;
          }
        }
        break;
      case 0xd:
      case 0xe:
        if ((char)param_7 == '\0') {
          if (cVar10 == '\0') {
            if (cVar5 == '\0') {
              if (iVar3 == 0) {
LAB_004f3ffc:
                uVar12 = 4;
                goto LAB_004f4027;
              }
              local_2d0 = (uint)local_2d0._1_3_ << 8;
              if (local_298 == 0xd) {
                local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar8 / iVar3);
              }
              else {
                local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar8 % iVar3);
              }
            }
            else {
              if ((double)CONCAT44(iStack_2a4,local_2a8) == 0.0) goto LAB_004f3ffc;
              local_2d0 = CONCAT31(local_2d0._1_3_,1);
              if (local_298 == 0xd) {
                local_2c8 = (double)iVar8 / (double)CONCAT44(iStack_2a4,local_2a8);
              }
              else {
                local_2a0 = FUN_009828c0();
                local_2a0 = iVar8 % local_2a0;
                local_2c8 = (double)local_2a0;
              }
            }
          }
          else if (cVar5 == '\0') {
            if (iVar3 == 0) goto LAB_004f3ffc;
            local_2d0 = CONCAT31(local_2d0._1_3_,1);
            if (local_298 == 0xd) {
              local_2c8 = *pdVar1 / (double)local_2a8;
            }
            else {
              local_2a0 = FUN_009828c0();
              local_2a0 = local_2a0 % iVar3;
              local_2c8 = (double)local_2a0;
            }
          }
          else {
            if ((double)CONCAT44(iStack_2a4,local_2a8) == 0.0) goto LAB_004f3ffc;
            local_2d0 = CONCAT31(local_2d0._1_3_,1);
            if (local_298 == 0xd) {
              local_2c8 = *pdVar1 / (double)CONCAT44(iStack_2a4,local_2a8);
            }
            else {
              iVar8 = FUN_009828c0();
              local_2a0 = FUN_009828c0();
              local_2a0 = local_2a0 % iVar8;
              local_2c8 = (double)local_2a0;
            }
          }
        }
        break;
      default:
        FUN_004a7a60("Unhandled operator \'%s\' in Expression::Eval()",local_258);
        local_2d0 = local_2d0 & 0xffffff00;
LAB_004f3e6b:
        local_2c8 = (double)((ulonglong)local_2c8 & 0xffffffff00000000);
      }
      local_29c[0x1c2] = local_29c[0x1c2] + 1;
      puVar6 = (uint *)(local_29c + local_29c[0x1c2] * 4 + 0x142);
      *puVar6 = local_2d0;
      puVar6[1] = local_2cc;
      puVar6[2] = (uint)local_2c8;
      puVar6[3] = local_2c8._4_4_;
LAB_004f3fb0:
      in_ECX = local_29c;
      if (local_290 == 0) break;
      local_294 = (void *)((int)local_294 + local_290);
      local_290 = FUN_004f3320(&local_28c,local_258,&local_298,param_7,&local_294);
      uVar12 = local_284;
      param_2 = local_27c;
    }
    if (in_ECX[0x1c2] != -1) {
      puVar6 = (uint *)FUN_004f32a0(local_268);
      local_2d0 = *puVar6;
      local_2cc = puVar6[1];
      local_2c8 = *(double *)(puVar6 + 2);
      if (in_ECX[0x1c2] == -1) {
        if ((char)local_2d0 == '\0') {
          return (float10)(int)puVar6[2];
        }
        return (float10)local_2c8;
      }
    }
LAB_004f4023:
    uVar12 = 5;
LAB_004f4027:
    FUN_004f3300(uVar12);
  }
  return (float10)0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_004f4080(void *param_1,size_t *param_2)

{
  char cVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  undefined *puVar4;
  undefined4 *in_ECX;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_5c [3];
  char local_59;
  int local_58;
  size_t local_54;
  size_t *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_5c;
  *in_ECX = 0;
  in_ECX[0x141] = 0xffffffff;
  in_ECX[0x1c2] = 0xffffffff;
  *(undefined1 *)(in_ECX + 1) = 0x28;
  local_50 = param_2;
  _memcpy((void *)((int)in_ECX + 5),param_1,*param_2);
  puVar6 = (undefined1 *)((int)in_ECX + 5 + *param_2);
  *puVar6 = 0x29;
  puVar6[1] = 0;
  puVar7 = in_ECX + 0x81;
  *(undefined1 *)puVar7 = 0;
  local_59 = '\0';
  local_4c = puVar7;
  local_48 = in_ECX + 1;
  do {
    local_58 = 0x10;
    _Size = FUN_004f3320(&local_48,local_44,&local_58,0,0);
    iVar5 = local_58;
    local_54 = _Size;
    if (_Size == 0) {
LAB_004f42bb:
      if (iVar5 == 0x10) {
        local_59 = '\x01';
      }
      else if ((iVar5 < 0x10) && (1 < iVar5)) {
        local_59 = '\0';
      }
    }
    else {
      if (0xf < local_58) {
        *(undefined1 *)puVar7 = 0x20;
        _memcpy((undefined1 *)((int)puVar7 + 1),local_44,_Size);
        puVar7 = (undefined4 *)((undefined1 *)((int)puVar7 + 1) + _Size);
        goto LAB_004f42bb;
      }
      if (local_58 == 0) {
        if (in_ECX[0x141] == 0x3f) {
          *in_ECX = 2;
          FUN_0040fec0(&DAT_00a2f864,PTR_s_Expression_Error__STACKOVERFLOW_00b09dc8);
          return (undefined4 *)0x0;
        }
        in_ECX[0x141] = in_ECX[0x141] + 1;
        in_ECX[in_ECX[0x141] + 0x101] = 0;
      }
      else {
        if (local_58 != 1) {
          if ((local_58 == 10) && (local_59 == '\0')) {
            iVar5 = 0xf;
          }
          iVar2 = in_ECX[0x141];
          while (iVar2 != -1) {
            iVar2 = in_ECX[in_ECX[0x141] + 0x101];
            in_ECX[0x141] = in_ECX[0x141] + -1;
            if ((char)(&DAT_00b0a12c)[iVar2 * 8] < (char)(&DAT_00b0a12c)[iVar5 * 8]) {
              in_ECX[0x141] = in_ECX[0x141] + 1;
              in_ECX[in_ECX[0x141] + 0x101] = iVar2;
              break;
            }
            *(undefined1 *)puVar7 = 0x20;
            pcVar3 = &DAT_00b0a12d + iVar2 * 8;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            _memcpy((undefined1 *)((int)puVar7 + 1),&DAT_00b0a12d + iVar2 * 8,
                    (int)pcVar3 - (int)(&DAT_00b0a12e + iVar2 * 8));
            puVar7 = (undefined4 *)
                     ((undefined1 *)((int)puVar7 + 1) +
                     ((int)pcVar3 - (int)(&DAT_00b0a12e + iVar2 * 8)));
            iVar2 = in_ECX[0x141];
          }
          if (in_ECX[0x141] != 0x3f) {
            in_ECX[0x141] = in_ECX[0x141] + 1;
            in_ECX[in_ECX[0x141] + 0x101] = iVar5;
            goto LAB_004f42bb;
          }
          *in_ECX = 2;
          puVar4 = PTR_s_Expression_Error__STACKOVERFLOW_00b09dc8;
          goto LAB_004f4306;
        }
        if (in_ECX[0x141] == -1) {
          *in_ECX = 5;
          FUN_0040fec0(&DAT_00a2f864,PTR_s_Expression_Error__SYNTAX_00b09dd4);
          return (undefined4 *)0x0;
        }
        iVar5 = in_ECX[in_ECX[0x141] + 0x101];
        in_ECX[0x141] = in_ECX[0x141] + -1;
        while (iVar5 != 0) {
          iVar2 = iVar5 * 8;
          *(undefined1 *)puVar7 = 0x20;
          pcVar3 = &DAT_00b0a12d + iVar2;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          _memcpy((undefined1 *)((int)puVar7 + 1),&DAT_00b0a12d + iVar2,
                  (int)pcVar3 - (int)(&DAT_00b0a12e + iVar2));
          iVar5 = in_ECX[in_ECX[0x141] + 0x101];
          puVar7 = (undefined4 *)
                   ((undefined1 *)((int)puVar7 + 1) + ((int)pcVar3 - (int)(&DAT_00b0a12e + iVar2)));
          in_ECX[0x141] = in_ECX[0x141] + -1;
        }
      }
    }
  } while (local_54 != 0);
  *(undefined1 *)puVar7 = 0;
  if (in_ECX[0x141] == -1) {
    *local_50 = (size_t)((int)puVar7 + (-0x204 - (int)in_ECX));
    return local_4c;
  }
  *in_ECX = 5;
  puVar4 = PTR_s_Expression_Error__SYNTAX_00b09dd4;
LAB_004f4306:
  FUN_0040fec0(&DAT_00a2f864,puVar4);
  return (undefined4 *)0x0;
}



undefined4 FUN_004f43c0(int param_1,int param_2,undefined4 param_3,double *param_4)

{
  float10 fVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    fVar1 = (float10)FUN_004d7e90(param_2,1);
    *param_4 = (double)fVar1;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetDistance >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4410(int *param_1,char param_2,undefined4 param_3,double *param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x174))();
    iVar3 = (int)param_2;
    fVar1 = *pfVar2;
    if (((iVar3 == 0x58) || (fVar1 = pfVar2[1], iVar3 == 0x59)) ||
       (fVar1 = pfVar2[2], iVar3 == 0x5a)) {
      *param_4 = (double)fVar1;
    }
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("GetPos: %c >> %0.2f",iVar3,*param_4);
    }
  }
  return 1;
}



undefined4 FUN_004f4490(int *param_1,undefined4 param_2,double *param_3)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 *local_c;
  undefined1 *puStack_8;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xf4))();
    iVar2 = (int)(char)param_1;
    ppuVar1 = &local_c;
    if (((iVar2 == 0x58) || (ppuVar1 = (undefined1 **)local_c, iVar2 == 0x59)) ||
       (ppuVar1 = (undefined1 **)puStack_8, iVar2 == 0x5a)) {
      *param_3 = (double)(float)ppuVar1;
    }
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("GetStartingPos: %c >> %0.2f",iVar2,*param_3);
    }
  }
  return 1;
}



undefined4 FUN_004f4500(int *param_1,undefined4 param_2,double *param_3)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 *local_c;
  undefined1 *puStack_8;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xf0))();
    iVar2 = (int)(char)param_1;
    ppuVar1 = &local_c;
    if (((iVar2 == 0x58) || (ppuVar1 = (undefined1 **)local_c, iVar2 == 0x59)) ||
       (ppuVar1 = (undefined1 **)puStack_8, iVar2 == 0x5a)) {
      *param_3 = (double)((float)ppuVar1 * 57.295776);
    }
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("GetStartingAngle: %c >> %0.2f",iVar2,*param_3);
    }
  }
  return 1;
}



undefined4 FUN_004f4570(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  
  *param_4 = 0.0;
  if (param_2 == 0) {
    bVar2 = FUN_00578f60();
    dVar1 = (double)bVar2;
  }
  else {
    cVar3 = FUN_0057c140();
    if (cVar3 == '\0') goto LAB_004f45a5;
    dVar1 = 1.0;
  }
  *param_4 = dVar1;
LAB_004f45a5:
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("MenuMode %d >> %0.2f",param_2,*param_4);
  }
  return 1;
}



undefined4 FUN_004f45d0(int *param_1,int param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) {
    iVar2 = FUN_005f1910();
    *param_4 = (double)iVar2;
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("GetBaseActorValue: %s >> %0.2f",(&PTR_s_Strength_00b0a1a8)[param_2],
                   (double)iVar2);
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_004f48f0(int param_1,int *param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  *param_4 = 0.0;
  piVar4 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xa4))();
    if (cVar1 != '\0') {
      piVar4 = param_2;
    }
  }
  if ((param_1 != 0) && (piVar4 != (int *)0x0)) {
    iVar2 = FUN_004d6d40();
    if (iVar2 != 0) {
      iVar2 = FUN_00485e00(param_1,iVar2);
      if (iVar2 != 0) {
        uVar3 = FUN_004869c0();
        *param_4 = (double)(int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetItemCount >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4980(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_4 = 0;
  if ((((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) &&
      (param_2 != 0)) &&
     (((iVar2 = FUN_004d6d40(), iVar2 != 0 && (iVar2 = FUN_00485e00(param_1,iVar2), iVar2 != 0)) &&
      (iVar2 = FUN_00485fa0(param_2,0), iVar2 != 0)))) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetEquipped >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4b10(int *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_4 = 0;
  if ((((param_1 == (int *)0x0) ||
       (cVar1 = (**(code **)(*param_1 + 400))(), param_2 = param_1, cVar1 != '\0')) &&
      (param_2 != (int *)0x0)) && (cVar1 = (**(code **)(*param_2 + 0x7c))(), cVar1 != '\0')) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetTalkedToPC >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4b70(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  float fVar1;
  int iVar2;
  
  *param_4 = 0.0;
  if (param_2 != 0) {
    iVar2 = FUN_00529750();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *param_4 = (double)fVar1;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetStage >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4bc0(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_4 = 0;
  if (param_2 != 0) {
    cVar1 = FUN_00529b30();
    if (cVar1 != '\0') {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetStageDone >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4ce0(int *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  *param_4 = 0;
  piVar3 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xa4))();
    if (cVar1 != '\0') {
      piVar3 = param_2;
    }
  }
  if ((param_1 != (int *)0x0) && (piVar3 != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x170))();
    if (piVar2 == piVar3) {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsID >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f4d50(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_00520ef0();
    if (iVar1 == param_2) {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsUsedItem >> %0.2f",*param_4);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f4e20(int *param_1,int *param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  *param_4 = 0.0;
  piVar4 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      piVar4 = param_1;
    }
  }
  piVar5 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 400))();
    if (cVar1 != '\0') {
      piVar5 = param_2;
    }
  }
  if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
    if ((piVar4 == DAT_00b36180) && (piVar5 == DAT_00b36184)) {
      *param_4 = (double)_DAT_00b36188;
    }
    else {
      iVar2 = (**(code **)(*piVar4 + 0x224))();
      _DAT_00b36188 = (float)iVar2;
      DAT_00b36180 = piVar4;
      DAT_00b36184 = piVar5;
      *param_4 = (double)iVar2;
    }
    if (DAT_00b361ac != '\0') {
      uVar3 = FUN_004da2a0(*param_4);
      uVar3 = FUN_004da2a0(uVar3);
      FUN_00579b60("%.20s disposition to %.20s is %.1f",uVar3);
    }
  }
  return 1;
}



undefined4 FUN_004f5010(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  short sVar1;
  
  *param_4 = 0.0;
  if (param_2 != 0) {
    sVar1 = FUN_00440f70();
    *param_4 = (double)(int)sVar1;
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("Dead Count: %0.2f",(double)(int)sVar1);
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_004f54a0(int *param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  *param_4 = 0.0;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x154))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*param_1 + 0x154))();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
        cVar2 = FUN_004de320();
        if (cVar2 == '\0') {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 1.0;
        }
        *param_4 = (double)fVar1;
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("HasFlames >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f5650(int *param_1,int param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_4 = 0.0;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar2 = *param_1;
  *param_4 = 0.0;
  cVar1 = (**(code **)(iVar2 + 400))();
  if ((cVar1 != '\0') && (param_2 != 0)) {
    iVar2 = FUN_005e10a0();
    *param_4 = (double)iVar2;
    if (DAT_00b361ac == '\0') {
      return 1;
    }
    uVar3 = FUN_004da2a0((double)iVar2);
    uVar3 = FUN_004da2a0(uVar3);
    FUN_00579b60("%s detects %s at level %.02f",uVar3);
  }
  return 1;
}



undefined4 FUN_004f5730(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if ((cVar1 != '\0') && (param_2 != 0)) {
      (**(code **)(*param_1 + 0x124))();
      cVar1 = FUN_006a1df0();
      if (cVar1 != '\0') {
        *param_4 = 0x3ff0000000000000;
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Is Spell Target >> %0.2f",*param_4);
  }
  return 1;
}



void FUN_004f5e80(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_004f5e90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a48dd0;
  return;
}



void FUN_004f5ea0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  uVar3 = uRam00ba7a4c;
  uVar2 = DAT_00ba7a48;
  uVar1 = DAT_00ba7a44;
  *(undefined4 *)(in_ECX + 0x60) = DAT_00ba7a40;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  return;
}



undefined4 FUN_004f6060(int *param_1,int param_2,double *param_3)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  float10 fVar4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      if (((uint)param_1[2] >> 0xb & 1) == 0) {
        pcVar3 = *(code **)(*param_1 + 0x288);
      }
      else {
        piVar2 = (int *)FUN_005e02e0(0);
        pcVar3 = *(code **)(*piVar2 + 300);
      }
      fVar4 = (float10)(*pcVar3)(param_2);
      *param_3 = (double)fVar4;
      if (DAT_00b361ac != '\0') {
        FUN_00579b60("GetActorValue: %s >> %0.2f",(&PTR_s_Strength_00b0a1a8)[param_2],*param_3);
      }
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_004f61a0(int *param_1,int param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_4 = 0.0;
  if (((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) &&
     (param_2 != 0)) {
    iVar2 = FUN_005e02e0(1);
    if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 0x3c) == 0)) {
      iVar2 = FUN_005e02e0(0);
    }
    iVar3 = FUN_005e02e0(1);
    if ((*(int *)(iVar3 + 0x40) == 0) && (*(int *)(iVar3 + 0x3c) == 0)) {
      iVar3 = FUN_005e02e0(0);
    }
    if ((iVar2 != 0) && (iVar3 != 0)) {
      piVar4 = (int *)(iVar2 + 0x3c);
      while ((piVar4 != (int *)0x0 && (((piVar4[1] != 0 || (*piVar4 != 0)) && (*param_4 != 1.0)))))
      {
        if ((*(int *)*piVar4 != 0) &&
           (iVar2 = FUN_00467510(*(int *)*piVar4,param_2 == DAT_00b333c4), iVar2 != -1)) {
          *param_4 = 1.0;
        }
        piVar4 = (int *)piVar4[1];
      }
    }
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("SameFaction >> %0.2f",*param_4);
    }
  }
  return 1;
}



undefined4 FUN_004f62a0(int *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = 0;
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      iVar3 = (**(code **)(*param_1 + 0x170))();
    }
  }
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x170))();
    if (*(char *)(iVar2 + 4) == '#') {
      iVar1 = (**(code **)(*param_2 + 0x170))();
    }
  }
  if (((iVar3 != 0) && (iVar1 != 0)) && (*(int *)(iVar3 + 0xe8) == *(int *)(iVar1 + 0xe8))) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("SameRace >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6350(int *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = 0;
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      iVar3 = (**(code **)(*param_1 + 0x170))();
    }
  }
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x170))();
    if (*(char *)(iVar2 + 4) == '#') {
      iVar1 = (**(code **)(*param_2 + 0x170))();
    }
  }
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar3 = FUN_00519d20();
    iVar1 = FUN_00519d20();
    if (iVar1 == iVar3) {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("SameSex >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6400(int *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_1;
  *param_4 = 0;
  iVar5 = 0;
  piVar7 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    cVar2 = (**(code **)(*param_1 + 400))();
    if (cVar2 != '\0') {
      piVar7 = piVar1;
    }
  }
  piVar1 = param_2;
  piVar6 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    cVar2 = (**(code **)(*param_2 + 400))();
    if (cVar2 != '\0') {
      piVar6 = piVar1;
    }
  }
  if ((piVar7 == (int *)0x0) || (piVar6 == (int *)0x0)) {
    uVar4 = 0xffffffff;
  }
  else {
    if (piVar6 == DAT_00b333c4) {
      uVar3 = FUN_006605a0(0);
    }
    else {
      uVar3 = (**(code **)(*piVar6 + 0x334))(1);
    }
    param_2 = (int *)CONCAT31(param_2._1_3_,uVar3);
    iVar5 = FUN_005f6540(0,piVar6,&param_1,0,param_2,0);
    if (0 < iVar5) {
      *param_4 = 0x3ff0000000000000;
    }
    (**(code **)(*(int *)piVar6[0x16] + 0x3ac))(piVar6,0);
    uVar4 = FUN_009828c0();
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetDetected >> %i and light %i",iVar5,uVar4);
  }
  return 1;
}



undefined4 FUN_004f6640(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x378))();
      if (iVar2 == param_2) {
        *param_4 = 0x3ff0000000000000;
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("IsCurrentFurnitureRef>> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f66a0(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x378))();
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x170))();
        if (iVar3 == param_2) {
          *param_4 = 0x3ff0000000000000;
        }
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("IsCurrentFurnitureObj>> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f67a0(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  *param_4 = 0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x3c) & 1) != 0)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetQuestRunning >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f67e0(int *param_1,int param_2,int *param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_4 = 0.0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if ((cVar1 != '\0') && (param_3 != (int *)0x0)) {
      iVar2 = FUN_005e02e0(1);
      if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 0x3c) == 0)) {
        iVar2 = FUN_005e02e0(0);
      }
      iVar3 = FUN_005e02e0(1);
      if ((*(int *)(iVar3 + 0x40) == 0) && (*(int *)(iVar3 + 0x3c) == 0)) {
        iVar3 = FUN_005e02e0(0);
      }
      iVar4 = 0;
      if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x06')) {
        iVar4 = param_2;
      }
      if (((iVar2 != 0) && (iVar3 != 0)) && (iVar4 != 0)) {
        iVar2 = FUN_00467510(iVar4,param_1 == DAT_00b333c4);
        iVar3 = FUN_00467510(iVar4,param_3 == DAT_00b333c4);
        if ((iVar2 != -1) && (iVar3 != -1)) {
          *param_4 = (double)(iVar2 - iVar3);
        }
      }
      if (DAT_00b361ac != '\0') {
        FUN_00579b60("GetFactionRankDifference >> %0.2f",*param_4);
      }
    }
  }
  return 1;
}



undefined4 FUN_004f6ab0(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '-')) {
    iVar2 = param_2;
  }
  iVar1 = FUN_00542ea0();
  if (iVar2 == *(int *)(iVar1 + 0x10)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsCurrentWeather >> %0.2f",*param_4);
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x004f6c17) */
/* WARNING: Removing unreachable block (ram,0x004f6c2c) */
/* WARNING: Removing unreachable block (ram,0x004f6c30) */
/* WARNING: Removing unreachable block (ram,0x004f6c37) */
/* WARNING: Removing unreachable block (ram,0x004f6c47) */
/* WARNING: Removing unreachable block (ram,0x004f6c56) */
/* WARNING: Removing unreachable block (ram,0x004f6c4d) */
/* WARNING: Removing unreachable block (ram,0x004f6c54) */
/* WARNING: Removing unreachable block (ram,0x004f6c5b) */
/* WARNING: Removing unreachable block (ram,0x004f6c62) */

undefined4 FUN_004f6b50(int *param_1,int *param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBP;
  int *piVar5;
  float10 fVar6;
  int *piVar7;
  undefined4 uStack_8;
  
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if ((param_2 != (int *)0x0) && (*(byte *)(param_2 + 1) - 0x31 < 3)) {
    piVar5 = param_2;
  }
  if (((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) &&
     (piVar5 != (int *)0x0)) {
    cVar1 = (**(code **)(*piVar5 + 0x334))(1);
    uVar2 = (**(code **)(*param_1 + 0x224))(piVar5);
    if (((cVar1 != '\0') && (iVar4 = (**(code **)(*piVar5 + 0x330))(), iVar4 != 0)) &&
       (DAT_00b333b8 == '\0')) {
      piVar7 = param_1;
      (**(code **)(*piVar5 + 0x330))(param_1,&stack0x00000000);
      unaff_EBP = FUN_006144d0(piVar7,register0x00000010);
    }
    uVar3 = (**(code **)(*param_1 + 0x284))(0x24);
    uVar3 = FUN_005e3270(uStack_8,uVar3);
    fVar6 = (float10)FUN_004d7e90(piVar5,0);
    uVar3 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar6,unaff_EBP,uVar3);
    iVar4 = FUN_00546190(0,uVar2,uVar3);
    *param_4 = (double)iVar4;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetShouldAttack >> %i",iVar4);
  }
  return 1;
}



undefined4 FUN_004f6cf0(int param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if ((param_2 != 0) && (*(byte *)(param_2 + 4) - 0x31 < 3)) {
    iVar2 = param_2;
  }
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006ecc80();
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006ecc80();
  }
  if (((iVar1 != 0) && (iVar2 != 0)) && (iVar1 == iVar2)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetInSameCell >> %0.2f",*param_4);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f6d70(int param_1,int *param_2,int param_3,double *param_4)

{
  int *piVar1;
  size_t _MaxCount;
  char *_Str2;
  char *_Str1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar3;
  undefined8 uVar4;
  
  *param_4 = 0.0;
  piVar3 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((char)param_2[1] == '0')) {
    piVar3 = param_2;
  }
  if (((param_3 != 0) && (*(byte *)(param_3 + 4) - 0x31 < 3)) || (param_3 = param_1, param_1 != 0))
  {
    if ((param_3 == DAT_00b3618c) && (DAT_00b36190 == piVar3)) {
      *param_4 = (double)_DAT_00b36194;
    }
    else {
      if (param_3 != 0) {
        uVar4 = CONCAT44(unaff_ESI,unaff_EBX);
        piVar1 = (int *)FUN_006ecc80();
        if ((piVar1 != (int *)0x0) && (piVar3 != (int *)0x0)) {
          _MaxCount = FUN_00404e50(uVar4);
          _Str2 = (char *)(**(code **)(*piVar3 + 0xd4))();
          _Str1 = (char *)(**(code **)(*piVar1 + 0xd4))();
          iVar2 = __strnicmp(_Str1,_Str2,_MaxCount);
          if (iVar2 == 0) {
            *param_4 = 1.0;
          }
        }
      }
      _DAT_00b36194 = (float)*param_4;
      DAT_00b3618c = param_3;
      DAT_00b36190 = piVar3;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetInCell >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6e50(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '5')) {
    iVar2 = param_2;
  }
  if ((iVar2 != 0) && (iVar1 = FUN_004d6670(), iVar1 == iVar2)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetInWorldspace >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6ec0(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      iVar2 = (**(code **)(*param_1 + 0x170))();
    }
  }
  iVar1 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x05')) {
    iVar1 = param_2;
  }
  if (((iVar2 != 0) && (iVar1 != 0)) && (*(int *)(iVar2 + 0x104) == iVar1)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsClass >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6f40(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      iVar2 = (**(code **)(*param_1 + 0x170))();
    }
  }
  iVar1 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\t')) {
    iVar1 = param_2;
  }
  if (((iVar2 != 0) && (iVar1 != 0)) && (*(int *)(iVar2 + 0xe8) == iVar1)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsRace >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f6fc0(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      iVar1 = (**(code **)(*param_1 + 0x170))();
      if (iVar1 != 0) {
        iVar1 = FUN_00519d20();
        if (iVar1 == param_2) {
          *param_4 = 0x3ff0000000000000;
        }
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsSex >> %0.2f",*param_4);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f70c0(int *param_1,int param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = 0.0;
  iVar3 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x06')) {
    iVar3 = param_2;
  }
  if ((param_1 == DAT_00b3619c) && (iVar3 == DAT_00b36198)) {
    *param_4 = (double)_DAT_00b361a0;
  }
  else {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_005e02e0();
    if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 0x3c) == 0)) {
      iVar2 = FUN_005e02e0();
    }
    if (((iVar2 != 0) && (iVar3 != 0)) &&
       (iVar2 = FUN_00467510(iVar3,param_1 == DAT_00b333c4), iVar2 != -1)) {
      *param_4 = 1.0;
    }
    _DAT_00b361a0 = (float)*param_4;
    DAT_00b3619c = param_1;
    DAT_00b36198 = iVar3;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetInFaction >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f71d0(undefined4 param_1,char param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_2 != '\0') {
    iVar1 = FUN_00520ef0();
    if (iVar1 != 0) {
      iVar1 = FUN_00520ef0();
      if (*(char *)(iVar1 + 4) == param_2) {
        *param_4 = 0x3ff0000000000000;
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsUsedItemType >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f7220(int param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  iVar1 = 0;
  if ((param_2 != 0) && (*(byte *)(param_2 + 4) - 0x31 < 3)) {
    iVar1 = param_2;
  }
  if (((param_1 != 0) && (iVar1 != 0)) && (param_1 == iVar1)) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsRef >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f7280(int *param_1,int param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = -1.0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      iVar2 = FUN_005e02e0();
      if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 0x3c) == 0)) {
        iVar2 = FUN_005e02e0();
      }
      iVar3 = 0;
      if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x06')) {
        iVar3 = param_2;
      }
      if ((iVar2 != 0) && (iVar3 != 0)) {
        iVar2 = FUN_00467510(iVar3,param_1 == DAT_00b333c4);
        *param_4 = (double)iVar2;
      }
      if (DAT_00b361ac != '\0') {
        FUN_00579b60("GetFactionRank >> %0.2f",*param_4);
      }
    }
  }
  return 1;
}



undefined4 FUN_004f7330(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = -1.0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x04')) {
    *param_4 = (double)*(float *)(param_2 + 0x24);
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetGlobalValue >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f74b0(int *param_1,int *param_2,undefined4 param_3,double *param_4)

{
  double dVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  
  *param_4 = 0.0;
  if (((param_1 != (int *)0x0) && (cVar2 = (**(code **)(*param_1 + 0x188))(), cVar2 != '\0')) &&
     (param_2 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x174))();
    (**(code **)(*param_2 + 0x174))();
    fVar3 = (float10)FUN_00683cb0();
    fVar4 = (float10)(**(code **)(*param_1 + 0x1e0))();
    fVar4 = (float10)(float)fVar3 - fVar4;
    *param_4 = (double)fVar4;
    while (fVar4 < (float10)-3.1415927410125732) {
      *param_4 = *param_4 + 6.2831854820251465;
      fVar4 = (float10)*param_4;
    }
    dVar1 = *param_4;
    while (3.1415927410125732 < dVar1) {
      *param_4 = *param_4 - 6.2831854820251465;
      dVar1 = *param_4;
    }
    *param_4 = *param_4 * 57.2957763671875;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Heading Angle: %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f7af0(int *param_1,int param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if ((param_2 != 0) && (*(byte *)(param_2 + 4) - 0x31 < 3)) {
    iVar2 = param_2;
  }
  if (((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) &&
     (iVar2 != 0)) {
    if ((param_3 < 0) || (5 < param_3)) {
      param_3 = -1;
    }
    cVar1 = FUN_00675c40(param_1,iVar2,param_1,param_3,0);
    if (cVar1 != '\0') {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetCrime >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f7fa0(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_4 = 0;
  piVar5 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      piVar5 = param_1;
    }
  }
  iVar4 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '=')) {
    iVar4 = param_2;
  }
  if ((piVar5 != (int *)0x0) && (iVar4 != 0)) {
    iVar2 = FUN_005e03a0();
    if (iVar2 != 0) {
      cVar1 = FUN_005660a0();
      if (cVar1 != '\0') {
        iVar3 = FUN_0041fb20();
        if (iVar3 != 0) {
          iVar2 = FUN_0041fb20();
        }
      }
    }
    if (iVar2 == iVar4) {
      *param_4 = 0x3ff0000000000000;
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsCurrentPackage >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f80e0(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = 0.0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x34) >> 3 & 1) != 0)) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      FUN_00579b60("PC is expelled.");
      return 1;
    }
    FUN_00579b60("PC is not expelled.");
    return 1;
  }
  return 1;
}



undefined4 FUN_004f8140(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = 0.0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x34) >> 6 & 1) != 0)) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      FUN_00579b60("PC murdered a faction member.");
      return 1;
    }
    FUN_00579b60("PC did not Murder a faction member.");
    return 1;
  }
  return 1;
}



undefined4 FUN_004f81a0(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = 0.0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x34) >> 4 & 1) != 0)) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      FUN_00579b60("PC stole from faction or member.");
      return 1;
    }
    FUN_00579b60("PC did not steal from faction or member.");
    return 1;
  }
  return 1;
}



undefined4 FUN_004f8200(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = 0.0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x34) >> 5 & 1) != 0)) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      FUN_00579b60("PC attacked a faction member.");
      return 1;
    }
    FUN_00579b60("PC did not attack a faction member.");
    return 1;
  }
  return 1;
}



undefined4 FUN_004f8260(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  *param_4 = 0.0;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x34) < '\0')) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      FUN_00579b60("PC submited to authority.");
      return 1;
    }
    FUN_00579b60("PC has not submitted to authority.");
    return 1;
  }
  return 1;
}



undefined4 FUN_004f8300(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if ((cVar1 != '\0') && (param_2 != 0)) {
      (**(code **)(*param_1 + 0x124))();
      cVar1 = FUN_006a1ea0();
      if (cVar1 != '\0') {
        *param_4 = 0x3ff0000000000000;
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Has Magic Effect >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f8370(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x11')) {
    iVar2 = param_2;
  }
  iVar1 = (**(code **)(*DAT_00b333c4 + 0x268))();
  if (iVar1 == iVar2) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsBirthsign is %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f83d0(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar1 = FUN_00662750();
  iVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 4) == '\x05')) {
    iVar2 = param_2;
  }
  if (iVar1 == iVar2) {
    *param_4 = 0x3ff0000000000000;
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("GetIsClass >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f8420(int *param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) {
    iVar2 = FUN_0041e980();
    *param_4 = (double)iVar2;
    if (DAT_00b361ac != '\0') {
      uVar3 = FUN_004da2a0((double)iVar2);
      FUN_00579b60("%s  has %0.2f investment  gold currently",uVar3);
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_004f84f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    cVar2 = (**(code **)(*param_1 + 400))();
    if (cVar2 != '\0') {
      piVar4 = param_1;
    }
  }
  *param_4 = 0;
  if (piVar4 != (int *)0x0) {
    iVar3 = FUN_004d6d40();
    if (iVar3 != 0) {
      iVar3 = FUN_00485e00(param_1,iVar3);
      if (iVar3 != 0) {
        iVar3 = FUN_00486790(2,0);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) &&
           (*(char *)(*(int *)(iVar3 + 8) + 4) == '\x14')) {
          cVar2 = FUN_004b4c70();
          if (cVar2 == '\0') {
            uVar1 = 0x3ff0000000000000;
          }
          else {
            uVar1 = 0x4000000000000000;
          }
          *param_4 = uVar1;
        }
      }
    }
  }
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Armor Rating upper body is %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f8590(undefined4 param_1,int param_2,undefined4 param_3,double *param_4)

{
  double dVar1;
  
  dVar1 = (double)*(int *)(DAT_00b333c4 + 0x658 + param_2 * 4);
  if (*(int *)(DAT_00b333c4 + 0x658 + param_2 * 4) < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  *param_4 = dVar1;
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Player misc stat value %.02f",dVar1);
    return 1;
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004f8840(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float fStack_24;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *in_ECX = *param_1 * 0.14287673;
  in_ECX[1] = fVar1 * 0.14287673;
  in_ECX[2] = fVar2 * 0.14287673;
  in_ECX[3] = fStack_24;
  return;
}



undefined4 FUN_004f8890(int param_1,char param_2,undefined4 param_3,double *param_4)

{
  float fVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (int)param_2;
    fVar1 = *(float *)(param_1 + 0x20);
    if (((iVar2 == 0x58) || (fVar1 = *(float *)(param_1 + 0x24), iVar2 == 0x59)) ||
       (fVar1 = *(float *)(param_1 + 0x28), iVar2 == 0x5a)) {
      *param_4 = (double)(fVar1 * 57.295776);
    }
    if (DAT_00b361ac != '\0') {
      FUN_00579b60("GetAngle: %c >> %0.2f",iVar2,*param_4);
    }
  }
  return 1;
}



undefined4 FUN_004f89e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_4 = 0;
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      iVar2 = FUN_004d96f0(param_1[0xf],"Bip01 Spine");
      if (iVar2 != 0) {
        cVar1 = FUN_008975c0(iVar2,0);
        if (cVar1 == '\0') goto LAB_004f8a29;
      }
      *param_4 = 0x3ff0000000000000;
    }
  }
LAB_004f8a29:
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("Is Left Up >> %0.2f",*param_4);
  }
  return 1;
}



undefined4 FUN_004f8ad0(int param_1,int param_2,undefined4 param_3,double *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    param_2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_0041e7b0();
    if (iVar1 == param_2) {
      *param_4 = 1.0;
    }
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      iVar1 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
      if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
        puVar2 = &DAT_00a2f7ec;
      }
      FUN_00579b60("%s is the owner",puVar2);
      return 1;
    }
    iVar1 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
    if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
      puVar2 = &DAT_00a2f7ec;
    }
    FUN_00579b60("%s is not the owner",puVar2);
  }
  return 1;
}



undefined4 FUN_004f8b90(undefined4 param_1,undefined4 param_2,int param_3,double *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_004ca970();
  if (iVar1 == param_3) {
    *param_4 = 1.0;
  }
  if (DAT_00b361ac != '\0') {
    if (*param_4 != 0.0) {
      iVar1 = FUN_009832e6(param_3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
      if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
        puVar2 = &DAT_00a2f7ec;
      }
      FUN_00579b60("%s is the owner",puVar2);
      return 1;
    }
    iVar1 = FUN_009832e6(param_3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
    if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
      puVar2 = &DAT_00a2f7ec;
    }
    FUN_00579b60("%s is not the owner",puVar2);
  }
  return 1;
}



undefined4 FUN_004f8e70(int *param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  *param_4 = 0.0;
  piVar5 = (int *)0x0;
  if ((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) {
    piVar5 = param_1;
  }
  iVar2 = FUN_00420ed0();
  *param_4 = (double)iVar2;
  if (DAT_00b361ac != '\0') {
    iVar2 = FUN_009832e6(piVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
    if (iVar2 == 0) {
      puVar3 = &DAT_00a2f7ec;
    }
    else {
      puVar3 = *(undefined1 **)(iVar2 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00a2f7ec;
      }
    }
    iVar2 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
    if ((iVar2 == 0) || (puVar4 = *(undefined1 **)(iVar2 + 4), puVar4 == (undefined1 *)0x0)) {
      puVar4 = &DAT_00a2f7ec;
    }
    FUN_00579b60("%s has hit %s %0.2f times",puVar4,puVar3,*param_4);
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004f90c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 uStack_24;
  
  uVar6 = uRam00ba7a4c;
  uVar5 = DAT_00ba7a48;
  uVar4 = DAT_00ba7a44;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *(undefined4 *)(in_ECX + 0x60) = DAT_00ba7a40;
  *(undefined4 *)(in_ECX + 100) = uVar4;
  *(undefined4 *)(in_ECX + 0x68) = uVar5;
  *(undefined4 *)(in_ECX + 0x6c) = uVar6;
  *(float *)(in_ECX + 0x10) = fVar1 * 0.14287673;
  *(float *)(in_ECX + 0x14) = fVar2 * 0.14287673;
  *(float *)(in_ECX + 0x18) = fVar3 * 0.14287673;
  *(undefined4 *)(in_ECX + 0x1c) = uStack_24;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004f9120(int *param_1,int *param_2,undefined4 param_3,double *param_4)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  undefined8 uStack_144;
  float fStack_13c;
  float fStack_138;
  double *local_130;
  int *local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  uint auStack_11c [4];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [36];
  uint uStack_dc;
  undefined ***pppuStack_8c;
  undefined4 uStack_88;
  undefined **appuStack_80 [23];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009b6a98;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_144;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_4 = 0.0;
  local_12c = param_1;
  local_130 = param_4;
  if (((param_1 != (int *)0x0) && (cVar2 = (**(code **)(*param_1 + 400))(uVar3), cVar2 != '\0')) &&
     (param_2 != (int *)0x0)) {
    if (param_1 == DAT_00b333c4) {
      iVar4 = (**(code **)(*param_2 + 0x154))();
      iVar7 = DAT_00b333cc;
      if (iVar4 != 0) {
        iVar4 = FUN_005645b0();
        uVar9 = *(undefined4 *)(iVar7 + 0xdc);
        uVar5 = (**(code **)(*param_2 + 0x154))();
        uVar5 = FUN_00560920(&DAT_00b3fab0,uVar5);
        cVar2 = FUN_0047f7b0(uVar5,uVar9);
        param_4 = local_130;
        if (cVar2 != '\0') {
          fStack_13c = *(float *)(iVar4 + 0x58);
          uStack_144._4_4_ = *(float *)(iVar4 + 0x54);
          fStack_138 = *(float *)(iVar4 + 0x5c);
          FUN_004f5ea0();
          cVar2 = (**(code **)(*param_2 + 0x188))();
          piVar8 = (int *)0x0;
          if (cVar2 != '\0') {
            piVar8 = param_2;
          }
          FUN_00535a00(0x1a,piVar8);
          pppuStack_8c = appuStack_80;
          uStack_14 = 0;
          uStack_88 = 0;
          puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x174))();
          uStack_128 = *puVar6;
          uStack_124 = puVar6[1];
          fStack_120 = (float)puVar6[2];
          FUN_004f8840((int)&uStack_144 + 4);
          FUN_0065abe0(auStack_11c);
          uStack_dc = auStack_11c[0] & 0xffff001a | 0x1a;
          iVar7 = (**(code **)(*param_2 + 0x15c))(auStack_10c);
          uStack_144 = (double)*(float *)(iVar7 + 8);
          iVar7 = (**(code **)(*param_2 + 0x158))(auStack_11c);
          fVar1 = (float)(double)CONCAT44(fStack_13c,uStack_144._4_4_) - *(float *)(iVar7 + 8);
          iVar7 = 0;
          uStack_144._4_4_ = fStack_120 + fVar1 * 0.75;
          fStack_13c = fVar1 * 0.5 + fStack_120;
          fStack_138 = fVar1 * 0.25 + fStack_120;
          do {
            fStack_120 = *(float *)((int)&uStack_144 + iVar7 * 4 + 4);
            FUN_004f90c0(&uStack_128);
            iVar4 = FUN_00446a10(auStack_100);
            if ((iVar4 == 0) || (piVar8 = (int *)FUN_004dc270(iVar4), piVar8 == param_2)) {
              *local_130 = 1.0;
              goto LAB_004f9373;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          uVar3 = FUN_005f2820(0,param_2,1,0,0);
          uStack_144._4_4_ = (float)(uVar3 & 0xff);
          *local_130 = (double)(int)uStack_144._4_4_;
LAB_004f9373:
          uStack_14 = 0xffffffff;
          appuStack_80[0] = &PTR_LAB_00a48dd0;
          param_4 = local_130;
        }
      }
    }
    else {
      uVar3 = FUN_005f2820(0,param_2,1,0,0);
      uStack_144._4_4_ = (float)(uVar3 & 0xff);
      *param_4 = (double)(int)uStack_144._4_4_;
    }
    if (DAT_00b361ac != '\0') {
      if (*param_4 == 0.0) {
        uVar9 = FUN_004da2a0();
        uVar9 = FUN_004da2a0(uVar9);
        pcVar10 = "%s can\'t see %s";
      }
      else {
        uVar9 = FUN_004da2a0();
        uVar9 = FUN_004da2a0(uVar9);
        pcVar10 = "%s sees %s";
      }
      FUN_00579b60(pcVar10,uVar9);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return 1;
}



void FUN_004f9430(void)

{
  int in_ECX;
  
  FUN_0046b990();
  thunk_FUN_0046ae40(0x4d414e46,in_ECX + 0x20,1);
  FUN_0046ae40(0x56544c46,in_ECX + 0x24,4);
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004f9470(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar2 = FUN_004511c0();
  if (iVar2 == 4) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xfffffff0,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
      }
      else if (iVar2 == 0x4d414e46) {
        FUN_00450c20(in_ECX + 8,1);
      }
      else if (iVar2 == 0x56544c46) {
        FUN_004510e0(in_ECX + 9);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_004f9540(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03db4,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined1 *)(in_ECX + 0x20) = *(undefined1 *)(iVar1 + 0x20);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar1 + 0x24);
  }
  return;
}



void FUN_004f95e0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046c460();
  *in_ECX = &PTR_FUN_00a4981c;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 8) = 0x73;
  *(undefined1 *)(in_ECX + 1) = 4;
  return;
}



void FUN_004f9640(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6ae3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4981c;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  FUN_00401f20(in_ECX[6]);
  in_ECX[6] = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f96c0(byte param_1)

{
  FUN_004f9640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f96e0(void)

{
  FUN_0046b990();
  FUN_0046b9f0();
  return;
}



char * FUN_004f96f0(void)

{
  return "Textures\\Menus\\Loading\\";
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004f9700(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar2 = FUN_004510b0();
  while( true ) {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 < 0x4d414e47) {
      if (iVar2 == 0x4d414e46) {
        uVar3 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
        FUN_004a7a60("File %s contains old data for loadscreen %s (%08X).",param_1 + 0x1c,uVar3);
      }
      else if (iVar2 == 0x43534544) {
        FUN_00450c20(&stack0xffffffec,0);
        FUN_004028d0(&stack0xffffffec,0);
      }
      else if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xfffffff0);
        (**(code **)(*in_ECX + 0xd8))();
      }
    }
    else if (iVar2 == 0x4d414e4c) {
      iVar2 = FUN_00401f00(0xc);
      FUN_00450c20(iVar2,0xc);
      if (iVar2 != 0) {
        if (in_ECX[0xb] != 0) {
          piVar4 = (int *)FUN_00401f00(8);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            *piVar4 = in_ECX[0xb];
            piVar4[1] = 0;
          }
          piVar4[1] = in_ECX[0xc];
          in_ECX[0xc] = (int)piVar4;
        }
        in_ECX[0xb] = iVar2;
      }
    }
    else if (iVar2 == 0x4e4f4349) {
      if (in_ECX == (int *)0x0) {
        FUN_004700e0(0,param_1);
      }
      else {
        FUN_004700e0(in_ECX + 6,param_1);
      }
    }
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') break;
    iVar2 = FUN_004510b0();
  }
  return 1;
}



void FUN_004f9890(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    for (piVar1 = (int *)(in_ECX + 0x2c);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if (*piVar2 != 0) {
        uVar3 = FUN_0046b680(0xffffffff);
        FUN_0046bb20(piVar2,uVar3);
      }
      if (piVar2[1] != 0) {
        uVar3 = FUN_0046b680(0xffffffff);
        FUN_0046bb20(piVar2 + 1,uVar3);
      }
    }
    FUN_0046ab80(1);
  }
  return;
}



void FUN_004f99c0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x2c);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    FUN_00401f20(*piVar1);
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x30) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x30));
    *(int *)(in_ECX + 0x30) = iVar2;
  }
  *(int *)(in_ECX + 0x2c) = 0;
  return;
}



undefined4 FUN_004f9a20(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x30) == 0) && (*(int *)(in_ECX + 0x2c) == 0)) {
    return 1;
  }
  return 0;
}



void FUN_004f9a40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6b1e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_0046ffd0();
  local_4._0_1_ = 1;
  FUN_0046a400();
  *in_ECX = &PTR_FUN_00a4997c;
  in_ECX[6] = &PTR_FUN_00a49960;
  in_ECX[9] = &PTR_LAB_00a49948;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x3f;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f9ae0(void)

{
  FUN_004f99c0();
  thunk_FUN_0046b170();
  return;
}



void FUN_004f9af0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053c4,0);
  if (iVar4 != 0) {
    FUN_004f99c0();
    piVar7 = (int *)(in_ECX + 0x2c);
    for (piVar6 = (int *)(iVar4 + 0x2c);
        (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
      iVar1 = *piVar6;
      if (iVar1 != 0) {
        iVar2 = piVar7[1];
        piVar3 = piVar7;
        while (iVar2 != 0) {
          piVar3 = (int *)piVar3[1];
          iVar2 = piVar3[1];
        }
        if (*piVar3 == 0) {
          *piVar3 = iVar1;
        }
        else {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar3[1] = 0;
          }
          else {
            *piVar5 = iVar1;
            piVar5[1] = 0;
            piVar3[1] = (int)piVar5;
          }
        }
      }
      if ((int *)piVar7[1] != (int *)0x0) {
        piVar7 = (int *)piVar7[1];
      }
    }
    FUN_0046acb0(iVar4);
  }
  return;
}



undefined1 FUN_004f9bb0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_1;
  
  piVar7 = (int *)(in_ECX + 0x2c);
  local_1 = 0;
  uVar2 = local_1;
  local_1 = 0;
  if ((*(int *)(in_ECX + 0x30) == 0) && (*piVar7 == 0)) {
    return 1;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  switch((char)param_1[1]) {
  case '0':
    cVar3 = FUN_004c97f0();
    if (cVar3 != '\0') goto switchD_004f9bf2_caseD_35;
    iVar5 = FUN_004c9cf0();
    if (iVar5 != 0) {
      iVar8 = *(int *)(iVar5 + 0xc);
      iVar5 = 0;
      uVar6 = FUN_004c9aa0();
      uVar6 = FUN_004c9a80(uVar6);
      iVar4 = FUN_004ef1d0(uVar6);
      goto LAB_004f9c81;
    }
    break;
  case '1':
  case '2':
  case '3':
    iVar5 = FUN_006ecc80();
    if ((iVar5 == 0) || (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
      iVar5 = FUN_004d6670();
      if (iVar5 == 0) break;
      iVar8 = *(int *)(iVar5 + 0xc);
      iVar5 = 0;
      uVar6 = (**(code **)(*param_1 + 0x174))();
      iVar4 = FUN_004efe40(uVar6);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
      iVar8 = 0;
      iVar4 = 0;
    }
    goto LAB_004f9c81;
  case '4':
    break;
  case '5':
switchD_004f9bf2_caseD_35:
    iVar5 = param_1[3];
    iVar8 = 0;
    iVar4 = 0;
LAB_004f9c81:
    if (piVar7 != (int *)0x0) {
      do {
        piVar1 = (int *)piVar7[1];
        if ((piVar1 == (int *)0x0) && (*piVar7 == 0)) break;
        piVar7 = (int *)*piVar7;
        if (iVar5 == 0) {
          if ((iVar8 != 0) && (piVar7[1] == iVar8)) {
            bVar9 = piVar7[2] == iVar4;
            goto LAB_004f9ca8;
          }
        }
        else {
          bVar9 = *piVar7 == iVar5;
LAB_004f9ca8:
          if (bVar9) {
            local_1 = 1;
            uVar2 = local_1;
            break;
          }
        }
        piVar7 = piVar1;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
      } while( true );
    }
    break;
  default:
    goto switchD_004f9bf2_default;
  }
  local_1 = uVar2;
switchD_004f9bf2_default:
  return local_1;
}



void FUN_004f9cf0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b6b7a;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4997c;
  in_ECX[6] = &PTR_FUN_00a49960;
  in_ECX[9] = &PTR_LAB_00a49948;
  local_4 = 2;
  FUN_004f99c0(uVar1);
  thunk_FUN_0046b170();
  FUN_00401f20(in_ECX[0xd]);
  in_ECX[0xd] = 0;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00470040();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004f9d90(byte param_1)

{
  FUN_004f9cf0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004f9db0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_004f9dd0(void)

{
  DAT_00b361bc = 0;
  DAT_00b09e20 = 0xffffffff;
  DAT_00b361c0 = 0;
  return;
}



void FUN_004f9df0(size_t param_1,void *param_2)

{
  void *_Dst;
  int in_ECX;
  
  FUN_00401e40(*(undefined4 *)(in_ECX + 0x30));
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(size_t *)(in_ECX + 0x20) = param_1;
  if (param_1 != 0) {
    _Dst = (void *)thunk_FUN_00401aa0(param_1,1);
    _memset(_Dst,0,param_1);
    *(void **)(in_ECX + 0x30) = _Dst;
    _memcpy(_Dst,param_2,*(size_t *)(in_ECX + 0x20));
  }
  return;
}



void FUN_004f9e50(char *param_1)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x2c));
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Size = ((int)pcVar2 - (int)(param_1 + 1)) + 1;
    _Dst = (void *)thunk_FUN_00401aa0(_Size,1);
    _memset(_Dst,0,_Size);
    *(void **)(in_ECX + 0x2c) = _Dst;
    _memcpy(_Dst,param_1,(int)pcVar2 - (int)(param_1 + 1));
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}



void FUN_004f9ec0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_0041e920();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_0041e920();
      if (puVar2[2] == 0) {
        uVar3 = *puVar2;
        FUN_00516970(uVar3,param_1,puVar2);
        FUN_00517950(uVar3,param_1,puVar2);
      }
    }
  }
  return;
}



void FUN_004f9f00(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_var;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = 0;
  FUN_00516970();
  FUN_00517810(extraout_var,param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5);
  return;
}



void FUN_004f9f30(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_var;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 1;
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  FUN_00516970();
  FUN_00517810(extraout_var,param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5);
  return;
}



void FUN_004f9f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_var;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  FUN_00516970();
  FUN_00517810(extraout_var,param_1,param_2,uVar1,uVar2,uVar3,uVar4,param_3);
  return;
}



undefined1 FUN_004f9fa0(void)

{
  return DAT_00b09e25;
}



void FUN_004f9fb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}



void FUN_004f9fc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



void FUN_004f9fd0(void)

{
  DAT_00b361b0 = 0;
  DAT_00b361b4 = 0;
  DAT_00b09e1c = 0xffffffff;
  DAT_00b361b8 = 0;
  return;
}



void FUN_004fa020(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 8);
    while (iVar1 != 0) {
      puVar2 = *(undefined4 **)(in_ECX + 8);
      puVar3 = (undefined4 *)puVar2[1];
      uVar4 = *puVar2;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      else {
        puVar2[1] = puVar3[1];
        *puVar2 = *puVar3;
        FUN_00401f20(puVar3);
      }
      FUN_00401f20(uVar4);
      iVar1 = **(int **)(in_ECX + 8);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}



void FUN_004fa080(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0xc);
    while (iVar1 != 0) {
      puVar2 = *(undefined4 **)(in_ECX + 0xc);
      puVar3 = (undefined4 *)puVar2[1];
      uVar4 = *puVar2;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      else {
        puVar2[1] = puVar3[1];
        *puVar2 = *puVar3;
        FUN_00401f20(puVar3);
      }
      FUN_00401f20(uVar4);
      iVar1 = **(int **)(in_ECX + 0xc);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}



void FUN_004fa0e0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  while ((piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))) {
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return;
}



float10 FUN_004fa110(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int in_ECX;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  if ((((DAT_00b361bc != in_ECX) || (DAT_00b09e20 != param_1)) ||
      (piVar4 = DAT_00b361c0, DAT_00b361c0 == (int *)0x0)) &&
     (piVar2 = *(int **)(in_ECX + 0xc), DAT_00b361c0 = piVar4, piVar2 != (int *)0x0)) {
    while ((piVar1 = (int *)piVar2[1], piVar1 != (int *)0x0 || (DAT_00b361c0 = piVar4, *piVar2 != 0)
           )) {
      DAT_00b361c0 = (int *)*piVar2;
      if ((*(int *)*piVar2 == param_1) ||
         (piVar2 = piVar1, DAT_00b361c0 = piVar4, piVar1 == (int *)0x0)) break;
    }
  }
  DAT_00b361bc = in_ECX;
  DAT_00b09e20 = param_1;
  if (DAT_00b361c0 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      pcVar3 = "UNKNOWN";
    }
    else {
      pcVar3 = (char *)(**(code **)(*param_2 + 0xd4))();
    }
    FUN_004a7a60("Variable ID %08X not found. Try to recompile script \'%s\'. The script may also have a bad reference variable in an if statement on line %d."
                 ,param_1,pcVar3,DAT_00b36204);
    return (float10)0;
  }
  return (float10)*(double *)(DAT_00b361c0 + 2);
}



uint FUN_004fa1b0(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    for (piVar1 = piVar1 + 0x10; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]
        ) {
      if (*(int *)(*piVar1 + 0xc) == param_1) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
    }
  }
  return (uint)piVar1 & 0xffffff00;
}



short FUN_004fa1e0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  short sVar6;
  short sVar7;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  sVar6 = sVar6 + 2;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      sVar7 = sVar6 + 1;
      if (in_ECX[4] != 0) {
        sVar7 = sVar6 + 9;
      }
      if (DAT_00b05bac != '\0') {
        puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        if (puVar1 != (undefined4 *)0x0) {
          piVar4 = (int *)FUN_0046b250(*puVar1);
          uVar5 = (**(code **)(*piVar4 + 0xd4))
                            (*(undefined4 *)((int)puVar1 + 5),0x25e,"..\\TES Shared\\TESScript.cpp")
          ;
          FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,sVar7,*puVar1,uVar5);
          return sVar7;
        }
        FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar7,0x25e,
                     "..\\TES Shared\\TESScript.cpp");
      }
      return sVar7;
    }
    piVar4 = (int *)*puVar1;
    if ((piVar4 != (int *)0x0) && (*(double *)(piVar4 + 2) != 0.0)) {
      if (*in_ECX != 0) {
        for (piVar3 = (int *)(*in_ECX + 0x40); (piVar3 != (int *)0x0 && (*piVar3 != 0));
            piVar3 = (int *)piVar3[1]) {
          if (*(int *)(*piVar3 + 0xc) == *piVar4) {
            sVar6 = sVar6 + 8;
            goto LAB_004fa239;
          }
        }
      }
      sVar6 = sVar6 + 0xc;
    }
LAB_004fa239:
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}



void FUN_004fa2d0(void)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  int *in_ECX;
  char local_1d;
  int local_1c;
  int local_18;
  short *local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  undefined2 *local_4;
  
  local_c = 0;
  local_18 = *(int *)(DAT_00b33b00 + 0x14);
  local_14 = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_14 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_c,2);
  }
  local_1c = 0;
  local_4 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_1c,2);
  puVar2 = (undefined4 *)in_ECX[3];
  do {
    if (puVar2 == (undefined4 *)0x0) {
      *local_4 = (undefined2)local_1c;
      local_1d = in_ECX[4] != 0;
      FUN_0045b9a0(&local_1d,1);
      if (local_1d != '\0') {
        FUN_0045b9a0(in_ECX[4],8);
      }
      if (DAT_00b05bac != '\0') {
        puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        iVar4 = *(int *)(DAT_00b33b00 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - local_18,0x296,
                       "..\\TES Shared\\TESScript.cpp");
        }
        else {
          piVar8 = (int *)FUN_0046b250(*puVar2);
          uVar9 = (**(code **)(*piVar8 + 0xd4))
                            (*(undefined4 *)((int)puVar2 + 5),0x296,"..\\TES Shared\\TESScript.cpp")
          ;
          FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,iVar4 - local_18,*puVar2,uVar9);
        }
      }
      cVar7 = FUN_0045a170();
      psVar6 = local_14;
      if (cVar7 != '\0') {
        uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
        if ((int)local_14 + 0xffffU < uVar5) {
          FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                       "..\\TES Shared\\TESScript.cpp",0x296);
        }
        *psVar6 = (short)uVar5 - (short)psVar6;
      }
      return;
    }
    puVar3 = (uint *)*puVar2;
    if ((puVar3 != (uint *)0x0) && (pdVar1 = (double *)(puVar3 + 2), *pdVar1 != 0.0)) {
      if (*in_ECX != 0) {
        for (piVar8 = (int *)(*in_ECX + 0x40); (piVar8 != (int *)0x0 && (*piVar8 != 0));
            piVar8 = (int *)piVar8[1]) {
          if (*(uint *)(*piVar8 + 0xc) == *puVar3) {
            local_8 = *(int *)pdVar1;
            local_10 = *puVar3 | 0xf0000000;
            FUN_0045b9a0(&local_10,4);
            FUN_0045f7a0(&local_8,4);
            goto LAB_004fa3b6;
          }
        }
      }
      FUN_0045b9a0(puVar3,4);
      FUN_0045b9a0(pdVar1,8);
LAB_004fa3b6:
      local_1c = local_1c + 1;
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}



void FUN_004fa540(int param_1)

{
  if (param_1 != 0) {
    FUN_0065c620(param_1);
  }
  return;
}



undefined1 FUN_004fa560(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    piVar2 = &DAT_00b361cc;
    while (*piVar2 != param_1) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_004fa580(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_00b361cc;
  do {
    if ((piVar2[1] == 0) && (*piVar2 == 0)) break;
    FUN_004e4690();
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  while (DAT_00b361d0 != 0) {
    iVar1 = *(int *)(DAT_00b361d0 + 4);
    FUN_00401f20(DAT_00b361d0);
    DAT_00b361d0 = iVar1;
  }
  DAT_00b361cc = 0;
  return;
}



undefined4 FUN_004fa5e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *in_ECX;
  int iVar10;
  
  if (DAT_00b333f4 == '\0') {
    DAT_00b333f4 = 1;
    pcVar5 = (char *)(**(code **)(*in_ECX + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5 + 1;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      if (pcVar5 != pcVar6) {
        if (*(ushort *)(param_1 + 0x10) == 0xffff) {
          pcVar6 = *(char **)(param_1 + 0xc);
          pcVar5 = pcVar6 + 1;
          do {
            cVar4 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
          uVar7 = (int)pcVar6 - (int)pcVar5;
        }
        else {
          uVar7 = (uint)*(ushort *)(param_1 + 0x10);
        }
        if (uVar7 != 0) {
          pcVar5 = *(char **)(param_1 + 0xc);
          pcVar6 = (char *)(**(code **)(*in_ECX + 0xd4))();
          iVar8 = __stricmp(pcVar6,pcVar5);
          if (iVar8 != 0) {
            return 1;
          }
        }
      }
    }
  }
  uVar7 = in_ECX[8];
  if ((uVar7 == *(uint *)(param_1 + 0x30)) && (in_ECX[7] == *(int *)(param_1 + 0x2c))) {
    uVar9 = 0;
    if (uVar7 != 0) {
      do {
        if (*(char *)(in_ECX[0xc] + uVar9) != *(char *)(uVar9 + *(int *)(param_1 + 0x20))) {
          return 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    iVar8 = 0;
    piVar3 = in_ECX + 0x12;
    piVar1 = (int *)(param_1 + 0x3c);
    for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar10 = 0;
    for (piVar2 = piVar3; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        iVar10 = iVar10 + 1;
      }
    }
    if (iVar8 == iVar10) {
      for (; (piVar1 != (int *)0x0 && (piVar3 != (int *)0x0)); piVar3 = (int *)piVar3[1]) {
        if ((*piVar1 != 0) && ((*piVar3 != 0 && (cVar4 = FUN_00517b60(*piVar3), cVar4 != '\0')))) {
          return 1;
        }
        piVar1 = (int *)piVar1[1];
      }
      iVar8 = 0;
      piVar3 = in_ECX + 0x10;
      piVar1 = (int *)(param_1 + 0x44);
      for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar10 = 0;
      for (piVar2 = piVar3; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          iVar10 = iVar10 + 1;
        }
      }
      if (iVar8 == iVar10) {
        while( true ) {
          if ((piVar1 == (int *)0x0) || (piVar3 == (int *)0x0)) {
            return 0;
          }
          if (((*piVar1 != 0) && (*piVar3 != 0)) && (*(int *)(*piVar1 + 8) != *(int *)(*piVar3 + 8))
             ) break;
          piVar1 = (int *)piVar1[1];
          piVar3 = (int *)piVar3[1];
        }
      }
    }
    return 1;
  }
  return 1;
}



void FUN_004fa780(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != 0) {
    for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
        param_1 = (int *)param_1[1]) {
      iVar2 = FUN_00401f00(0x20,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00517aa0(*param_1);
      }
      local_4 = 0xffffffff;
      FUN_0067b1e0(uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004fa810(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046ae40(0x52484353,in_ECX + 0x18,0x14);
  FUN_0046b9f0();
  return;
}



int FUN_004fa840(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  piVar2 = in_ECX + 0x12;
  while ((piVar2 != (int *)0x0 && (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0))) {
    piVar2 = (int *)piVar2[1];
    if (*piVar1 == param_1) {
      return piVar1[6];
    }
  }
  uVar3 = (**(code **)(*in_ECX + 0xd4))();
  FUN_004a7a60("Trying to access local variable %d in script \'%s\' -- variable not found.\r\n",
               param_1,uVar3);
  return 0;
}



undefined4 FUN_004fa890(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  bool bVar6;
  
  piVar1 = (int *)(in_ECX + 0x48);
  uVar5 = 0;
  piVar3 = piVar1;
  while ((piVar3 != (int *)0x0 && (iVar2 = *piVar3, iVar2 != 0))) {
    piVar3 = (int *)piVar3[1];
    if (*(char *)(iVar2 + 0x10) != '\0') {
      uVar5 = uVar5 + 1;
    }
  }
  bVar6 = uVar5 <= param_1;
  if (bVar6) {
    param_1 = param_1 - uVar5;
  }
  uVar5 = 0;
joined_r0x004fa8cb:
  if ((piVar1 == (int *)0x0) || (puVar4 = (undefined4 *)*piVar1, puVar4 == (undefined4 *)0x0)) {
    return 0;
  }
  piVar1 = (int *)piVar1[1];
  if (*(char *)(puVar4 + 4) == '\0') goto LAB_004fa8e8;
  if (bVar6) goto code_r0x004fa8e4;
  goto LAB_004fa8ec;
code_r0x004fa8e4:
  if (*(char *)(puVar4 + 4) == '\0') {
LAB_004fa8e8:
    if (bVar6) {
LAB_004fa8ec:
      if (uVar5 == param_1) {
        return *puVar4;
      }
      uVar5 = uVar5 + 1;
    }
  }
  goto joined_r0x004fa8cb;
}



int * FUN_004fa910(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
  
  piVar5 = (int *)FUN_00401f00(8);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  piVar1 = (int *)(in_ECX + 0x48);
  while ((piVar1 != (int *)0x0 && (puVar7 = (undefined4 *)*piVar1, puVar7 != (undefined4 *)0x0))) {
    piVar1 = (int *)piVar1[1];
    puVar6 = (undefined4 *)FUN_00401f00(0x18);
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar7 + 4);
      *puVar6 = *puVar7;
      piVar4 = piVar5 + 1;
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
      iVar2 = *piVar4;
      piVar3 = piVar5;
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        piVar4 = piVar3 + 1;
        iVar2 = piVar3[1];
      }
      if (*piVar3 == 0) {
        *piVar3 = (int)puVar6;
      }
      else {
        puVar7 = (undefined4 *)FUN_00401f00(8);
        if (puVar7 == (undefined4 *)0x0) {
          piVar3[1] = 0;
        }
        else {
          *puVar7 = puVar6;
          puVar7[1] = 0;
          piVar3[1] = (int)puVar7;
        }
      }
    }
  }
  return piVar5;
}



int FUN_004fa9c0(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  float10 fVar5;
  int local_8;
  
  if ((param_1 == 0) || (*(uint *)(in_ECX + 0x1c) < param_1)) {
    return 0;
  }
  if (((DAT_00b361b0 == in_ECX) && (DAT_00b09e1c == param_1)) && (DAT_00b361b4 == param_2)) {
    return DAT_00b361b8;
  }
  uVar4 = 1;
  piVar2 = (int *)(in_ECX + 0x40);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if ((((int *)piVar2[1] == (int *)0x0) && (*piVar2 == 0)) || (param_1 <= uVar4)) break;
    uVar4 = uVar4 + 1;
    piVar2 = (int *)piVar2[1];
  }
  iVar1 = *piVar2;
  if ((*(int *)(iVar1 + 0xc) != 0) && (param_2 != 0)) {
    fVar5 = (float10)FUN_004fa110(*(int *)(iVar1 + 0xc),in_ECX);
    local_8 = SUB84((double)fVar5,0);
    if (local_8 != 0) {
      uVar3 = FUN_0046b250(local_8);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
  }
  DAT_00b361b8 = iVar1;
  DAT_00b361b4 = param_2;
  DAT_00b361b0 = in_ECX;
  DAT_00b09e1c = param_1;
  return iVar1;
}



uint FUN_004faa90(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint in_EAX;
  uint uVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x48);
  while ((piVar1 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0))) {
    piVar1 = (int *)piVar1[1];
    in_EAX = __stricmp((char *)puVar2[6],param_1);
    if (in_EAX == 0) {
      uVar3 = *puVar2;
      *param_2 = uVar3;
      uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),-(*(char *)(puVar2 + 4) != '\0')) & 0xffffff0d;
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + 'f');
    }
  }
  *param_2 = 0;
  return in_EAX & 0xffffff00;
}



void FUN_004faaf0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((DAT_00b33a98 != 0) && (piVar3 = (int *)(DAT_00b33a98 + 100), piVar3 != (int *)0x0)) {
    if (*(int *)(DAT_00b33a98 + 0x68) != 0) goto LAB_004fab0b;
    piVar1 = (int *)*piVar3;
    while (piVar1 != (int *)0x0) {
LAB_004fab0b:
      iVar2 = *piVar3;
      piVar3 = (int *)piVar3[1];
      *(undefined4 *)(iVar2 + 0x34) = 0;
      piVar1 = piVar3;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_004fab20(double *param_1,int param_2,int *param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,char param_8)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  double *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_24;
  local_8 = param_4;
  local_24 = param_1;
  local_14 = param_5;
  local_1c = param_6;
  local_c = param_7;
  local_20 = param_7;
  if (param_7 == 0) {
    return 0;
  }
  local_18 = 0;
  if ((param_8 != '\0') && ((*(uint *)(param_6 + 8) >> 3 & 1) != 0)) {
    param_8 = '\0';
  }
  iVar7 = *param_3;
  cVar4 = *(char *)(iVar7 + param_2);
  iVar5 = iVar7 + 1;
  *param_3 = iVar5;
  switch(cVar4) {
  case 'G':
  case 'Z':
  case 'r':
    sVar1 = *(short *)(iVar5 + param_2);
    *param_3 = iVar7 + 3;
    local_18 = FUN_004fa9c0((int)sVar1,param_7);
    if (local_18 == 0) {
      return 0;
    }
    iVar7 = *(int *)(local_18 + 8);
    if ((iVar7 == 0) && (param_8 == '\0')) {
      if (*(int *)(local_18 + 0xc) == 0) {
        return 0;
      }
      fVar8 = (float10)0;
      goto LAB_004fae1f;
    }
    if (cVar4 == 'G') {
      *local_24 = (double)*(float *)(iVar7 + 0x24);
      return 1;
    }
    if (cVar4 == 'Z') {
      *(undefined4 *)local_24 = *(undefined4 *)(iVar7 + 0xc);
      return 1;
    }
    cVar4 = *(char *)(*param_3 + param_2);
    *param_3 = *param_3 + 1;
    if (cVar4 == 'X') goto LAB_004fad37;
    piVar2 = *(int **)(local_18 + 8);
    if (piVar2 != (int *)0x0) {
      if ((char)piVar2[1] == ';') {
        local_20 = piVar2[0x16];
      }
      else if ((piVar2 != (int *)0x0) && (*(byte *)(piVar2 + 1) - 0x31 < 3)) {
        iVar7 = FUN_0041fb00();
        if (iVar7 == 0) {
          local_20 = FUN_004d7250();
        }
        else {
          local_10 = FUN_0041fb00();
          iVar7 = piVar2[3];
          uVar6 = (**(code **)(*piVar2 + 0x170))(iVar7);
          iVar7 = FUN_004d8d70(uVar6,iVar7);
          if (iVar7 != 0) {
            local_20 = FUN_00484f50();
          }
        }
      }
    }
    if (local_20 == 0) {
      return 0;
    }
    break;
  case 'n':
    *param_1 = (double)*(int *)(iVar5 + param_2);
    *param_3 = *param_3 + 4;
    return 1;
  case 'z':
    *(undefined4 *)param_1 = *(undefined4 *)(iVar5 + param_2);
    *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(iVar7 + 5 + param_2);
    *param_3 = *param_3 + 8;
    return 1;
  }
  param_7 = local_c;
  if (cVar4 == 'X') {
LAB_004fad37:
    sVar1 = *(short *)(*param_3 + param_2);
    *param_3 = *param_3 + 4;
    iVar7 = FUN_004fca30((int)sVar1);
    if (iVar7 == 0) {
      return 0;
    }
    iVar5 = local_8;
    if (((local_18 != 0) && (iVar3 = *(int *)(local_18 + 8), iVar3 != 0)) &&
       (iVar5 = 0, *(byte *)(iVar3 + 4) - 0x31 < 3)) {
      iVar5 = iVar3;
    }
    iVar3 = *(int *)(iVar7 + 0x14);
    if (param_8 != '\0') {
      if (iVar3 == 0) {
        return 0;
      }
      FUN_004fae80(iVar3,param_2,param_3,iVar5,local_14,local_1c,param_7);
      return 0;
    }
    if ((*(char *)(iVar7 + 0x10) != '\0') && (iVar5 == 0)) {
      return 0;
    }
    if (*(code **)(iVar7 + 0x18) == (code *)0x0) {
      return 0;
    }
    cVar4 = (**(code **)(iVar7 + 0x18))
                      (iVar3,param_2,iVar5,local_14,local_1c,param_7,local_24,param_3);
    if (cVar4 != '\0') {
      return 1;
    }
    return 0;
  }
  sVar1 = *(short *)(*param_3 + param_2);
  *param_3 = *param_3 + 2;
  if (((cVar4 != 'f') && (cVar4 != 'l')) && (cVar4 != 's')) {
    return 0;
  }
  FUN_004fa110((int)sVar1,local_1c);
  fVar8 = extraout_ST0;
LAB_004fae1f:
  *local_24 = (double)fVar8;
  return 1;
}



uint FUN_004fae80(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int *piVar5;
  void *_Dst;
  undefined1 *puVar6;
  uint in_EAX;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined **ppuVar17;
  int local_18;
  undefined8 local_14;
  uint local_c;
  double local_8;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = *(ushort *)(*param_3 + param_2);
  local_c = (uint)uVar2;
  iVar7 = *param_3 + 2;
  puVar12 = (undefined4 *)&stack0x00000020;
  *param_3 = iVar7;
  local_18 = 0;
  if (0 < (short)uVar2) {
    do {
      puVar13 = (undefined4 *)(param_1 + 4 + (short)local_18 * 0xc);
      puVar8 = (undefined4 *)*puVar13;
      if ((&DAT_00b0a54d)[(int)puVar8 * 8] == '\0') {
        puVar13 = puVar12;
        switch(puVar8) {
        case (undefined4 *)0x0:
          sVar3 = *(short *)(*param_3 + param_2);
          iVar7 = *param_3 + 2;
          *param_3 = iVar7;
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            _Dst = (void *)*puVar12;
            puVar13 = puVar12 + 1;
            _memcpy(_Dst,(void *)(iVar7 + param_2),(int)sVar3);
            *(undefined1 *)((int)_Dst + (int)sVar3) = 0;
          }
          *param_3 = *param_3 + (int)sVar3;
          break;
        case (undefined4 *)0x1:
        case (undefined4 *)0x17:
          local_14 = 0;
          puVar8 = (undefined4 *)
                   FUN_004fab20(&local_14,param_2,param_3,param_4,param_5,param_6,param_7,1);
          if ((char)puVar8 == '\0') goto switchD_004faf50_caseD_5;
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            uVar11 = FUN_009828c0();
            *(undefined4 *)*puVar12 = uVar11;
            puVar13 = puVar12 + 1;
          }
          break;
        case (undefined4 *)0x2:
          local_8 = 0.0;
          puVar8 = (undefined4 *)
                   FUN_004fab20(&local_8,param_2,param_3,param_4,param_5,param_6,param_7,1);
          if ((char)puVar8 == '\0') goto switchD_004faf50_caseD_5;
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            local_14 = CONCAT44(local_14._4_4_,(float)local_8);
            puVar13 = puVar12 + 1;
            *(float *)*puVar12 = (float)local_8;
          }
          break;
        default:
          goto switchD_004faf50_caseD_5;
        case (undefined4 *)0x5:
        case (undefined4 *)0xa:
        case (undefined4 *)0x12:
        case (undefined4 *)0x1c:
          sVar3 = *(short *)(*param_3 + param_2);
          *param_3 = *param_3 + 2;
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            *(int *)*puVar12 = (int)sVar3;
            puVar13 = puVar12 + 1;
          }
          break;
        case (undefined4 *)0x8:
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            puVar6 = (undefined1 *)*puVar12;
            puVar12 = puVar12 + 1;
            *puVar6 = *(undefined1 *)(param_2 + *param_3);
          }
          *param_3 = *param_3 + 1;
          puVar13 = puVar12;
          break;
        case (undefined4 *)0x21:
          uVar4 = *(undefined2 *)(*param_3 + param_2);
          *param_3 = *param_3 + 2;
          if ((*(uint *)(param_6 + 8) >> 3 & 1) != 0) {
            *(char *)*puVar12 = (char)uVar4;
            puVar13 = puVar12 + 1;
          }
        }
        goto LAB_004fb335;
      }
      iVar7 = *param_3;
      cVar1 = *(char *)(iVar7 + param_2);
      puVar8 = (undefined4 *)(iVar7 + 1);
      *param_3 = (int)puVar8;
      if (cVar1 != 'r') goto switchD_004faf50_caseD_5;
      sVar3 = *(short *)((int)puVar8 + param_2);
      *param_3 = iVar7 + 3;
      iVar7 = FUN_004fa9c0((int)sVar3,param_7);
      puVar8 = (undefined4 *)(*(uint *)(param_6 + 8) >> 3);
      if (((((uint)puVar8 & 1) == 0) || (iVar7 == 0)) ||
         (puVar8 = *(undefined4 **)(iVar7 + 8), puVar8 == (undefined4 *)0x0))
      goto switchD_004faf50_caseD_5;
      switch(*puVar13) {
      case 3:
        puVar8 = (undefined4 *)FUN_00469520(*(undefined1 *)(puVar8 + 1));
        if ((char)puVar8 == '\0') goto switchD_004faf50_caseD_5;
        puVar13 = (undefined4 *)*puVar12;
        *puVar13 = 0;
        if (*(int *)(iVar7 + 8) == 0) goto switchD_004faf50_caseD_5;
        puVar10 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 8) + 0xa8))();
        if ((char)puVar10 != '\0') {
          *puVar13 = *(undefined4 *)(iVar7 + 8);
        }
        puVar14 = (undefined4 *)*puVar13;
        goto joined_r0x004fb10a;
      case 4:
      case 0x18:
      case 0x1a:
        puVar8 = (undefined4 *)(*(byte *)(puVar8 + 1) - 0x31);
        if (&DAT_00000002 < puVar8) goto switchD_004faf50_caseD_5;
        puVar8 = (undefined4 *)*puVar12;
        *puVar8 = 0;
        puVar14 = *(undefined4 **)(iVar7 + 8);
        if (puVar14 == (undefined4 *)0x0) goto switchD_004faf50_caseD_5;
        bVar16 = *(byte *)(puVar14 + 1) - 0x31 < 2;
        bVar15 = *(byte *)(puVar14 + 1) - 0x31 == 2;
        goto LAB_004fafd5;
      default:
        goto switchD_004faf50_caseD_5;
      case 6:
        if (1 < *(byte *)(puVar8 + 1) - 0x32) goto switchD_004faf50_caseD_5;
        goto LAB_004fb18d;
      case 7:
        piVar5 = (int *)*puVar12;
        iVar9 = FUN_009832e6(puVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
        *piVar5 = iVar9;
        puVar13 = puVar12 + 1;
        if (iVar9 != 0) goto LAB_004fb335;
        puVar13 = *(undefined4 **)(iVar7 + 8);
        puVar8 = (undefined4 *)0x0;
        if ((puVar13 != (undefined4 *)0x0) && (*(char *)(puVar13 + 1) == '\x15')) {
          puVar8 = puVar13;
        }
        *piVar5 = (int)puVar8;
        if (puVar8 == (undefined4 *)0x0) goto switchD_004faf50_caseD_5;
        puVar10 = puVar8;
        puVar14 = (undefined4 *)puVar8[0x19];
        goto joined_r0x004fb10a;
      case 9:
        bVar16 = *(char *)(puVar8 + 1) == '0';
        break;
      case 0xb:
        ppuVar17 = &PTR_PTR_00b03280;
        goto LAB_004fb066;
      case 0xc:
        bVar16 = *(char *)(puVar8 + 1) == '\n';
        break;
      case 0xd:
        bVar16 = *(char *)(puVar8 + 1) == '9';
        break;
      case 0xe:
        bVar16 = *(char *)(puVar8 + 1) == ';';
        break;
      case 0xf:
        bVar16 = *(char *)(puVar8 + 1) == '\t';
        break;
      case 0x10:
        bVar16 = *(char *)(puVar8 + 1) == '\x05';
        break;
      case 0x11:
        bVar16 = *(char *)(puVar8 + 1) == '\x06';
        break;
      case 0x13:
        bVar16 = *(char *)(puVar8 + 1) == '\x04';
        break;
      case 0x14:
        bVar16 = *(char *)(puVar8 + 1) == ' ';
        break;
      case 0x15:
        puVar13 = (undefined4 *)*puVar12;
        *puVar13 = 0;
        if (*(int *)(iVar7 + 8) == 0) goto switchD_004faf50_caseD_5;
        puVar10 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 8) + 0xa8))();
        if ((char)puVar10 != '\0') {
          *puVar13 = *(undefined4 *)(iVar7 + 8);
        }
        puVar14 = (undefined4 *)*puVar13;
        goto joined_r0x004fb10a;
      case 0x19:
        puVar8 = (undefined4 *)*puVar12;
        *puVar8 = 0;
        puVar14 = *(undefined4 **)(iVar7 + 8);
        if (puVar14 == (undefined4 *)0x0) goto switchD_004faf50_caseD_5;
        bVar16 = *(char *)(puVar14 + 1) == '#';
        bVar15 = *(char *)(puVar14 + 1) == '$';
LAB_004fafd5:
        if (!bVar16 && !bVar15) goto switchD_004faf50_caseD_5;
LAB_004fafdb:
        *puVar8 = puVar14;
        puVar10 = puVar8;
        goto joined_r0x004fb10a;
      case 0x1b:
        bVar16 = *(char *)(puVar8 + 1) == '5';
        break;
      case 0x1d:
        bVar16 = *(char *)(puVar8 + 1) == '=';
        break;
      case 0x1e:
        bVar16 = *(char *)(puVar8 + 1) == '>';
        break;
      case 0x1f:
        ppuVar17 = &PTR_PTR_00b03534;
LAB_004fb066:
        puVar13 = (undefined4 *)*puVar12;
        puVar8 = (undefined4 *)FUN_009832e6(puVar8,0,&PTR_PTR_00b02f9c,ppuVar17,0);
        *puVar13 = puVar8;
        goto LAB_004fb194;
      case 0x20:
        bVar16 = *(char *)(puVar8 + 1) == '\x11';
        break;
      case 0x22:
        bVar16 = *(char *)(puVar8 + 1) == '-';
        break;
      case 0x23:
        bVar16 = *(char *)(puVar8 + 1) == '#';
        break;
      case 0x24:
        puVar8 = (undefined4 *)*puVar12;
        *puVar8 = 0;
        puVar14 = *(undefined4 **)(iVar7 + 8);
        if ((puVar14 == (undefined4 *)0x0) ||
           ((*(char *)(puVar14 + 1) != '\x06' && (*(char *)(puVar14 + 1) != '#'))))
        goto switchD_004faf50_caseD_5;
        goto LAB_004fafdb;
      case 0x25:
        bVar16 = *(char *)(puVar8 + 1) == 'C';
      }
      if (!bVar16) {
switchD_004faf50_caseD_5:
        return (uint)puVar8 & 0xffffff00;
      }
LAB_004fb18d:
      *(undefined4 **)*puVar12 = puVar8;
LAB_004fb194:
      puVar10 = (undefined4 *)0x0;
      puVar14 = puVar8;
joined_r0x004fb10a:
      puVar8 = puVar10;
      puVar13 = puVar12 + 1;
      if (puVar14 == (undefined4 *)0x0) goto switchD_004faf50_caseD_5;
LAB_004fb335:
      iVar7 = local_18 + 1;
      puVar12 = puVar13;
      local_18 = iVar7;
    } while ((short)iVar7 < (short)local_c);
  }
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}



void FUN_004fb430(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x40);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}



void FUN_004fb460(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6ba8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a49b60;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a49a5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004fb4c0(undefined4 *param_1)

{
  FUN_004028d0(*param_1,0);
  return;
}



void FUN_004fb4e0(void)

{
  int in_ECX;
  
  FUN_004fa020();
  FUN_004fa080();
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x10));
  }
  return;
}



void FUN_004fb510(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(8);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    *(undefined4 **)(in_ECX + 8) = puVar1;
  }
  for (piVar2 = *(int **)(in_ECX + 8); (piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0));
      piVar2 = (int *)piVar2[1]) {
    if (*(int *)*piVar2 == param_1) {
      return;
    }
  }
  piVar2 = (int *)FUN_00401f00(8);
  *piVar2 = param_1;
  piVar2[1] = 0;
  FUN_00446cb0(piVar2);
  return;
}



bool FUN_004fb580(int param_1,uint param_2)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  piVar3 = *(int **)(in_ECX + 8);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  piVar4 = (int *)0x0;
  do {
    piVar1 = (int *)*piVar3;
    piVar2 = piVar4;
    if ((piVar1 == (int *)0x0) || (piVar2 = piVar1, *piVar1 == param_1)) break;
    piVar2 = piVar4;
    if (*piVar1 == 0) {
      piVar2 = piVar1;
    }
    piVar3 = (int *)piVar3[1];
    piVar4 = piVar2;
  } while (piVar3 != (int *)0x0);
  bVar5 = piVar2 != (int *)0x0;
  if (bVar5) {
    piVar2[1] = piVar2[1] | param_2;
  }
  piVar3 = *(int **)(in_ECX + 8);
  if (piVar3 != (int *)0x0) {
    while (piVar4 = (int *)*piVar3, piVar4 != (int *)0x0) {
      if (*piVar4 == 0) {
        if (piVar4 == (int *)0x0) {
          return bVar5;
        }
        piVar4[1] = piVar4[1] | param_2;
        return true;
      }
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        return bVar5;
      }
    }
  }
  return bVar5;
}



undefined4 FUN_004fb5f0(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 8);
      (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if (*piVar2 == param_1) {
      if ((piVar2[1] & param_2) == 0) {
        return 0;
      }
      return 1;
    }
  }
  FUN_004fb510(param_1);
  return 0;
}



void FUN_004fb630(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[3];
  while ((piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0))) {
    piVar1 = (int *)piVar1[1];
    if (*piVar2 == param_1) {
      *(undefined8 *)(piVar2 + 2) = param_2;
      return;
    }
  }
  if ((int *)*in_ECX != (int *)0x0) {
    uVar5 = (**(code **)(*(int *)*in_ECX + 0xd4))();
    FUN_004a7a60("Trying to set variableID %d in script \'%s\' -- variable not found.",param_1,uVar5
                );
    return;
  }
  cVar4 = FUN_0045a500();
  if ((cVar4 == '\0') ||
     (puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x80), puVar3 == (undefined4 *)0x0)) {
    FUN_004a7a60("Trying to set variableID %d -- variable not found.",param_1);
    return;
  }
  iVar6 = FUN_0046b250(*puVar3);
  iVar7 = FUN_009832e6(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (iVar7 == 0) {
    iVar8 = FUN_00469cd0(iVar6);
  }
  else {
    iVar8 = FUN_004da2a0();
  }
  if ((iVar6 != 0) && (iVar8 != 0)) {
    if (iVar7 == 0) {
      FUN_004a7a60("LoadGame \'%s\': Trying to set variableID %d on \'%s\' (%08X) -- variable not found. The script may have been changed in the master/plug-in file."
                   ,*(undefined4 *)(DAT_00b33b00 + 0x1c0),param_1,iVar8,*puVar3);
      return;
    }
    FUN_004a7a60("LoadGame \'%s\': Trying to set variableID %d on ref \'%s\' (%08X) -- variable not found. The script may have been changed in the master/plug-in file."
                 ,*(undefined4 *)(DAT_00b33b00 + 0x1c0),param_1,iVar8,*puVar3);
    return;
  }
  FUN_004a7a60("LoadGame \'%s\': Trying to set variableID %d on (%08X) -- variable not found. The script may have been changed in the master/plug-in file."
               ,*(undefined4 *)(DAT_00b33b00 + 0x1c0),param_1,*puVar3);
  return;
}



void FUN_004fb760(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  char cStack_5d;
  ushort local_5c [2];
  uint uStack_58;
  uint local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined8 auStack_48 [8];
  
  local_54 = 0;
  iVar7 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_50,4);
    if (local_50 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESScript.cpp",0x29c,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250();
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESScript.cpp",0x29c,*puVar1,uVar5);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_54,2);
  }
  FUN_004534d0(local_5c,2);
  iVar8 = 0;
  if (local_5c[0] != 0) {
    do {
      auStack_48[0] = 0;
      uStack_58 = 0;
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x75) {
LAB_004fb8b0:
        FUN_004534d0(&uStack_58,4);
        FUN_004534d0(auStack_48,8);
      }
      else {
        FUN_004534d0(&uStack_58,4);
        if ((uStack_58 & 0xf0000000) == 0) {
          FUN_004534d0(auStack_48,8);
        }
        else {
          uStack_58 = uStack_58 & 0xfffffff;
          FUN_0045ba00(&uStack_4c,4);
          auStack_48[0] = CONCAT44(auStack_48[0]._4_4_,uStack_4c);
        }
        if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x75) goto LAB_004fb8b0;
      }
      FUN_004fb630(uStack_58,auStack_48[0]);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)local_5c[0]);
  }
  FUN_004534d0(&cStack_5d,1);
  if (cStack_5d != '\0') {
    uVar5 = FUN_00401f00();
    *(undefined4 *)(in_ECX + 0x10) = uVar5;
    FUN_004534d0(uVar5,8);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = local_54 & 0xffff;
      if (uVar6 + iVar7 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar6) - iVar7,"..\\TES Shared\\TESScript.cpp",0x2cb,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar2) + iVar7,"..\\TES Shared\\TESScript.cpp",0x2cb,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250();
      uVar6 = (local_54 & 0xffff) + iVar7;
      if (uVar6 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_54 & 0xffff)) - iVar7,"..\\TES Shared\\TESScript.cpp",0x2cb,
                     *puVar1,uVar5);
        return;
      }
      if (uVar2 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_54 & 0xffff) - uVar2) + iVar7,"..\\TES Shared\\TESScript.cpp",0x2cb,
                     *puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_004fba50(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  FUN_004fa080();
  piVar1 = (int *)in_ECX[2];
  while ((piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))) {
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  if (*in_ECX != 0) {
    iVar2 = FUN_004fa910();
    in_ECX[3] = iVar2;
  }
  if (in_ECX[4] != 0) {
    FUN_00401f20(in_ECX[4]);
  }
  in_ECX[4] = 0;
  return;
}



void FUN_004fbaa0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2b48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  *in_ECX = &PTR_FUN_00a49da4;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  DAT_00b361ac = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 1) = 0xd;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbb60(float param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *in_ECX;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *local_8;
  
  if ((((uint)in_ECX[2] >> 3 & 1) == 0) && (iVar9 = 0, param_1 != 0.0)) {
    local_8 = (int *)0x0;
    uVar3 = FUN_0046b680(0xffffffff);
    piVar10 = in_ECX + 0x10;
    while ((piVar10 != (int *)0x0 && ((piVar10[1] != 0 || (*piVar10 != 0))))) {
      iVar1 = *piVar10;
      param_1 = *(float *)(iVar1 + 8);
      iVar4 = *(int *)(iVar1 + 0xc);
      if (param_1 != 0.0) {
        FUN_0046bb20(&param_1,uVar3);
        iVar4 = FUN_0046b250(param_1);
        *(int *)(iVar1 + 8) = iVar4;
      }
      if (iVar4 == 0) {
        if (local_8 == (int *)0x0) {
          piVar11 = (int *)piVar10[1];
          if (piVar11 == (int *)0x0) {
            *piVar10 = 0;
          }
          else {
            piVar10[1] = piVar11[1];
            *piVar10 = *piVar11;
            FUN_00401f20(piVar11);
          }
        }
        else {
          FUN_0065c620(*piVar10);
          piVar10 = (int *)local_8[1];
        }
        iVar1 = in_ECX[3];
        if (param_1 == 0.0) {
          uVar5 = (**(code **)(*in_ECX + 0xd4))();
          pcVar12 = 
          "Referenced object %d on Script (%08X) \'%s\' is invalid.  Script will not be executed.";
          iVar4 = iVar9;
        }
        else {
          uVar5 = (**(code **)(*in_ECX + 0xd4))();
          pcVar12 = 
          "Could not find referenced object (%08X) on Script (%08X) \'%s\'.  Script will not be executed."
          ;
          iVar4 = (int)param_1;
        }
        FUN_004a7a60(pcVar12,iVar4,iVar1,uVar5);
        in_ECX[8] = 0;
        piVar11 = piVar10;
      }
      else {
        piVar11 = (int *)piVar10[1];
        local_8 = piVar10;
      }
      iVar9 = iVar9 + 1;
      piVar10 = piVar11;
    }
    if ((iVar9 != in_ECX[7]) && (in_ECX[8] != 0)) {
      iVar1 = in_ECX[3];
      uVar3 = (**(code **)(*in_ECX + 0xd4))(in_ECX[7],iVar9);
      FUN_004a7a60("Referenced object list on Script (%08X) \'%s\' is corrupt.  Expected %d objects, found %d."
                   ,iVar1,uVar3);
      in_ECX[8] = 0;
    }
    uVar8 = DAT_00b361f4;
    if (((char)in_ECX[10] != '\0') && (0.0 < _DAT_00b09e28)) {
      param_1 = _DAT_00b09e28;
      if (DAT_00b361f4 == 0) {
        pfVar7 = (float *)&DAT_00b361d4;
        do {
          param_1 = param_1 * 0.5;
          pfVar6 = pfVar7 + 1;
          *pfVar7 = param_1;
          pfVar7 = pfVar6;
        } while ((int)pfVar6 < 0xb361f4);
      }
      uVar8 = uVar8 & 0xff;
      cVar2 = FUN_004faa90("fQuestDelayTime",&param_1);
      if (cVar2 != '\0') {
        DAT_00b361f4 = DAT_00b361f4 + 1;
        in_ECX[0xe] = 0;
        FUN_0046ab80(1);
        return;
      }
      if (uVar8 == 0) {
        DAT_00b361f4 = DAT_00b361f4 + 1;
        in_ECX[0xe] = (int)_DAT_00b09e28;
        FUN_0046ab80(1);
        return;
      }
      pfVar7 = (float *)&DAT_00b361d4;
      do {
        if ((uVar8 & 1) != 0) {
          in_ECX[0xe] = (int)(*pfVar7 + (float)in_ECX[0xe]);
        }
        pfVar7 = pfVar7 + 1;
        uVar8 = (int)uVar8 >> 1;
      } while (uVar8 != 0);
      DAT_00b361f4 = DAT_00b361f4 + 1;
      FUN_0046ab80(1);
      return;
    }
    FUN_0046ab80(1);
  }
  return;
}



undefined4 * FUN_004fbdc0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  uVar2 = FUN_004fa910();
  *puVar3 = in_ECX;
  puVar3[3] = uVar2;
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004fbe00(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined1 uVar1;
  char cVar2;
  int in_ECX;
  float10 fVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((SUB41(param_4,0) == '\0') && (*(uint *)(in_ECX + 0x20) < 5)) {
    return 0;
  }
  if ((*(char *)(in_ECX + 0x28) != '\0') && (0.0 < *(float *)(in_ECX + 0x38))) {
    *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x38) - _DAT_00b33e9c;
    *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) + _DAT_00b33e9c;
    if (0.0 < *(float *)(in_ECX + 0x38)) {
      return 0;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  iVar4 = in_ECX;
  fVar5 = param_4;
  FUN_00516970();
  uVar1 = FUN_00517810(iVar4,param_1,param_2,param_3,fVar5,uVar6,uVar7,uVar8);
  if ((*(char *)(in_ECX + 0x28) == '\0') || (_DAT_00b09e28 <= 0.0)) goto LAB_004fbeec;
  cVar2 = FUN_004faa90("fQuestDelayTime",&param_4);
  fVar5 = param_4;
  if (cVar2 == '\0') {
LAB_004fbeda:
    fVar5 = *(float *)(in_ECX + 0x38) + _DAT_00b09e28;
  }
  else {
    fVar3 = (float10)FUN_004fa110(param_4,0);
    param_4 = (float)fVar3;
    if (param_4 <= 0.0) goto LAB_004fbeda;
    fVar3 = (float10)FUN_004fa110(fVar5,in_ECX);
    param_4 = (float)fVar3;
    fVar5 = param_4 + *(float *)(in_ECX + 0x38);
  }
  *(float *)(in_ECX + 0x38) = fVar5;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
LAB_004fbeec:
  FUN_004fb430();
  return uVar1;
}



void FUN_004fbf00(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  cVar1 = FUN_00500280(in_ECX,param_3,param_2);
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x20) != 0)) {
    if (param_2 == 1) {
      DAT_00b361ac = 1;
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = FUN_004d7250();
    }
    FUN_004fbe00(param_3,uVar2,0,1);
    DAT_00b361ac = 0;
  }
  return;
}



void FUN_004fbf70(byte param_1)

{
  FUN_004fb460();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_004fbf90(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_0041e920();
    if (iVar1 != 0) {
      FUN_0041e920();
      uVar2 = FUN_004fb580(param_1,param_3);
      return uVar2;
    }
  }
  return 0;
}



void FUN_004fbfd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be328;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  local_4 = 0;
  FUN_004028d0(*param_1,0);
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004fc040(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != 0) {
    for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
        param_1 = (int *)param_1[1]) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004fbfd0(*param_1);
      }
      local_4 = 0xffffffff;
      FUN_0067b1e0(uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004fc0d0(int param_1)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  void *_Dst;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 *local_34;
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b6bdb;
  local_10 = *unaff_FS_OFFSET;
  local_34 = (undefined1 *)(DAT_00b30aac ^ (uint)&stack0xfffffffc);
  *unaff_FS_OFFSET = (int)&local_10;
  local_1c = 0;
  local_18 = in_ECX;
  local_14 = local_34;
  iVar2 = FUN_004511c0();
  if (iVar2 == 0xd) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4f524354) {
        if (iVar2 == 0x4f524353) {
LAB_004fc25d:
          puVar3 = (undefined4 *)FUN_00401f00(0x10);
          puVar5 = (undefined4 *)0x0;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            *(undefined2 *)(puVar3 + 1) = 0;
            *(undefined2 *)((int)puVar3 + 6) = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar5 = puVar3;
          }
          FUN_004510e0(&local_20);
          if (iVar2 == 0x4f524353) {
            puVar5[2] = local_20;
            FUN_0067b1e0(puVar5);
            in_ECX = local_18;
          }
          else {
            puVar5[3] = local_20;
            FUN_0067b1e0(puVar5);
            in_ECX = local_18;
          }
        }
        else if (iVar2 < 0x44534c54) {
          if (iVar2 == 0x44534c53) {
            local_1c = FUN_00401f00(0x20);
            iVar2 = 0;
            local_8 = 0;
            if (local_1c != 0) {
              iVar2 = FUN_00517a80();
            }
            local_8 = 0xffffffff;
            local_1c = iVar2;
            FUN_00517a50(param_1);
            FUN_0067b1e0(iVar2);
          }
          else if (iVar2 == 0x41444353) {
            _Size = *(size_t *)(param_1 + 0x254);
            _Dst = (void *)thunk_FUN_00401aa0(_Size,1);
            _memset(_Dst,0,_Size);
            local_18[0xc] = (int)_Dst;
            _memset(_Dst,0,_Size);
            FUN_00450c20(local_18[0xc],0);
            in_ECX = local_18;
          }
          else if (iVar2 == 0x44494445) {
            local_34 = (undefined1 *)0x200;
            FUN_00450c20(&stack0xffffffd0);
            local_34 = &stack0xffffffd0;
            (**(code **)(*in_ECX + 0xd8))();
          }
        }
        else if (iVar2 == 0x4d414e52) {
          FUN_004510e0(local_24);
        }
      }
      else if (iVar2 == 0x52484353) {
        FUN_00450c20(in_ECX + 6,0);
      }
      else if (iVar2 == 0x52564353) {
        if (local_1c != 0) {
          FUN_00450c20(&local_34,0x200);
          FUN_004028d0(&local_34,0);
        }
      }
      else if (iVar2 == 0x56524353) goto LAB_004fc25d;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    if (in_ECX[0xc] == 0) {
      uVar4 = (**(code **)(*in_ECX + 0xd4))(param_1 + 0x1c);
      FUN_004a7a60("Script \'%s\' in file \'%s\' has not been compiled.\r\n",uVar4);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc360(int param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  float *pfVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_274 [36];
  int local_250;
  float local_24c;
  undefined **local_248;
  undefined4 *local_244;
  undefined4 *local_240;
  int local_23c;
  float local_238;
  float local_234;
  int local_230;
  int local_22c;
  int local_228;
  int *local_224;
  undefined4 local_220;
  undefined4 *local_21c;
  char local_218 [404];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  puStack_48 = &LAB_009b6c0b;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_274;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffd80;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_234 = 0.0;
  local_224 = param_2;
  local_250 = *param_2;
  local_21c = param_3;
  local_220 = *param_3;
  local_228 = 0;
  local_22c = 0;
  local_230 = 0;
  if (DAT_00b33a98 != 0) {
    pfVar9 = (float *)(DAT_00b33a98 + 100);
    local_23c = 0;
    local_244 = (undefined4 *)0x0;
    local_240 = (undefined4 *)0x0;
    local_248 = &PTR_FUN_00a49fac;
    local_44 = 0;
    if ((pfVar9 != (float *)0x0) && ((*(int *)(DAT_00b33a98 + 0x68) != 0 || (*pfVar9 != 0.0)))) {
      do {
        fVar2 = *pfVar9;
        fVar1 = *(float *)((int)fVar2 + 0x34);
        local_24c = fVar1;
        local_238 = fVar2;
        if (0.0 < fVar1) {
          local_234 = fVar1 + local_234;
          local_228 = local_228 + 1;
          if (*(char *)((int)fVar2 + 0x28) == '\0') {
            if (*(char *)((int)fVar2 + 0x29) != '\0') {
              local_230 = local_230 + 1;
            }
          }
          else {
            local_22c = local_22c + 1;
          }
          if (local_23c == 0) {
            FUN_006aa320();
          }
          else {
            puVar5 = local_244;
            if (local_244 != (undefined4 *)0x0) {
              do {
                local_24c = *(float *)(puVar5[2] + 0x34);
                if (local_24c < fVar1) {
                  FUN_00589640(puVar5,&local_238);
                  goto LAB_004fc4ee;
                }
                puVar5 = (undefined4 *)*puVar5;
              } while (puVar5 != (undefined4 *)0x0);
              puVar5 = (undefined4 *)(*(code *)local_248[1])(uVar4);
              puVar5[2] = fVar2;
              *puVar5 = 0;
              puVar5[1] = local_240;
              if (local_240 == (undefined4 *)0x0) {
                local_23c = local_23c + 1;
                local_244 = puVar5;
                local_240 = puVar5;
              }
              else {
                *local_240 = puVar5;
                local_23c = local_23c + 1;
                local_240 = puVar5;
              }
            }
          }
        }
LAB_004fc4ee:
        pfVar9 = (float *)pfVar9[1];
      } while (pfVar9 != (float *)0x0);
      FUN_0057b8e0("Script Profiler",(float)DAT_00b02e24,(float)local_250,1,0xffffffff);
      local_250 = local_250 + param_1;
      iVar6 = FUN_00585c10(1);
      if (*(char *)(iVar6 + 0x31) < '\x01') {
        _sprintf(local_218,"Active: %d (Quest: %d, Magic: %d)Seconds: %0.4f Percentage: %0.2f%%",
                 local_228,local_22c,local_230,(double)local_234,
                 (double)((local_234 / _DAT_00b33e9c) * 100.0));
        FUN_0057b8e0(local_218,(float)DAT_00b02e24,(float)local_250,1,0xffffffff);
        local_250 = local_250 + param_1;
        for (puVar5 = local_244; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
          piVar3 = (int *)puVar5[2];
          if ((char)piVar3[10] == '\0') {
            pcVar8 = "Magic: ";
            if (*(char *)((int)piVar3 + 0x29) == '\0') {
              pcVar8 = "";
            }
          }
          else {
            pcVar8 = "Quest: ";
          }
          local_24c = (float)piVar3[0xd];
          local_238 = (float)piVar3[0xd];
          uVar7 = (**(code **)(*piVar3 + 0xd4))
                            ((double)local_238,(double)((local_24c / _DAT_00b33e9c) * 100.0));
          _sprintf(local_218,"%s%s -> Seconds: %0.6f Percentage: %0.3f%%",pcVar8,uVar7);
          FUN_0057b8e0(local_218,(float)DAT_00b02e24,(float)local_250,1,0xffffffff);
          local_250 = local_250 + param_1;
          if (DAT_00b06c50 + -10 < local_250) break;
        }
        FUN_00573880();
        *local_224 = local_250;
        *local_21c = local_220;
      }
    }
    local_44 = 0xffffffff;
    FUN_004fb460();
  }
  *unaff_FS_OFFSET = local_4c;
  return;
}



void FUN_004fc6c0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x48);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar2 + 0x18));
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined2 *)(iVar2 + 0x1e) = 0;
        *(undefined2 *)(iVar2 + 0x1c) = 0;
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 0x4c);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0x4c) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



void FUN_004fc730(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  if (DAT_00b361b0 == in_ECX) {
    DAT_00b361b0 = 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x40);
  if (puVar1 != (undefined4 *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      puVar2 = (undefined4 *)*puVar1;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00401f20(*puVar2);
        *puVar2 = 0;
        *(undefined2 *)((int)puVar2 + 6) = 0;
        *(undefined2 *)(puVar2 + 1) = 0;
        FUN_00401f20(puVar2);
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x44);
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  return;
}



void FUN_004fc7a0(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(in_ECX + 0x18) = 0;
    FUN_004f9df0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(param_1 + 0x30));
    FUN_004fc730();
    FUN_004fc040(param_1 + 0x40,in_ECX + 0x40);
    FUN_004fc6c0();
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(int *)(in_ECX + 0x2c) != 0) {
        FUN_00401e40(*(int *)(in_ECX + 0x2c));
      }
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    else {
      FUN_004f9e50(*(int *)(param_1 + 0x2c));
    }
    FUN_0046ab80(*(uint *)(param_1 + 8) >> 3 & 0xffffff01);
  }
  return;
}



void FUN_004fc850(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x6c))();
  if (*(ushort *)(param_1 + 0x10) == 0xffff) {
    pcVar3 = *(char **)(param_1 + 0xc);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x10);
  }
  if (uVar4 == 0) {
    (**(code **)(*in_ECX + 0x8c))(1);
    return;
  }
  cVar2 = FUN_004fa5e0(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*in_ECX + 0xd8))(*(undefined4 *)(param_1 + 0xc));
    in_ECX[6] = *(int *)(param_1 + 0x28);
    in_ECX[7] = *(int *)(param_1 + 0x2c);
    in_ECX[8] = *(int *)(param_1 + 0x30);
    in_ECX[9] = *(int *)(param_1 + 0x34);
    in_ECX[10] = *(int *)(param_1 + 0x38);
    FUN_004f9df0(in_ECX[8],*(undefined4 *)(param_1 + 0x20));
    FUN_004fc730();
    FUN_004fc6c0();
    if (in_ECX[8] != 0) {
      FUN_004fc040(param_1 + 0x44,in_ECX + 0x10);
      FUN_004fa780(param_1 + 0x3c,in_ECX + 0x12);
    }
    (**(code **)(*in_ECX + 0x8c))(0);
    (**(code **)(*in_ECX + 0x90))(1);
  }
  return;
}



void FUN_004fc940(void)

{
  int in_ECX;
  
  FUN_00401e40(*(undefined4 *)(in_ECX + 0x30));
  FUN_00401e40(*(undefined4 *)(in_ECX + 0x2c));
  FUN_004fc6c0();
  FUN_004fc730();
  thunk_FUN_0046b170();
  return;
}



void FUN_004fc980(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2b48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a49da4;
  local_4 = 0;
  FUN_00401e40(in_ECX[0xc]);
  FUN_00401e40(in_ECX[0xb]);
  FUN_004fc6c0(uVar1);
  FUN_004fc730();
  thunk_FUN_0046b170();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004fca10(byte param_1)

{
  FUN_004fc980();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined ** FUN_004fca30(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if (param_1 - 0x100U < 0x83) {
    return &PTR_DAT_00b0b420 + (param_1 * 5 + -0x500) * 2;
  }
  if (param_1 - 0x1000U < 0x171) {
    ppuVar1 = &PTR_s_MessageBox_00b0c8c0 + (param_1 * 5 + -0x5000) * 2;
  }
  return ppuVar1;
}



undefined4 FUN_004fca70(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_00b0a2cc;
  do {
    iVar1 = __stricmp(ppuVar3[-1],param_1);
    if (iVar1 == 0) {
LAB_004fcb2b:
      param_1[0x204] = 'X';
      *(undefined4 *)(param_1 + 0x208) = (&DAT_00b0a2d0)[iVar2 * 10];
      return 1;
    }
    iVar1 = __stricmp(*ppuVar3,param_1);
    if (iVar1 == 0) goto LAB_004fcb2b;
    ppuVar3 = ppuVar3 + 10;
    iVar2 = iVar2 + 1;
  } while ((int)ppuVar3 < 0xb0a54c);
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_00b0c8c4;
  do {
    iVar1 = __stricmp(param_1,ppuVar3[-1]);
    if (iVar1 == 0) {
LAB_004fcb48:
      param_1[0x204] = 'X';
      *(undefined4 *)(param_1 + 0x208) = (&DAT_00b0c8c8)[iVar2 * 10];
      return 1;
    }
    iVar1 = __stricmp(param_1,*ppuVar3);
    if (iVar1 == 0) goto LAB_004fcb48;
    ppuVar3 = ppuVar3 + 10;
    iVar2 = iVar2 + 1;
  } while ((int)ppuVar3 < 0xb1026c);
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_00b0b424;
  while( true ) {
    iVar1 = __stricmp(param_1,ppuVar3[-1]);
    if (iVar1 == 0) break;
    iVar1 = __stricmp(param_1,*ppuVar3);
    if (iVar1 == 0) break;
    ppuVar3 = ppuVar3 + 10;
    iVar2 = iVar2 + 1;
    if (0xb0c89b < (int)ppuVar3) {
      return 0;
    }
  }
  param_1[0x204] = 'X';
  *(undefined4 *)(param_1 + 0x208) = (&DAT_00b0b428)[iVar2 * 10];
  return 1;
}



undefined4 FUN_004fcb90(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(param_1 + param_2);
  uVar2 = CONCAT31((int3)((uint)param_2 >> 8),*pcVar4);
  iVar5 = 0;
  if (*pcVar4 != '\0') {
    do {
      if ((char)uVar2 == 0x28) {
        iVar5 = iVar5 + 1;
        iVar3 = 0;
      }
      else {
        iVar3 = (char)uVar2 + -0x29;
        if (iVar3 == 0) {
          iVar5 = iVar5 + -1;
        }
      }
      pcVar1 = pcVar4 + 1;
      uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),*pcVar1);
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    if (iVar5 != 0) {
      return uVar2;
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



void FUN_004fcbd0(int param_1,int *param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *(char *)(*param_2 + param_1);
    if (((cVar1 != '\t') && (cVar1 != ' ')) && (cVar1 != ',')) break;
    *param_2 = *param_2 + 1;
  }
  return;
}



void FUN_004fcc00(void)

{
  void *in_ECX;
  
  *(undefined4 *)((int)in_ECX + 0x200) = 0;
  *(undefined4 *)((int)in_ECX + 0x20c) = 0;
  *(undefined1 *)((int)in_ECX + 0x204) = 0;
  *(undefined4 *)((int)in_ECX + 0x208) = 0;
  *(undefined4 *)((int)in_ECX + 0x210) = 0;
  _memset(in_ECX,0,0x200);
  return;
}



void FUN_004fcc40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x103] = 0;
  in_ECX[0x106] = 0;
  _memset(in_ECX + 1,0,0x200);
  _memset(in_ECX + 0x83,0,0x200);
  return;
}



void FUN_004fcc90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    while( true ) {
      cVar3 = FUN_0046cb60();
      if (cVar3 != '\0') break;
      FUN_00401f20(*puVar1);
      puVar2 = *(undefined4 **)(in_ECX + 0x54);
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x54) = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  return;
}



void FUN_004fcce0(void)

{
  if (DAT_00b10270 != 0x1171) {
    FUN_00404ec0("The script function list doesn\'t have all the names filled in.\r\n");
  }
  if (DAT_00b0c8a0 != 0x183) {
    FUN_00404ec0("The script console-command list doesn\'t have all the names filled in.\r\n");
  }
  return;
}



int FUN_004fcd20(uint param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  if ((param_1 != 0) && (param_1 <= *(uint *)(in_ECX + 0x2c))) {
    piVar1 = (int *)(in_ECX + 0x44);
    for (uVar2 = 1;
        (piVar1 != (int *)0x0 &&
        ((((int *)piVar1[1] != (int *)0x0 || (*piVar1 != 0)) && (uVar2 < param_1))));
        uVar2 = uVar2 + 1) {
      piVar1 = (int *)piVar1[1];
    }
    return *piVar1;
  }
  return 0;
}



void FUN_004fcd60(void)

{
  undefined4 *_Dst;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6c7b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  _Dst = (undefined4 *)thunk_FUN_00401aa0(0x4000,1);
  _memset(_Dst,0,0x4000);
  *(undefined4 **)(in_ECX + 0x20) = _Dst;
  *_Dst = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  FUN_004028d0(&DAT_00a2f7ec,0);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004fce30(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_11c;
  undefined2 local_118;
  undefined2 local_116;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6cab;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_11c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_c;
  _vsprintf(local_114,param_2,&stack0x0000000c);
  local_11c = 0;
  local_118 = 0;
  local_116 = 0;
  local_4 = 0;
  FUN_00402e30(&local_11c,"Script \'%s\', line %d:\n%s",*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x1c),local_114);
  uVar1 = local_11c;
  if (*(int *)(param_1 + 8) == 1) {
    FUN_00579b60();
  }
  else {
    FUN_004a7a60(local_11c,uVar2);
  }
  FUN_00401f20(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004fcf10(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[1] + *param_1;
  iVar6 = 0;
  bVar2 = true;
LAB_004fcf30:
  while( true ) {
    bVar4 = *(byte *)(iVar6 + iVar5);
    iVar6 = iVar6 + 1;
    if (bVar4 != 0) break;
LAB_004fcfae:
    if (bVar2) {
      if (bVar4 == 0) {
        return 0;
      }
    }
    else if (param_2[0x81] != 0) {
      do {
        iVar3 = param_2[0x81];
        cVar1 = *(char *)(iVar3 + 3 + (int)param_2);
        if ((cVar1 != ' ') && (cVar1 != '\t')) break;
        param_2[0x81] = iVar3 + -1;
        *(undefined1 *)(iVar3 + 3 + (int)param_2) = 0;
      } while (param_2[0x81] != 0);
      if (param_2[0x81] != 0) {
        *(undefined1 *)(param_2[0x81] + 4 + (int)param_2) = 0;
        return iVar6;
      }
    }
    *param_2 = *param_2 + 1;
    param_2[0x81] = 0;
    _memset(param_2 + 1,0,0x200);
  }
  if (bVar4 == 0xd) {
LAB_004fcfa1:
    if ((bVar4 != 0) && (*(char *)(iVar6 + iVar5) == '\n')) {
      iVar6 = iVar6 + 1;
    }
    goto LAB_004fcfae;
  }
  if (bVar4 == 0x3b) {
    do {
      if (bVar4 == 10) goto LAB_004fcfa1;
      bVar4 = *(byte *)(iVar6 + iVar5);
      iVar6 = iVar6 + 1;
    } while (bVar4 != 0);
    goto LAB_004fcfae;
  }
  if (0x1ff < param_2[0x81] + 1U) {
    FUN_004fce30(param_1,"Max script line length (%d characters) exceeded.",0x200);
    param_2[0x106] = 0x10;
    return 0;
  }
  iVar3 = _isalnum((uint)bVar4);
  if ((iVar3 == 0) && (bVar4 != 0x22)) goto LAB_004fcf74;
  bVar2 = false;
  goto LAB_004fcf7b;
LAB_004fcf74:
  if (!bVar2) {
LAB_004fcf7b:
    *(byte *)(param_2[0x81] + 4 + (int)param_2) = bVar4;
    param_2[0x81] = param_2[0x81] + 1;
  }
  goto LAB_004fcf30;
}



uint FUN_004fd060(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x44);
  do {
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar1 = (int *)piVar1[1];
  } while ((*(int *)(iVar2 + 8) != 0) || (*(int *)(iVar2 + 0xc) != 0));
  uVar3 = FUN_004fce30();
  return uVar3 & 0xffffff00;
}



uint FUN_004fd0a0(char *param_1,char param_2,char param_3)

{
  int *piVar1;
  char *_Str1;
  undefined4 uVar2;
  char *_Str2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  
  _Str2 = param_1;
  iVar8 = 1;
  for (piVar1 = (int *)(in_ECX + 0x44);
      (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != (undefined4 *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if ((_Str2 == (char *)0x0) || (_Str1 = *(char **)*piVar1, _Str1 == (char *)0x0)) {
      iVar4 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar4 = __stricmp(_Str1,_Str2);
    }
    if (iVar4 == 0) {
      *(int *)(_Str2 + 0x200) = iVar8;
      iVar8 = *piVar1;
      *(undefined4 *)(_Str2 + 0x210) = *(undefined4 *)(iVar8 + 8);
      if (param_2 != '\0') {
        uVar2 = *(undefined4 *)(_Str2 + 0x20c);
        *(undefined4 *)(*piVar1 + 0xc) = uVar2;
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      *(undefined4 *)(_Str2 + 0x20c) = *(undefined4 *)(*piVar1 + 0xc);
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
    iVar8 = iVar8 + 1;
  }
  puVar5 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 1) = 0;
    *(undefined2 *)((int)puVar5 + 6) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  if (param_2 != '\0') goto LAB_004fd252;
  iVar8 = __stricmp(_Str2,"Player");
  if (iVar8 == 0) {
    puVar5[2] = DAT_00b333c4;
LAB_004fd1dd:
    if (((*(int *)(in_ECX + 8) == 1) ||
        (iVar8 = FUN_009832e6(puVar5[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar8 == 0)) ||
       (cVar3 = FUN_004db4a0(), cVar3 != '\0')) goto LAB_004fd252;
    FUN_004fce30(in_ECX,"Non-persistent reference \'%s\' cannot be used in a script.",_Str2);
  }
  else {
    iVar8 = FUN_00447160(_Str2);
    puVar5[2] = iVar8;
    if (iVar8 != 0) goto LAB_004fd1dd;
    iVar8 = FUN_004474d0(_Str2);
    puVar5[2] = iVar8;
    if (iVar8 != 0) goto LAB_004fd1dd;
    param_1 = (char *)0x0;
    uVar6 = _strtoul(_Str2,&param_1,0x10);
    if (((uVar6 != 0) && (param_1 != (char *)0x0)) && (*param_1 == '\0')) {
      iVar8 = FUN_004471a0(uVar6);
      puVar5[2] = iVar8;
      if (iVar8 != 0) goto LAB_004fd1dd;
    }
  }
  if (param_3 == '\0') {
    FUN_00401f20(*puVar5);
    *puVar5 = 0;
    *(undefined2 *)((int)puVar5 + 6) = 0;
    *(undefined2 *)(puVar5 + 1) = 0;
    uVar7 = FUN_00401f20(puVar5);
    return uVar7 & 0xffffff00;
  }
LAB_004fd252:
  if (param_2 == '\0') {
    *(undefined4 *)(_Str2 + 0x210) = puVar5[2];
    puVar5[3] = 0;
  }
  else {
    puVar5[2] = 0;
    puVar5[3] = *(undefined4 *)(_Str2 + 0x20c);
  }
  FUN_004028d0(_Str2,0);
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  FUN_0067b1e0(puVar5);
  uVar2 = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(_Str2 + 0x200) = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



uint FUN_004fd2a0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  
  bVar2 = false;
  piVar3 = (int *)(param_1 + 0x50);
  while ((piVar3 != (int *)0x0 && (((int *)piVar3[1] != (int *)0x0 || (*piVar3 != 0))))) {
    puVar1 = (undefined4 *)*piVar3;
    switch(puVar1[0x104]) {
    case 0x10:
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x1c) = *puVar1;
        uVar4 = FUN_004fce30(param_1,"Nested begin/end blocks are not allowed.");
        return uVar4 & 0xffffff00;
      }
      bVar2 = true;
      break;
    case 0x11:
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x1c) = *puVar1;
        uVar4 = FUN_004fce30(param_1,"End without matching Begin.");
        return uVar4 & 0xffffff00;
      }
      bVar2 = false;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x1d:
    case 0x1f:
      break;
    default:
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x1c) = *puVar1;
        uVar4 = FUN_004fce30(param_1,"All script commands must be inside a begin/end block.");
        return uVar4 & 0xffffff00;
      }
    }
    piVar3 = (int *)piVar3[1];
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}



int FUN_004fd370(int param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  bVar3 = false;
  piVar5 = (int *)(param_1 + 0x50);
  if ((int *)(param_1 + 0x50) != (int *)0x0) {
    do {
      piVar1 = (int *)piVar5[1];
      if ((piVar1 == (int *)0x0) && (*piVar5 == 0)) break;
      if (bVar3) {
        return iVar4;
      }
      if (*param_2 < *(uint *)*piVar5) {
        uVar2 = ((uint *)*piVar5)[0x104];
        if ((int)uVar2 < 0x15) {
          if ((int)uVar2 < 0x12) {
            if (uVar2 == 0x10) {
              FUN_004fce30(param_1,"Nested begin/end blocks are not allowed.");
              return -1;
            }
            if (uVar2 != 0x11) goto LAB_004fd3c7;
            bVar3 = true;
          }
        }
        else {
          if (uVar2 == 0xffff) {
            FUN_004fce30(param_1,"Begin without matching end starting on line %d.",*param_2);
            return -1;
          }
LAB_004fd3c7:
          iVar4 = iVar4 + 1;
        }
      }
      piVar5 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (bVar3) {
      return iVar4;
    }
  }
  FUN_004fce30(param_1,"Mismatched begin/end block starting on line %d.",*param_2);
  return -1;
}



int FUN_004fd430(int param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  iVar3 = 0;
  iVar5 = 0;
  bVar2 = false;
  piVar4 = (int *)(param_1 + 0x50);
  if (piVar4 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar4[1];
      if ((piVar1 == (int *)0x0) && (*piVar4 == 0)) break;
      if (bVar2) {
        return iVar3;
      }
      if (*(uint *)*piVar4 <= *param_2) goto LAB_004fd4e7;
      uVar7 = ((uint *)*piVar4)[0x104];
      if ((int)uVar7 < 0x19) {
        if (0x16 < (int)uVar7) {
          if (iVar5 == 0) {
            bVar2 = true;
            goto LAB_004fd4e7;
          }
          goto LAB_004fd4e4;
        }
        if ((int)uVar7 < 0x12) goto LAB_004fd4e4;
        if (0x14 < (int)uVar7) {
          if (uVar7 != 0x16) goto LAB_004fd4e4;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 1;
          if (9 < iVar5) {
            uVar7 = 10;
            pcVar6 = "Max nesting of %d exceeded.";
            goto LAB_004fd4fd;
          }
        }
      }
      else {
        if (uVar7 == 0x19) {
          if (iVar5 == 0) {
            bVar2 = true;
            goto LAB_004fd4e7;
          }
          iVar5 = iVar5 + -1;
        }
        else if (uVar7 == 0xffff) {
          FUN_004fce30(param_1,"Mismatched if/else/endif.");
          return -1;
        }
LAB_004fd4e4:
        iVar3 = iVar3 + 1;
      }
LAB_004fd4e7:
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (bVar2) {
      return iVar3;
    }
  }
  uVar7 = *param_2;
  pcVar6 = "Mismatched if/else/endif block starting on line %d.";
LAB_004fd4fd:
  FUN_004fce30(param_1,pcVar6,uVar7);
  return -1;
}



void FUN_004fd520(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x44);
  if (puVar1 != (undefined4 *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      puVar2 = (undefined4 *)*puVar1;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00401f20(*puVar2);
        *puVar2 = 0;
        *(undefined2 *)((int)puVar2 + 6) = 0;
        *(undefined2 *)(puVar2 + 1) = 0;
        FUN_00401f20(puVar2);
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x48);
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x48) = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  return;
}



void FUN_004fd580(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x3c);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar2 + 0x18));
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined2 *)(iVar2 + 0x1e) = 0;
        *(undefined2 *)(iVar2 + 0x1c) = 0;
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 0x40);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0x40) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



undefined1 FUN_004fd5f0(char *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  
  pcVar4 = param_1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  if (*(int *)(param_1 + 0x210) != 0) {
    iVar5 = FUN_009832e6(*(int *)(param_1 + 0x210),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if (iVar5 == 0) {
      iVar5 = FUN_009832e6(*(undefined4 *)(param_1 + 0x210),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0)
      ;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
    }
    else {
      FUN_004d70e0();
      iVar5 = FUN_004d7240();
    }
    if (iVar5 != 0) {
      pcVar4 = param_1 + 0x20c;
      cVar3 = FUN_004faa90(param_1,pcVar4);
      param_1[0x204] = cVar3;
      if (cVar3 != '\0') {
        return 1;
      }
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return 0;
    }
    param_1[0x20c] = '\0';
    param_1[0x20d] = '\0';
    param_1[0x20e] = '\0';
    param_1[0x20f] = '\0';
    return 0;
  }
  pcVar1 = param_1 + 0x20c;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  for (piVar6 = (int *)(in_ECX + 0x3c);
      (piVar6 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar6, puVar2 != (undefined4 *)0x0));
      piVar6 = (int *)piVar6[1]) {
    iVar5 = __strnicmp((char *)puVar2[6],param_1,(int)pcVar4 - (int)(param_1 + 1));
    if (iVar5 == 0) {
      cVar3 = *(char *)(((int)pcVar4 - (int)(param_1 + 1)) + puVar2[6]);
      iVar5 = _isalnum((int)cVar3);
      if (((iVar5 == 0) && (cVar3 != '-')) && (cVar3 != '_')) {
        param_1[0x204] = (-(*(char *)(puVar2 + 4) != '\0') & 0xdU) + 0x66;
        *(undefined4 *)pcVar1 = *puVar2;
        return 1;
      }
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    cVar3 = FUN_004faa90(param_1,pcVar1);
    param_1[0x204] = cVar3;
    if (cVar3 != '\0') {
      return 1;
    }
  }
  iVar5 = FUN_004474d0(param_1);
  if ((iVar5 != 0) && (cVar3 = FUN_004fd0a0(param_1,0,0), cVar3 != '\0')) {
    param_1[0x204] = 'G';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    return 1;
  }
  param_1[0x204] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return 0;
}



int FUN_004fd7c0(undefined4 param_1,char *param_2,int param_3,int *param_4,char param_5,
                undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  piVar1 = param_4;
  do {
    FUN_004fcbd0(param_3,piVar1);
    pcVar9 = (char *)(*piVar1 + param_3);
    iVar10 = 0;
    if (*pcVar9 == '\"') {
      pcVar8 = (char *)(*piVar1 + param_3);
      cVar2 = *pcVar8;
      param_4 = (int *)0x0;
      if (cVar2 == '\0') {
LAB_004fd94a:
        FUN_004fce30(param_1,"Syntax Error.  Mismatched quotes.");
        return 0;
      }
      do {
        if (cVar2 == '\"') {
          param_4 = (int *)((int)param_4 + 1);
        }
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if (((int)param_4 < 2) || (((uint)param_4 & 1) != 0)) goto LAB_004fd94a;
      pcVar8 = _strchr(pcVar9,0x22);
      *pcVar8 = ' ';
      pcVar3 = _strchr((char *)(*piVar1 + param_3),0x22);
      pcVar9 = pcVar8 + 1;
      *pcVar3 = '\0';
      iVar10 = (int)param_2 - (int)pcVar9;
      do {
        cVar2 = *pcVar9;
        pcVar9[iVar10] = cVar2;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      pcVar9 = param_2;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar10 = (int)pcVar9 - (int)(param_2 + 1);
      *pcVar8 = '\"';
      *pcVar3 = '\"';
      *piVar1 = *piVar1 + iVar10 + 2;
      if (*(char *)(*piVar1 + param_3) != '.') {
        param_2[iVar10] = '\0';
        if (iVar10 != 0) {
LAB_004fd9dd:
          if (param_5 == '\0') {
            return iVar10;
          }
          if (*(int *)(param_2 + 0x200) != 0) {
            cVar2 = FUN_004fd5f0(param_2);
            if ((cVar2 == '\0') && (cVar2 = FUN_004fca70(param_2), cVar2 == '\0')) {
              FUN_004fce30(param_1,"Unknown variable or function \'%s\'.",param_2);
              return 0;
            }
            iVar4 = FUN_004fcd20(*(undefined4 *)(param_2 + 0x200));
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0)
            ;
            iVar6 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0)
            ;
            if (iVar5 == 0) {
              if (iVar6 == 0) {
                if ((char)param_6 == '\0') {
                  uVar7 = (**(code **)(**(int **)(iVar4 + 8) + 0xd4))();
                  FUN_004fce30(param_1,
                               "Syntax error.  Invalid reference \'%s\' (only quests and object references are allowed in this context)."
                               ,uVar7);
                  return 0;
                }
                goto LAB_004fdac6;
              }
            }
            else if (iVar6 == 0) goto LAB_004fdac6;
            if (param_2[0x204] == 'X') {
              FUN_004fce30(param_1,"Syntax error.  Functions may not be called on quests.");
              return 0;
            }
          }
LAB_004fdac6:
          if ((param_2[0x204] == '\0') && (cVar2 = FUN_004fd5f0(param_2), cVar2 == '\0')) {
            FUN_004fca70(param_2);
          }
          return iVar10;
        }
        goto LAB_004fd8d3;
      }
      if (param_5 == '\0') {
        FUN_004fce30(param_1,"Syntax Error.  Reference not allowed in this context.");
        return 0;
      }
      if (*(int *)(param_2 + 0x200) != 0) {
        FUN_004fce30(param_1,"Syntax Error.  Invalid reference syntax.");
        return 0;
      }
      *piVar1 = *piVar1 + 1;
    }
    else {
LAB_004fd8d3:
      while( true ) {
        iVar4 = _isalnum((int)*(char *)(*piVar1 + param_3));
        if ((((iVar4 == 0) && (cVar2 = *(char *)(param_3 + *piVar1), cVar2 != '.')) &&
            (cVar2 != '-')) && (cVar2 != '_')) goto LAB_004fd9dd;
        param_2[iVar10] = *(char *)(param_3 + *piVar1);
        *piVar1 = *piVar1 + 1;
        if ((param_2[iVar10] == '.') && (iVar4 = _isalpha((int)*param_2), iVar4 != 0)) break;
        param_2[iVar10 + 1] = '\0';
        iVar10 = iVar10 + 1;
      }
      if (param_5 == '\0') {
        FUN_004fce30(param_1,"Syntax Error.  Reference not allowed in this context.");
        return 0;
      }
      if (*(int *)(param_2 + 0x200) != 0) {
        FUN_004fce30(param_1,"Syntax Error.  Invalid reference syntax.");
        return 0;
      }
      param_2[iVar10] = '\0';
    }
    cVar2 = FUN_004fd0a0(param_2,0,param_6);
    if (cVar2 == '\0') {
      FUN_004fce30(param_1,"Unknown object \'%s\'.",param_2);
      return 0;
    }
    param_5 = '\x01';
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_004fdaf0(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  uint local_64c;
  int local_648;
  char *local_644;
  undefined4 *local_640;
  uint local_63c;
  undefined *local_638;
  undefined1 local_634 [512];
  int local_434;
  char local_430;
  int local_42c;
  int local_428;
  undefined4 local_424;
  undefined4 local_420;
  char local_41c [516];
  int iStack_218;
  undefined1 auStack_214 [512];
  size_t local_14;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_64c;
  local_648 = param_1;
  local_640 = param_2;
  local_644 = param_3;
  pcVar6 = param_3;
  do {
    cVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar5 != '\0');
  local_63c = (int)pcVar6 - (int)(param_3 + 1);
  iVar9 = 0;
  local_64c = 0;
  if (local_63c != 0) {
    do {
      iVar7 = _isalpha((int)param_3[local_64c]);
      if ((iVar7 == 0) && (param_3[local_64c] != '\"')) goto LAB_004fdd92;
      local_434 = 0;
      local_428 = 0;
      local_430 = '\0';
      local_42c = 0;
      local_424 = 0;
      _memset(local_634,0,0x200);
      iVar7 = FUN_004fd7c0(local_648,local_634,param_3,&local_64c,1,1);
      if (iVar7 == 0) {
        return 0;
      }
      if (local_434 != 0) {
        if (local_430 == 'G') {
          *(undefined1 *)(param_4 + iVar9) = 0x47;
        }
        else {
          *(undefined1 *)(param_4 + iVar9) = 0x72;
        }
        *(undefined2 *)(param_4 + iVar9 + 1) = (undefined2)local_434;
        iVar9 = iVar9 + 3;
      }
      if (local_428 == 0) {
        if (local_430 == 'X') {
          *(undefined1 *)(param_4 + iVar9) = 0x58;
          *(undefined2 *)(param_4 + iVar9 + 1) = (undefined2)local_42c;
          iVar7 = iVar9 + 3;
          if (local_42c - 0x100U < 0x83) {
            ppuVar8 = &PTR_DAT_00b0b420 + (local_42c - 0x100U) * 10;
          }
          else {
            if (0x170 < local_42c - 0x1000U) goto LAB_004fddd8;
            ppuVar8 = &PTR_s_MessageBox_00b0c8c0 + (local_42c - 0x1000U) * 10;
          }
          if (ppuVar8 == (undefined **)0x0) {
LAB_004fddd8:
            FUN_004fce30(local_648,"Syntax Error.  Undefined function \'%s\'.",local_634);
            return 0;
          }
          if (((*(char *)(ppuVar8 + 4) != '\0') && (*(char *)(local_648 + 0x38) != '\0')) &&
             (local_434 == 0)) {
            FUN_004fce30(local_648,
                         "Reference function \'%s\' requires explicit reference in quest script.",
                         local_634);
            return 0;
          }
          local_638 = ppuVar8[5];
          if (local_638 == (undefined *)0x0) {
            *(undefined2 *)(param_4 + iVar7) = 0;
            goto LAB_004fdd8f;
          }
          pcVar2 = (code *)ppuVar8[7];
          uVar1 = *(undefined2 *)((int)ppuVar8 + 0x12);
          FUN_004fcc40();
          pcVar6 = local_644 + local_64c;
          iVar3 = -(int)pcVar6;
          do {
            cVar5 = *pcVar6;
            pcVar6[(int)(local_41c + iVar3)] = cVar5;
            pcVar6 = pcVar6 + 1;
          } while (cVar5 != '\0');
          local_420 = *local_640;
          local_14 = 0;
          cVar5 = (*pcVar2)(uVar1,local_638,&local_420,local_648);
          sVar4 = local_14;
          if (cVar5 == '\0') {
            return 0;
          }
          *(short *)(param_4 + iVar7) = (short)local_14;
          _memcpy((void *)(param_4 + iVar9 + 5),auStack_214,local_14);
          local_64c = local_64c + iStack_218;
          iVar9 = iVar9 + 5 + sVar4;
          param_3 = local_644;
        }
        else if (local_430 != 'G') {
          if ((local_434 != 0) || (cVar5 = FUN_004fd0a0(local_634,0,0), cVar5 == '\0')) {
            FUN_004fce30(local_648,"Syntax Error.  Unknown command \'%s\'.",local_634);
            return 0;
          }
          *(undefined1 *)(param_4 + iVar9) = 0x5a;
          iVar7 = iVar9 + 1;
          *(undefined2 *)(param_4 + iVar7) = (undefined2)local_434;
          goto LAB_004fdd8f;
        }
      }
      else {
        *(char *)(param_4 + iVar9) = local_430;
        iVar7 = iVar9 + 1;
        *(undefined2 *)(param_4 + iVar7) = (undefined2)local_428;
LAB_004fdd8f:
        iVar9 = iVar7 + 2;
      }
LAB_004fdd92:
      if (local_64c < local_63c) {
        *(char *)(param_4 + iVar9) = param_3[local_64c];
        iVar9 = iVar9 + 1;
      }
      local_64c = local_64c + 1;
    } while (local_64c < local_63c);
  }
  *(undefined1 *)(param_4 + 1 + iVar9) = 0;
  return iVar9;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_004fde30(ushort param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  size_t _Size;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined **ppuVar10;
  double dVar11;
  undefined4 uVar12;
  int local_230;
  int local_22c;
  undefined4 local_228;
  undefined4 local_224;
  ushort *local_220;
  uint local_21c;
  char local_218 [512];
  int local_18;
  char local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_230;
  local_22c = param_2;
  local_228 = param_4;
  local_220 = (ushort *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3);
  *(undefined4 *)(param_3 + 0x208) = 0;
  *local_220 = param_1;
  *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
  local_21c = (uint)param_1;
  local_230 = 0;
  puVar4 = (undefined4 *)0x0;
  if (local_21c != 0) {
    puVar4 = (undefined4 *)0x0;
    do {
      cVar3 = (&DAT_00b0a54c)[*(int *)(local_22c + 4 + (int)puVar4 * 0xc) * 8];
      piVar1 = (int *)(local_22c + 4 + (int)puVar4 * 0xc);
      local_224 = CONCAT31(local_224._1_3_,cVar3);
      local_18 = 0;
      local_c = 0;
      local_14 = '\0';
      local_10 = 0;
      local_8 = 0;
      _memset(local_218,0,0x200);
      _Size = FUN_004fd7c0(local_228,local_218,param_3 + 4,param_3 + 0x208,local_224,0);
      uVar2 = local_228;
      if (_Size == 0) {
        puVar4 = (undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc);
        if (*(char *)(local_22c + 8 + (short)(ushort)local_230 * 0xc) == '\0') {
          uVar9 = FUN_004fce30(local_228,"Missing parameter %s.\r\nCompiled script not saved!",
                               *puVar4);
          return uVar9 & 0xffffff00;
        }
        *local_220 = (ushort)local_230;
        goto LAB_004fecc2;
      }
      if ((cVar3 == '\0') && ((local_18 != 0 || (local_14 != '\0')))) {
        uVar9 = FUN_004fce30(local_228,
                             "Parameter %s may not be a variable.\r\nCompiled script not saved!",
                             *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
        return uVar9 & 0xffffff00;
      }
      if (((&DAT_00b0a54d)[*piVar1 * 8] != '\0') &&
         ((cVar3 = FUN_004fd0a0(local_218,0,0), cVar3 == '\0' || (local_18 == 0)))) {
        uVar9 = FUN_004fce30(uVar2,
                             "Item \'%s\' not found for parameter %s.\r\nCompiled script not saved!"
                             ,local_218,*(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc))
        ;
        return uVar9 & 0xffffff00;
      }
      iVar6 = *piVar1;
      if ((&DAT_00b0a54d)[iVar6 * 8] != '\0') {
        switch(iVar6) {
        case 3:
          if ((local_c == 0) &&
             ((local_8 == 0 || (cVar3 = FUN_00469520(*(undefined1 *)(local_8 + 4)), cVar3 == '\0')))
             ) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid inventory object \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 4:
        case 6:
        case 0x18:
        case 0x1a:
          if (local_c == 0) {
            piVar5 = (int *)FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
            if (piVar5 == (int *)0x0) {
              uVar9 = FUN_004fce30(uVar2,
                                   "Invalid object reference \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                   ,local_218,
                                   *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
              return uVar9 & 0xffffff00;
            }
            iVar6 = *piVar1;
            if (iVar6 == 6) {
              cVar3 = (**(code **)(*piVar5 + 400))();
              if (cVar3 == '\0') {
                uVar9 = FUN_004fce30(uVar2,
                                     "Invalid actor \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                     ,local_218,
                                     *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
                return uVar9 & 0xffffff00;
              }
            }
            else if (iVar6 == 0x18) {
              iVar6 = (**(code **)(*piVar5 + 0x170))();
              if (iVar6 != DAT_00b35ea8) {
                uVar9 = FUN_004fce30(uVar2,
                                     "Invalid map marker \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                     ,local_218,
                                     *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
                return uVar9 & 0xffffff00;
              }
            }
            else if ((iVar6 == 0x1a) && (iVar6 = FUN_004d6d40(), iVar6 == 0)) {
              uVar9 = FUN_004fce30(uVar2,
                                   "Invalid container reference \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                   ,local_218,
                                   *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
              return uVar9 & 0xffffff00;
            }
          }
          break;
        default:
          uVar9 = FUN_004a7a60("Param type \'%d\' (referenced object) unimplemented in ScriptCompiler::StandardCompile."
                               ,*(undefined4 *)(local_22c + 4 + (short)(ushort)local_230 * 0xc));
          return uVar9 & 0xffffff00;
        case 7:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              ((iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0), iVar6 == 0 &&
               (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b084f0,0), iVar6 == 0)))
              ))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid spell item \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 9:
          iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
          if ((local_c == 0) && ((iVar6 == 0 || (cVar3 = FUN_004c97f0(), cVar3 == '\0')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid interior cell \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0xb:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid magic item \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0xc:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\n')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid sound \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0xd:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '9')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid topic \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0xe:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != ';')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid info \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0xf:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\t')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid race \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x10:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\x05')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid class \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x11:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\x06')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid faction \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x13:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\x04')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid global \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x14:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != ' ')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid furniture object \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x15:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03268,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid object \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x19:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03de4,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid actor base \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x1b:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid worldspace \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x1d:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid package \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x1e:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053e0,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid combat style \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x1f:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              (iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03534,0), iVar6 == 0))))
          {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid effect setting \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x20:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '\x11')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid birthsign \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x22:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '-')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid weather \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x23:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != '#')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid NPC \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x24:
          if ((local_c == 0) &&
             ((local_8 == 0 ||
              ((*(char *)(local_8 + 4) != '#' && (*(char *)(local_8 + 4) != '\x06')))))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid owner \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          break;
        case 0x25:
          if ((local_c == 0) && ((local_8 == 0 || (*(char *)(local_8 + 4) != 'C')))) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid Effect Shader \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
        }
        *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x72;
        *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
        *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (undefined2)local_18;
        goto LAB_004fec37;
      }
      switch(iVar6) {
      case 0:
        *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)_Size;
        *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
        _memcpy((void *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)),local_218,_Size);
        *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + _Size;
        goto LAB_004fec3e;
      case 1:
      case 2:
      case 0x17:
        if (local_18 != 0) {
          if (local_14 == 'G') {
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x47;
          }
          else {
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x72;
          }
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (undefined2)local_18;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
        }
        if (local_14 != 'G') {
          if (local_c != 0) {
            *(char *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = local_14;
            *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
            *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (undefined2)local_c;
            break;
          }
          if ((*piVar1 == 1) || (*piVar1 == 0x17)) {
            iVar6 = FUN_0047d550(local_218);
            if (iVar6 == 0) {
              uVar12 = *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc);
LAB_004fedcf:
              uVar9 = FUN_004fce30(uVar2,
                                   "Unknown variable \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                   ,local_218,uVar12);
              return uVar9 & 0xffffff00;
            }
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x6e;
            *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
            lVar7 = _atol(local_218);
            *(long *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = lVar7;
            *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 4;
          }
          else {
            iVar6 = FUN_0047d5b0(local_218);
            if (iVar6 == 0) {
              uVar12 = *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc);
              goto LAB_004fedcf;
            }
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x7a;
            *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
            dVar11 = _atof(local_218);
            *(double *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = dVar11;
            *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 8;
          }
        }
        goto LAB_004fec3e;
      default:
        uVar9 = FUN_004a7a60("Param type \'%d\' unimplemented in ScriptCompiler::StandardCompile.",
                             *(undefined4 *)(local_22c + 4 + (short)(ushort)local_230 * 0xc));
        return uVar9 & 0xffffff00;
      case 5:
        iVar6 = 0;
        while (iVar8 = __stricmp((&PTR_s_Strength_00b0a1a8)[iVar6],local_218), iVar8 != 0) {
          iVar6 = iVar6 + 1;
          if (0x47 < iVar6) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Invalid actor value \'%s\' for parameter %s.\r\nCompiled script not saved!"
                                 ,local_218,
                                 *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
        }
        *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)iVar6;
        break;
      case 8:
        iVar6 = _toupper((int)local_218[0]);
        cVar3 = (char)iVar6;
        if (((cVar3 != 'X') && (cVar3 != 'Y')) && (cVar3 != 'Z')) {
          uVar9 = FUN_004fce30(uVar2,
                               "Axis (X,Y,Z) required for parameter %s.\r\nCompiled script not saved!"
                               ,*(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
          return uVar9 & 0xffffff00;
        }
        *(char *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = cVar3;
        *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
        goto LAB_004fec3e;
      case 10:
        iVar6 = 0;
        ppuVar10 = &PTR_DAT_00b102e0;
        while (iVar8 = __stricmp(local_218,*ppuVar10), iVar8 != 0) {
          ppuVar10 = ppuVar10 + 9;
          iVar6 = iVar6 + 1;
          if (0xb108eb < (int)ppuVar10) goto LAB_004feb82;
        }
        if (iVar6 == 0xff) {
LAB_004feb82:
          uVar9 = FUN_004fce30(local_228,
                               "Animation group \"%s\" not found for parameter %s.\r\nCompiled script not saved!"
                               ,local_218,
                               *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
          return uVar9 & 0xffffff00;
        }
        *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)iVar6;
        break;
      case 0x12:
        iVar6 = __stricmp(local_218,PTR_DAT_00b10bc4);
        if (iVar6 == 0) {
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = 0;
        }
        else {
          iVar6 = __stricmp(local_218,PTR_s_Female_00b10bc8);
          if (iVar6 != 0) {
            uVar9 = FUN_004fce30(uVar2,
                                 "Sex (Male, Female) required for parameter %s.\r\nCompiled script not saved!"
                                 ,*(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
            return uVar9 & 0xffffff00;
          }
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = 1;
        }
        break;
      case 0x1c:
        iVar6 = FUN_0047d550(local_218);
        if (iVar6 == 0) {
          uVar9 = FUN_004fce30(uVar2,
                               "Invalid crime type \'%s\' for parameter %s.  Crime type must be a numeric value from 0-%d.\r\nCompiled script not saved!"
                               ,local_218,
                               *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc),5);
          return uVar9 & 0xffffff00;
        }
        uVar9 = _atol(local_218);
        if (5 < uVar9) {
          uVar9 = FUN_004fce30(uVar2,
                               "Invalid crime type \'%s\' for parameter %s.  Crime type must be a numeric value from 0-%d.\r\nCompiled script not saved!"
                               ,local_218,
                               *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc),5);
          return uVar9 & 0xffffff00;
        }
        *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)uVar9;
        break;
      case 0x21:
        iVar6 = 0;
        while (iVar8 = __stricmp(local_218,(&PTR_s_Activator_00b081d0)[iVar6]), iVar8 != 0) {
          iVar6 = iVar6 + 1;
          if (0x23 < iVar6) goto LAB_004febf1;
        }
        if ((&DAT_00b081ac)[iVar6] == 0) {
LAB_004febf1:
          uVar9 = FUN_004fce30(uVar2,
                               "Form Type \"%s\" not found for parameter %s.\r\nCompiled script not saved!"
                               ,local_218,
                               *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
          return uVar9 & 0xffffff00;
        }
        *(ushort *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) =
             (ushort)(byte)(&DAT_00b081ac)[iVar6];
      }
LAB_004fec37:
      *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
LAB_004fec3e:
      local_230 = local_230 + 1;
      puVar4 = (undefined4 *)(int)(short)local_230;
    } while ((int)puVar4 < (int)local_21c);
  }
  if (*(uint *)(param_3 + 0x208) < *(uint *)(param_3 + 0x204)) {
    uVar9 = FUN_004fce30(local_228,"Expected end of line.\r\nCompiled script not saved!",
                         *(undefined4 *)(local_22c + (short)(ushort)local_230 * 0xc));
    uVar9 = uVar9 & 0xffffff00;
  }
  else {
LAB_004fecc2:
    uVar9 = CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  return uVar9;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_004fef80(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_1900;
  int local_18fc;
  undefined4 local_18f8;
  char local_18f4 [512];
  int local_16f4;
  char local_16f0;
  undefined4 local_16ec;
  int local_16e8;
  undefined4 local_16e4;
  char local_16e0 [512];
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined4 local_14d8;
  undefined4 local_14d4;
  undefined4 local_14d0;
  char local_14cc [524];
  undefined4 local_12c0 [1199];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_1900;
  lVar7 = 0;
  *(undefined4 *)(param_3 + 0x208) = 0;
  *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = 1;
  *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
  local_18f8 = param_4;
  local_14e0 = 0;
  local_14d4 = 0;
  local_14dc = 0;
  local_14d8 = 0;
  local_14d0 = 0;
  _memset(local_16e0,0,0x200);
  sVar2 = FUN_004fd7c0(param_4,local_16e0,param_3 + 4,(undefined4 *)(param_3 + 0x208),0,0);
  if (sVar2 == 0) {
    FUN_004fce30(param_4,"No message text.");
    uVar3 = 0;
  }
  else {
    *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)sVar2;
    *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
    _memcpy((void *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3),local_16e0,sVar2);
    *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + sVar2;
    iVar8 = 0;
    pcVar4 = local_16e0;
    local_1900 = 0;
    if (local_16e0[0] != '\0') {
      do {
        if (*pcVar4 == '%') {
          if (pcVar4[1] == '%') {
            pcVar4 = pcVar4 + 1;
          }
          else {
            iVar8 = iVar8 + 1;
          }
        }
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      local_1900 = iVar8;
      if (9 < iVar8) {
        FUN_004fce30(param_4,"Max variables of %d exceeded.",10);
        return 0;
      }
    }
    *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)local_1900;
    *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
    local_18fc = 0;
    if (0 < local_1900) {
      do {
        local_16f4 = 0;
        local_16e8 = 0;
        local_16f0 = '\0';
        local_16ec = 0;
        local_16e4 = 0;
        _memset(local_18f4,0,0x200);
        iVar8 = FUN_004fd7c0(param_4,local_18f4,param_3 + 4,param_3 + 0x208,1,0);
        if (iVar8 == 0) {
          FUN_004fce30(param_4,"Too few variables in MessageBox parameters; expected %d, found %d.",
                       local_1900,local_18fc);
          return 0;
        }
        if (local_16f0 == '\0') {
          FUN_004fce30(param_4,"Unknown variable \'%s\' in MessageBox parameters.",local_18f4);
          return 0;
        }
        if (local_16f4 != 0) {
          if (local_16f0 == 'G') {
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x47;
          }
          else {
            *(undefined1 *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = 0x72;
          }
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (undefined2)local_16f4;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
        }
        if (local_16f0 != 'G') {
          if (local_16e8 == 0) {
            FUN_004fce30(param_4,
                         "Unknown compiler error in MessageBoxCompile.  Failed to parse variable \'%s\'."
                         ,local_18f4);
            return 0;
          }
          *(char *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = local_16f0;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 1;
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (undefined2)local_16e8;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
        }
        local_18fc = local_18fc + 1;
      } while (local_18fc < local_1900);
    }
    if (param_5 == '\0') {
      local_16f4 = 0;
      local_16e8 = 0;
      local_16f0 = 0;
      local_16ec = 0;
      local_16e4 = 0;
      _memset(local_18f4,0,0x200);
      iVar8 = FUN_004fd7c0(param_4,local_18f4,param_3 + 4,param_3 + 0x208,0,0);
      if (0 < iVar8) {
        iVar8 = FUN_0047d550(local_18f4);
        if (iVar8 == 0) {
          FUN_004fce30(param_4,"Message time must be an integer.\r\nCompiled script not saved!");
          return 0;
        }
        lVar7 = _atol(local_18f4);
      }
      *(long *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = lVar7;
      *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 4;
    }
    else {
      iVar8 = 0;
      local_1900 = 9;
      puVar9 = local_12c0;
      do {
        puVar9[-3] = 0;
        *puVar9 = 0;
        *(undefined1 *)(puVar9 + -2) = 0;
        puVar9[-1] = 0;
        puVar9[1] = 0;
        _memset(puVar9 + -0x83,0,0x200);
        puVar9 = puVar9 + 0x85;
        local_1900 = local_1900 + -1;
      } while (-1 < local_1900);
      pcVar4 = local_14cc;
      do {
        iVar5 = FUN_004fd7c0(local_18f8,pcVar4,param_3 + 4,param_3 + 0x208,0,0);
        if (iVar5 < 1) break;
        iVar8 = iVar8 + 1;
        pcVar4 = pcVar4 + 0x214;
      } while (iVar8 < 10);
      *(short *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = (short)iVar8;
      *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
      if (0 < iVar8) {
        pcVar4 = local_14cc;
        local_1900 = iVar8;
        do {
          *(undefined2 *)(*(int *)(param_3 + 0x40c) + 0x20c + param_3) = 1;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
          pcVar6 = pcVar4;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          sVar2 = (int)pcVar6 - (int)(pcVar4 + 1);
          *(short *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)) = (short)sVar2;
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + 2;
          _memcpy((void *)(param_3 + 0x20c + *(int *)(param_3 + 0x40c)),pcVar4,sVar2);
          *(int *)(param_3 + 0x40c) = *(int *)(param_3 + 0x40c) + sVar2;
          pcVar4 = pcVar4 + 0x214;
          local_1900 = local_1900 + -1;
        } while (local_1900 != 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_004ff440(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6ceb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_004fcc90(uVar1);
  FUN_004fd520();
  FUN_004fd580();
  FUN_00401e40(*(undefined4 *)(in_ECX + 0x20));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_004ff4c0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 local_430;
  undefined1 local_42c [512];
  int local_22c;
  char local_228;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218 [532];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_430;
  pcVar4 = (char *)*param_1;
  pcVar7 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  if ((uint)param_1[1] < (uint)((int)pcVar4 - (int)pcVar7)) {
    iVar5 = FUN_00401f00(0x41c);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_004fcc40();
    }
    *piVar6 = param_1[7] + 1;
    iVar5 = FUN_004fcf10(param_1,piVar6);
    if (iVar5 != 0) {
      param_1[1] = param_1[1] + iVar5;
      local_22c = 0;
      local_220 = 0;
      local_228 = '\0';
      local_224 = 0;
      local_21c = 0;
      _memset(local_42c,0,0x200);
      piVar2 = piVar6 + 0x82;
      piVar1 = piVar6 + 1;
      iVar5 = FUN_004fd7c0(param_1,local_42c,piVar1,piVar2,1,1);
      if (iVar5 == 0) {
        FUN_004fce30(param_1,"Syntax Error\r\n%s\r\nCould not parse this line.",piVar1);
        FUN_00401f20(piVar6);
      }
      else {
        piVar6[0x105] = local_22c;
        if (local_228 == 'X') {
          if ((0x82 < local_224 - 0x100U) || (param_1[2] == 1)) {
            pcVar7 = (char *)(*piVar2 + 4 + (int)piVar6);
            piVar6[0x104] = local_224;
            piVar8 = piVar1;
            do {
              cVar3 = *pcVar7;
              *(char *)piVar8 = cVar3;
              pcVar7 = pcVar7 + 1;
              piVar8 = (int *)((int)piVar8 + 1);
            } while (cVar3 != '\0');
            piVar6[0x81] = piVar6[0x81] - *piVar2;
            param_1[7] = *piVar6;
            if (piVar6[0x104] == 0x1d) {
              local_430 = 0;
              FUN_004fcc00();
              iVar5 = FUN_004fd7c0(param_1,local_218,piVar1,&local_430,0,0);
              if (iVar5 == 0) {
                FUN_004fce30(param_1,"Syntax Error.  Missing script name.");
                param_1[5] = 1;
                FUN_00401f20(piVar6);
                return 0xffff;
              }
              FUN_004028d0(local_218,0);
            }
            FUN_0067b1e0(piVar6);
            return piVar6[0x104];
          }
          FUN_004fce30(param_1,"Script command \"%s\" is a console-only command.",local_42c);
        }
        else {
          param_1[7] = param_1[7] + 1;
          FUN_004fce30(param_1,"Script command \"%s\" not found.",local_42c);
          param_1[5] = 0xd;
        }
        FUN_00401f20(piVar6);
      }
      return 0xffff;
    }
    param_1[5] = piVar6[0x106];
    FUN_00401f20(piVar6);
    return 0xffff;
  }
  return 0xffff;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004ff710(undefined **param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  void *_Src;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  undefined **local_115c;
  undefined4 *local_1158;
  undefined **local_1154;
  char local_1150 [512];
  int local_f50;
  char local_f4c;
  undefined4 local_f48;
  int local_f44;
  undefined4 local_f40;
  int local_f3c;
  undefined4 local_82c;
  char local_828 [520];
  undefined1 auStack_620 [512];
  size_t local_420;
  undefined1 local_410 [512];
  undefined1 local_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6d29;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_115c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffee94;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar9 = 0;
  local_1154 = param_1;
  local_f50 = 0;
  local_f44 = 0;
  local_f4c = '\0';
  local_f48 = 0;
  local_f40 = 0;
  _memset(local_1150,0,0x200);
  FUN_004f32e0(uVar4);
  iVar7 = param_3[0x104];
  piVar6 = param_3 + 0x82;
  local_4 = 0;
  param_3[0x103] = 0;
  *piVar6 = 0;
  switch(iVar7) {
  case 0x10:
    iVar7 = FUN_004fd7c0(param_2,local_1150,param_3 + 1,piVar6,0,0);
    if (iVar7 == 0) {
      FUN_004fce30(param_2,"Syntax Error.  Missing block type in \'begin\' command.");
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
    }
    else {
      local_115c = &PTR_DAT_00b0af4c;
      do {
        iVar7 = __stricmp(local_115c[-1],local_1150);
        if ((iVar7 == 0) || (iVar7 = __stricmp(*local_115c,local_1150), iVar7 == 0)) {
          *(undefined2 *)((int)param_3 + param_3[0x103] + 0x20c) = (&DAT_00b0af50)[iVar9 * 0x14];
          param_3[0x103] = param_3[0x103] + 2;
          iVar7 = FUN_004fd370(param_2,param_3);
          if (iVar7 == -1) {
            pcVar10 = "Mismatched begin/end block.";
            goto LAB_004ff8b8;
          }
          *(undefined4 *)((int)param_3 + param_3[0x103] + 0x20c) = 0x55555555;
          iVar7 = *(int *)(param_2 + 0x24) + param_3[0x103];
          param_3[0x103] = param_3[0x103] + 4;
          DAT_00b361f8 = iVar7;
          if (iVar9 * 0x28 == -0xb0af48) goto LAB_004ff9ff;
          if (((&DAT_00b0af58)[iVar9 * 0x28] == '\0') || (*(char *)(param_2 + 0x38) == '\0')) {
            local_1158 = (undefined4 *)(&DAT_00b0af5c)[iVar9 * 10];
            if (local_1158 != (undefined4 *)0x0) {
              local_115c = (undefined **)(uint)(ushort)(&DAT_00b0af5a)[iVar9 * 0x14];
              pcVar1 = (code *)(&PTR_FUN_00b0af64)[iVar9 * 10];
              FUN_004fcc40();
              pcVar10 = (char *)(*piVar6 + 4 + (int)param_3);
              iVar7 = -(int)pcVar10;
              do {
                cVar3 = *pcVar10;
                pcVar10[(int)(local_828 + iVar7)] = cVar3;
                pcVar10 = pcVar10 + 1;
              } while (cVar3 != '\0');
              local_82c = *param_3;
              local_420 = 0;
              cVar3 = (*pcVar1)(local_115c,local_1158,&local_82c,param_2);
              if (cVar3 == '\0') goto LAB_004ff8c1;
              _memcpy((void *)((int)param_3 + param_3[0x103] + 0x20c),auStack_620,local_420);
              iVar7 = DAT_00b361f8;
              param_3[0x103] = param_3[0x103] + local_420;
            }
LAB_004ff9ff:
            if (iVar7 != 0) {
              *(int *)((int)param_3 + iVar7 + (0x20c - *(int *)(param_2 + 0x24))) =
                   param_3[0x103] + *(int *)(param_2 + 0x24);
            }
            goto switchD_004ff7df_caseD_19;
          }
          FUN_004fce30(param_2,"Invalid block type for quest script.");
          local_4 = 0xffffffff;
          FUN_0060d0a0();
          uVar5 = 0;
          goto LAB_005000c7;
        }
        local_115c = local_115c + 10;
        iVar9 = iVar9 + 1;
      } while ((int)local_115c < 0xb0b424);
      FUN_004fce30(param_2,"Syntax Error.  Invalid block type in \'begin\' command.");
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
    }
    goto LAB_005000c7;
  case 0x11:
    if (DAT_00b361f8 == 0) {
      FUN_004fce30(param_2,"Syntax Error.  Failed to store the \'begin\' \'end\' jump block.");
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
      goto LAB_005000c7;
    }
    piVar6 = (int *)(*(int *)(param_2 + 0x20) + 4 + DAT_00b361f8);
    *piVar6 = *(int *)(param_2 + 0x24) - *piVar6;
    DAT_00b361f8 = 0;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x1f:
    iVar7 = FUN_004fd7c0(param_2,local_1150,param_3 + 1,piVar6,0,0);
    if (iVar7 == 0) {
      FUN_004fce30(param_2,"Missing variable name in variable declaration.");
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
      goto LAB_005000c7;
    }
    local_1158 = (undefined4 *)FUN_00401f00(0x20);
    local_4._0_1_ = 1;
    if (local_1158 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00517a80();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((param_3[0x104] == 0x14) || (param_3[0x104] == 0x1f)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(piVar6 + 4) = uVar2;
    FUN_004028d0(local_1150,0);
    cVar3 = FUN_004faa90(piVar6[6],piVar6);
    if (cVar3 == '\0') {
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
      *piVar6 = *(int *)(param_2 + 0x34);
    }
    FUN_0067b1e0(piVar6);
    if (param_3[0x104] == 0x1f) {
      local_f44 = *piVar6;
      FUN_004fd0a0(local_1150,1,0);
    }
    break;
  case 0x15:
    iVar7 = FUN_004fd7c0(param_2,local_1150,param_3 + 1,piVar6,1,1);
    if (iVar7 == 0) {
      FUN_004fce30(param_2,"Missing variable name in set command.");
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
      goto LAB_005000c7;
    }
    if (local_f4c != '\0') {
      FUN_004fcc00();
      FUN_004fd7c0(param_2,&local_82c,param_3 + 1,piVar6,0,0);
      iVar7 = _tolower((int)(char)local_82c);
      if (iVar7 == 0x74) {
        iVar7 = _tolower((int)local_82c._1_1_);
        if (iVar7 == 0x6f) {
          if (local_f50 != 0) {
            if (local_f4c == 'G') {
              *(undefined1 *)((int)param_3 + param_3[0x103] + 0x20c) = 0x47;
            }
            else {
              *(undefined1 *)((int)param_3 + param_3[0x103] + 0x20c) = 0x72;
            }
            param_3[0x103] = param_3[0x103] + 1;
            *(undefined2 *)(param_3[0x103] + 0x20c + (int)param_3) = (undefined2)local_f50;
            param_3[0x103] = param_3[0x103] + 2;
          }
          if (local_f44 != 0) {
            *(char *)((int)param_3 + param_3[0x103] + 0x20c) = local_f4c;
            param_3[0x103] = param_3[0x103] + 1;
            *(undefined2 *)(param_3[0x103] + 0x20c + (int)param_3) = (undefined2)local_f44;
            param_3[0x103] = param_3[0x103] + 2;
          }
          cVar3 = FUN_004fcb90(param_3 + 1,*piVar6);
          if (cVar3 != '\0') {
            FUN_004fcbd0(param_3 + 1,piVar6);
            _memset(local_410,0,0x200);
            local_1154 = (undefined **)0x0;
            local_1154 = (undefined **)
                         FUN_004fdaf0(param_2,param_3,*piVar6 + 4 + (int)param_3,local_410);
            if (local_1154 == (undefined **)0x0) {
              pcVar10 = "Syntax Error.  Missing expression in set command.";
            }
            else {
              _Src = (void *)FUN_004f4080(local_410,&local_1154);
              if (local_f3c == 0) {
                *(undefined2 *)((int)param_3 + param_3[0x103] + 0x20c) = local_1154._0_2_;
                param_3[0x103] = param_3[0x103] + 2;
                _memcpy((void *)(param_3[0x103] + 0x20c + (int)param_3),_Src,(size_t)local_1154);
                ppuVar8 = local_1154;
                goto LAB_004ffdb3;
              }
              pcVar10 = "InfixToPostfix Error.";
            }
            goto LAB_004ff8b8;
          }
          goto LAB_004ff8c1;
        }
      }
      pcVar10 = "Syntax Error.  Missing \"to\" in set command.";
      goto LAB_004ff8b8;
    }
    FUN_004fce30(param_2,"Unknown variable \'%s\'.",local_1150);
    goto LAB_004ff8c1;
  case 0x16:
  case 0x18:
    local_1154 = (undefined **)0x0;
    cVar3 = FUN_004fcb90(param_3 + 1,0);
    if (cVar3 == '\0') {
      pcVar10 = "Mismatched parentheses.";
    }
    else {
      FUN_004fcbd0(param_3 + 1,&local_1154);
      _memset(local_210,0,0x200);
      local_115c = (undefined **)0x0;
      local_115c = (undefined **)
                   FUN_004fdaf0(param_2,param_3,(int)(param_3 + 1) + (int)local_1154,local_210);
      if (local_115c == (undefined **)0x0) goto LAB_004ff8c1;
      local_1158 = (undefined4 *)FUN_004f4080(local_210,&local_115c);
      if (local_f3c == 0) {
        iVar7 = FUN_004fd430(param_2,param_3);
        if (iVar7 == -1) goto LAB_004ffeb4;
        *(short *)((int)param_3 + param_3[0x103] + 0x20c) = (short)iVar7;
        param_3[0x103] = param_3[0x103] + 2;
        *(undefined2 *)(param_3[0x103] + 0x20c + (int)param_3) = local_115c._0_2_;
        param_3[0x103] = param_3[0x103] + 2;
        _memcpy((void *)(param_3[0x103] + 0x20c + (int)param_3),local_1158,(size_t)local_115c);
        ppuVar8 = local_115c;
LAB_004ffdb3:
        param_3[0x103] = param_3[0x103] + (int)ppuVar8;
        break;
      }
      pcVar10 = (&PTR_s_Expression_Error__NOERROR_00b09dc0)[local_f3c];
    }
    goto LAB_004ff8b8;
  case 0x17:
    iVar7 = FUN_004fd430(param_2,param_3);
    if (iVar7 != -1) {
      *(short *)((int)param_3 + param_3[0x103] + 0x20c) = (short)iVar7;
      param_3[0x103] = param_3[0x103] + 2;
      break;
    }
LAB_004ffeb4:
    pcVar10 = "Mismatched if/then/else block.";
    goto LAB_004ff8b8;
  case 0x19:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    break;
  default:
    if (iVar7 - 0x100U < 0x83) {
      ppuVar8 = &PTR_DAT_00b0b420 + (iVar7 - 0x100U) * 10;
LAB_004fff75:
      if (ppuVar8 != (undefined **)0x0) {
        if (*(char *)(ppuVar8 + 4) != '\0') {
          if ((*(char *)(param_2 + 0x38) != '\0') && (param_3[0x105] == 0)) {
            pcVar10 = "Reference function requires explicit reference in quest script.";
            goto LAB_004ff8b8;
          }
          if ((*(char *)(ppuVar8 + 4) != '\0') && (param_3[0x105] != 0)) {
            local_1158 = (undefined4 *)FUN_004fcd20(param_3[0x105]);
            iVar7 = FUN_009832e6(local_1158[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
            if ((iVar7 == 0) && (local_1158[3] == 0)) {
              FUN_004fce30(param_2,
                           "Syntax error.  Invalid reference \'%s\' (only object references and reference variables are allowed in this context)."
                           ,*local_1158);
              goto LAB_004ff8c1;
            }
          }
        }
        if ((ppuVar8[5] == (undefined *)0x0) ||
           (cVar3 = (*(code *)ppuVar8[7])
                              (*(undefined2 *)((int)ppuVar8 + 0x12),ppuVar8[5],param_3,param_2),
           cVar3 != '\0')) break;
        goto LAB_004ff8c1;
      }
    }
    else if (iVar7 - 0x1000U < 0x171) {
      ppuVar8 = &PTR_s_MessageBox_00b0c8c0 + (iVar7 - 0x1000U) * 10;
      goto LAB_004fff75;
    }
    FUN_004fce30(param_2,"Unknown function code %d.",iVar7);
    goto LAB_004ff8c1;
  }
switchD_004ff7df_caseD_19:
  iVar7 = param_3[0x104];
  if ((iVar7 < 0x12) || ((0x14 < iVar7 && (iVar7 != 0x1f)))) {
    if (0x3fff < (uint)(*(int *)(param_2 + 0x24) + 10 + param_3[0x103])) {
      pcVar10 = "MAX_SCRIPT_SIZE exceeded.\r\nCompiled script not saved!";
LAB_004ff8b8:
      FUN_004fce30(param_2,pcVar10);
LAB_004ff8c1:
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 0;
      goto LAB_005000c7;
    }
    if (param_3[0x105] != 0) {
      *(undefined2 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x20)) = 0x1c;
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 2;
      *(undefined2 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x20)) =
           *(undefined2 *)(param_3 + 0x105);
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 2;
    }
    *(undefined2 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x20)) =
         *(undefined2 *)(param_3 + 0x104);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 2;
    *(undefined2 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x20)) =
         *(undefined2 *)(param_3 + 0x103);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 2;
    _memcpy((void *)(*(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x24)),param_3 + 0x83,
            param_3[0x103]);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + param_3[0x103];
  }
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  uVar5 = 1;
LAB_005000c7:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}


