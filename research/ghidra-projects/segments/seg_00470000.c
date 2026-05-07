
void FUN_00470040(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c650;
  FUN_00401f20(in_ECX[1]);
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  return;
}



void FUN_00470070(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 4);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 8);
  }
  if (uVar4 != 0) {
    if (*(ushort *)(in_ECX + 8) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 4);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 8);
    }
    puVar5 = *(undefined1 **)(in_ECX + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    thunk_FUN_0046ae40(param_1,puVar5,uVar4 + 1);
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004700e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if (*(int *)(param_2 + 0x254) != 0) {
      uStack_18 = 0x470110;
      iVar1 = -*(int *)(param_2 + 0x254);
      *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
      *(undefined1 **)((int)&uStack_1c + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)&uStack_20 + iVar1) = 0x47011c;
      FUN_00450c20();
      *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
      *(undefined1 **)((int)&uStack_1c + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)&uStack_20 + iVar1) = 0x470127;
      FUN_004028d0();
      return;
    }
    uStack_18 = *(undefined4 *)(param_1 + 4);
    uStack_1c = 0x470144;
    FUN_00401f20();
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  return;
}



undefined4 FUN_004701b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b031d0,0);
  if (iVar2 == 0) {
    return 1;
  }
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 4);
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar3;
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 8);
  }
  if (uVar5 == 0) {
    if (*(ushort *)(iVar2 + 8) == 0xffff) {
      pcVar4 = *(char **)(iVar2 + 4);
      pcVar3 = pcVar4 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar3;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar2 + 8);
    }
    if (uVar5 == 0) {
      return 0;
    }
  }
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 4);
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar3;
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 8);
  }
  if (*(ushort *)(iVar2 + 8) == 0xffff) {
    pcVar4 = *(char **)(iVar2 + 4);
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar4 - (int)pcVar3;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar2 + 8);
  }
  if (uVar5 == uVar6) {
    pcVar3 = *(char **)(iVar2 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar4 = *(char **)(in_ECX + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar2 = __stricmp(pcVar4,pcVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



undefined1 * FUN_004702d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b031d0,0);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)FUN_00469440(param_1,param_2);
  }
  else {
    puVar2 = *(undefined1 **)(iVar1 + 4);
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00a2f7ec;
  }
  return puVar2;
}



void FUN_00470310(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c66c;
  return;
}



void FUN_00470330(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c66c;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}



void FUN_004703b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c680;
  return;
}



void FUN_004703c0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  piVar1 = (int *)FUN_009832e6();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004703f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x40))();
    return;
  }
  return;
}



undefined4 FUN_00470400(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 8) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_00470420(byte param_1)

{
  int in_ECX;
  
  if ((param_1 & 8) != 0) {
    FUN_0045b9a0(in_ECX + 4,4);
  }
  return;
}



void FUN_00470440(uint param_1)

{
  undefined4 uStack00000008;
  
  if ((param_1 & 8) != 0) {
    uStack00000008 = 4;
    FUN_004534d0();
    return;
  }
  return;
}



void FUN_00470470(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c680;
  in_ECX[1] = 0;
  return;
}



undefined4 FUN_00470520(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c24,0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0xc))(0);
    uVar2 = FUN_009828c0();
    return uVar2;
  }
  return 0xffffffff;
}



void FUN_00470580(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c6a0;
  return;
}



void FUN_004705a0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = &PTR_LAB_00a3c6a0;
  return;
}



float10 FUN_00470620(int param_1)

{
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0x13:
    case 0x1b:
    case 0x26:
    case 0x27:
    case 0x2a:
      param_1 = param_1 + 0x68;
      break;
    case 0x14:
    case 0x16:
      param_1 = param_1 + 0x54;
      break;
    case 0x15:
    case 0x21:
      param_1 = param_1 + 0x78;
      break;
    case 0x17:
      param_1 = param_1 + 100;
      break;
    default:
      goto switchD_0047063b_caseD_18;
    case 0x19:
    case 0x28:
      param_1 = param_1 + 0x70;
      break;
    case 0x1a:
      param_1 = param_1 + 0x60;
      break;
    case 0x22:
      param_1 = param_1 + 0x6c;
    }
    if (param_1 != 0) {
      return (float10)*(float *)(param_1 + 4);
    }
  }
switchD_0047063b_caseD_18:
  return (float10)-1.0;
}



void FUN_004706d0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x90) = param_1;
  return;
}



undefined4 FUN_004706e0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 5) {
    return *(undefined4 *)(in_ECX + 0xa0);
  }
  if (param_1 == 6) {
    return *(undefined4 *)(in_ECX + 0xac);
  }
  return *(undefined4 *)(in_ECX + 0xa0 + param_1 * 4);
}



uint FUN_00470720(int param_1)

{
  int in_ECX;
  
  if (param_1 == 5) {
    return (uint)*(ushort *)(in_ECX + 0x3c);
  }
  if (param_1 + -6 == 0) {
    return (uint)*(ushort *)(in_ECX + 0x42);
  }
  return CONCAT22((short)((uint)(param_1 + -6) >> 0x10),*(undefined2 *)(in_ECX + 0x3c + param_1 * 2)
                 );
}



undefined4 FUN_00470750(int param_1)

{
  int in_ECX;
  
  if (param_1 == 5) {
    return *(undefined4 *)(in_ECX + 0x48);
  }
  if (param_1 == 6) {
    return *(undefined4 *)(in_ECX + 0x54);
  }
  return *(undefined4 *)(in_ECX + 0x48 + param_1 * 4);
}



void FUN_00470780(undefined4 param_1)

{
  undefined4 local_4;
  
  FUN_004534d0(&local_4,2);
  if ((short)local_4 != 0) {
    FUN_00458e50(param_1,local_4);
  }
  return;
}



void FUN_004707b0(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = param_2 * in_ECX[2];
  return;
}



void FUN_004707e0(float param_1)

{
  float *in_ECX;
  
  param_1 = 1.0 / param_1;
  *in_ECX = param_1 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_1;
  in_ECX[2] = param_1 * in_ECX[2];
  return;
}



void FUN_00470820(undefined4 param_1)

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
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,*(undefined2 *)(puVar3 + 1));
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(*in_ECX + 0x10))(puVar3);
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr);
  return;
}



undefined4 FUN_004708b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    cVar3 = (**(code **)(*in_ECX + 8))(param_1,*(undefined2 *)(puVar1 + 1));
    if (cVar3 != '\0') {
      *(undefined4 *)(in_ECX[2] + iVar4 * 4) = *puVar1;
      (**(code **)(*in_ECX + 0x10))(puVar1);
      (**(code **)(*in_ECX + 0x18))(puVar1);
      in_ECX[3] = in_ECX[3] + -1;
      return 1;
    }
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      cVar3 = (**(code **)(*in_ECX + 8))(param_1,*(undefined2 *)(puVar2 + 1));
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



uint FUN_00470960(undefined4 *param_1)

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
    uVar3 = (**(code **)(*in_ECX + 8))(param_1,*(undefined2 *)(puVar1 + 1));
    if ((char)uVar3 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  uVar2 = puVar1[2];
  *param_1 = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



void FUN_004709c0(int *param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_2 = (short)piVar3[1];
  *param_3 = piVar3[2];
  if (*piVar3 != 0) {
    *param_1 = *piVar3;
    return;
  }
  iVar1 = (**(code **)(*in_ECX + 4))((short)piVar3[1]);
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



void FUN_00470ab0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = DAT_00b24260;
  in_ECX[1] = DAT_00b24264;
  in_ECX[2] = DAT_00b24268;
  in_ECX[3] = DAT_00b3cba4;
  in_ECX[4] = DAT_00b3cba8;
  in_ECX[5] = DAT_00b3cbac;
  in_ECX[6] = DAT_00b3cbb0;
  in_ECX[7] = 0xff7fffff;
  return;
}



undefined4 FUN_00470b00(void)

{
  float *in_ECX;
  
  if (*in_ECX != -3.4028235e+38) {
    return 1;
  }
  return 0;
}



void FUN_00470b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_006c9ba0(param_2,param_3,param_4,param_5,param_6,0);
  return;
}



void FUN_00470b50(undefined4 param_1,undefined4 param_2)

{
  FUN_006c9cb0(param_2,0);
  return;
}



void FUN_00470ba0(int param_1)

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
  *(int *)(in_ECX + 4) = param_1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00470bdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedIncrement((LONG *)(param_1 + 4));
    return;
  }
  return;
}



int FUN_00470c40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *_Str2;
  char *_Str1;
  int iVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 4) + 4);
  _Str2 = _strrchr(*(char **)(param_1 + 8),0x5c);
  if (_Str2 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    _Str1 = _strrchr(*(char **)(iVar2 + 8),0x5c);
    if ((_Str1 != (char *)0x0) && (iVar3 = __stricmp(_Str1,_Str2), iVar3 == 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}



float10 FUN_00470ce0(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)(*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x2c));
}



void FUN_00470d00(undefined4 param_1)

{
  FUN_00470960(param_1,&param_1);
  return;
}



uint FUN_00470d20(uint param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  int *local_4;
  
  local_4 = in_ECX;
  do {
    cVar1 = FUN_00470960(param_1,&local_4);
    if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_4 + 0x10))(0xffffffff), iVar2 != 0)) {
      return param_1 & 0xffff;
    }
    if ((param_1 & 0xf00) != 0) {
      iVar2 = FUN_0051a9e0(param_1);
      if (iVar2 == 3) {
LAB_00470dca:
        cVar1 = FUN_00470960(param_1 & 0xf2ff | 0x200,&local_4);
        if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_4 + 0x10))(0xffffffff), iVar2 != 0)) {
          return param_1 & 0xf0ff | 0x200;
        }
      }
      else {
        if (iVar2 == 4) {
          if ((((param_1 & 0xf000) != 0x2000) &&
              (cVar1 = FUN_00470960(param_1 & 0xf3ff | 0x300,&local_4), cVar1 != '\0')) &&
             (iVar2 = (**(code **)(*local_4 + 0x10))(0xffffffff), iVar2 != 0)) {
            return param_1 & 0xf0ff | 0x300;
          }
          goto LAB_00470dca;
        }
        if (iVar2 == 5) goto LAB_00470dca;
      }
      cVar1 = FUN_00470960(param_1 & 0xf0ff,&local_4);
      if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_4 + 0x10))(0xffffffff), iVar2 != 0)) {
        return param_1 & 0xf0ff;
      }
    }
    if ((short)param_1 != 0) {
      iVar2 = FUN_0051aa00(param_1);
      switch(iVar2 + -7) {
      case 0:
        uVar4 = param_1 & 0xff03 | 3;
        break;
      case 1:
        uVar4 = param_1 & 0xff04 | 4;
        break;
      case 2:
        uVar4 = param_1 & 0xff05 | 5;
        break;
      case 3:
        uVar4 = param_1 & 0xff06 | 6;
        break;
      default:
        goto switchD_00470e4a_default;
      }
      if ((short)uVar4 != 0xff) {
        uVar3 = FUN_00470d20(uVar4,1);
        if ((char)uVar3 == (char)uVar4) {
          return uVar3 & 0xffff;
        }
      }
    }
switchD_00470e4a_default:
    if (param_2 != '\0') {
      return 0;
    }
    if ((param_1 & 0xf000) != 0) {
      uVar4 = FUN_00470d20(param_1 & 0xfff,1);
      if ((char)uVar4 == (char)param_1) {
        return uVar4 & 0xffff;
      }
    }
    if ((char)param_1 == '\0') {
      return 0;
    }
    param_1 = param_1 & 0xff00;
    param_2 = '\0';
  } while( true );
}



uint FUN_00470f40(void)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  int *in_EAX;
  int iVar4;
  int in_ECX;
  byte bVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = (int *)(in_ECX + 0xa0);
  if ((*(int *)(in_ECX + 0xa0) != 0) && (in_EAX = (int *)0x0, *(int *)(in_ECX + 0x24) != 0)) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 8);
    iVar4 = FUN_0051aa00(*(undefined2 *)(in_ECX + 0x3c));
    in_EAX = (int *)(iVar4 + -3);
    if ((int *)(iVar4 + -3) < (int *)0xc) {
      iVar4 = 0;
      bVar5 = 0;
      iVar6 = 5;
      piVar7 = piVar1;
      do {
        if (*piVar7 != 0) {
          bVar3 = FUN_0049fd20(uVar2);
          if (bVar5 < bVar3) {
            iVar4 = *piVar7;
            bVar5 = bVar3;
          }
        }
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      in_EAX = piVar1;
      if (iVar4 == *piVar1) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



void FUN_00470fc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 5) {
    FUN_00470fc0(4,param_2);
    FUN_00470fc0(0,param_2);
  }
  else if (param_1 != 6) goto LAB_0047101d;
  FUN_00470fc0(1,param_2);
  FUN_00470fc0(2,param_2);
  param_1 = 3;
LAB_0047101d:
  if ((((*(int *)(in_ECX + 0x98) != 0) && (param_1 < 5)) &&
      (iVar1 = *(int *)(in_ECX + 0xa0 + param_1 * 4), iVar1 != 0)) && (*(int *)(iVar1 + 0x44) != 0))
  {
    if (*(int *)(iVar1 + 0x58) != 0) {
      FUN_00470b50(*(int *)(iVar1 + 0x58),param_2);
    }
    if (*(int *)(*(int *)(in_ECX + 0xa0 + param_1 * 4) + 0x44) == 5) {
      FUN_006c4480(param_2);
    }
    FUN_006c9cb0(param_2,0);
  }
  *(undefined4 *)(in_ECX + 0xa0 + param_1 * 4) = 0;
  *(undefined2 *)(in_ECX + 0x3c + param_1 * 2) = 0xff;
  *(undefined2 *)(in_ECX + 0x70 + param_1 * 2) = 0xff;
  *(undefined4 *)(in_ECX + 0x48 + param_1 * 4) = 0xffffffff;
  return;
}



float10 FUN_004710b0(int param_1)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  float local_4;
  
  local_4 = 1.0;
  if (param_1 != 0) {
    fVar1 = (float10)FUN_0088f1b0(param_1,0);
    if ((float)fVar1 < 1.0) {
      local_4 = (float)fVar1;
    }
    if (param_1 != *(int *)(in_ECX + 8)) {
      fVar1 = (float10)FUN_004710b0(*(undefined4 *)(param_1 + 0x1c));
      fVar2 = (float10)local_4;
      local_4 = (float)fVar1;
      if (fVar2 <= (float10)(float)fVar1) {
        return fVar2;
      }
    }
  }
  return (float10)local_4;
}



short FUN_00471130(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar3 = sVar6 + 4;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    sVar3 = 0xd;
    if (*(int *)(param_2 + 0x10) != 0) {
      sVar3 = FUN_0049f550();
      sVar3 = sVar3 + 0xe;
    }
    sVar3 = sVar6 + 6 + sVar3;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xf57,"..\\TES Shared\\Animation.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar3,*puVar1,uVar5);
      return sVar3;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar3,0xf57,
                 "..\\TES Shared\\Animation.cpp");
  }
  return sVar3;
}



undefined4 FUN_004711f0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xcc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),*piVar1 == 1);
}



undefined4 FUN_00471210(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xcc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),*piVar1 == 2);
}



void FUN_00471230(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(in_ECX + 0x18);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(in_ECX + 0x1c);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(in_ECX + 0x20);
  }
  FUN_0047c990(param_1,*(undefined4 *)(in_ECX + 8));
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x54);
      param_2[1] = *(undefined4 *)(iVar1 + 0x58);
      param_2[2] = *(undefined4 *)(iVar1 + 0x5c);
    }
    iVar1 = *(int *)(in_ECX + 8);
    *(undefined4 *)(iVar1 + 0x54) = DAT_00b3f9a8;
    *(undefined4 *)(iVar1 + 0x58) = DAT_00b3f9ac;
    *(undefined4 *)(iVar1 + 0x5c) = DAT_00b3f9b0;
  }
  return;
}



void FUN_004712d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0047cc80();
    return;
  }
  return;
}



void FUN_004712e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aebc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c700;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a3c6b4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00471340(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c6c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00471360(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c6c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00471390(float *param_1)

{
  int iVar1;
  float *in_ECX;
  
  iVar1 = __isnan((double)*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00983ffd((double)*param_1);
    if (iVar1 != 0) {
      iVar1 = __isnan((double)param_1[1]);
      if (iVar1 == 0) {
        iVar1 = FUN_00983ffd((double)param_1[1]);
        if (iVar1 != 0) {
          iVar1 = __isnan((double)param_1[2]);
          if (iVar1 == 0) {
            iVar1 = FUN_00983ffd((double)param_1[2]);
            if (iVar1 != 0) {
              *in_ECX = *param_1;
              in_ECX[1] = param_1[1];
              in_ECX[2] = param_1[2];
            }
          }
        }
      }
    }
  }
  return;
}



void FUN_00471430(float *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = __isnan((double)param_1[1]);
  if (iVar1 == 0) {
    iVar1 = FUN_00983ffd((double)param_1[1]);
    if (iVar1 != 0) {
      iVar1 = __isnan((double)param_1[2]);
      if (iVar1 == 0) {
        iVar1 = FUN_00983ffd((double)param_1[2]);
        if (iVar1 != 0) {
          iVar1 = __isnan((double)param_1[3]);
          if (iVar1 == 0) {
            iVar1 = FUN_00983ffd((double)param_1[3]);
            if (iVar1 != 0) {
              iVar1 = __isnan((double)*param_1);
              if (iVar1 == 0) {
                iVar1 = FUN_00983ffd((double)*param_1);
                if (iVar1 != 0) {
                  *(float *)(in_ECX + 0xc) = *param_1;
                  *(float *)(in_ECX + 0x10) = param_1[1];
                  *(float *)(in_ECX + 0x14) = param_1[2];
                  *(float *)(in_ECX + 0x18) = param_1[3];
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



void FUN_00471560(float param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = __isnan((double)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00983ffd((double)param_1);
    if (iVar1 != 0) {
      *(float *)(in_ECX + 0x1c) = param_1;
    }
  }
  return;
}



uint FUN_004715a0(uint param_1)

{
  char cVar1;
  
  cVar1 = FUN_0055e000(param_1,&param_1);
  return -(uint)(cVar1 != '\0') & param_1;
}



void FUN_004715c0(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    do {
      FUN_006c9cb0(param_1,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x54));
  }
  return;
}



undefined4 FUN_00471600(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  if (*(char *)(in_ECX + 0x6c) != '\0') {
    uVar1 = 0;
    if (*(ushort *)(in_ECX + 0x46) != 0) {
      piVar2 = *(int **)(in_ECX + 0x40);
      do {
        if (*piVar2 != 0) {
          return *(undefined4 *)((*(int **)(in_ECX + 0x40))[uVar1] + 0x60);
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(ushort *)(in_ECX + 0x46));
    }
  }
  return 0;
}



void FUN_00471640(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    local_4 = 0xff7fffff;
    local_20[0] = DAT_00b24260;
    local_20[1] = DAT_00b24264;
    local_20[2] = DAT_00b24268;
    local_20[3] = DAT_00b3cba4;
    local_10 = DAT_00b3cba8;
    local_c = DAT_00b3cbac;
    local_8 = DAT_00b3cbb0;
    puVar2 = local_20;
    puVar3 = (undefined4 *)(in_ECX + 0x30);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(in_ECX + 0x54) = 1;
    return;
  }
  FUN_00471390();
  FUN_00471430();
  iVar1 = __isnan(1.0);
  if (iVar1 == 0) {
    iVar1 = FUN_00983ffd(0x3ff0000000000000);
    if (iVar1 != 0) {
      *(undefined4 *)(in_ECX + 0x4c) = 0x3f800000;
    }
  }
  *(undefined1 *)(in_ECX + 0x54) = 1;
  return;
}



undefined4 FUN_00471710(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}



undefined4 FUN_00471730(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xb8) == 0) && (*(int *)(in_ECX + 0xb4) == 0)) {
    return 0;
  }
  return 1;
}



void FUN_00471760(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aec00;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c72c;
  if (in_ECX[1] != 0) {
    local_4 = 1;
    FUN_004028d0(*(undefined4 *)(in_ECX[1] + 8),0);
    puVar1 = (undefined4 *)in_ECX[1];
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    FUN_00438540(0,1);
    FUN_00401f20(0);
  }
  *in_ECX = &PTR_LAB_00a3c6e4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00471820(byte param_1)

{
  FUN_004712e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00471840(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009aec30;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c758;
  local_4 = 0;
  if (in_ECX[1] != 0) {
    puVar1 = *(undefined4 **)(in_ECX[1] + 4);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar1[2];
      uVar3 = local_4 >> 8;
      local_4 = CONCAT31((int3)uVar3,1);
      FUN_004028d0(puVar2[2],0);
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar2)(1);
      }
      FUN_00438540(0,1);
      puVar1 = (undefined4 *)*puVar1;
      local_4 = local_4 & 0xffffff00;
      FUN_00401f20(0);
    }
    if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[1])(1,uVar4);
    }
  }
  *in_ECX = &PTR_LAB_00a3c6e4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00471930(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  InterlockedIncrement((LONG *)(param_1 + 4));
  piVar1 = *(int **)(in_ECX + 4);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
  puVar2[2] = param_1;
  *puVar2 = 0;
  puVar2[1] = piVar1[2];
  if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
    *(undefined4 *)piVar1[2] = puVar2;
    piVar1[3] = piVar1[3] + 1;
    piVar1[2] = (int)puVar2;
    return;
  }
  piVar1[3] = piVar1[3] + 1;
  piVar1[1] = (int)puVar2;
  piVar1[2] = (int)puVar2;
  return;
}



void FUN_00471990(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 *local_8 [2];
  
  local_8[0] = (undefined4 *)0x0;
  do {
    local_c = 0;
    do {
      local_10 = 0x16;
      do {
        uVar4 = FUN_0051a9b0(local_8[0],local_c,local_10);
        piVar1 = *(int **)(in_ECX + 0x9c);
        iVar5 = (**(code **)(*piVar1 + 4))(uVar4);
        for (puVar2 = *(undefined4 **)(piVar1[2] + iVar5 * 4); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          cVar3 = (**(code **)(*piVar1 + 8))(uVar4,*(undefined2 *)(puVar2 + 1));
          if (cVar3 != '\0') {
            piVar1 = (int *)puVar2[2];
            iVar5 = (**(code **)(*piVar1 + 0x10))(0xffffffff);
            if (*(int *)(in_ECX + 0xac) == iVar5) {
              if (((*(int *)(in_ECX + 0x98) != 0) && (iVar6 = *(int *)(in_ECX + 0xac), iVar6 != 0))
                 && (*(int *)(iVar6 + 0x44) != 0)) {
                if (*(int *)(iVar6 + 0x58) != 0) {
                  FUN_006c9cb0(0,0);
                }
                if (*(int *)(*(int *)(in_ECX + 0xac) + 0x44) == 5) {
                  FUN_006c4480(0);
                }
                FUN_006c9cb0(0,0);
              }
              *(undefined4 *)(in_ECX + 0xac) = 0;
              *(undefined2 *)(in_ECX + 0x42) = 0xff;
              *(undefined2 *)(in_ECX + 0x76) = 0xff;
              *(undefined4 *)(in_ECX + 0x54) = 0xffffffff;
            }
            iVar6 = FUN_004359d0(iVar5);
            if (iVar6 != 0) {
              InterlockedDecrement((LONG *)(iVar6 + 0xc));
            }
            FUN_004708b0(uVar4);
            FUN_006c4a10(local_8,iVar5);
            puVar2 = local_8[0];
            if (((local_8[0] != (undefined4 *)0x0) &&
                (LVar7 = InterlockedDecrement(local_8[0] + 1), LVar7 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            (**(code **)(*piVar1 + 4))(0);
            (**(code **)*piVar1)(1);
            break;
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 0x1b);
      local_c = local_c + 1;
    } while (local_c < 6);
    local_8[0] = (undefined4 *)((int)local_8[0] + 1);
    if (3 < (int)local_8[0]) {
      return;
    }
  } while( true );
}



char FUN_00471b80(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return '\0';
  }
  uVar4 = 0;
  if (*(short *)(param_1 + 0xb6) != 0) {
    if (*(short *)(param_1 + 0xb6) == 0) goto LAB_00471bdf;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*piVar1 + 0xc))();
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0xb8) != 0)) {
            return '\x01';
          }
        }
        else {
          cVar2 = FUN_00471b80(iVar3);
          if (cVar2 != '\0') {
            return cVar2;
          }
        }
      }
LAB_00471bdf:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0xb6));
  }
  return '\0';
}



/* WARNING: Removing unreachable block (ram,0x00471ddb) */
/* WARNING: Removing unreachable block (ram,0x00471e2d) */
/* WARNING: Removing unreachable block (ram,0x00471e25) */

void FUN_00471c00(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aec58;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((in_ECX[1] == 0) || (in_ECX[2] == 0)) || (*in_ECX == 0)) goto LAB_00471f00;
  bVar11 = param_1 != DAT_00b333c4;
  if ((!bVar11) ||
     ((iVar6 = FUN_005e0dc0(uVar5), iVar6 != 1 &&
      (cVar4 = (**(code **)(*param_1 + 0x334))(1), cVar4 == '\0')))) {
    iVar6 = (**(code **)(*param_1 + 0x154))();
    cVar4 = FUN_00405650(&DAT_00b35288,iVar6);
    if (((cVar4 != '\0') && (*(float *)(iVar6 + 0xe8) <= 0.0)) ||
       ((bVar11 &&
        (cVar4 = FUN_0047f7b0(in_ECX[1],*(undefined4 *)(DAT_00b333cc + 0xdc)), cVar4 == '\0')))) {
      FUN_005e1370(0,1);
      fStack_10 = *(float *)(in_ECX[1] + 0x2c);
      puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      uVar13 = *puVar8;
      uVar2 = puVar8[1];
      fVar3 = (float)puVar8[2];
      uVar9 = (**(code **)(*param_1 + 0x170))();
      fVar12 = (float10)FUN_0046d5c0(uVar9);
      fVar1 = (float)(fVar12 + fVar12);
      if (fStack_10 < fVar1) {
        fStack_10 = fVar1;
      }
      iVar6 = in_ECX[1];
      *(undefined4 *)(iVar6 + 0x20) = uVar13;
      *(undefined4 *)(iVar6 + 0x24) = uVar2;
      *(float *)(iVar6 + 0x28) = fVar1 * 0.25 + fVar3;
      *(float *)(iVar6 + 0x2c) = fStack_10;
      *in_ECX = 0;
      goto LAB_00471f00;
    }
  }
  FUN_005e1370(1,1);
  iVar6 = FUN_007b7650();
  if ((iVar6 == 0) || (cVar4 = FUN_007aa3c0(param_1[3],0), cVar4 == '\0')) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  FUN_005e1370(uVar13,2);
  uVar13 = (**(code **)(*param_1 + 0x154))();
  iVar6 = FUN_00560920(&DAT_00b35288,uVar13);
  if ((iVar6 == 0) || (1e-05 <= *(float *)(iVar6 + 0xe8))) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  FUN_005e1370(uVar13,4);
  piVar10 = (int *)0x0;
  iVar6 = (**(code **)(*param_1 + 0x27c))();
  piVar7 = param_1;
  if (iVar6 != 0) {
    piVar7 = (int *)0x0;
    piVar10 = param_1;
  }
  uStack_4 = 0;
  if (piVar7 == (int *)0x0) {
    if (piVar10 != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*piVar10 + 0x380))();
      goto LAB_00471daa;
    }
  }
  else {
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)(**(code **)(*piVar7 + 0x388))();
LAB_00471daa:
      if (piVar7 != (int *)0x0) {
        if (piVar10 == (int *)0x0) goto LAB_00471e04;
        goto LAB_00471db2;
      }
    }
    else {
LAB_00471db2:
      iVar6 = (**(code **)(*piVar10 + 0x168))();
      if (iVar6 != 0) {
        uVar13 = FUN_00478180();
        FUN_0075fa90(uVar13);
      }
    }
    if (piVar10 != (int *)0x0) {
      DAT_00b3cbd0 = 1;
    }
  }
LAB_00471e04:
  FUN_0047ca30(in_ECX[0x25],in_ECX[2]);
  DAT_00b3cbd0 = 0;
  *in_ECX = 0;
  uStack_4 = 0xffffffff;
  FUN_007016a0();
LAB_00471f00:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00471f20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0de0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 4) + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0xc);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
    local_4._0_1_ = 1;
    FUN_00478300(0);
    FUN_00478300(0);
    FUN_00707370(*(undefined4 *)(in_ECX + 0x94),1);
    FUN_00478300(puVar1);
    FUN_00478300(puVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    local_4 = 0xffffffff;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00472030(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 *puStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aec88;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff7c;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_0051a9f0(uVar4);
  iVar5 = FUN_0051ac70();
  if ((((*(int *)(in_ECX + 0x98) != 0) && (cVar2 = FUN_00470960(uVar3,&param_1), cVar2 != '\0')) &&
      (iVar5 != 1)) && (iVar5 != 2)) {
    iVar6 = FUN_00471600();
    piVar9 = param_1;
    if (iVar6 == 0) {
      FUN_004a7a60("Could not find AccumRoot in animation \'%s\'.",
                   *(undefined4 *)(*(int *)(in_ECX + 4) + 8));
    }
    else {
      iVar6 = (**(code **)(*param_1 + 0x10))(0xffffffff);
      if ((iVar6 != 0) && ((&DAT_00b102e4)[iVar5 * 0x24] == '\0')) {
        switch((&DAT_00b102ec)[iVar5 * 9]) {
        case 0:
        case 1:
        case 4:
        case 5:
        case 6:
          uVar7 = (**(code **)(*piVar9 + 0x10))(0xffffffff);
          FUN_00405070(uVar7);
          uVar4 = 0;
          uStack_4 = 0;
          if (puStack_6c[3] != 0) {
            piVar9 = (int *)(puStack_6c[5] + 4);
            do {
              if (*piVar9 == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(*piVar9 + 0x30);
              }
              if (iVar5 == puStack_6c[0x18]) {
                fVar1 = (float)puStack_6c[0xb];
                piVar9 = *(int **)(uVar4 * 0x10 + puStack_6c[5]);
                param_1 = (int *)puStack_6c[0xc];
                FUN_00470ab0();
                FUN_00470ab0();
                (**(code **)(*piVar9 + 0x4c))(fVar1,0,&fStack_2c);
                (**(code **)(*piVar9 + 0x4c))(puStack_8,0,&fStack_58);
                cVar2 = FUN_00470b00();
                if ((cVar2 != '\0') && (cVar2 = FUN_00470b00(), cVar2 != '\0')) {
                  fStack_58 = fStack_4c - fStack_2c;
                  fStack_54 = fStack_48 - fStack_28;
                  fStack_50 = fStack_44 - fStack_24;
                  param_1 = (int *)((float)param_1 - fVar1);
                  FUN_004707e0(param_1);
                  FUN_004bef50(&fStack_58);
                }
                break;
              }
              uVar4 = uVar4 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 < (uint)puStack_6c[3]);
          }
          uStack_4 = 0xffffffff;
          LVar8 = InterlockedDecrement(puStack_6c + 1);
          if (LVar8 == 0) {
            (**(code **)*puStack_6c)(1);
          }
        }
      }
      iVar5 = FUN_0051aa00(uVar3);
      if ((iVar5 - 3U < 0xc) && (fVar10 = (float10)FUN_0051aed0(), fVar10 == (float10)0.0)) {
        iVar5 = FUN_0051ac70(*(undefined4 *)(*(int *)(in_ECX + 4) + 8));
        iVar5 = FUN_0051ac60((&PTR_DAT_00b102e0)[iVar5 * 9]);
        iVar5 = FUN_0051ac50((&PTR_DAT_00b102c8)[iVar5]);
        FUN_004a7a60("AnimGroup \'%s%s%s\' for \'%s\' was exported with \'Animate in Place\' from MAX.\r\n"
                     ,(&PTR_DAT_00b102b8)[iVar5]);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00472330(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00470960(param_1,&param_1);
  piVar1 = param_1;
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffff0000;
  }
  uVar2 = (**(code **)(*param_1 + 0xc))();
  if ((char)uVar2 != '\0') {
    iVar3 = (**(code **)(*piVar1 + 0x10))(0xffffffff);
    uVar2 = 0;
    if (iVar3 != 0) {
      (**(code **)(*piVar1 + 0x10))(0xffffffff);
      FUN_0051aed0();
      uVar2 = FUN_009828c0();
      return uVar2;
    }
  }
  return uVar2 & 0xffff0000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004723a0(float *param_1,int *param_2,char param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  piVar3 = param_2;
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  local_30 = DAT_00b3f9a8;
  local_2c = DAT_00b3f9ac;
  local_3c = *(float *)(in_ECX + 0xc);
  local_28 = DAT_00b3f9b0;
  local_38 = *(float *)(in_ECX + 0x10);
  local_34 = *(float *)(in_ECX + 0x14);
  puVar7 = (undefined4 *)(*(int *)(in_ECX + 4) + 0x30);
  puVar8 = local_24;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  cVar4 = FUN_005e3270();
  if ((((cVar4 != '\0') || (cVar4 = FUN_005e05b0(), cVar4 == '\0')) ||
      (*(int *)(in_ECX + 0xa0) == 0)) ||
     ((iVar6 = FUN_0051ac70(), iVar6 < 3 ||
      (iVar6 = FUN_0051ac70(), fVar1 = _DAT_00b33e9c, 0x10 < iVar6)))) goto LAB_00472575;
  fVar9 = (float10)FUN_0051aed0();
  fVar2 = _DAT_00b33e9c;
  param_2 = (int *)(float)(fVar9 * (float10)*(float *)(in_ECX + 0xbc) * (float10)fVar1);
  fVar1 = (float)param_2;
  if ((*(int *)(in_ECX + 0xac) == 0) || (*(int *)(*(int *)(in_ECX + 0xac) + 0x44) != 1)) {
LAB_004724c0:
    param_2 = (int *)fVar1;
  }
  else {
    fVar9 = (float10)FUN_0051aed0();
    fVar1 = (float)(fVar9 * (float10)*(float *)(in_ECX + 0xc0) * (float10)fVar2);
    if ((float)param_2 < fVar1) goto LAB_004724c0;
  }
  fVar1 = (float)param_2 * 4.0;
  if (0.0 < (float)param_2) {
    if (fVar1 < local_3c) {
      local_3c = (float)param_2;
    }
    if (fVar1 < local_38) {
      local_38 = (float)param_2;
    }
    if (fVar1 < local_34) {
      local_34 = (float)param_2;
    }
    fVar1 = -fVar1;
    if (local_3c < fVar1) {
      local_3c = -(float)param_2;
    }
    if (local_38 < fVar1) {
      local_38 = -(float)param_2;
    }
    if (local_34 < fVar1) {
      local_34 = -(float)param_2;
    }
  }
LAB_00472575:
  if (piVar3 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar3 + 0x18c))();
    switch(uVar5) {
    case 3:
    case 5:
    case 8:
    case 10:
      fVar9 = (float10)(**(code **)(*piVar3 + 0xec))();
      local_3c = local_3c / (float)fVar9;
      local_38 = local_38 / (float)fVar9;
    }
  }
  if (param_4 != '\0') {
    local_34 = 0.0;
  }
  if (param_3 != '\0') {
    FUN_00710580(local_24,&local_30,1,&local_3c,param_1);
    return 1;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  return 1;
}



void FUN_00472640(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    if ((*(short *)(in_ECX + 0x3c) == 0xff) && (*(short *)(in_ECX + 0x70) == 0xff)) {
      sVar1 = FUN_0051a9f0();
      if (sVar1 == 0) {
        uVar2 = FUN_0051a9f0();
        *(undefined2 *)(in_ECX + 0x70) = uVar2;
      }
    }
    FUN_00472030(param_1);
  }
  return;
}



uint FUN_00472690(uint param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  bool bVar7;
  
  bVar7 = param_1 == 0;
  iVar3 = *(int *)(in_ECX + 0x98);
  uVar6 = 0;
  if (*(short *)(iVar3 + 0x46) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar3 + 0x40) + uVar6 * 4);
      uVar4 = 0;
      if (piVar1 != (int *)0x0) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          if (puVar5 == &DAT_00b35270) {
            bVar2 = 1;
            goto LAB_004726e0;
          }
        }
        bVar2 = 0;
LAB_004726e0:
        uVar4 = -(uint)bVar2 & (uint)piVar1;
      }
      if (bVar7) {
        if ((uVar4 != 0) && (*(int *)(uVar4 + 0x44) != 0)) {
          return uVar4;
        }
      }
      else if (uVar4 == param_1) {
        bVar7 = true;
      }
      iVar3 = *(int *)(in_ECX + 0x98);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(iVar3 + 0x46));
  }
  return 0;
}



uint FUN_00472720(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar2 = *(int *)(in_ECX + 0xa0 + param_1 * 4);
  if ((iVar2 == 0) || (param_2 == (char *)0x0)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar4 - (int)(param_2 + 1) == 0) {
    return 0xffffffff;
  }
  uVar6 = 0;
  if (uVar3 != 0) {
    puVar7 = (undefined4 *)(iVar2 + 4);
    do {
      if ((char *)*puVar7 != (char *)0x0) {
        iVar5 = __strnicmp((char *)*puVar7,param_2,(int)pcVar4 - (int)(param_2 + 1));
        if (iVar5 == 0) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(iVar2 + uVar6 * 8);
          }
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar6 < uVar3);
  }
  return 0xffffffff;
}



uint FUN_004727e0(uint param_1,char *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t _MaxCount;
  size_t sVar7;
  uint uVar8;
  int in_ECX;
  uint uVar9;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((*(int *)(in_ECX + 0xa0 + param_1 * 4) == 0) || (param_2 == (char *)0x0)) {
    return param_1 & 0xffffff00;
  }
  iVar4 = *(int *)(in_ECX + 0xa0 + param_1 * 4);
  fVar1 = *(float *)(iVar4 + 0x3c);
  iVar4 = *(int *)(iVar4 + 0x20);
  iVar5 = *(int *)(iVar4 + 0x10);
  uVar8 = *(uint *)(iVar4 + 0xc);
  pcVar6 = param_2;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  _MaxCount = (int)pcVar6 - (int)(param_2 + 1);
  if (_MaxCount == 0) {
    return 0;
  }
  uVar9 = 0;
  sVar7 = _MaxCount;
  if (uVar8 != 0) {
    do {
      pcVar6 = *(char **)(iVar5 + 4 + uVar9 * 8);
      if (pcVar6 != (char *)0x0) {
        sVar7 = __strnicmp(pcVar6,param_2,_MaxCount);
        if (sVar7 == 0) {
          fVar2 = *(float *)(iVar5 + uVar9 * 8);
          sVar7 = (size_t)(ushort)((ushort)(fVar1 < fVar2) << 8 |
                                   (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                  (ushort)(fVar1 == fVar2) << 0xe);
          if (fVar1 < fVar2 != (fVar1 == fVar2)) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = *(undefined4 *)(iVar5 + uVar9 * 8);
            }
            uVar8 = _tolower((int)pcVar6[_MaxCount]);
            return uVar8;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  return sVar7 & 0xffffff00;
}



void FUN_004728c0(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 0x18) = DAT_00b3f9a8;
    *(undefined4 *)(in_ECX + 0x1c) = DAT_00b3f9ac;
    *(undefined4 *)(in_ECX + 0x20) = DAT_00b3f9b0;
    puVar3 = &DAT_00b26dc4;
    puVar6 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x30);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = *(int *)(in_ECX + 8);
    *(undefined4 *)(iVar5 + 0x54) = DAT_00b3f9a8;
    *(undefined4 *)(iVar5 + 0x58) = DAT_00b3f9ac;
    *(undefined4 *)(iVar5 + 0x5c) = DAT_00b3f9b0;
    for (piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0xc); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[0xd]) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3ccb0) {
          bVar2 = 1;
          goto LAB_00472940;
        }
      }
      bVar2 = 0;
LAB_00472940:
      if (((int *)(-(uint)bVar2 & (uint)piVar1) != (int *)0x0) &&
         (piVar4 = (int *)(**(code **)(*(int *)(-(uint)bVar2 & (uint)piVar1) + 0x80))(0),
         piVar4 != (int *)0x0)) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 4))(); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[1]) {
          if (puVar3 == &DAT_00b3cd1c) {
            bVar2 = 1;
            goto LAB_00472980;
          }
        }
        bVar2 = 0;
LAB_00472980:
        if ((-(uint)bVar2 & (uint)piVar4) != 0) {
          FUN_00471640();
        }
      }
    }
  }
  return;
}



undefined4 FUN_004729b0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00470960(param_1,&param_1);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x10))(0xffffffff);
    return *(undefined4 *)(iVar2 + 0x68);
  }
  return 0;
}



void FUN_004729f0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 *unaff_EBP;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14 [8];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009aecd1;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  piVar8 = in_ECX + 7;
  iVar7 = 2;
  do {
    iVar4 = *piVar8;
    if (iVar4 != 0) {
      FUN_007b4280(0,iVar4,uVar3);
      FUN_007c5e70(iVar4);
      iVar4 = (**(code **)(*(int *)in_ECX[10] + 0x164))();
      FUN_00716620(*piVar8,*(undefined4 *)(*(int *)(iVar4 + 0x98) + 0x7c));
      iVar4 = (**(code **)(*(int *)in_ECX[10] + 0x164))();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
        FUN_0047cc80(*piVar8);
      }
      (**(code **)(**(int **)(*piVar8 + 0x1c) + 0x88))(auStack_14,*piVar8);
      if (unaff_EBP != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(unaff_EBP + 1);
        if ((LVar5 == 0) && (unaff_EBP != (undefined4 *)0x0)) {
          (**(code **)*unaff_EBP)(1);
        }
      }
      uVar6 = (**(code **)(*(int *)(piVar8[-2] + 0x18) + 0x14))();
      FUN_004384e0(uVar6,1,1);
      puVar1 = (undefined4 *)*piVar8;
      if (puVar1 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar1 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar8 = 0;
      }
      if (in_ECX[4] != 0) {
        FUN_0049f750();
      }
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (((undefined4 *)in_ECX[2] == (undefined4 *)0x0) || (in_ECX[1] == 0)) {
    if (*in_ECX == 0) {
      FUN_00439d20(in_ECX);
    }
  }
  else {
    FUN_00438540(*(undefined4 *)in_ECX[2],1);
  }
  cVar2 = FUN_0045a500();
  if ((cVar2 == '\0') && (in_ECX[10] != 0)) {
    iVar7 = FUN_005e0ee0();
    if (iVar7 == 0xb) {
      iVar7 = in_ECX[4];
      iVar4 = (**(code **)(**(int **)(in_ECX[10] + 0x58) + 0x2d4))();
      if (iVar4 == iVar7) {
        FUN_005effd0(0xffffffff,0);
      }
    }
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 7,4,2,FUN_007016a0);
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00472c00(undefined4 param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 1) {
    return 0;
  }
  FUN_0075fa90(param_1);
  *in_ECX = 2;
  if (in_ECX[1] == 3) {
    FUN_005effd0(0xb,in_ECX[4]);
  }
  return 1;
}



void FUN_00472c40(undefined4 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined1 local_2;
  undefined1 local_1;
  
  FUN_0045b9a0(in_ECX,4);
  FUN_0045b9a0(in_ECX + 4,4);
  FUN_0045b9a0(in_ECX + 0xc,4);
  iVar1 = *(int *)(in_ECX + 0x10);
  FUN_0045b9a0(&local_2,1);
  if (iVar1 != 0) {
    puVar4 = &param_2;
    uVar3 = FUN_0051ac70(puVar4);
    cVar2 = FUN_00470960(uVar3,puVar4);
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x14))(*(undefined4 *)(in_ECX + 0x10));
    }
    FUN_0045b9a0(&local_1,1);
    FUN_0049f570(param_1);
  }
  return;
}



void FUN_00472d10(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  uVar4 = param_2;
  local_10 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    local_10 = *(int *)(*(int *)(param_2 + 0x24) + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  if (local_10 != 0) {
    uVar8 = 0xd;
    if (*(int *)(uVar4 + 0x10) != 0) {
      sVar7 = FUN_0049f550();
      uVar8 = (uint)(ushort)(sVar7 + 0xe);
    }
    param_2 = uVar8;
    FUN_0045b9a0(&param_2,2);
    FUN_00472c40(param_4,param_3);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0xf72,
                   "..\\TES Shared\\Animation.cpp");
    }
    else {
      piVar9 = (int *)FUN_0046b250(*puVar2);
      uVar10 = (**(code **)(*piVar9 + 0xd4))
                         (*(undefined4 *)((int)puVar2 + 5),0xf72,"..\\TES Shared\\Animation.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar10);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\Animation.cpp",0xf72);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



uint FUN_00472ea0(void)

{
  int *in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xd0) == 0) {
    in_EAX = *(int **)(in_ECX + 0xcc);
    if (in_EAX == (int *)0x0) {
      return 1;
    }
    if (in_EAX[4] != 0) {
      return CONCAT31((int3)((uint)in_EAX >> 8),*in_EAX == 3);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



void FUN_00472ed0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  LONG LVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6b08;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar9 = (undefined4 *)0x0;
  local_14 = (int *)0x0;
  uVar4 = 0xff;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  piVar10 = (int *)0x0;
  if ((*(int *)(*param_1 + 8) == 0) || (*(int *)(*(int *)(*param_1 + 8) + 8) == 0)) {
LAB_00472f62:
    puVar2 = *(undefined4 **)(*param_1 + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      local_10 = puVar2;
      InterlockedIncrement(puVar2 + 1);
      puVar9 = puVar2;
    }
    if (piVar10 == (int *)0x0) {
      if ((((puVar9 != (undefined4 *)0x0) &&
           (FUN_006c4a10(&local_14,puVar9), piVar3 = local_14, local_14 != (int *)0x0)) &&
          (LVar8 = InterlockedDecrement(local_14 + 1), LVar8 == 0)) && (piVar3 != (int *)0x0)) {
        (**(code **)*piVar3)(1);
      }
      goto LAB_00473004;
    }
  }
  else {
    uVar4 = FUN_0051a9f0(uVar5);
    FUN_00470960(uVar4,&local_14);
    piVar10 = local_14;
    if (local_14 == (int *)0x0) goto LAB_00472f62;
    iVar1 = *(int *)(*param_1 + 0x10);
    iVar6 = (**(code **)(*local_14 + 0x10))(0xffffffff);
    if (iVar6 != iVar1) {
      piVar10 = (int *)0x0;
      goto LAB_00472f62;
    }
  }
  uVar7 = (**(code **)(*piVar10 + 0x10))(0xffffffff);
  FUN_006c4a10(&local_14,uVar7);
  piVar3 = local_14;
  if (((local_14 != (int *)0x0) && (LVar8 = InterlockedDecrement(local_14 + 1), LVar8 == 0)) &&
     (piVar3 != (int *)0x0)) {
    (**(code **)*piVar3)(1);
  }
LAB_00473004:
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_004729f0();
    FUN_00401f20(iVar1);
  }
  *param_1 = 0;
  if (piVar10 != (int *)0x0) {
    FUN_004708b0(uVar4);
    (**(code **)(*piVar10 + 4))(0);
    (**(code **)*piVar10)(1);
  }
  if (puVar9 == (undefined4 *)0x0) {
    FUN_004708b0(uVar4);
  }
  local_4 = 0xffffffff;
  if ((puVar9 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar9 + 1), LVar8 == 0)) {
    (**(code **)*puVar9)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004730b0(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(in_ECX + 0x98) != 0) {
    uVar4 = (uint)*(ushort *)(*(int *)(in_ECX + 0x98) + 0x46);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x98) + 0x40) + uVar5 * 4);
        if (piVar1 != (int *)0x0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)puVar3[1]) {
            if (puVar3 == &DAT_00b35270) {
              bVar2 = 1;
              goto LAB_00473100;
            }
          }
          bVar2 = 0;
LAB_00473100:
          if ((-(uint)bVar2 & (uint)piVar1) != 0) {
            FUN_0049f520();
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return;
}



void FUN_00473120(int *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_1 != (int *)0x0) {
    for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3ccb0) {
          bVar2 = 1;
          goto LAB_00473152;
        }
      }
      bVar2 = 0;
LAB_00473152:
      if ((int *)(-(uint)bVar2 & (uint)piVar1) == (int *)0x0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[1]) {
          if (puVar3 == &DAT_00b3cd7c) {
            bVar2 = 1;
            goto LAB_00473190;
          }
        }
        bVar2 = 0;
LAB_00473190:
        if ((-(uint)bVar2 & (uint)piVar1) != 0) {
          FUN_006cff00();
        }
      }
      else {
        (**(code **)(*(int *)(-(uint)bVar2 & (uint)piVar1) + 0x84))(0,0);
      }
    }
    iVar4 = (**(code **)(*param_1 + 8))();
    if (iVar4 != 0) {
      uVar6 = 0;
      if (*(short *)(iVar4 + 0xb6) != 0) {
        if (*(short *)(iVar4 + 0xb6) != 0) goto LAB_004731ce;
        uVar5 = 0;
        while( true ) {
          FUN_00473120(uVar5);
          uVar6 = uVar6 + 1;
          if (*(ushort *)(iVar4 + 0xb6) <= uVar6) break;
LAB_004731ce:
          uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar6 * 4);
        }
      }
    }
  }
  return;
}



void FUN_00473200(char param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x98) != 0) {
    FUN_00470fc0(4,0);
    FUN_00470fc0(0,0);
    FUN_00470fc0(1,0);
    FUN_00470fc0(2,0);
    if (((*(int *)(in_ECX + 0x98) != 0) && (iVar1 = *(int *)(in_ECX + 0xac), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x44) != 0)) {
      if (*(int *)(iVar1 + 0x58) != 0) {
        FUN_00470b50(*(int *)(iVar1 + 0x58),0);
      }
      if (*(int *)(*(int *)(in_ECX + 0xac) + 0x44) == 5) {
        FUN_006c4480(0);
      }
      FUN_006c9cb0(0,0);
    }
    *(undefined4 *)(in_ECX + 0xac) = 0;
    *(undefined2 *)(in_ECX + 0x42) = 0xff;
    *(undefined2 *)(in_ECX + 0x76) = 0xff;
    *(undefined4 *)(in_ECX + 0x54) = 0xffffffff;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x98) + 0x7c);
    if ((iVar1 != 0) && (iVar1 = FUN_00560920(&DAT_00b3fcb8,iVar1), iVar1 != 0)) {
      FUN_00716690();
    }
    iVar1 = FUN_00700010(&DAT_00b3cd7c);
    if (iVar1 != 0) {
      FUN_004715c0(0);
      FUN_006ffe90(iVar1);
    }
    iVar1 = *(int *)(in_ECX + 0x98);
    if (*(short *)(iVar1 + 0x46) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x40) + uVar3 * 4);
        if ((iVar1 != 0) &&
           (iVar2 = __stricmp("__TempBlendSequence__",*(char **)(iVar1 + 8)), iVar2 != 0)) {
          if (param_1 == '\0') {
            iVar1 = FUN_00560920(&DAT_00b35270,iVar1);
            if (iVar1 != 0) {
              FUN_0049f880();
              FUN_0049f860(*(undefined4 *)(in_ECX + 4));
            }
          }
          else {
            FUN_006c9590(*(undefined4 *)(in_ECX + 4));
          }
        }
        iVar1 = *(int *)(in_ECX + 0x98);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 0x46));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004733a0(float param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = (int)param_1;
  if (param_1 == 7.00649e-45) {
    param_1 = 0.0;
  }
  else if (param_1 == 8.40779e-45) {
    param_1 = 4.2039e-45;
  }
  iVar2 = *(int *)(in_ECX + 0xa0 + (int)param_1 * 4);
  param_1 = 0.0;
  if ((iVar2 != 0) && (*(char *)(in_ECX + 0xc4) == '\0')) {
    cVar1 = *(char *)(*(int *)(iVar2 + 0x68) + 0x21);
    param_1 = _DAT_00b06538;
    if (cVar1 != '\0') {
      param_1 = (float)(int)cVar1 / 30.0;
    }
    param_1 = param_1 / _DAT_00b06530;
  }
  FUN_00470fc0(iVar3,param_1);
  return;
}



short FUN_00473420(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  short *psVar10;
  
  sVar6 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    sVar6 = 6;
  }
  sVar6 = sVar6 + 0x1a;
  piVar7 = (int *)(in_ECX + 0xa0);
  psVar10 = (short *)(in_ECX + 0x3c);
  iVar9 = 5;
  do {
    if (((*psVar10 != 0xff) && (*psVar10 != -1)) && (sVar6 = sVar6 + 0x11, *piVar7 != 0)) {
      sVar4 = FUN_0049f550();
      sVar6 = sVar6 + sVar4;
    }
    piVar2 = param_1;
    psVar10 = psVar10 + 1;
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  piVar7 = (int *)0x0;
  if ((param_1 != (int *)0x0) && (cVar3 = (**(code **)(*param_1 + 400))(), cVar3 != '\0')) {
    piVar7 = piVar2;
  }
  iVar9 = *(int *)(in_ECX + 0xd0);
  if (iVar9 == 0) {
    iVar9 = *(int *)(in_ECX + 0xcc);
  }
  sVar5 = FUN_00471130(piVar7,iVar9);
  sVar4 = sVar6 + sVar5 + 1;
  if (0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar4 = sVar6 + sVar5 + 2;
  }
  iVar9 = (**(code **)(piVar7[0x17] + 0x30))();
  if (((iVar9 != 0) &&
      (piVar7 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x98) + 0x7c) + 0x4c))("magicNode")
      , piVar7 != (int *)0x0)) &&
     ((iVar9 = (**(code **)(*piVar7 + 8))(), iVar9 != 0 &&
      ((((*(short *)(iVar9 + 0xb6) != 0 && (**(int **)(iVar9 + 0xb0) != 0)) &&
        (iVar9 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(**(int **)(iVar9 + 0xb0) + 0xc)),
        iVar9 != 0)) &&
       ((cVar3 = FUN_0055e000("SpecialIdle_Cast",&param_1), cVar3 != '\0' && (param_1 != (int *)0x0)
        ))))))) {
    sVar6 = FUN_0049f550();
    sVar4 = sVar4 + sVar6 + 4;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar7 = (int *)FUN_0046b250(*puVar1);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x11e6,"..\\TES Shared\\Animation.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar4,*puVar1,uVar8);
      return sVar4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar4,0x11e6,
                 "..\\TES Shared\\Animation.cpp");
  }
  return sVar4;
}



void FUN_00473600(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined *puVar7;
  byte bVar8;
  int in_ECX;
  int iVar9;
  short *psVar10;
  short *psVar11;
  int *piVar12;
  char cStack_1f;
  undefined1 local_1e;
  byte local_1d;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  undefined4 local_8;
  int *local_4;
  
  local_8 = 0;
  local_14 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
  }
  FUN_0045b9a0(in_ECX + 0xbc,4);
  FUN_0045b9a0(in_ECX + 0xc0,4);
  FUN_0045b9a0(in_ECX + 0xc,0xc);
  FUN_0045b9a0(in_ECX + 0x38,4);
  FUN_0045b9a0(in_ECX + 0x90,1);
  local_1d = 0;
  psVar10 = (short *)(in_ECX + 0x3c);
  bVar8 = 0;
  iVar9 = 5;
  psVar11 = psVar10;
  do {
    if ((*psVar11 != 0xff) && (*psVar11 != -1)) {
      local_1d = local_1d | '\x01' << (bVar8 & 0x1f);
    }
    bVar8 = bVar8 + 1;
    psVar11 = psVar11 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_0045b9a0(&local_1d,1);
  piVar6 = (int *)(in_ECX + 0xa0);
  local_18 = 0;
  local_10 = 5;
  do {
    local_1c = piVar6;
    if ((*psVar10 != 0xff) && (*psVar10 != -1)) {
      FUN_0045b9a0(psVar10,2);
      FUN_0045b9a0(piVar6 + -0x16,4);
      FUN_0045b9a0(piVar6 + -0x11,4);
      FUN_0045b9a0(psVar10 + 0x1a,2);
      FUN_0045b9a0(piVar6 + -9,4);
      local_1e = 0xff;
      cVar4 = FUN_00470960(*psVar10,&local_4);
      piVar3 = local_1c;
      if (cVar4 != '\0') {
        local_1e = (**(code **)(*local_4 + 0x14))(*local_1c);
      }
      if (*piVar3 == 0) {
        uVar5 = (**(code **)(*param_1 + 0xd4))(param_1[3],local_18,*psVar10,piVar6[-0x16]);
        FUN_004a7a60("%s %08X has a sequence in slot %i with group %i and action %i, but the sequence is NULL."
                     ,uVar5);
        local_1e = 0xfe;
      }
      FUN_0045b9a0(&local_1e,1);
      if (*piVar3 != 0) {
        FUN_0049f570(*(undefined4 *)(in_ECX + 0x94));
      }
    }
    piVar3 = param_1;
    local_18 = local_18 + 1;
    piVar6 = local_1c + 1;
    psVar10 = psVar10 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  piVar12 = (int *)0x0;
  local_1c = piVar6;
  if ((param_1 != (int *)0x0) && (cVar4 = (**(code **)(*param_1 + 400))(), cVar4 != '\0')) {
    piVar12 = piVar3;
  }
  iVar9 = *(int *)(in_ECX + 0xd0);
  if (iVar9 == 0) {
    iVar9 = *(int *)(in_ECX + 0xcc);
  }
  FUN_00472d10(piVar12,iVar9);
  FUN_0045b9a0(in_ECX + 0xc4,1);
  cStack_1f = '\0';
  iVar9 = (**(code **)(piVar12[0x17] + 0x30))();
  if (((((iVar9 != 0) &&
        (piVar6 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x98) + 0x7c) + 0x4c))
                                   ("magicNode"), piVar6 != (int *)0x0)) &&
       (iVar9 = (**(code **)(*piVar6 + 8))(), iVar9 != 0)) &&
      ((*(short *)(iVar9 + 0xb6) != 0 && (**(int **)(iVar9 + 0xb0) != 0)))) &&
     (piVar6 = *(int **)(**(int **)(iVar9 + 0xb0) + 0xc), piVar6 != (int *)0x0)) {
    for (puVar7 = (undefined *)(**(code **)(*piVar6 + 4))(); puVar7 != (undefined *)0x0;
        puVar7 = *(undefined **)(puVar7 + 4)) {
      if (puVar7 == &DAT_00b3cac0) {
        bVar8 = 1;
        goto LAB_00473934;
      }
    }
    bVar8 = 0;
LAB_00473934:
    if ((((-(uint)bVar8 & (uint)piVar6) != 0) &&
        (cVar4 = FUN_0055e000("SpecialIdle_Cast",&param_1), cVar4 != '\0')) &&
       (param_1 != (int *)0x0)) {
      cStack_1f = '\x01';
      if (0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_0045b9a0(&cStack_1f,1);
      }
      FUN_0049f570(*(undefined4 *)(in_ECX + 0x94));
      param_1 = (int *)0x0;
      if (piVar12[0x18] != 0) {
        param_1 = *(int **)(piVar12[0x18] + 0x10);
      }
      FUN_0045b9a0(&param_1,4);
    }
  }
  if ((0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) && (cStack_1f == '\0')) {
    FUN_0045b9a0(&cStack_1f,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar9 - local_14,0x1256,
                   "..\\TES Shared\\Animation.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x1256,"..\\TES Shared\\Animation.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar9 - local_14,*puVar1,uVar5);
    }
  }
  cVar4 = FUN_0045a170();
  psVar10 = local_c;
  if (cVar4 != '\0') {
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar2) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\Animation.cpp",0x1256);
    }
    *psVar10 = (short)uVar2 - (short)psVar10;
  }
  return;
}



void FUN_00473aa0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00470fc0(4,0);
  FUN_00470fc0(0,0);
  FUN_00470fc0(1,0);
  FUN_00470fc0(2,0);
  if (((*(int *)(in_ECX + 0x98) != 0) && (iVar1 = *(int *)(in_ECX + 0xac), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x44) != 0)) {
    if (*(int *)(iVar1 + 0x58) != 0) {
      FUN_00470b50(*(int *)(iVar1 + 0x58),0);
    }
    if (*(int *)(*(int *)(in_ECX + 0xac) + 0x44) == 5) {
      FUN_006c4480(0);
    }
    FUN_006c9cb0(0,0);
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined2 *)(in_ECX + 0x42) = 0xff;
  *(undefined2 *)(in_ECX + 0x76) = 0xff;
  *(undefined4 *)(in_ECX + 0x54) = 0xffffffff;
  FUN_004728c0();
  if (*(int *)(in_ECX + 0xcc) != 0) {
    FUN_00472ed0((undefined4 *)(in_ECX + 0xcc));
  }
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  if (*(int *)(in_ECX + 0xd0) != 0) {
    FUN_00472ed0((undefined4 *)(in_ECX + 0xd0));
  }
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  FUN_00470fc0(4,0);
  if (*(int *)(in_ECX + 0x98) != 0) {
    FUN_004715c0(0);
  }
  FUN_00473120(*(undefined4 *)(in_ECX + 4));
  FUN_004730b0();
  FUN_00473200(1);
  return;
}



short FUN_00473bf0(int *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  
  if (param_2 == 0) {
    return 2;
  }
  cVar1 = (**(code **)(*param_1 + 0x198))(0);
  if (cVar1 == '\0') {
    sVar2 = FUN_00473420(param_1);
    return sVar2 + 2;
  }
  return 2;
}



void FUN_00473c40(int *param_1,int param_2)

{
  char cVar1;
  uint local_4;
  
  local_4 = 0;
  if (param_2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x198))(0);
    if (cVar1 == '\0') {
      local_4 = FUN_00473420(param_1);
      local_4 = local_4 & 0xffff;
    }
  }
  FUN_0045b9a0(&local_4,2);
  if (param_2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x198))(0);
    if (cVar1 == '\0') {
      FUN_00473600(param_1);
    }
  }
  return;
}



void FUN_00473cb0(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a3c6c4;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3c8a0;
  return;
}



void FUN_00473d00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aecf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c8a0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3c6c4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00473d70(byte param_1)

{
  FUN_00471760();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00473d90(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aed28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3c758;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[3] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_00a3c748;
  }
  in_ECX[1] = puVar2;
  uVar3 = (**(code **)(*param_1 + 0x10))(0xffffffff);
  FUN_00471930(uVar3);
  (**(code **)(*param_1 + 4))(0);
  (**(code **)*param_1)(1);
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00473e30(byte param_1)

{
  FUN_00471840();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00473e50(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = param_1;
  LVar2 = InterlockedDecrement(param_1 + 1);
  if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_00776690(&param_1);
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if (puVar1[3] == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 4) = 0;
    return 1;
  }
  return 0;
}



void FUN_00473eb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aed69;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[0x26] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = DAT_00b3f9a8;
  in_ECX[4] = DAT_00b3f9ac;
  in_ECX[5] = DAT_00b3f9b0;
  in_ECX[6] = DAT_00b3f9a8;
  in_ECX[7] = DAT_00b3f9ac;
  uVar5 = DAT_00b3f9b0;
  in_ECX[0xe] = 0;
  in_ECX[0x25] = 0;
  in_ECX[8] = uVar5;
  *(undefined1 *)(in_ECX + 0x24) = 0xff;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  *in_ECX = 0;
  puVar1 = (undefined4 *)in_ECX[0x26];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x26] = 0;
  }
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  iVar4 = FUN_00401f00(0x10,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00473cb0(0x65);
  }
  in_ECX[0x27] = uVar5;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x11) = 0xffff;
  in_ECX[0x1c] = 0xffffffff;
  in_ECX[0x1d] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x1e) = 0xffff;
  in_ECX[0x12] = 0xffffffff;
  in_ECX[0x13] = 0xffffffff;
  in_ECX[0x14] = 0xffffffff;
  in_ECX[0x15] = 0xffffffff;
  in_ECX[0x16] = 0xffffffff;
  in_ECX[0x17] = 0xffffffff;
  in_ECX[0x18] = 0xffffffff;
  in_ECX[0x19] = 0xffffffff;
  in_ECX[0x1a] = 0xffffffff;
  in_ECX[0x1b] = 0xffffffff;
  in_ECX[0x1f] = 0xffffffff;
  in_ECX[0x20] = 0xffffffff;
  in_ECX[0x21] = 0xffffffff;
  in_ECX[0x22] = 0xffffffff;
  in_ECX[0x23] = 0xffffffff;
  in_ECX[0x2f] = 0x3f800000;
  in_ECX[0x30] = 0x3f800000;
  in_ECX[0x32] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00474070(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  int *piVar10;
  undefined2 *puVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int *local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aedae;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)param_1[2];
  local_18 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = FUN_0051ac70(uVar3);
    uVar3 = FUN_0051a9f0();
    uVar3 = uVar3 & 0xffff;
    local_10 = uVar3;
    if (iVar4 != 0xff) {
      local_14 = (int *)0x0;
      cVar2 = FUN_00470960(uVar3,&local_14);
      piVar6 = local_14;
      if (cVar2 == '\0') {
        piVar6 = (int *)FUN_00401f00(8);
        if (piVar6 == (int *)0x0) {
          FUN_00470820(uVar3,0);
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[1] = 0;
          *piVar6 = (int)&PTR_FUN_00a3c72c;
          FUN_00470820(uVar3,piVar6);
        }
      }
      cVar2 = (**(code **)(*piVar6 + 0xc))();
      if ((cVar2 == '\0') || (iVar7 = (**(code **)(*piVar6 + 0x10))(0xffffffff), iVar7 == 0)) {
LAB_00474315:
        if ((((char)param_2 == '\0') || (iVar4 == 0)) ||
           (((cVar2 = FUN_005790e0(0x40c,0), cVar2 != '\0' && (iVar4 == 0x21)) || (iVar4 == 0x20))))
        {
          uVar9 = param_1[1];
          param_2 = (undefined4 *)FUN_00401f00(0x6c);
          local_4._0_1_ = 2;
          if (param_2 == (undefined4 *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0049fd90(param_1[2],uVar9);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          (**(code **)(*piVar6 + 4))(iVar4);
          cVar2 = FUN_006c5760(iVar4,0,1);
          if (cVar2 == '\0') {
            FUN_004a7a60("Unable to add \'%s\' to keyframe manager on \'%s\'.\r\nMake sure the animation is not skinned to bones that don\'t exist in our skeleton."
                         ,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(*(int *)(in_ECX + 4) + 8));
            uVar3 = 0;
            DAT_00b06b18 = 1;
            if (*(int *)(iVar4 + 0xc) != 0) {
              do {
                FUN_006c66b0(uVar3,&param_2);
                iVar7 = (**(code **)(**(int **)(in_ECX + 4) + 0x58))(param_2);
                if (iVar7 == 0) {
                  FUN_004a7a60("Object \'%s\' in sequence but not skeleton.",param_2);
                }
                FUN_00401f20(param_2);
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)(iVar4 + 0xc));
            }
            DAT_00b06b18 = 0;
            FUN_006c4a10(&param_2,iVar4);
            puVar1 = param_2;
            if (((param_2 != (undefined4 *)0x0) &&
                (LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0)) &&
               (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
            cVar2 = (**(code **)(*piVar6 + 8))(iVar4);
            if (cVar2 != '\0') {
              FUN_004708b0(local_10);
              (**(code **)*piVar6)(1);
            }
            puVar1 = local_18;
            local_4 = 0xffffffff;
            LVar5 = InterlockedDecrement(local_18 + 1);
            if (LVar5 == 0) {
              (**(code **)*puVar1)(1);
              uVar9 = 0;
              goto LAB_004744ef;
            }
            goto LAB_0047411d;
          }
          if (*(int *)(in_ECX + 8) == 0) {
            uVar9 = FUN_00471600();
            *(undefined4 *)(in_ECX + 8) = uVar9;
          }
          FUN_00472640(param_1[2]);
        }
        else {
          FUN_0067b1e0(param_1);
        }
        puVar1 = local_18;
        local_4 = 0xffffffff;
        LVar5 = InterlockedDecrement(local_18 + 1);
        if (LVar5 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      else {
        if ((&DAT_00b102e4)[iVar4 * 0x24] != '\0') {
          FUN_004708b0(uVar3);
          local_14 = (int *)FUN_00401f00(8);
          local_4._0_1_ = 1;
          if (local_14 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_00473d90(piVar6);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00470820(uVar3,piVar6);
          goto LAB_00474315;
        }
        iVar7 = (**(code **)(*piVar6 + 0x10))(0xffffffff);
        if (*(int *)(iVar7 + 0x68) != param_1[2]) {
          (**(code **)(*piVar6 + 0x10))(0xffffffff);
          iVar7 = FUN_0051ac70();
          if (iVar7 == 1) {
            iVar7 = (**(code **)(*piVar6 + 0x10))(0xffffffff);
            FUN_00438540(*(undefined4 *)(iVar7 + 8),1);
          }
          if (((*(int *)(in_ECX + 0xd4) == 0) ||
              (iVar7 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x10),
              iVar8 = (**(code **)(*piVar6 + 0x10))(0xffffffff), iVar7 != iVar8)) &&
             ((*(int *)(in_ECX + 0xd8) == 0 ||
              (iVar7 = *(int *)(*(int *)(in_ECX + 0xd8) + 0x10),
              iVar8 = (**(code **)(*piVar6 + 0x10))(0xffffffff), iVar7 != iVar8)))) {
            uVar9 = (**(code **)(*piVar6 + 0x10))(0xffffffff);
            FUN_006c4a10(&local_18,uVar9);
            FUN_007016a0();
          }
          iVar7 = (**(code **)(*piVar6 + 0x10))(0xffffffff);
          if (iVar7 != 0) {
            puVar11 = (undefined2 *)(in_ECX + 0x3c);
            piVar10 = (int *)(in_ECX + 0xa0);
            iVar8 = 5;
            do {
              if (*piVar10 == iVar7) {
                *piVar10 = 0;
                *puVar11 = 0;
              }
              piVar10 = piVar10 + 1;
              puVar11 = puVar11 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          (**(code **)(*piVar6 + 4))(0);
          goto LAB_00474315;
        }
        iVar4 = FUN_0051ac70();
        if (iVar4 == 1) {
          InterlockedDecrement(param_1 + 3);
        }
        local_4 = 0xffffffff;
        FUN_007016a0();
      }
      uVar9 = 1;
      goto LAB_004744ef;
    }
    if (param_1[1] != 0) {
      FUN_004a7a60("Animation sequence \'%s\' not found in TESAnimGroup::GetSequenceType for file \'%s\'."
                   ,*(undefined4 *)(param_1[1] + 8),*param_1);
    }
    local_4 = 0xffffffff;
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
LAB_0047411d:
  uVar9 = 0;
LAB_004744ef:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_00474510(undefined4 param_1)

{
  FUN_00471c00(param_1);
  FUN_00471f20();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00474530(int param_1,float param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aede0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = FUN_0051aa00(param_2,uVar6);
  local_18 = param_3;
  if (param_3 == -1) {
    local_18 = *(int *)(&DAT_00b102e8 + iVar7 * 0x24);
  }
  iVar9 = local_18;
  if (local_18 == 5) {
    local_18 = 0;
  }
  else if (local_18 == 6) {
    local_18 = 3;
  }
  iVar10 = *(int *)(in_ECX + 0xa0 + local_18 * 4);
  iVar11 = 0;
  bVar2 = false;
  if (iVar10 != 0) {
    iVar11 = *(int *)(iVar10 + 0x44);
  }
  if ((param_1 == 0) || (param_2._0_2_ == 0xff)) {
    param_1 = 0;
    goto LAB_00474a88;
  }
  if (*(int *)(param_1 + 0x44) == 3) {
    FUN_006c9cb0(0,0);
  }
  if (((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x24) == 0)) &&
     ((cVar3 = FUN_00578f60(), cVar3 == '\0' ||
      (iVar8 = FUN_00660110(0), *(int *)(in_ECX + 4) != iVar8)))) {
    *(undefined4 *)(in_ECX + 0x48 + local_18 * 4) = 0;
    goto LAB_00474a88;
  }
  cVar3 = FUN_00578f60();
  if (((cVar3 == '\0') || (iVar8 = FUN_00660110(0), *(int *)(in_ECX + 4) != iVar8)) ||
     (cVar3 = FUN_0045a500(), cVar3 != '\0')) {
    if (iVar11 == 1) {
      if (((iVar9 != local_18) || (*(char *)(in_ECX + 0xc4) != '\0')) ||
         (*(int *)(param_1 + 0x44) != 0)) {
        FUN_00470fc0(iVar9,0);
      }
    }
    else {
      FUN_00470fc0(iVar9,0);
      iVar10 = 0;
    }
  }
  else {
    FUN_00470fc0(4,0);
    FUN_00470fc0(0,0);
    FUN_00470fc0(1,0);
    FUN_00470fc0(2,0);
    if (((*(int *)(in_ECX + 0x98) != 0) && (iVar9 = *(int *)(in_ECX + 0xac), iVar9 != 0)) &&
       (*(int *)(iVar9 + 0x44) != 0)) {
      if (*(int *)(iVar9 + 0x58) != 0) {
        FUN_00470b50(*(int *)(iVar9 + 0x58),0);
      }
      if (*(int *)(*(int *)(in_ECX + 0xac) + 0x44) == 5) {
        FUN_006c4480(0);
      }
      FUN_006c9cb0(0,0);
    }
    *(undefined4 *)(in_ECX + 0xac) = 0;
    *(undefined2 *)(in_ECX + 0x42) = 0xff;
    *(undefined2 *)(in_ECX + 0x76) = 0xff;
    *(undefined4 *)(in_ECX + 0x54) = 0xffffffff;
    FUN_005effd0(0xffffffff,0);
    FUN_004728c0();
  }
  *(short *)(in_ECX + 0x3c + local_18 * 2) = param_2._0_2_;
  *(int *)(in_ECX + 0xa0 + local_18 * 4) = param_1;
  cVar3 = FUN_00578f60();
  if (((cVar3 == '\0') || (iVar9 = FUN_00660110(0), *(int *)(in_ECX + 4) != iVar9)) && (iVar10 != 0)
     ) {
    FUN_00405070(*(undefined4 *)(param_1 + 0x68));
    local_4 = 0;
    FUN_00405070(*(undefined4 *)(iVar10 + 0x68));
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar3 = FUN_0051aad0();
    if (cVar3 != '\0') {
      cVar3 = FUN_0051aad0();
      cVar4 = FUN_0051aad0();
      if (cVar3 == cVar4) {
        if (*(int *)(iVar10 + 0xc) == *(int *)(param_1 + 0xc)) {
          bVar2 = true;
          if (param_1 == iVar10) {
            FUN_004a7a60("Morph Error: Trying to morph from sequence to itself.\r\n\'%s\' on \'%s\'."
                         ,*(undefined4 *)(iVar10 + 8),*(undefined4 *)(*(int *)(in_ECX + 4) + 8));
            bVar2 = false;
          }
        }
        else {
          FUN_004a7a60("Morph Error: Controller count not the same.\r\n\'%s\' has %d controllers and\r\n\'%s\' has %d on \'%s\'."
                       ,*(undefined4 *)(iVar10 + 8),*(int *)(iVar10 + 0xc),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(*(int *)(in_ECX + 4) + 8));
        }
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_007016a0();
    local_4 = 0xffffffff;
    FUN_007016a0();
  }
  bVar5 = 0;
  param_2 = _DAT_00b06538;
  if (iVar10 != 0) {
    bVar5 = *(byte *)(*(int *)(iVar10 + 0x68) + 0x21);
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x68) + 0x21);
  if (bVar5 < bVar1) {
    bVar5 = bVar1;
  }
  if (bVar5 != 0) {
    param_2 = (float)bVar5 / 30.0;
  }
  cVar3 = FUN_00578f60();
  if (((cVar3 != '\0') && (*(int *)(in_ECX + 4) == *(int *)(DAT_00b333c4 + 0x5d8))) ||
     (cVar3 = FUN_005790e0(0x40c,0), cVar3 != '\0')) {
    param_2 = _DAT_00b06540;
  }
  if (*(char *)(in_ECX + 0xc4) != '\0') {
    param_2 = 0.0;
  }
  param_2 = param_2 / _DAT_00b06530;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x2c) + 0.0;
  if (0.01 <= param_2) {
    if (bVar2) {
      FUN_006c4060(iVar10,param_1,param_2,0,0x3f800000,0x3f800000);
    }
    else if (((iVar10 == 0) || (*(int *)(iVar10 + 0x44) == 0)) ||
            (cVar3 = FUN_006c4000(iVar10,param_1,param_2,0,1,0x3f800000,0), cVar3 == '\0')) {
      iVar9 = FUN_00660110(1);
      if (*(int *)(in_ECX + 4) != iVar9) {
        iVar9 = *(int *)(in_ECX + 4);
        iVar10 = FUN_00660110(0);
        if ((iVar9 != iVar10) &&
           ((cVar3 = FUN_0047f7b0(iVar9,*(undefined4 *)(DAT_00b333cc + 0xdc)), cVar3 == '\0' ||
            (DAT_00b333b8 != '\0')))) {
          FUN_00470b20(param_1,0,1,0x3f800000,0,0);
          goto LAB_00474a34;
        }
      }
      FUN_006c5c70(param_1,0,param_2,0,0);
    }
  }
  else {
    FUN_006c9ba0(0,1,0x3f800000,0,0,0);
  }
LAB_00474a34:
  switch((&DAT_00b102ec)[iVar7 * 9]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(in_ECX + 0x48 + local_18 * 4) = 0;
  }
  if (*(char *)(in_ECX + 0xc4) != '\0') {
    *(undefined1 *)(in_ECX + 0xc4) = 0;
    FUN_00471230(*(undefined4 *)(in_ECX + 0x94),0,1);
  }
LAB_00474a88:
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_00474ab0(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_2;
  if (param_1 == 5) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1;
    if (param_1 == 6) {
      iVar5 = 3;
    }
  }
  if (param_3 == -1) {
    FUN_00470fc0(iVar5,0);
    piVar6 = param_2;
    if ((short)param_2 != 0xff) {
      cVar2 = FUN_00470960(param_2,&param_2);
      piVar1 = param_2;
      if (cVar2 != '\0') {
        iVar3 = (**(code **)(*param_2 + 0x10))(param_5);
        if (iVar3 != 0) {
          uVar4 = (**(code **)(*piVar1 + 0x10))(param_5);
          *(undefined4 *)(in_ECX + 0xa0 + iVar5 * 4) = uVar4;
          FUN_006c9ba0(0,0,0x3f800000,0,0,0);
        }
      }
    }
  }
  else {
    cVar2 = FUN_00470960(param_2,&param_2);
    if (cVar2 != '\0') {
      cVar2 = FUN_00470960(piVar6,&param_2);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*param_2 + 0x10))(param_5);
        FUN_00474530(uVar4,piVar6,param_1);
      }
      *(int *)(in_ECX + 0x48 + iVar5 * 4) = param_3;
    }
  }
  *(short *)(in_ECX + 0x3c + iVar5 * 2) = (short)piVar6;
  *(undefined4 *)(in_ECX + 0x94) = param_4;
  return;
}



void FUN_00474bd0(void)

{
  FUN_00472690(0);
  return;
}



undefined4 FUN_00474be0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = param_2;
  if ((short)param_2 != 0xff) {
    cVar2 = FUN_00470960(param_2,&param_2);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0xc))();
      if (cVar2 == '\0') {
        iVar3 = FUN_00470c40(param_1);
        if (iVar3 != 0) {
          uVar4 = FUN_00474530(iVar3,piVar1,0xffffffff);
          return uVar4;
        }
      }
      return 0;
    }
  }
  return 0;
}



undefined4 *
FUN_00474c50(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,char param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aee29;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  in_ECX[4] = 0;
  piVar9 = in_ECX + 7;
  local_4 = 0;
  _eh_vector_constructor_iterator_(piVar9,4,2,FUN_007c88a0,FUN_007016a0);
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[4] = 0;
  }
  in_ECX[3] = param_2;
  in_ECX[1] = param_3;
  in_ECX[9] = param_1;
  *in_ECX = 0;
  piVar8 = piVar9;
  do {
    iVar4 = FUN_00449040(param_1,iVar7);
    piVar8[-2] = iVar4;
    puVar1 = (undefined4 *)*piVar8;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar8 = 0;
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar7 < 2);
  in_ECX[10] = param_4;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar5 = (**(code **)(*(int *)(param_1 + 0x18) + 0x14))();
  FUN_00402e30(&uStack_14,"%s\\%s","Meshes",uVar5);
  if (param_5 == '\0') {
    iVar7 = FUN_004383b0(uStack_14,in_ECX,0,param_4);
  }
  else {
    iVar7 = FUN_00439ff0(uStack_14);
  }
  in_ECX[2] = iVar7;
  if (iVar7 != 0) {
    param_1 = 2;
    do {
      if ((piVar9[-2] != 0) && (param_4 != (int *)0x0)) {
        uVar5 = (**(code **)(*(int *)(piVar9[-2] + 0x18) + 0x14))(0xffffffff,param_4,0);
        puVar6 = (undefined4 *)FUN_00479450(uVar5);
        puVar1 = (undefined4 *)*piVar9;
        if (puVar1 != puVar6) {
          if (puVar1 != (undefined4 *)0x0) {
            LVar3 = InterlockedDecrement(puVar1 + 1);
            if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
          }
          *piVar9 = (int)puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar6 + 1);
          }
        }
        iVar7 = (**(code **)(*param_4 + 0x164))();
        FUN_007165b0(*piVar9,*(undefined4 *)(*(int *)(iVar7 + 0x98) + 0x7c));
      }
      piVar9 = piVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if (param_5 == '\0') {
      InterlockedIncrement((LONG *)(in_ECX[2] + 0xc));
    }
    *in_ECX = 1;
  }
  FUN_00401f20(uStack_14);
  *unaff_FS_OFFSET = local_c;
  return in_ECX;
}



void FUN_00474e90(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 *puVar6;
  int iVar7;
  char local_5;
  undefined4 local_4;
  
  FUN_004534d0(in_ECX,4);
  FUN_004534d0(in_ECX + 1,4);
  FUN_004534d0(in_ECX + 3,4);
  FUN_004534d0(&local_5,1);
  if (local_5 == '\0') {
    if ((*in_ECX == 0) && (0x4b < *(byte *)(DAT_00b33b00 + 0x7c))) {
      *in_ECX = 1;
    }
    return;
  }
  FUN_004534d0(&local_4,1);
  piVar1 = param_2;
  if ((in_ECX[2] == 0) || (cVar2 = FUN_00474070(in_ECX[2],0), cVar2 == '\0')) goto LAB_00474fc0;
  iVar7 = *in_ECX;
  if (iVar7 == 2) {
    puVar6 = &param_2;
    uVar4 = FUN_0051ac70(puVar6);
    cVar2 = FUN_00470960(uVar4,puVar6);
    if (cVar2 == '\0') goto LAB_00474fc0;
    *(undefined1 *)(piVar1 + 0x31) = 1;
    iVar7 = in_ECX[3];
    uVar4 = FUN_0051ac70(iVar7);
    uVar5 = (**(code **)(*param_2 + 0x10))(local_4,uVar4);
    uVar4 = FUN_00474530(uVar5,uVar4,iVar7);
  }
  else {
    if (iVar7 == 0) {
      *in_ECX = 1;
      goto LAB_00474fc0;
    }
    if (iVar7 != 3) goto LAB_00474fc0;
    puVar6 = &param_2;
    uVar4 = FUN_0051ac70(puVar6);
    cVar2 = FUN_00470960(uVar4,puVar6);
    if (cVar2 == '\0') goto LAB_00474fc0;
    uVar4 = (**(code **)(*param_2 + 0x10))(local_4);
  }
  FUN_0075fa90(uVar4);
LAB_00474fc0:
  if (in_ECX[4] == 0) {
    uVar3 = FUN_0049f550();
    FUN_00452170(uVar3);
    return;
  }
  FUN_0049f5f0(param_1);
  return;
}



undefined4 FUN_00475020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  undefined2 auStack_20 [2];
  uint local_1c;
  int local_18;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6fcb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = 0;
  local_1c = 0;
  iVar10 = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_14,4);
    if (local_14 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\Animation.cpp",0xf7e,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\Animation.cpp",0xf7e,*puVar2,uVar6);
      }
    }
    iVar10 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_1c,2);
  }
  cVar3 = FUN_0045ba00(&local_18,4);
  if ((local_18 != 0) || (cVar3 != '\0')) {
    FUN_004534d0(auStack_20,2);
    if (local_18 != 0) {
      uVar6 = FUN_0046b250(local_18,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06514,0);
      iVar7 = FUN_009832e6(uVar6);
      if (iVar7 != 0) {
        iStack_10 = FUN_00401f00(0x2c);
        uStack_4 = 0;
        if (iStack_10 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00474c50(iVar7,4,1,param_1,1);
        }
        uStack_4 = 0xffffffff;
        FUN_00474e90(param_3,param_2);
        goto LAB_004751d8;
      }
    }
    uVar6 = (**(code **)(*param_1 + 0xd4))();
    FUN_004a7a60("Could not find IdleForm %08X when loading actor %s",local_18,uVar6);
    FUN_00452170(auStack_20[0]);
  }
LAB_004751d8:
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar8 = local_1c & 0xffff;
      if (uVar8 + iVar10 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar4 - uVar8) - iVar10;
        pcVar11 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar8 + iVar10 <= uVar4) goto LAB_004752e1;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar8 - uVar4) + iVar10;
        pcVar11 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar11,iVar10,"..\\TES Shared\\Animation.cpp",0xf99,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (local_1c & 0xffff) + iVar10;
      if (uVar8 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_1c & 0xffff)) - iVar10,"..\\TES Shared\\Animation.cpp",0xf99,
                     *puVar2,uVar6);
      }
      else if (uVar4 < uVar8) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_1c & 0xffff) - uVar4) + iVar10,"..\\TES Shared\\Animation.cpp",0xf99,
                     *puVar2,uVar6);
      }
    }
  }
LAB_004752e1:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_00475300(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = *(int *)(in_ECX + 0xcc);
  puVar1 = (undefined4 *)(in_ECX + 0xcc);
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 5) {
      iVar5 = 0;
    }
    else if (iVar5 == 6) {
      iVar5 = 3;
    }
    if ((*(int *)(iVar3 + 0x10) != 0) &&
       (*(int *)(in_ECX + 0xa0 + iVar5 * 4) == *(int *)(iVar3 + 0x10))) {
      FUN_004733a0(iVar5);
    }
    if (*(int *)(in_ECX + 0xd4) == 0) {
      *(undefined4 *)(in_ECX + 0xd4) = *puVar1;
      *puVar1 = 0;
    }
    else if (*(int *)(in_ECX + 0xd8) == 0) {
      *(undefined4 *)(in_ECX + 0xd8) = *puVar1;
      *puVar1 = 0;
    }
    else {
      FUN_00472ed0(puVar1);
    }
  }
  iVar3 = FUN_00401f00(0x2c,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00474c50(param_1,param_2,1,0,0);
  }
  *puVar1 = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004753f0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xd0);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    cVar3 = FUN_00474070(piVar1[2],0);
    if (cVar3 != '\0') {
      iVar2 = *(int *)(in_ECX + 0xd0);
      if (iVar2 != 0) {
        FUN_004729f0();
        FUN_00401f20(iVar2);
      }
      *(undefined4 *)(in_ECX + 0xd0) = 0;
      return 1;
    }
  }
  return 0;
}



void FUN_00475440(char param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar3 = *(int *)(in_ECX + 0xcc);
  puVar1 = (undefined4 *)(in_ECX + 0xcc);
  if (iVar3 == 0) goto LAB_004754c8;
  iVar4 = *(int *)(iVar3 + 0xc);
  if (iVar4 == 5) {
    iVar4 = 0;
  }
  else if (iVar4 == 6) {
    iVar4 = 3;
  }
  if (param_2 == '\0') {
    if ((*(int *)(iVar3 + 0x10) != 0) &&
       (*(int *)(in_ECX + 0xa0 + iVar4 * 4) == *(int *)(iVar3 + 0x10))) {
      FUN_004733a0(iVar4);
    }
    if (*(int *)(in_ECX + 0xd4) == 0) {
      *(undefined4 *)(in_ECX + 0xd4) = *puVar1;
      *puVar1 = 0;
      goto LAB_004754c8;
    }
    if (*(int *)(in_ECX + 0xd8) == 0) {
      *(undefined4 *)(in_ECX + 0xd8) = *puVar1;
      *puVar1 = 0;
      goto LAB_004754c8;
    }
  }
  FUN_00472ed0(puVar1);
LAB_004754c8:
  if (param_1 != '\0') {
    iVar3 = *(int *)(in_ECX + 0xd0);
    puVar2 = (undefined4 *)(in_ECX + 0xd0);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
      if (iVar4 == 5) {
        iVar4 = 0;
      }
      else if (iVar4 == 6) {
        iVar4 = 3;
      }
      if (param_2 == '\0') {
        if ((*(int *)(iVar3 + 0x10) != 0) &&
           (*(int *)(in_ECX + 0xa0 + iVar4 * 4) == *(int *)(iVar3 + 0x10))) {
          FUN_004733a0(iVar4);
        }
        if (*(int *)(in_ECX + 0xd4) == 0) {
          *(undefined4 *)(in_ECX + 0xd4) = *puVar2;
          *puVar2 = 0;
          return;
        }
        if (*(int *)(in_ECX + 0xd8) == 0) {
          *(undefined4 *)(in_ECX + 0xd8) = *puVar2;
          *puVar2 = 0;
          return;
        }
      }
      FUN_00472ed0(puVar2);
      return;
    }
  }
  *puVar1 = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  return;
}



void FUN_00475590(int *param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  uint uVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  char cStack_1a;
  char cStack_19;
  uint local_18;
  int *local_14;
  int local_10;
  int iStack_c;
  int local_8;
  undefined4 uStack_4;
  
  local_18 = 0;
  local_10 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_8,4);
    if (local_8 != 0x4b4f4c42) {
      puVar11 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar11 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\Animation.cpp",0x125e,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar11);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar11 + 9),*(undefined4 *)((int)puVar11 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\Animation.cpp",0x125e,*puVar11,uVar6);
      }
    }
    local_10 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_18,2);
  }
  piVar5 = param_1;
  local_14 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    cVar3 = (**(code **)(*param_1 + 400))();
    if (cVar3 != '\0') {
      local_14 = piVar5;
    }
  }
  FUN_004534d0(in_ECX + 0xbc,4);
  FUN_004534d0(in_ECX + 0xc0,4);
  FUN_004534d0(in_ECX + 0xc,0xc);
  FUN_004534d0(in_ECX + 0x38,4);
  FUN_004534d0(in_ECX + 0x90,1);
  FUN_004534d0(&cStack_19,1);
  param_1 = (int *)0x0;
  puVar10 = (undefined2 *)(in_ECX + 0x3c);
  puVar11 = (undefined4 *)(in_ECX + 0x48);
  iStack_c = 5;
  do {
    if (((int)cStack_19 & 1 << ((byte)param_1 & 0x1f)) != 0) {
      FUN_004534d0(puVar10,2);
      FUN_004534d0(puVar11,4);
      FUN_004534d0(puVar11 + 5,4);
      FUN_004534d0(puVar10 + 0x1a,2);
      FUN_004534d0(puVar11 + 0xd,4);
      FUN_004534d0(&uStack_4,1);
      fVar2 = (float)param_1;
      puVar11[0x16] = 0;
      if ((char)uStack_4 != -2) {
        *(undefined1 *)(in_ECX + 0xc4) = 1;
        FUN_00474ab0(param_1,*puVar10,*puVar11,*(undefined4 *)(in_ECX + 0x94),uStack_4);
        if (puVar11[0x16] == 0) {
          uVar4 = FUN_0049f550();
          FUN_00452170(uVar4);
          FUN_00470fc0(fVar2,0);
        }
        else {
          FUN_0049f5f0(*(undefined4 *)(in_ECX + 0x94));
        }
      }
    }
    piVar5 = local_14;
    param_1 = (int *)((int)param_1 + 1);
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  uVar6 = FUN_00475020(local_14);
  *(undefined4 *)(in_ECX + 0xcc) = uVar6;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x4c) {
    uVar6 = FUN_00475020(piVar5);
    *(undefined4 *)(in_ECX + 0xd0) = uVar6;
  }
  if ((*(int **)(in_ECX + 0xcc) != (int *)0x0) && (**(int **)(in_ECX + 0xcc) == 1)) {
    *(undefined4 *)(in_ECX + 0xb0) = 0;
  }
  FUN_004534d0(in_ECX + 0xc4,1);
  cStack_1a = '\x01';
  if (0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&cStack_1a,1);
    if (cStack_1a == '\0') goto LAB_004759e9;
  }
  bVar1 = false;
  iVar7 = (**(code **)(local_14[0x17] + 0x30))();
  if (iVar7 != 0) {
    piVar5 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x98) + 0x7c) + 0x4c))("magicNode");
    if (piVar5 != (int *)0x0) {
      iVar7 = (**(code **)(*piVar5 + 8))();
      if (((iVar7 != 0) && (*(short *)(iVar7 + 0xb6) != 0)) && (**(int **)(iVar7 + 0xb0) != 0)) {
        iVar7 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(**(int **)(iVar7 + 0xb0) + 0xc));
        if (iVar7 != 0) {
          cVar3 = FUN_0055e000("SpecialIdle_Cast",&param_1);
          fVar2 = (float)param_1;
          if ((cVar3 != '\0') && (param_1 != (int *)0x0)) {
            FUN_004715c0(0);
            FUN_00470b20(fVar2,0,0,0x3f800000,0,0);
            *(ushort *)(iVar7 + 8) = *(ushort *)(iVar7 + 8) | 8;
            FUN_0049f5f0(*(undefined4 *)(in_ECX + 0x94));
            FUN_004534d0(&uStack_4,4);
            iVar7 = local_14[0x18];
            if (iVar7 != 0) {
              param_1 = (int *)(*(float *)((int)fVar2 + 0x30) * 0.75);
              FUN_0069dd50(1,param_1);
              *(undefined4 *)(iVar7 + 0x10) = uStack_4;
            }
            bVar1 = true;
          }
        }
      }
    }
  }
  if ((0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) && (!bVar1)) {
    uVar8 = FUN_0049f550();
    FUN_00452170((uVar8 & 0xffff) + 4);
  }
LAB_004759e9:
  FUN_00471230(*(undefined4 *)(in_ECX + 0x94),in_ECX + 0x18,1);
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar11 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar11 == (undefined4 *)0x0) {
      uVar9 = local_18 & 0xffff;
      if (uVar9 + local_10 < uVar8) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar9) - local_10,"..\\TES Shared\\Animation.cpp",0x12da,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar8 < uVar9 + local_10) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar9 - uVar8) + local_10,"..\\TES Shared\\Animation.cpp",0x12da,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar11);
      iVar7 = local_10;
      uVar9 = (local_18 & 0xffff) + local_10;
      if (uVar9 < uVar8) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar11 + 9),*(undefined4 *)((int)puVar11 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar8 - (local_18 & 0xffff)) - iVar7,"..\\TES Shared\\Animation.cpp",0x12da,
                     *puVar11,uVar6);
        return;
      }
      if (uVar8 < uVar9) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar11 + 9),*(undefined4 *)((int)puVar11 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_18 & 0xffff) - uVar8) + iVar7,"..\\TES Shared\\Animation.cpp",0x12da,
                     *puVar11,uVar6);
        return;
      }
    }
  }
  return;
}



void FUN_00475b40(byte param_1)

{
  FUN_00473d00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00475b60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aee5e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xcc) != 0) {
    FUN_00472ed0((undefined4 *)(in_ECX + 0xcc));
  }
  if (*(int *)(in_ECX + 0xd0) == 0) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
    *(undefined4 *)(in_ECX + 0xd0) = 0;
  }
  else {
    FUN_00472ed0((undefined4 *)(in_ECX + 0xd0));
  }
  piVar6 = (int *)(in_ECX + 0xd4);
  iVar5 = 2;
  do {
    if (*piVar6 != 0) {
      FUN_00472ed0(piVar6);
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = *(int *)(in_ECX + 0x98);
  if (iVar5 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar5 + 0x54) != 0) {
      do {
        FUN_006c9cb0(0,0);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar5 + 0x54));
    }
    FUN_006c4bd0();
    piVar6 = *(int **)(*(int *)(in_ECX + 0x98) + 0x30);
    if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(), iVar5 != 0)) {
      FUN_006ffe90(*(undefined4 *)(in_ECX + 0x98));
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x98);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x98) = 0;
    }
  }
  uVar7 = *(uint *)(*(int *)(in_ECX + 0x9c) + 4);
  uVar3 = 0;
  if (uVar7 != 0) {
    piVar6 = *(int **)(*(int *)(in_ECX + 0x9c) + 8);
    piVar4 = piVar6;
    do {
      if (*piVar4 != 0) {
        local_14[0] = piVar6[uVar3];
        goto joined_r0x00475ca2;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar7);
  }
  local_14[0] = 0;
joined_r0x00475ca2:
  while (local_14[0] != 0) {
    puStack_18 = (undefined4 *)0x0;
    FUN_004709c0(local_14,auStack_1c,&puStack_18);
    if (puStack_18 != (undefined4 *)0x0) {
      (**(code **)*puStack_18)(1);
    }
  }
  iVar5 = *(int *)(in_ECX + 0xb8);
  local_14[0] = 0;
  while (iVar5 != 0) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0xb8) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0xb8));
    *(int *)(in_ECX + 0xb8) = iVar5;
  }
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  FUN_007c2a40();
  if (*(undefined4 **)(in_ECX + 0x9c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x9c))(1);
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  local_4 = 0xffffffff;
  if (((puVar1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



char FUN_00475d80(int *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *unaff_FS_OFFSET;
  int *local_2c;
  int iStack_28;
  char *apcStack_20 [5];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aee8b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == (int *)0x0)) ||
     (cVar4 = FUN_00470960(0,&local_2c), cVar4 != '\0')) {
    cVar4 = '\0';
  }
  else {
    iVar7 = (**(code **)(*param_3 + 0x170))(uVar6);
    cVar4 = *(char *)(iVar7 + 4);
    *(int *)(in_ECX + 4) = param_2;
    apcStack_20[0] = "Bip01";
    apcStack_20[1] = "Bip01 L ForearmTwist";
    apcStack_20[2] = "Torch";
    apcStack_20[3] = "Weapon";
    apcStack_20[4] = "Bip01 Head";
    iVar7 = 0;
    puVar10 = (undefined4 *)(in_ECX + 0x24);
    do {
      uVar8 = FUN_004d96f0(param_2,apcStack_20[iVar7]);
      *puVar10 = uVar8;
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < 5);
    puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
    *puVar1 = *puVar1 & 0xfffd;
    iStack_28 = FUN_00401f00(0x80);
    uStack_4 = 0;
    if (iStack_28 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_006c5610(*(undefined4 *)(in_ECX + 4),1);
    }
    uStack_4 = 0xffffffff;
    FUN_0075fa90(uVar8);
    cVar5 = FUN_0046cb60();
    while (cVar5 == '\0') {
      iVar7 = *piVar3;
      iStack_28 = iVar7;
      iVar9 = FUN_00439ff0(iVar7);
      if (*(int *)(iVar9 + 8) != 0) {
        cVar5 = FUN_0051aaa0();
        if ((cVar5 == '\0') || (cVar4 != '#')) {
          param_1 = (int *)0x1;
          if ((DAT_00b333c4 == 0) || ((iVar7 = FUN_00660110(0), iVar7 == 0 || (DAT_00b06548 == 0))))
          {
LAB_00475f86:
            param_1 = (int *)0x0;
          }
          else {
            iVar7 = FUN_00660110(0);
            if ((param_2 == iVar7) ||
               ((iVar7 = FUN_00660110(1), param_2 == iVar7 ||
                (param_2 == *(int *)(DAT_00b333c4 + 0x5d8))))) {
              cVar5 = FUN_005790e0(0x40c,0);
              if (cVar5 == '\0') goto LAB_00475f86;
            }
            else {
              cVar5 = FUN_0045a500();
              if (((cVar5 != '\0') || (cVar5 = FUN_00578f60(), cVar5 != '\0')) ||
                 (cVar5 = FUN_00404f20(), cVar5 != '\0')) goto LAB_00475f86;
            }
          }
          FUN_00474070(iVar9,param_1);
          iVar7 = iStack_28;
        }
        else {
          InterlockedDecrement((LONG *)(iVar9 + 0xc));
        }
      }
      FUN_00401f20(iVar7);
      piVar2 = (int *)piVar3[1];
      if (piVar2 == (int *)0x0) {
        *piVar3 = 0;
      }
      else {
        piVar3[1] = piVar2[1];
        *piVar3 = *piVar2;
        FUN_00401f20(piVar2);
      }
      cVar5 = FUN_0046cb60();
    }
    if (*(int *)(in_ECX + 8) != 0) {
      puVar10 = &DAT_00b26dc4;
      puVar11 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x30);
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    FUN_00401f20(piVar3);
    cVar4 = FUN_00470960(0,&local_2c);
    if ((cVar4 != '\0') && (iVar7 = (**(code **)(*local_2c + 0x10))(0xffffffff), iVar7 != 0)) {
      FUN_006c9ba0(100,1,0x3f800000,0,0,0);
      FUN_00707370(0,1);
      FUN_006c9cb0(0,0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return cVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00476080(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint local_110;
  int local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_110;
  local_10c = in_ECX;
  do {
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
    _sprintf(local_108,"%s\\%s\\%s",param_2,"SpecialAnims",*param_1);
    iVar2 = FUN_00439ff0(local_108);
    local_110 = CONCAT31(local_110._1_3_,1);
    if ((((DAT_00b333c4 == 0) || (iVar3 = FUN_00660110(0), iVar3 == 0)) || (DAT_00b06548 == 0)) ||
       (iVar3 = FUN_00660110(0), *(int *)(in_ECX + 4) == iVar3)) {
LAB_00476161:
      local_110 = local_110 & 0xffffff00;
    }
    else {
      iVar3 = *(int *)(in_ECX + 4);
      iVar4 = FUN_00660110(1);
      if (((iVar3 == iVar4) || (iVar3 == *(int *)(DAT_00b333c4 + 0x5d8))) ||
         ((cVar1 = FUN_0045a500(), cVar1 != '\0' ||
          ((cVar1 = FUN_00578f60(), cVar1 != '\0' || (cVar1 = FUN_00404f20(), cVar1 != '\0'))))))
      goto LAB_00476161;
    }
    in_ECX = local_10c;
    if (iVar2 == 0) {
      FUN_004a7a60("Failed to load animation file \'%s\'.",local_108);
      in_ECX = local_10c;
    }
    else {
      FUN_00474070(iVar2,local_110);
    }
    param_1 = (undefined4 *)param_1[1];
  } while( true );
}



void FUN_004761c0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    cVar3 = FUN_0046cb60();
    while (cVar3 == '\0') {
      uVar1 = *param_1;
      iVar4 = FUN_00439ff0(uVar1);
      cVar3 = FUN_0051aaa0();
      if (cVar3 == '\0') {
        InterlockedDecrement((LONG *)(iVar4 + 0xc));
      }
      else {
        FUN_00474070(iVar4,0);
      }
      FUN_00401f20(uVar1);
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 == (undefined4 *)0x0) {
        *param_1 = 0;
      }
      else {
        param_1[1] = puVar2[1];
        *param_1 = *puVar2;
        FUN_00401f20(puVar2);
      }
      cVar3 = FUN_0046cb60();
    }
    FUN_00401f20(param_1);
  }
  return;
}



undefined4 FUN_00476260(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = param_1;
  if ((short)param_1 != 0xff) {
    cVar2 = FUN_00470960(param_1,&param_1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x10))(0xffffffff);
      uVar3 = FUN_00474530(uVar3,piVar1,param_1);
      return uVar3;
    }
  }
  return 0;
}



void FUN_004762b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_009bfae6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0) {
    iVar2 = FUN_00401f00(0x2c,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00474c50(param_1,param_3,0,param_2,0);
      goto LAB_00476350;
    }
  }
  else {
    iVar2 = FUN_00401f00(0x2c,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_00474c50(param_1,param_3,0,param_2,1);
      goto LAB_00476350;
    }
  }
  uVar3 = 0;
LAB_00476350:
  *(undefined4 *)(in_ECX + 0xd0) = uVar3;
  local_4 = 0xffffffff;
  FUN_004753f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00476380(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if (*(int **)(in_ECX + 0xd0) != (int *)0x0) {
    if (**(int **)(in_ECX + 0xd0) != 1) {
      return 0;
    }
    FUN_00475440(0,0);
  }
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    cVar2 = FUN_00474070(piVar1[2],0);
    if (cVar2 != '\0') {
      uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0xc);
      uVar3 = FUN_0051ac70(uVar5);
      iVar4 = FUN_00476260(uVar3,uVar5);
      if (iVar4 != 0) {
        FUN_00472c00(iVar4);
        return 1;
      }
      **(undefined4 **)(in_ECX + 0xcc) = 3;
      return 0;
    }
    **(undefined4 **)(in_ECX + 0xcc) = 3;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00476410(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char acStack_154 [4];
  int iStack_150;
  undefined **ppuStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 *puStack_140;
  int *local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int aiStack_128 [7];
  int iStack_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_154;
  local_13c = param_1;
  if ((param_1 != (int *)0x0) && (cVar2 = (**(code **)(*param_1 + 400))(), cVar2 != '\0')) {
    if (*(int *)(in_ECX + 0x98) == 0) {
      *(int **)(in_ECX + 200) = param_1;
    }
    else {
      iVar11 = 0x11;
      iStack_144 = 0x11;
      iStack_148 = 1;
      iVar3 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
        iVar3 = (int)*(char *)(*(int *)(iVar3 + 8) + 0x90);
        iStack_148 = *(int *)(&DAT_00b086b8 + iVar3 * 4);
        switch(iVar3) {
        case 0:
        case 1:
          iVar11 = 0xe;
          iStack_144 = iVar11;
          break;
        case 2:
        case 3:
          iVar11 = 0x10;
          iStack_144 = iVar11;
          break;
        default:
          goto switchD_004764b1_default;
        }
      }
      if ((param_1 != DAT_00b333c4) ||
         (iVar3 = FUN_0065d750(1), pcVar5 = DAT_00b36bb8, in_ECX != iVar3)) {
        uVar4 = (**(code **)(*param_1 + 0x170))();
        pcVar5 = (char *)FUN_0046d3f0(uVar4);
      }
      if (pcVar5 != (char *)0x0) {
        aiStack_128[2] = FUN_005f23b0(iVar11);
        puStack_140 = (undefined4 *)FUN_00401f00(8);
        if (puStack_140 == (undefined4 *)0x0) {
          puStack_140 = (undefined4 *)0x0;
        }
        else {
          *puStack_140 = 0;
          puStack_140[1] = 0;
        }
        iVar3 = -(int)pcVar5;
        do {
          cVar2 = *pcVar5;
          pcVar5[(int)(acStack_108 + iVar3)] = cVar2;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        pcVar5 = _strrchr(acStack_108,0x5c);
        if (pcVar5 != (char *)0x0) {
          acStack_154[0] = '1';
          acStack_154[1] = 0;
          aiStack_128[3] = 1;
          aiStack_128[4] = 2;
          aiStack_128[5] = 2;
          aiStack_128[6] = 3;
          iStack_10c = 4;
          uStack_138 = 0x16;
          uStack_134 = 0x19;
          uStack_130 = 0x1a;
          uStack_12c = 0x18;
          aiStack_128[0] = 0x17;
          ppuStack_14c = &PTR_DAT_00b102b8;
          do {
            iStack_150 = 0;
            do {
              if (aiStack_128[2] < *(int *)(acStack_108 + iStack_150 + -4)) {
LAB_00476969:
                if (iStack_144 == 0xe) {
                  pcVar6 = *ppuStack_14c;
                  pcVar9 = pcVar5;
                  do {
                    pcVar9 = pcVar9 + 1;
                    cVar2 = *pcVar6;
                    *pcVar9 = cVar2;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6;
                    pcVar6 = pcVar9 + 1;
                  } while (pcVar9[1] != '\0');
                  builtin_strncpy(pcVar9 + 1,"Blade",6);
                  pcVar6 = (&PTR_DAT_00b102e0)[*(int *)((int)aiStack_128 + iStack_150) * 9];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar9 != '\0');
                  *(undefined **)pcVar6 = &DAT_00666b2e;
LAB_00476b29:
                  iVar3 = FUN_00434870(acStack_108);
                  if (iVar3 != 0) goto LAB_00476c06;
                }
                else {
                  if (iStack_144 == 0x10) {
                    pcVar6 = *ppuStack_14c;
                    pcVar9 = pcVar5;
                    do {
                      pcVar9 = pcVar9 + 1;
                      cVar2 = *pcVar6;
                      *pcVar9 = cVar2;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar2 != '\0');
                    pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                    pcVar9 = pcVar6;
                    do {
                      cVar2 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    pcVar12 = pcVar5 + -1;
                    do {
                      pcVar10 = pcVar12 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar10 != '\0');
                    pcVar10 = pcVar6;
                    for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0;
                        uVar7 = uVar7 - 1) {
                      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                      pcVar10 = pcVar10 + 4;
                      pcVar12 = pcVar12 + 4;
                    }
                    for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar12 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    }
                    pcVar6 = pcVar5 + -1;
                    do {
                      pcVar9 = pcVar6;
                      pcVar6 = pcVar9 + 1;
                    } while (pcVar9[1] != '\0');
                    builtin_strncpy(pcVar9 + 1,"Blunt",6);
                    pcVar6 = (&PTR_DAT_00b102e0)[*(int *)((int)aiStack_128 + iStack_150) * 9];
                    pcVar9 = pcVar6;
                    do {
                      cVar2 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    pcVar12 = pcVar5 + -1;
                    do {
                      pcVar10 = pcVar12 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar10 != '\0');
                    pcVar10 = pcVar6;
                    for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0;
                        uVar7 = uVar7 - 1) {
                      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                      pcVar10 = pcVar10 + 4;
                      pcVar12 = pcVar12 + 4;
                    }
                    for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar12 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    }
                    pcVar6 = pcVar5 + -1;
                    do {
                      pcVar9 = pcVar6 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (*pcVar9 != '\0');
                    *(undefined **)pcVar6 = &DAT_00666b2e;
                    goto LAB_00476b29;
                  }
                  if (iStack_144 != 0x11) goto LAB_00476b29;
                }
                pcVar6 = *ppuStack_14c;
                pcVar9 = pcVar5;
                do {
                  pcVar9 = pcVar9 + 1;
                  cVar2 = *pcVar6;
                  *pcVar9 = cVar2;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                pcVar9 = pcVar6;
                do {
                  cVar2 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                pcVar12 = pcVar5 + -1;
                do {
                  pcVar10 = pcVar12 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (*pcVar10 != '\0');
                pcVar10 = pcVar6;
                for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1)
                {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                iVar3 = *(int *)((int)aiStack_128 + iStack_150);
                for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar12 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                pcVar6 = (&PTR_DAT_00b102e0)[iVar3 * 9];
                pcVar9 = pcVar6;
                do {
                  cVar2 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                pcVar12 = pcVar5 + -1;
                do {
                  pcVar10 = pcVar12 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (*pcVar10 != '\0');
                pcVar10 = pcVar6;
                for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1)
                {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar12 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                pcVar6 = pcVar5 + -1;
                do {
                  pcVar9 = pcVar6 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (*pcVar9 != '\0');
                *(undefined **)pcVar6 = &DAT_00666b2e;
                iVar3 = FUN_00434870(acStack_108);
                if (iVar3 != 0) goto LAB_00476c06;
              }
              else {
                if (iStack_144 == 0xe) {
                  pcVar6 = *ppuStack_14c;
                  pcVar9 = pcVar5;
                  do {
                    pcVar9 = pcVar9 + 1;
                    cVar2 = *pcVar6;
                    *pcVar9 = cVar2;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6;
                    pcVar6 = pcVar9 + 1;
                  } while (pcVar9[1] != '\0');
                  builtin_strncpy(pcVar9 + 1,"BladeSkill",0xb);
                  acStack_154[0] = acStack_108[iStack_150 + -4] + '0';
                  pcVar6 = acStack_154;
                  do {
                    cVar2 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar6 - (int)acStack_154;
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar9 != '\0');
                  pcVar9 = acStack_154;
                  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar6 = pcVar6 + 4;
                  }
                  iVar3 = *(int *)((int)aiStack_128 + iStack_150);
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar6 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar6 = pcVar6 + 1;
                  }
                  pcVar6 = (&PTR_DAT_00b102e0)[iVar3 * 9];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar9 != '\0');
                  *(undefined **)pcVar6 = &DAT_00666b2e;
LAB_0047682a:
                  iVar3 = FUN_00434870(acStack_108);
                  if (iVar3 == 0) goto LAB_00476842;
                }
                else {
                  if (iStack_144 == 0x10) {
                    pcVar6 = *ppuStack_14c;
                    pcVar9 = pcVar5;
                    do {
                      pcVar9 = pcVar9 + 1;
                      cVar2 = *pcVar6;
                      *pcVar9 = cVar2;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar2 != '\0');
                    pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                    pcVar9 = pcVar6;
                    do {
                      cVar2 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    pcVar12 = pcVar5 + -1;
                    do {
                      pcVar10 = pcVar12 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar10 != '\0');
                    pcVar10 = pcVar6;
                    for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0;
                        uVar7 = uVar7 - 1) {
                      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                      pcVar10 = pcVar10 + 4;
                      pcVar12 = pcVar12 + 4;
                    }
                    for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar12 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    }
                    pcVar6 = pcVar5 + -1;
                    do {
                      pcVar9 = pcVar6;
                      pcVar6 = pcVar9 + 1;
                    } while (pcVar9[1] != '\0');
                    builtin_strncpy(pcVar9 + 1,"BluntSkill",0xb);
                    acStack_154[0] = acStack_108[iStack_150 + -4] + '0';
                    pcVar6 = acStack_154;
                    do {
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar2 != '\0');
                    uVar7 = (int)pcVar6 - (int)acStack_154;
                    pcVar6 = pcVar5 + -1;
                    do {
                      pcVar9 = pcVar6 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (*pcVar9 != '\0');
                    pcVar9 = acStack_154;
                    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar9;
                      pcVar9 = pcVar9 + 4;
                      pcVar6 = pcVar6 + 4;
                    }
                    iVar3 = *(int *)((int)aiStack_128 + iStack_150);
                    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar6 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                      pcVar6 = pcVar6 + 1;
                    }
                    pcVar6 = (&PTR_DAT_00b102e0)[iVar3 * 9];
                    pcVar9 = pcVar6;
                    do {
                      cVar2 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    pcVar12 = pcVar5 + -1;
                    do {
                      pcVar10 = pcVar12 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar10 != '\0');
                    pcVar10 = pcVar6;
                    for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0;
                        uVar7 = uVar7 - 1) {
                      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                      pcVar10 = pcVar10 + 4;
                      pcVar12 = pcVar12 + 4;
                    }
                    for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar12 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    }
                    pcVar6 = pcVar5 + -1;
                    do {
                      pcVar9 = pcVar6 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (*pcVar9 != '\0');
                    *(undefined **)pcVar6 = &DAT_00666b2e;
                    goto LAB_0047682a;
                  }
                  if (iStack_144 != 0x11) goto LAB_0047682a;
LAB_00476842:
                  pcVar6 = *ppuStack_14c;
                  pcVar9 = pcVar5;
                  do {
                    pcVar9 = pcVar9 + 1;
                    cVar2 = *pcVar6;
                    *pcVar9 = cVar2;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  pcVar6 = (&PTR_DAT_00b102c8)[iStack_148];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6;
                    pcVar6 = pcVar9 + 1;
                  } while (pcVar9[1] != '\0');
                  builtin_strncpy(pcVar9 + 1,"Skill",6);
                  acStack_154[0] = acStack_108[iStack_150 + -4] + '0';
                  pcVar6 = acStack_154;
                  do {
                    cVar2 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar6 - (int)acStack_154;
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar9 != '\0');
                  pcVar9 = acStack_154;
                  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar6 = pcVar6 + 4;
                  }
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar6 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar6 = pcVar6 + 1;
                  }
                  pcVar6 = (&PTR_DAT_00b102e0)[*(int *)((int)aiStack_128 + iStack_150) * 9];
                  pcVar9 = pcVar6;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  pcVar12 = pcVar5 + -1;
                  do {
                    pcVar10 = pcVar12 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (*pcVar10 != '\0');
                  pcVar10 = pcVar6;
                  for (uVar7 = (uint)((int)pcVar9 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1
                      ) {
                    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                    pcVar10 = pcVar10 + 4;
                    pcVar12 = pcVar12 + 4;
                  }
                  for (uVar7 = (int)pcVar9 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar12 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  }
                  pcVar6 = pcVar5 + -1;
                  do {
                    pcVar9 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar9 != '\0');
                  *(undefined **)pcVar6 = &DAT_00666b2e;
                  iVar3 = FUN_00434870(acStack_108);
                  if (iVar3 == 0) goto LAB_00476969;
                }
LAB_00476c06:
                pcVar6 = acStack_108;
                do {
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                iVar3 = FUN_00401f00(pcVar6 + (1 - (int)(acStack_108 + 1)));
                pcVar6 = acStack_108;
                iVar11 = iVar3 - (int)pcVar6;
                do {
                  cVar2 = *pcVar6;
                  pcVar6[iVar11] = cVar2;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                FUN_0067b1e0(iVar3);
              }
              iStack_150 = iStack_150 + -4;
            } while (-0x11 < iStack_150);
            ppuStack_14c = ppuStack_14c + 1;
          } while ((int)ppuStack_14c < 0xb102c8);
          FUN_004761c0(puStack_140);
          piVar1 = local_13c;
          if (param_2 == '\0') {
            FUN_00476d10(local_13c,0,0xbf800000);
          }
          cVar2 = FUN_0045a500();
          if ((cVar2 == '\0') && (iVar3 = (**(code **)(*piVar1 + 0x330))(), iVar3 != 0)) {
            (**(code **)(*piVar1 + 0x330))();
            FUN_0061e8a0();
          }
        }
      }
    }
  }
switchD_004764b1_default:
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476d10(int *param_1,float param_2,float param_3)

{
  float fVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  undefined4 *in_ECX;
  int iVar16;
  float fVar17;
  int *piVar18;
  float fVar19;
  int iVar20;
  byte bVar21;
  float10 fVar22;
  int *piStack_7c;
  int iStack_74;
  double local_70;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float afStack_30 [5];
  int aiStack_1c [6];
  
  if ((in_ECX[0x2e] == 0) && (in_ECX[0x2d] == 0)) {
    if ((((in_ECX[0x32] != 0) && (piVar18 = *(int **)(in_ECX[0x32] + 0x58), piVar18 != (int *)0x0))
        && (iVar20 = (**(code **)(*piVar18 + 0x2d0))(), iVar20 == -1)) && (in_ECX[0x2b] == 0)) {
      uVar11 = in_ECX[0x32];
      in_ECX[0x32] = 0;
      FUN_00471990();
      FUN_00476410(uVar11,1);
    }
  }
  else {
    for (; DAT_00b33c28 < DAT_00b06548; DAT_00b33c28 = DAT_00b33c28 + 1) {
      FUN_00474070(in_ECX[0x2d],0);
      puVar3 = (undefined4 *)in_ECX[0x2e];
      if (puVar3 == (undefined4 *)0x0) {
        in_ECX[0x2d] = 0;
      }
      else {
        in_ECX[0x2e] = puVar3[1];
        in_ECX[0x2d] = *puVar3;
        FUN_00401f20(puVar3);
      }
      cVar6 = FUN_00471730();
      if (cVar6 == '\0') break;
    }
  }
  piVar18 = in_ECX + 0x35;
  iVar20 = 2;
  do {
    piVar4 = (int *)*piVar18;
    if (piVar4 != (int *)0x0) {
      if (piVar4[4] == 0) {
        if (*piVar4 != 0) goto LAB_00476e0a;
      }
      else if (*(int *)(piVar4[4] + 0x44) == 0) {
LAB_00476e0a:
        FUN_00472ed0(piVar18);
      }
    }
    piVar18 = piVar18 + 1;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  if (in_ECX[1] != 0) {
    *in_ECX = 1;
    in_ECX[3] = DAT_00b3f9a8;
    in_ECX[4] = DAT_00b3f9ac;
    in_ECX[5] = DAT_00b3f9b0;
    if (*(char *)(in_ECX + 0x24) == '\x05') {
      if (param_3 == -1.0) {
        param_3 = (float)in_ECX[0x25];
      }
      FUN_00707370(param_3,1);
      return;
    }
    iVar20 = 0;
    do {
      iVar9 = FUN_0051aa00(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x3c));
      iVar10 = FUN_0051aa00(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70));
      if ((iVar9 == 0xff) && (iVar10 != 0xff)) {
        in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x1f];
        sVar2 = *(short *)((int)in_ECX + iVar20 * 2 + 0x70);
        if ((sVar2 != 0xff) && (cVar6 = FUN_00470960(sVar2,&local_70), cVar6 != '\0')) {
          uVar11 = (**(code **)(*local_70._0_4_ + 0x10))(0xffffffff);
          FUN_00474530(uVar11,sVar2,0xffffffff);
        }
        *(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70) = 0xff;
        iVar9 = FUN_0051aa00(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x3c));
      }
      if (iVar20 == 5) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar20;
        if (iVar20 == 6) {
          iVar10 = 3;
        }
      }
      iVar10 = in_ECX[iVar10 + 0x28];
      afStack_30[iVar20] = 0.0;
      aiStack_1c[iVar20] = iVar10;
      if ((iVar9 != 0xff) && (iVar10 != 0)) {
        fVar22 = (float10)FUN_0049f4a0(in_ECX[0x25]);
        afStack_30[iVar20] = (float)fVar22;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < 5);
    if (param_3 != -1.0) {
      in_ECX[0x25] = param_3;
      FUN_00707370(param_3,1);
      return;
    }
    iVar20 = 0;
    in_ECX[0x25] = (float)in_ECX[0x25] + param_2;
    do {
      if (iVar20 == 5) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar20;
        if (iVar20 == 6) {
          iVar9 = 3;
        }
      }
      iVar9 = in_ECX[iVar9 + 0x28];
      iVar10 = FUN_0051aa00(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x3c));
      iVar12 = FUN_0051aa00(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70));
      if ((iVar10 != 0xff) && (iVar9 != 0)) {
        iVar16 = (int)*(char *)(in_ECX + 0x24);
        if (iVar16 == 5) {
LAB_0047705a:
          fVar1 = (*(float *)(iVar9 + 0x48) - *(float *)(iVar9 + 0x2c)) - param_2;
          local_70 = (double)CONCAT44(local_70._4_4_,fVar1);
          *(float *)(iVar9 + 0x48) = fVar1 + *(float *)(iVar9 + 0x2c);
        }
        else {
          if (iVar16 == 6) {
            if ((0 < iVar20) && (iVar20 < 4)) goto LAB_0047705a;
          }
          else if (iVar20 == iVar16) goto LAB_0047705a;
          if (*(int *)(iVar9 + 0x44) == 1) {
            if (iVar10 - 3U < 0xe) {
              fVar1 = (param_2 * (float)in_ECX[0x2f] - param_2) +
                      (*(float *)(iVar9 + 0x48) - *(float *)(iVar9 + 0x2c));
LAB_004770ab:
              local_70 = (double)CONCAT44(local_70._4_4_,fVar1);
              *(float *)(iVar9 + 0x48) = fVar1 + *(float *)(iVar9 + 0x2c);
            }
            else if (iVar10 - 0x11U < 10) {
              fVar1 = (param_2 * (float)in_ECX[0x30] - param_2) +
                      (*(float *)(iVar9 + 0x48) - *(float *)(iVar9 + 0x2c));
              goto LAB_004770ab;
            }
            switch((&DAT_00b102ec)[iVar10 * 9]) {
            case 0:
            case 1:
              if (*(int *)(iVar9 + 0x24) == 0) {
                iVar10 = in_ECX[iVar20 + 0x12];
                while (iVar10 < 1) {
                  local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                  fVar22 = (float10)FUN_0051ae20(in_ECX[iVar20 + 0x12]);
                  if ((float10)local_70 <= fVar22) break;
                  if ((in_ECX[iVar20 + 0x12] == 0) || (in_ECX[iVar20 + 0x12] == 1)) {
                    in_ECX[iVar20 + 0x12] = 1;
                  }
                  iVar10 = in_ECX[iVar20 + 0x12];
                }
                fVar1 = *(float *)(iVar9 + 0x48) + (float)in_ECX[0x25];
                if (iVar12 == 0xff) {
                  local_70 = (double)fVar1;
                  fVar22 = (float10)FUN_0051ae20(1);
                  if ((fVar22 < (float10)local_70 == (fVar22 == (float10)local_70)) ||
                     (in_ECX[iVar20 + 0x17] == 0)) {
                    local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                    fVar22 = (float10)FUN_0051ae20(1);
                    bVar21 = fVar22 < (float10)local_70 |
                             (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
                    goto LAB_004774ae;
                  }
                  in_ECX[iVar20 + 0x12] = 0;
                  fVar1 = -(*(float *)(iVar9 + 0x30) - *(float *)(iVar9 + 0x2c)) +
                          (*(float *)(iVar9 + 0x48) - *(float *)(iVar9 + 0x2c));
                  local_70 = (double)CONCAT44(local_70._4_4_,fVar1);
                  *(float *)(iVar9 + 0x48) = fVar1 + *(float *)(iVar9 + 0x2c);
                  if (in_ECX[iVar20 + 0x17] != -1) {
                    in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x17] + -1;
                  }
                }
                else {
                  local_70 = (double)fVar1;
                  fVar22 = (float10)FUN_0051ae20(1);
                  if (fVar22 < (float10)local_70 != (fVar22 == (float10)local_70)) {
                    in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x1f];
                    FUN_00476260(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70),0xffffffff);
                    *(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70) = 0xff;
                  }
                }
              }
              else {
                if (in_ECX[iVar20 + 0x12] == 0) {
                  local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                  fVar22 = (float10)FUN_0051ae20(0);
                  if (fVar22 < (float10)local_70) {
                    in_ECX[iVar20 + 0x12] = 1;
                  }
                }
                fVar1 = *(float *)(iVar9 + 0x48) + (float)in_ECX[0x25];
                if (iVar12 != 0xff) {
                  local_70 = (double)fVar1;
                  fVar22 = (float10)FUN_0051ae20(1);
                  bVar21 = fVar22 < (float10)local_70 |
                           (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
                  goto LAB_0047747a;
                }
                local_70 = (double)fVar1;
                fVar22 = (float10)FUN_0051ae20(1);
                bVar21 = fVar22 < (float10)local_70 |
                         (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
LAB_004774ae:
                if ((POPCOUNT(bVar21) & 1U) != 0) {
                  FUN_004733a0(iVar20);
                }
              }
              break;
            case 2:
            case 3:
            case 5:
            case 6:
              if ((int)in_ECX[iVar20 + 0x12] < 2) {
                local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                fVar22 = (float10)FUN_0051ae20(in_ECX[iVar20 + 0x12] + 1);
                if (fVar22 < (float10)local_70) {
                  in_ECX[iVar20 + 0x12] = in_ECX[iVar20 + 0x12] + 1;
                }
              }
              fVar1 = *(float *)(iVar9 + 0x48) + (float)in_ECX[0x25];
              if (iVar12 == 0xff) {
                local_70 = (double)fVar1;
                fVar22 = (float10)FUN_0051ae20(2);
                bVar21 = fVar22 < (float10)local_70 |
                         (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
                goto LAB_004774ae;
              }
              local_70 = (double)fVar1;
              fVar22 = (float10)FUN_0051ae20(2);
              bVar21 = fVar22 < (float10)local_70 |
                       (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
LAB_0047747a:
              if ((POPCOUNT(bVar21) & 1U) != 0) {
                in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x1f];
                FUN_00476260(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70),0xffffffff);
                *(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70) = 0xff;
              }
              break;
            case 4:
              if ((int)in_ECX[iVar20 + 0x12] < 3) {
                local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                fVar22 = (float10)FUN_0051ae20(in_ECX[iVar20 + 0x12] + 1);
                if (fVar22 < (float10)local_70) {
                  in_ECX[iVar20 + 0x12] = in_ECX[iVar20 + 0x12] + 1;
                }
              }
              fVar1 = *(float *)(iVar9 + 0x48) + (float)in_ECX[0x25];
              if (iVar12 == 0xff) {
                local_70 = (double)fVar1;
                fVar22 = (float10)FUN_0051ae20(3);
                bVar21 = fVar22 < (float10)local_70 |
                         (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
                goto LAB_004774ae;
              }
              local_70 = (double)fVar1;
              fVar22 = (float10)FUN_0051ae20(3);
              if (fVar22 < (float10)local_70 != (fVar22 == (float10)local_70)) {
                in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x1f];
                FUN_00476260(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70),0xffffffff);
                *(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70) = 0xff;
              }
              break;
            case 7:
              if ((int)in_ECX[iVar20 + 0x12] < 4) {
                local_70 = (double)(*(float *)(iVar9 + 0x48) + (float)in_ECX[0x25]);
                fVar22 = (float10)FUN_0051ae20(in_ECX[iVar20 + 0x12] + 1);
                if (((fVar22 < (float10)local_70) &&
                    (in_ECX[iVar20 + 0x12] = in_ECX[iVar20 + 0x12] + 1, iVar20 == 3)) &&
                   (in_ECX[0x15] == 2)) {
                  local_70 = (double)CONCAT44(local_70._4_4_,in_ECX[0x25]);
                  fVar22 = (float10)FUN_0051ae20(2);
                  *(float *)(iVar9 + 0x48) = (float)(fVar22 - (float10)(float)local_70._0_4_);
                }
              }
              fVar1 = *(float *)(iVar9 + 0x48) + (float)in_ECX[0x25];
              if (iVar12 == 0xff) {
                local_70 = (double)fVar1;
                fVar22 = (float10)FUN_0051ae20(4);
                bVar21 = fVar22 < (float10)local_70 |
                         (byte)((ushort)((ushort)(fVar22 == (float10)local_70) << 0xe) >> 8);
                goto LAB_004774ae;
              }
              local_70 = (double)fVar1;
              fVar22 = (float10)FUN_0051ae20(4);
              if (fVar22 < (float10)local_70 != (fVar22 == (float10)local_70)) {
                in_ECX[iVar20 + 0x17] = in_ECX[iVar20 + 0x1f];
                FUN_00476260(*(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70),0xffffffff);
                *(undefined2 *)((int)in_ECX + iVar20 * 2 + 0x70) = 0xff;
              }
            }
          }
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < 5);
    if (in_ECX[2] != 0) {
      piStack_7c = (int *)0x0;
      if ((param_1 != (int *)0x0) && (cVar6 = (**(code **)(*param_1 + 400))(), cVar6 != '\0')) {
        piStack_7c = param_1;
        iVar20 = (**(code **)(*param_1 + 0x380))();
        if ((iVar20 != 0) &&
           ((iVar20 = (**(code **)(*param_1 + 0x18c))(), 1 < iVar20 &&
            (iVar20 = (**(code **)(*param_1 + 0x18c))(), iVar20 < 6)))) {
          FUN_004728c0();
        }
      }
      fStack_34 = (float)in_ECX[8];
      fStack_3c = (float)in_ECX[6];
      fStack_38 = (float)in_ECX[7];
      if (*(short *)(in_ECX[2] + 0xb6) == 0) {
        iVar20 = 0;
      }
      else {
        iVar20 = **(int **)(in_ECX[2] + 0xb0);
      }
      fVar1 = *(float *)(iVar20 + 0x5c);
      fStack_58 = DAT_00b3f9b0;
      bVar5 = false;
      fStack_60 = DAT_00b3f9a8;
      fStack_5c = DAT_00b3f9ac;
      cVar6 = FUN_005e05b0();
      if ((((cVar6 != '\0') && (cVar6 = (**(code **)(*piStack_7c + 0x25c))(), cVar6 == '\0')) &&
          (uVar13 = (**(code **)(*(int *)piStack_7c[0x16] + 0x2c0))(), in_ECX[0x28] != 0)) &&
         ((uVar13 & 0xf) != 0)) {
        iVar9 = 0;
        iVar20 = FUN_0051ac70();
        if ((iVar20 - 0x28U < 2) ||
           (((*(int *)(in_ECX[0x28] + 0x44) == 2 || (*(int *)(in_ECX[0x28] + 0x44) == 5)) &&
            (piStack_7c == DAT_00b333c4)))) {
          bVar5 = true;
          if ((uVar13 & 0x200) == 0) {
            if ((uVar13 & 0xff00) != 0) {
              if ((uVar13 & 1) == 0) {
                if ((uVar13 & 2) == 0) {
                  if ((uVar13 & 4) == 0) {
                    if ((uVar13 & 8) != 0) {
                      iVar9 = 6;
                    }
                  }
                  else {
                    iVar9 = 5;
                  }
                }
                else {
                  iVar9 = 4;
                }
              }
              else {
                iVar9 = 3;
              }
            }
          }
          else if ((uVar13 & 1) == 0) {
            if ((uVar13 & 2) == 0) {
              if ((uVar13 & 4) == 0) {
                if ((uVar13 & 8) != 0) {
                  iVar9 = 10;
                }
              }
              else {
                iVar9 = 9;
              }
            }
            else {
              iVar9 = 8;
            }
          }
          else {
            iVar9 = 7;
          }
          iVar20 = FUN_0051ac70();
          if (iVar9 == iVar20) {
            local_70 = (double)CONCAT44(local_70._4_4_,_DAT_00b33e9c);
            pfVar14 = (float *)FUN_0051aab0(&fStack_48);
            fStack_54 = _DAT_00b06530 * (float)local_70._0_4_ * *pfVar14;
            fStack_50 = pfVar14[1] * (float)local_70._0_4_ * _DAT_00b06530;
            fStack_4c = _DAT_00b06530 * (float)local_70._0_4_ * pfVar14[2];
            fStack_68 = (float)in_ECX[0x2f];
            fStack_60 = fStack_68 * fStack_54;
            fStack_5c = fStack_50 * fStack_68;
            local_70 = (double)((ulonglong)(uint)fStack_5c << 0x20);
            fStack_68 = fStack_68 * fStack_4c;
            fStack_58 = fStack_68;
          }
          else {
            uVar8 = FUN_005e5690(iVar9,0,0);
            iVar20 = FUN_0051aa00(uVar8);
            if ((iVar20 != 0) && (cVar6 = FUN_00470960(uVar8,&local_70), cVar6 != '\0')) {
              iVar20 = (**(code **)(*local_70._0_4_ + 0x10))(0xffffffff);
              if (iVar20 != 0) {
                local_70._0_4_ = (int *)_DAT_00b33e9c;
                pfVar14 = (float *)FUN_0051aab0(&fStack_48);
                fStack_48 = _DAT_00b06530 * (float)local_70._0_4_ * *pfVar14;
                fStack_44 = pfVar14[1] * (float)local_70._0_4_ * _DAT_00b06530;
                fStack_40 = _DAT_00b06530 * (float)local_70._0_4_ * pfVar14[2];
                fStack_58 = (float)in_ECX[0x2f];
                local_70 = (double)CONCAT44(local_70._4_4_,fStack_58);
                fStack_60 = fStack_58 * fStack_48;
                fStack_5c = fStack_44 * fStack_58;
                fStack_58 = fStack_58 * fStack_40;
                fStack_54 = fStack_60;
                fStack_50 = fStack_5c;
                fStack_4c = fStack_58;
              }
            }
          }
        }
      }
      iVar20 = in_ECX[2];
      uVar11 = in_ECX[0x25];
      if (iVar20 != 0) {
        *(undefined4 *)(iVar20 + 0x54) = in_ECX[6];
        *(undefined4 *)(iVar20 + 0x58) = in_ECX[7];
        *(undefined4 *)(iVar20 + 0x5c) = in_ECX[8];
      }
      local_70._0_4_ = (int *)uVar11;
      FUN_0047c990(uVar11,in_ECX[2]);
      iVar20 = in_ECX[2];
      if (iVar20 != 0) {
        if (in_ECX + 6 != (undefined4 *)0x0) {
          in_ECX[6] = *(undefined4 *)(iVar20 + 0x54);
          in_ECX[7] = *(undefined4 *)(iVar20 + 0x58);
          in_ECX[8] = *(undefined4 *)(iVar20 + 0x5c);
        }
        iVar20 = in_ECX[2];
        *(float *)(iVar20 + 0x54) = DAT_00b3f9a8;
        *(float *)(iVar20 + 0x58) = DAT_00b3f9ac;
        *(float *)(iVar20 + 0x5c) = DAT_00b3f9b0;
      }
      fVar15 = fStack_60;
      fVar17 = fStack_5c;
      fVar19 = fStack_58;
      if (!bVar5) {
        fStack_48 = (float)in_ECX[6] - fStack_3c;
        fStack_44 = (float)in_ECX[7] - fStack_38;
        fStack_40 = (float)in_ECX[8] - fStack_34;
        fVar15 = fStack_48;
        fVar17 = fStack_44;
        fVar19 = fStack_40;
      }
      in_ECX[3] = fVar15;
      in_ECX[4] = fVar17;
      in_ECX[5] = fVar19;
      fVar22 = (float10)(**(code **)(*param_1 + 0xec))();
      fVar15 = (float)fVar22;
      local_70 = (double)CONCAT44(local_70._4_4_,fVar15);
      in_ECX[3] = fVar15 * (float)in_ECX[3];
      in_ECX[4] = (float)in_ECX[4] * fVar15;
      in_ECX[5] = fVar15 * (float)in_ECX[5];
      if (*(short *)(in_ECX[2] + 0xb6) == 0) {
        iVar20 = 0;
      }
      else {
        iVar20 = **(int **)(in_ECX[2] + 0xb0);
      }
      in_ECX[5] = *(float *)(iVar20 + 0x5c) - fVar1;
    }
    if ((*(byte *)(in_ECX[1] + 0x18) & 1) == 0) {
      piStack_7c = (int *)0x0;
      do {
        iVar20 = (int)*(char *)(in_ECX + 0x24);
        if (iVar20 != 5) {
          if (iVar20 == 6) {
            if (((int)piStack_7c < 1) || (3 < (int)piStack_7c)) goto LAB_0047798d;
          }
          else if (piStack_7c != (int *)iVar20) {
LAB_0047798d:
            if (piStack_7c == (int *)0x5) {
              piVar18 = (int *)0x0;
            }
            else {
              piVar18 = piStack_7c;
              if (piStack_7c == (int *)0x6) {
                piVar18 = (int *)0x3;
              }
            }
            iVar20 = in_ECX[(int)piVar18 + 0x28];
            if (((iVar20 != 0) && (aiStack_1c[(int)piStack_7c] == iVar20)) &&
               ((iVar9 = *(int *)(iVar20 + 0x44), iVar9 == 1 || ((iVar9 == 2 || (iVar9 == 5)))))) {
              if (in_ECX[(int)piStack_7c + 9] != 0) {
                local_70 = (double)((ulonglong)local_70 & 0xffffffff00000000);
                bVar21 = 0;
                piVar18 = in_ECX + 0x28;
                iStack_74 = 5;
                do {
                  if ((((*piVar18 != 0) && (in_ECX[(int)piStack_7c + 9] != 0)) &&
                      (iVar9 = *(int *)(in_ECX[(int)piStack_7c + 9] + 8), iVar9 != 0)) &&
                     (bVar7 = FUN_0049fd20(iVar9), bVar21 < bVar7)) {
                    local_70 = (double)CONCAT44(local_70._4_4_,*piVar18);
                    bVar21 = bVar7;
                  }
                  piVar18 = piVar18 + 1;
                  iStack_74 = iStack_74 + -1;
                } while (iStack_74 != 0);
                if ((local_70._0_4_ == (int *)0x0) || (local_70._0_4_ != (int *)iVar20))
                goto LAB_00477abc;
              }
              fVar22 = (float10)FUN_0049f4a0(in_ECX[0x25]);
              fVar1 = (float)fVar22;
              local_70 = (double)CONCAT44(local_70._4_4_,fVar1);
              if ((fVar1 != -3.4028235e+38) &&
                 ((afStack_30[(int)piStack_7c] != -3.4028235e+38 &&
                  (afStack_30[(int)piStack_7c] != fVar1)))) {
                FUN_0051af70(param_1,afStack_30[(int)piStack_7c],fVar1,iVar20);
              }
            }
          }
        }
LAB_00477abc:
        piStack_7c = (int *)((int)piStack_7c + 1);
      } while ((int)piStack_7c < 5);
    }
    piVar18 = (int *)in_ECX[0x33];
    if (((piVar18 != (int *)0x0) && (*piVar18 == 2)) &&
       ((piVar18[4] == 0 || (*(int *)(piVar18[4] + 0x44) == 0)))) {
      *piVar18 = 3;
      if ((piVar18[10] != 0) && (iVar20 = FUN_005e0ee0(), iVar20 == 0xb)) {
        FUN_005effd0(0xffffffff,0);
      }
      if ((piVar18[1] == 2) || (piVar18[1] == 3)) {
        FUN_00475440(1,0);
      }
    }
    *(undefined1 *)(in_ECX + 0x24) = 0xff;
  }
  return;
}



void FUN_00477b60(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_c [12];
  
  iVar1 = FUN_0051aa00(param_1);
  iVar2 = *(int *)(&DAT_00b102e8 + iVar1 * 0x24);
  if (iVar2 == 5) {
    iVar2 = 0;
  }
  else if (iVar2 == 6) {
    iVar2 = 3;
  }
  if (iVar1 != 0xff) {
    switch((&DAT_00b102ec)[iVar1 * 9]) {
    case 0:
    case 1:
      if (param_2 == 0) {
        *(short *)(in_ECX + 0x70 + iVar2 * 2) = (short)param_1;
        *(undefined4 *)(in_ECX + 0x7c + iVar2 * 4) = param_3;
        return;
      }
      if (param_2 != 1) {
        return;
      }
      *(undefined2 *)(in_ECX + 0x70 + iVar2 * 2) = 0xff;
      *(undefined4 *)(in_ECX + 0x5c + iVar2 * 4) = param_3;
      FUN_00476260(param_1,0xffffffff);
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      FUN_00476260(param_1,0xffffffff);
      break;
    default:
      goto switchD_00477bb5_default;
    }
    FUN_00471230(*(undefined4 *)(in_ECX + 0x94),local_c,1);
  }
switchD_00477bb5_default:
  return;
}



void FUN_00477c40(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int local_4;
  
  in_ECX[2] = param_1;
  if (param_1 == 0) {
    *in_ECX = 0;
    return;
  }
  piVar7 = in_ECX + 7;
  local_4 = 2;
  do {
    if ((piVar7[-2] != 0) && (in_ECX[10] != 0)) {
      uVar3 = (**(code **)(*(int *)(piVar7[-2] + 0x18) + 0x14))(0xffffffff,in_ECX[10],0);
      puVar4 = (undefined4 *)FUN_00479450(uVar3);
      puVar1 = (undefined4 *)*piVar7;
      if (puVar1 != puVar4) {
        if (puVar1 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar1 + 1);
          if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        *piVar7 = (int)puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar4 + 1);
        }
      }
      iVar6 = (**(code **)(*(int *)in_ECX[10] + 0x164))();
      FUN_007165b0(*piVar7,*(undefined4 *)(*(int *)(iVar6 + 0x98) + 0x7c));
    }
    piVar7 = piVar7 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  InterlockedIncrement((LONG *)(param_1 + 0xc));
  piVar7 = (int *)in_ECX[10];
  *in_ECX = 1;
  if (piVar7 != (int *)0x0) {
    if ((in_ECX[1] == 2) || (in_ECX[1] == 3)) {
      iVar6 = (**(code **)(*piVar7 + 0x164))();
      if (iVar6 == 0) {
LAB_00477d7c:
        FUN_004729f0();
        FUN_00401f20();
        return;
      }
      cVar2 = FUN_00476380();
      if (cVar2 == '\0') {
        FUN_00475440(1,0);
        return;
      }
      if (in_ECX[1] == 3) {
        FUN_005effd0(0xb,in_ECX[4]);
      }
    }
    else if ((piVar7 != (int *)0x0) && (in_ECX[1] == 0)) {
      iVar6 = (**(code **)(*piVar7 + 0x164))();
      if (iVar6 != 0) {
        FUN_004753f0();
        return;
      }
      goto LAB_00477d7c;
    }
  }
  return;
}



void FUN_00477db0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  puStack_8 = &LAB_009aeebb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_3 == 0) || (param_3 == 5)) {
    param_4 = 3;
  }
  iVar2 = FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00474c50(param_1,param_3,param_4,param_2,0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xd0) = uVar3;
  FUN_00476380();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00477e50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00476380();
  if (cVar1 != '\0') {
    *(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x28) = param_1;
    FUN_005effd0(0xb,*(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x10));
    return 1;
  }
  return 0;
}



int FUN_00477e90(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    piVar2 = (int *)(in_ECX + 0x4c);
    do {
      if (*piVar2 == param_1) {
        return iVar1 * 0x10 + 0x4c + in_ECX;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < 0x10);
  }
  return 0;
}



undefined4 FUN_00477ec0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8 + param_1 * 8);
}



undefined4 FUN_00477ed0(void)

{
  if ((DAT_00b120dc != '\0') && (DAT_00b120b4 != '\0')) {
    return 1;
  }
  return 0;
}



void FUN_00477ef0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  ushort uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 4);
      puVar2 = *(undefined4 **)(iVar1 + (uint)uVar5 * 4);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *(undefined4 *)(iVar1 + (uint)uVar5 * 4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00477f90(void)

{
  short sVar1;
  int in_ECX;
  
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 4) + -4 + (uint)*(ushort *)(in_ECX + 10) * 4) != 0) {
        return;
      }
      sVar1 = *(ushort *)(in_ECX + 10) - 1;
      *(short *)(in_ECX + 10) = sVar1;
    } while (sVar1 != 0);
  }
  return;
}



void FUN_00477fd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3cc54;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00477ff0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3cc74;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00478010(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3cc54;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00478040(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3cc74;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00478070(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  byte *pbVar6;
  undefined **ppuVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aefa8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = FUN_006f94a0(param_1,&DAT_00a30968,uVar1);
  *in_ECX = uVar2;
  ppuVar7 = &PTR_s_Bip01_Head_00b06550;
  pbVar6 = (byte *)(in_ECX + 1);
  do {
    piVar3 = (int *)FUN_006f94a0(param_1,*ppuVar7,uVar1);
    if (piVar3 != (int *)0x0) {
      InterlockedIncrement(piVar3 + 1);
    }
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
LAB_004780f8:
      FUN_004a7a60("Missing bone \'%s\' for \'%s\'",*ppuVar7,*(undefined4 *)(param_1 + 8));
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 8))();
      if (iVar4 == 0) goto LAB_004780f8;
      *pbVar6 = *pbVar6 | 1;
      *(int **)(pbVar6 + 4) = piVar3;
    }
    local_4 = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      LVar5 = InterlockedDecrement(piVar3 + 1);
      if (LVar5 == 0) {
        (**(code **)*piVar3)(1);
      }
    }
    ppuVar7 = ppuVar7 + 1;
    pbVar6 = pbVar6 + 8;
    if (0xb06573 < (int)ppuVar7) {
      FUN_00897a90(in_ECX[10],0);
      FUN_00897a90(in_ECX[0xc],0);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



undefined4 FUN_00478180(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 300) != 0) && (*(char *)(*(int *)(in_ECX + 300) + 4) == '\x1a')) {
    return *(undefined4 *)(in_ECX + 0x134);
  }
  return 0;
}



void FUN_004781a0(void)

{
  int *in_ECX;
  
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(1);
  }
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  return;
}



undefined4 * FUN_004781d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x60) != 0) && (*(int *)(in_ECX + 0x60) != -1)) {
    FUN_0043baf0(param_1,in_ECX,param_2,param_3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



void FUN_00478220(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_006ff9c0(&DAT_00a7d0ec);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) >> 4 & 1) != 0)) {
    if ((param_4 != (int *)0x0) && (param_3 == 0xe)) {
      iVar1 = (**(code **)(*param_4 + 0x168))();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x130) != 0)) {
        FUN_004b1600(param_4,param_2);
      }
    }
    FUN_004e26f0(param_2);
  }
  return;
}



undefined4 FUN_00478290(int param_1)

{
  int iVar1;
  int in_ECX;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 < 6) {
    return 0;
  }
  if (param_1 < 8) {
    bVar2 = 1;
  }
  else {
    if (param_1 != 8) {
      return 0;
    }
    bVar2 = 2;
  }
  iVar4 = 0;
  puVar3 = (undefined4 *)(in_ECX + 0x4c);
  while ((iVar1 = FUN_009832e6(*puVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0), iVar1 == 0 ||
         ((*(byte *)(iVar1 + 6) & bVar2) == 0))) {
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 4;
    if (0xf < iVar4) {
      return 0;
    }
  }
  return 1;
}



void FUN_00478300(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_00478350(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xb8) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004783d6) */
/* WARNING: Removing unreachable block (ram,0x004783e4) */

undefined4 FUN_004783a0(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_00b39b80 == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = (undefined4 *)(DAT_00b39b80 + 0xdb8);
  }
  return *puVar1;
}



void FUN_00478400(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a3cc54;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3ccb0;
  return;
}



void FUN_00478450(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a3cc74;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3ccd0;
  return;
}



void FUN_004784a0(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  LONG LVar8;
  int in_ECX;
  uint uVar9;
  ushort uVar10;
  uint *puVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(short *)(in_ECX + 0xc) != *(short *)(in_ECX + 10)) {
    if (*(short *)(in_ECX + 0xc) != 0) {
      uVar10 = 0;
      uVar9 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar1 = *(int *)(in_ECX + 4);
          iVar2 = *(int *)(iVar1 + (uint)uVar10 * 4);
          if (iVar2 != 0) {
            if (*(int *)(iVar1 + (uVar9 & 0xffff) * 4) != iVar2) {
              FUN_0055e2a0(iVar1 + (uint)uVar10 * 4);
            }
            uVar9 = uVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(in_ECX + 10));
      }
    }
    uVar10 = *(ushort *)(in_ECX + 0xc);
    pvVar3 = *(void **)(in_ECX + 4);
    *(ushort *)(in_ECX + 10) = uVar10;
    *(ushort *)(in_ECX + 8) = uVar10;
    if (uVar10 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar9 = (uint)uVar10;
      puVar7 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar9 * 4) | uVar9 * 4 + 4,uVar6);
      puVar11 = (uint *)0x0;
      local_4 = 0;
      if (puVar7 != (uint *)0x0) {
        puVar11 = puVar7 + 1;
        *puVar7 = uVar9;
        _eh_vector_constructor_iterator_(puVar11,4,uVar9,FUN_007c88a0,FUN_007016a0);
      }
      local_4 = 0xffffffff;
      *(uint **)(in_ECX + 4) = puVar11;
      uVar10 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar1 = *(int *)(in_ECX + 4);
          iVar2 = (uint)uVar10 * 4;
          puVar4 = *(undefined4 **)(iVar1 + iVar2);
          if (puVar4 != *(undefined4 **)(iVar2 + (int)pvVar3)) {
            if (((puVar4 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
               (puVar4 != (undefined4 *)0x0)) {
              (**(code **)*puVar4)(1);
            }
            iVar5 = *(int *)(iVar2 + (int)pvVar3);
            *(int *)(iVar1 + iVar2) = iVar5;
            if (iVar5 != 0) {
              InterlockedIncrement((LONG *)(iVar5 + 4));
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(in_ECX + 10));
      }
    }
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00478650(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aefd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3ccb0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3cc54;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004786c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af008;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3ccd0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3cc74;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00478730(undefined4 param_1,int param_2)

{
  void *in_ECX;
  
  _memset(in_ECX,0,0x154);
  _memset(&DAT_00b33c80,0,0x100);
  *(undefined4 *)((int)in_ECX + 0x150) = param_1;
  if (param_2 != 0) {
    FUN_00478070(param_2);
  }
  return;
}



void FUN_00478780(undefined4 *param_1,char param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  puVar1 = param_1;
  if (param_1[2] != 0) {
    if ((param_1 == (undefined4 *)&DAT_00b33d60) || (param_1 == (undefined4 *)(in_ECX + 300))) {
      FUN_004de1c0(param_1[2]);
    }
    uVar5 = puVar1[2];
    FUN_007b4280(0,uVar5);
    FUN_007c5e70(uVar5);
    FUN_00481350(puVar1[2]);
    if (*(int *)(puVar1[2] + 0x1c) != 0) {
      FUN_00977c50(3);
      (**(code **)(**(int **)(puVar1[2] + 0x1c) + 0x88))(&param_1,puVar1[2]);
      puVar2 = param_1;
      if (param_1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(param_1 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      FUN_00977c50(2);
    }
    if ((puVar1 == (undefined4 *)&DAT_00b33d10) || (puVar1 == (undefined4 *)(in_ECX + 0xdc))) {
      if (*(int *)(in_ECX + 0x28) != 0) {
        FUN_00897a90(*(int *)(in_ECX + 0x28),0);
        FUN_00477ef0();
      }
      if (*(int *)(in_ECX + 0x30) != 0) {
        FUN_00897a90(*(int *)(in_ECX + 0x30),0);
        FUN_00477ef0();
      }
      if (*(int *)(in_ECX + 0x150) == DAT_00b333c4) {
        iVar4 = FUN_006600d0(0);
        if (in_ECX == iVar4) {
          FUN_0057b190(DAT_00b33d84);
        }
      }
    }
    uVar5 = (**(code **)(*(int *)puVar1[1] + 0x14))();
    FUN_004384e0(uVar5,1,1);
    puVar1[2] = 0;
  }
  if (param_2 != '\0') {
    *puVar1 = 0;
    puVar1[1] = param_3;
  }
  return;
}



undefined4 * FUN_004788e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009af051;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = 0;
  local_4 = 0;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x150) + 0x170))
                    (0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0,uVar4);
  iVar6 = FUN_009832e6(uVar5);
  uVar5 = param_3;
  puVar1 = param_2;
  if (iVar6 != 0) {
    iStack_14 = 0;
    do {
      iVar6 = *(int *)((iStack_14 + 5) * 0x10 + in_ECX);
      if ((iVar6 != 0) && (iVar6 != -1)) {
        if ((iStack_14 == 1) &&
           (((DAT_00b06608 != '\0' && (DAT_00b120b4 != '\0')) &&
            (cVar3 = FUN_00477ed0(), cVar3 != '\0')))) {
          uVar7 = FUN_004781d0(&param_3,puVar1,uVar5);
          local_4 = 1;
          LFM_DoublyLinkedQueueInsert(uVar7);
          local_4 = local_4 & 0xffffff00;
          FUN_004bddc0();
        }
        else {
          FUN_0043b280(&param_2,iVar6,puVar1,uVar5,3,0,1,0);
          puVar2 = param_2;
          if (((param_2 != (undefined4 *)0x0) &&
              (LVar8 = InterlockedDecrement(param_2 + 2), LVar8 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
        }
      }
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < 0x10);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00478a40(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int in_ECX;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint *unaff_FS_OFFSET;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  char acStack_118 [264];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af07b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_11c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed8;
  *unaff_FS_OFFSET = (uint)&local_c;
  FUN_00401020(&DAT_00a2f830,uVar2);
  uVar5 = 0;
  if (*(int **)(in_ECX + 0x60) != (int *)0x0) {
    uStack_11c = 0;
    uStack_11a = 0;
    builtin_strncpy(acStack_118,"Data\\Meshes\\",0xc);
    acStack_118[0xc] = 0;
    puStack_8 = (undefined1 *)0x0;
    pcVar3 = (char *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x14))();
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar7 = (char *)((int)&uStack_11a + 1);
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = pcVar3;
    for (uVar2 = (uint)((int)pcVar4 - (int)pcVar3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = (int)pcVar4 - (int)pcVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar5 = FUN_0054feb0(&stack0xfffffee0,acStack_118,0,0,0,1,0);
    uVar5 = FUN_00553620(uVar5);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00401f20(0);
    uStack_11a = 0;
    uStack_11c = 0;
  }
  FUN_00401040();
  *unaff_FS_OFFSET = local_10;
  return uVar5;
}



void FUN_00478b90(void)

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
  puStack_8 = &LAB_009bfae6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00478400(0x101);
  }
  local_4 = 0xffffffff;
  *in_ECX = uVar3;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00478450(0x25);
  }
  in_ECX[1] = uVar3;
  in_ECX[2] = DAT_00b3f580;
  *(undefined1 *)(in_ECX + 3) = DAT_00b25648;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00478c40(byte param_1)

{
  FUN_00478650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00478c60(byte param_1)

{
  FUN_004786c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00478c80(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00478b90();
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}



void FUN_00478ca0(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '!')) {
    FUN_00478780((int *)(in_ECX + 0xdc),1,0);
    *(int *)(in_ECX + 0xdc) = param_1;
    *(int *)(in_ECX + 0xe0) = param_1 + 0x30;
  }
  return;
}



void FUN_00478ce0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00478780(in_ECX + 0xdc,1,0);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x150) + 400))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(in_ECX + 0x150);
    cVar2 = FUN_005e3270();
    if (((cVar2 == '\0') && (*(int *)(iVar1 + 0x58) != 0)) &&
       (cVar2 = FUN_005e0da0(), cVar2 != '\0')) {
      if ((*(int *)(in_ECX + 0x150) == DAT_00b333c4) && (iVar3 = FUN_006600d0(1), in_ECX == iVar3))
      {
        iVar3 = FUN_0065d750(1);
      }
      else {
        iVar3 = FUN_004d8370();
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 200) = iVar1;
      }
    }
  }
  return;
}



void FUN_00478d70(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\"')) {
    FUN_00478780((int *)(in_ECX + 0x10c),1,0);
    *(int *)(in_ECX + 0x10c) = param_1;
    *(int *)(in_ECX + 0x110) = param_1 + 0x30;
  }
  return;
}



void FUN_00478db0(void)

{
  int in_ECX;
  
  FUN_00478780(in_ECX + 0x10c,1,0);
  return;
}



void FUN_00478dd0(void)

{
  int in_ECX;
  
  FUN_00478780(in_ECX + 0x11c,1,0);
  return;
}



void FUN_00478df0(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\x1a')) {
    FUN_00478780((int *)(in_ECX + 300),1,0);
    *(int *)(in_ECX + 300) = param_1;
    *(int *)(in_ECX + 0x130) = param_1 + 0x30;
  }
  return;
}



void FUN_00478e30(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 300) != 0) && (*(char *)(*(int *)(in_ECX + 300) + 4) == '\x1a')) {
    FUN_00478780(in_ECX + 300,1,0);
  }
  if (*(int *)(in_ECX + 0x150) == DAT_00b333c4) {
    uVar1 = FUN_0065d770(in_ECX);
    FUN_00663870(0,uVar1);
  }
  return;
}



void FUN_00478e80(char param_1)

{
  int in_ECX;
  
  FUN_00478780(((param_1 != '\0') + 6) * 0x10 + 0x4c + in_ECX,1,0);
  return;
}



void FUN_00478ea0(void)

{
  int in_ECX;
  
  FUN_00478780(in_ECX + 0xcc,1,0);
  return;
}



void FUN_00478ec0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  LONG LVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  uint local_14;
  undefined4 *puStack_8;
  uint uStack_4;
  
  FUN_004784a0();
  FUN_00477f90();
  bVar3 = false;
  local_14 = 0;
  if (*(short *)((int)param_2 + 0xb6) != 0) {
    uVar13 = 0;
    if (*(short *)((int)param_2 + 0xb6) == 0) goto LAB_004790e8;
    do {
      piVar2 = *(int **)(param_2[0x2c] + local_14 * 4);
      uVar13 = local_14;
      if (piVar2 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar2 + 8))();
        for (puVar7 = (undefined *)(**(code **)(*param_2 + 4))(); puVar7 != (undefined *)0x0;
            puVar7 = *(undefined **)(puVar7 + 4)) {
          if (puVar7 == &DAT_00b35408) {
            if (iVar6 != 0) {
              FUN_00478ec0(param_1,piVar2,param_3);
              goto LAB_004790e8;
            }
            break;
          }
        }
        iVar8 = (**(code **)(*piVar2 + 0xc))();
        if (iVar8 == 0) {
          if (((!bVar3) && (iVar6 != 0)) && ((short)piVar2[0x2e] != 0)) {
            FUN_004a7a60("Body part \'%s\'->\'%s\' for skeleton \'%s\' was exported incorectly.\r\nHide the skeleton before you export body parts."
                         ,*(undefined4 *)(param_2[7] + 8),param_2[2],*(undefined4 *)(param_1 + 8));
            bVar3 = true;
          }
          (**(code **)(*param_2 + 0x88))(&puStack_8,piVar2);
          puVar4 = puStack_8;
          if (((puStack_8 != (undefined4 *)0x0) &&
              (LVar9 = InterlockedDecrement(puStack_8 + 1), LVar9 == 0)) &&
             (puVar4 != (undefined4 *)0x0)) {
            (**(code **)*puVar4)(1);
          }
        }
        else {
          iVar6 = piVar2[0x2e];
          if (iVar6 != 0) {
            uStack_4 = *(uint *)(*(int *)(iVar6 + 8) + 0x40);
            iVar8 = *(int *)(iVar6 + 0x14);
            uVar12 = 0;
            if (uStack_4 != 0) {
              do {
                iVar10 = *(int *)(iVar8 + uVar12 * 4);
                if (iVar10 != 0) {
                  iVar10 = FUN_006f94a0(param_1,*(undefined4 *)(iVar10 + 8));
                  if (iVar10 == 0) {
                    pcVar14 = *(char **)(*(int *)(iVar8 + uVar12 * 4) + 8);
                    pcVar11 = pcVar14;
                    do {
                      cVar1 = *pcVar11;
                      pcVar11 = pcVar11 + 1;
                    } while (cVar1 != '\0');
                    iVar10 = __strnicmp((char *)piVar2[2],pcVar14,(int)pcVar11 - (int)(pcVar14 + 1))
                    ;
                    if (iVar10 == 0) {
                      iVar10 = param_2[2];
                      iVar16 = *(int *)(param_2[7] + 8);
                      uVar15 = *(undefined4 *)(*(int *)(iVar8 + uVar12 * 4) + 8);
                      pcVar14 = 
                      "Bone \'%s\' not found for part \'%s->%s\'.\r\nMake sure all the verticies are skinned to a bone in Max."
                      ;
                    }
                    else {
                      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
                      iVar16 = param_2[2];
                      uVar15 = *(undefined4 *)(*(int *)(iVar8 + uVar12 * 4) + 8);
                      pcVar14 = 
                      "Bone \'%s\' not found for part \'%s\'.\r\nRequested by model \'%s\'.";
                    }
                    FUN_004a7a60(pcVar14,uVar15,iVar16,iVar10);
                  }
                  else {
                    *(int *)(*(int *)(iVar6 + 0x14) + uVar12 * 4) = iVar10;
                  }
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uStack_4);
            }
            if (param_3 != (int *)0x0) {
              *(int **)(iVar6 + 0x10) = param_3;
              (**(code **)(*param_3 + 0x84))(piVar2,1);
            }
          }
        }
      }
LAB_004790e8:
      local_14 = uVar13 + 1;
    } while (local_14 < *(ushort *)((int)param_2 + 0xb6));
  }
  FUN_004784a0();
  if (*(short *)((int)param_2 + 0xb6) != 0) {
    do {
      if (*(int *)(param_2[0x2c] + -4 + (uint)*(ushort *)((int)param_2 + 0xb6) * 4) != 0) {
        return;
      }
      sVar5 = *(ushort *)((int)param_2 + 0xb6) - 1;
      *(short *)((int)param_2 + 0xb6) = sVar5;
    } while (sVar5 != 0);
  }
  return;
}



void FUN_00479140(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar1 = FUN_006ff9c0(&DAT_00a3ceac);
    if (iVar1 != 0) goto LAB_0047916f;
  }
  iVar1 = FUN_006ff9c0(&DAT_00a3ceac);
  if (iVar1 == 0) {
    FUN_004a7a60("Could not find parent node extra data for \'%s\'.",*(undefined4 *)(param_2 + 8));
    FUN_0088d000(param_2,1,1);
    return;
  }
LAB_0047916f:
  iVar1 = FUN_00560920(&DAT_00b3fcc0,iVar1);
  if (iVar1 == 0) {
    FUN_004a7a60("Extra data \'Prn\' on \'%s\' is not an NiStringExtraData.",
                 *(undefined4 *)(param_2 + 8));
    FUN_0088d000(param_2,1,1);
    return;
  }
  if (param_5 == 7) {
    *(undefined1 *)(*(int *)(iVar1 + 0xc) + 6) = 0x4c;
  }
  piVar2 = (int *)FUN_006f94a0(param_1,*(undefined4 *)(iVar1 + 0xc));
  if (param_5 == 7) {
    *(undefined1 *)(*(int *)(iVar1 + 0xc) + 6) = 0x52;
  }
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_004dc270(param_1);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x170))();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*piVar2 + 0x170))();
        if (*(char *)(iVar3 + 4) == '$') {
          FUN_00480770(param_2);
          FUN_0088d000(param_2,1,1);
          return;
        }
      }
    }
    FUN_004a7a60("Could not find parent node \'%s\' for object \'%s\'.",*(undefined4 *)(iVar1 + 0xc)
                 ,*(undefined4 *)(param_2 + 8));
    FUN_0088d000(param_2,1,1);
    return;
  }
  (**(code **)(*piVar2 + 0x84))(param_2,1);
  iVar1 = FUN_006f94a0(param_2,&DAT_00a3ce0c);
  if (iVar1 != 0) {
    (**(code **)(*piVar2 + 0x84))(iVar1,1);
    FUN_00897a90(piVar2,1);
    FUN_00707610();
    FUN_00707980();
    FUN_004784a0();
    FUN_00477f90();
  }
  FUN_0088d000(param_2,1,1);
  return;
}



int FUN_004792f0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af0c0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(int *)(in_ECX + 100) == 0) && (param_1 != 0)) && (param_2 != 0)) {
    FUN_00478b90(uVar2);
    local_10 = 0x3f800000;
    local_14 = 0x3f800000;
    local_18 = 0x3f800000;
    local_4 = 1;
    cVar1 = FUN_00480820(param_2);
    if (cVar1 == '\0') {
      iVar4 = FUN_00700610(local_28);
    }
    else {
      uVar3 = FUN_004430c0(param_2,local_28);
      FUN_0075fa90(uVar3);
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar1 = FUN_00405650(&DAT_00b35288,iVar4);
      if (cVar1 != '\0') {
        FUN_004a01b0(7);
      }
      FUN_006ffac0(&DAT_00a3ceb0);
      *(undefined4 *)(iVar4 + 0x54) = DAT_00b3f9a8;
      *(undefined4 *)(iVar4 + 0x58) = DAT_00b3f9ac;
      *(undefined4 *)(iVar4 + 0x5c) = DAT_00b3f9b0;
      puVar6 = &DAT_00b26dc4;
      puVar7 = (undefined4 *)(iVar4 + 0x30);
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_007016a0();
      local_4 = 0xffffffff;
      FUN_004781a0();
      goto LAB_0047942e;
    }
    local_4 = local_4 & 0xffffff00;
    FUN_007016a0();
    local_4 = 0xffffffff;
    FUN_004781a0();
  }
  iVar4 = 0;
LAB_0047942e:
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



/* WARNING: Removing unreachable block (ram,0x00479676) */
/* WARNING: Removing unreachable block (ram,0x00479684) */

int * FUN_00479450(int *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af0f0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 == (int *)0x0) || (param_3 == (int *)0x0)) ||
     ((param_1 = param_4, param_4 == (int *)0x0 &&
      (param_1 = (int *)param_3[0xf], param_1 == (int *)0x0)))) {
    *unaff_FS_OFFSET = local_c;
    return (int *)0x0;
  }
  uVar3 = FUN_00439eb0(iVar6,1,3,1);
  FUN_00478b90(uVar2);
  local_10 = 0x3f800000;
  local_14 = 0x3f800000;
  local_18 = 0x3f800000;
  local_4 = 1;
  cVar1 = FUN_00480820(uVar3);
  if (cVar1 == '\0') {
    piVar5 = (int *)FUN_00700610(&local_28);
  }
  else {
    uVar4 = FUN_004430c0(uVar3,&local_28);
    FUN_0075fa90(uVar4);
    piVar5 = (int *)0x0;
  }
  FUN_00478220(uVar3,piVar5,param_2,param_3);
  FUN_006ffc60();
  if (piVar5 == (int *)0x0) goto LAB_0047966d;
  cVar1 = FUN_00405650(&DAT_00b35288,piVar5);
  if (cVar1 != '\0') {
    FUN_004a01b0(7);
  }
  piVar5[0x15] = DAT_00b3f9a8;
  piVar5[0x16] = DAT_00b3f9ac;
  piVar5[0x17] = DAT_00b3f9b0;
  piVar7 = &DAT_00b26dc4;
  piVar8 = piVar5 + 0xc;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  cVar1 = FUN_00471b80(piVar5);
  if (cVar1 == '\0') {
    FUN_00479140(param_1,piVar5,uVar3,0,0xffffffff,0);
    iVar6 = (**(code **)(*piVar5 + 8))();
    if (iVar6 != 0) {
      iVar6 = piVar5[7];
      piVar7 = (int *)0x0;
      if ((((iVar6 == 0) || (param_2 == 7)) || (param_2 == 6)) &&
         ((param_2 != -1 && (*(int *)(&DAT_00b065c8 + param_2 * 4) != -1)))) {
        piVar7 = (int *)FUN_006f94a0(param_1,(&PTR_s_Bip01_Head_00b06550)
                                             [*(int *)(&DAT_00b065c8 + param_2 * 4)]);
      }
      if (iVar6 == 0) {
        if (piVar7 == (int *)0x0) {
          iVar6 = *param_1;
        }
        else {
          iVar6 = *piVar7;
        }
      }
      else {
        if (((param_2 != 7) && (param_2 != 6)) ||
           (((iVar6 = (**(code **)(*param_3 + 0x168))(), iVar6 != 0 &&
             (piVar5[7] == *(int *)(iVar6 + 0x20))) || (piVar7 == (int *)0x0)))) goto LAB_0047965b;
        iVar6 = *piVar7;
      }
      (**(code **)(iVar6 + 0x84))(piVar5,1);
    }
  }
  else {
    FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar5[2]);
  }
LAB_0047965b:
  FUN_00707980();
  FUN_00707610();
LAB_0047966d:
  local_4 = 0xffffffff;
  if (local_28 != (undefined4 *)0x0) {
    (**(code **)*local_28)(1);
  }
  if (puStack_24 != (undefined4 *)0x0) {
    (**(code **)*puStack_24)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return piVar5;
}



void FUN_004796f0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  FUN_00401020(&DAT_00a2f830);
  iVar2 = in_ECX + 0x4c;
  iVar1 = 0x10;
  do {
    FUN_00478780(iVar2,1,0);
    iVar2 = iVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00401040();
  return;
}



void FUN_00479740(int param_1)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(in_ECX + 0x4c);
    iVar1 = 0x10;
    do {
      if (*piVar2 == param_1) {
        FUN_00478780(piVar2,1,0);
      }
      piVar2 = piVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00479780(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int iStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  int local_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *local_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char acStack_90 [128];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af13c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_c4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff2c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar9 = (int *)0x0;
  if ((param_1 == 0) || (*(char *)(param_1 + 4) != '!')) goto LAB_00479c0a;
  FUN_00478780((int *)(in_ECX + 0xdc),1,0);
  piVar5 = (int *)(param_1 + 0x30);
  *(int *)(in_ECX + 0xdc) = param_1;
  *(int **)(in_ECX + 0xe0) = piVar5;
  local_bc = 9;
  if (*(char *)(param_1 + 0x90) == '\x05') {
    local_bc = 0xe;
  }
  piVar10 = *(int **)(in_ECX + 0x150);
  local_b0 = piVar10;
  if (piVar10 == DAT_00b333c4) {
    uVar3 = FUN_0065d770(in_ECX);
    uVar3 = FUN_00660110(uVar3);
    uVar3 = (**(code **)(*piVar5 + 0x14))(local_bc,*(undefined4 *)(in_ECX + 0x150),uVar3);
    uVar3 = FUN_00479450(uVar3);
    *(undefined4 *)(in_ECX + 0xe4) = uVar3;
    iVar4 = FUN_006600d0(0);
    if (in_ECX == iVar4) {
      iStack_c4 = 0;
      uStack_c0 = 0;
      uStack_be = 0;
      puVar8 = *(undefined1 **)(param_1 + 0x4c);
      uStack_4 = 0;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00a2f7ec;
      }
      _sprintf(acStack_90,"%s\\%s","Icons",puVar8);
      FUN_0057b190(acStack_90);
      FUN_00401f20(0);
    }
  }
  else {
    iVar4 = (**(code **)(*piVar5 + 0x14))(uVar2);
    if (((iVar4 == 0) || (piVar10 == (int *)0x0)) ||
       (piStack_b4 = (int *)piVar10[0xf], piStack_b4 == (int *)0x0)) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar4 = FUN_00439eb0(iVar4,1,3,1);
      iStack_c4 = iVar4;
      FUN_00478b90();
      uStack_94 = 0x3f800000;
      uStack_98 = 0x3f800000;
      uStack_9c = 0x3f800000;
      piStack_b8 = (int *)0x0;
      uStack_4 = 2;
      cVar1 = FUN_00480820(iVar4);
      if (cVar1 == '\0') {
        piVar5 = (int *)FUN_00700610(&puStack_ac);
      }
      else {
        uVar3 = FUN_004430c0(iVar4,&puStack_ac);
        FUN_0075fa90(uVar3);
        piVar5 = piStack_b8;
        piVar9 = piStack_b8;
      }
      FUN_00478220(iVar4,piVar5,local_bc,local_b0);
      FUN_006ffc60();
      if (piVar5 != (int *)0x0) {
        cVar1 = FUN_00405650(&DAT_00b35288,piVar5);
        if (cVar1 != '\0') {
          FUN_004a01b0(7);
        }
        piVar5[0x15] = DAT_00b3f9a8;
        piVar5[0x16] = DAT_00b3f9ac;
        piVar5[0x17] = DAT_00b3f9b0;
        piVar9 = &DAT_00b26dc4;
        piVar10 = piVar5 + 0xc;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        cVar1 = FUN_00471b80(piVar5);
        if (cVar1 == '\0') {
          FUN_00479140(piStack_b4,piVar5,iStack_c4,0,0xffffffff,0);
          iVar6 = (**(code **)(*piVar5 + 8))();
          iVar4 = local_bc;
          if (iVar6 != 0) {
            iStack_c4 = piVar5[7];
            piVar9 = (int *)0x0;
            if ((((iStack_c4 == 0) || (local_bc == 7)) || (local_bc == 6)) &&
               ((local_bc != -1 && (*(int *)(&DAT_00b065c8 + local_bc * 4) != -1)))) {
              piVar9 = (int *)FUN_006f94a0(piStack_b4,
                                           (&PTR_s_Bip01_Head_00b06550)
                                           [*(int *)(&DAT_00b065c8 + local_bc * 4)]);
            }
            if (iStack_c4 == 0) {
              if (piVar9 == (int *)0x0) {
                iVar4 = *piStack_b4;
              }
              else {
                iVar4 = *piVar9;
              }
            }
            else {
              if (((iVar4 != 7) && (iVar4 != 6)) ||
                 (((iVar4 = (**(code **)(*local_b0 + 0x168))(), iVar4 != 0 &&
                   (piVar5[7] == *(int *)(iVar4 + 0x20))) || (piVar9 == (int *)0x0))))
              goto LAB_00479ab5;
              iVar4 = *piVar9;
            }
            (**(code **)(iVar4 + 0x84))(piVar5,1);
          }
        }
        else {
          FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar5[2]);
        }
LAB_00479ab5:
        FUN_00707980();
        FUN_00707610();
        piVar9 = piStack_b8;
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      if ((piVar9 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar9 + 1), LVar7 == 0)) {
        (**(code **)*piVar9)(1);
      }
      uStack_4 = 0xffffffff;
      if (puStack_ac != (undefined4 *)0x0) {
        (**(code **)*puStack_ac)(1);
      }
      if (puStack_a8 != (undefined4 *)0x0) {
        (**(code **)*puStack_a8)(1);
      }
    }
    *(int **)(in_ECX + 0xe4) = piVar5;
  }
  iStack_c4 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_4 = 3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0xdc) + 0xd4))((*(int **)(in_ECX + 0xdc))[3]);
  FUN_00402e30(&iStack_c4,"%s %s (%08X)",PTR_s_Weapon_00b065ac,uVar3);
  FUN_006ff420(iStack_c4);
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x150) + 400))();
  if ((cVar1 != '\0') && (piVar9 = *(int **)(in_ECX + 0x150), piVar9[0x16] != 0)) {
    if ((piVar9 == DAT_00b333c4) && (iVar4 = FUN_006600d0(1), in_ECX == iVar4)) {
      iVar4 = *(int *)piVar9[0x16];
      FUN_0065d750(1);
      uVar3 = FUN_005e0da0();
      (**(code **)(iVar4 + 0x150))(uVar3);
    }
    else {
      iVar4 = *(int *)piVar9[0x16];
      FUN_004d8370(piVar9);
      uVar3 = FUN_005e0da0();
      (**(code **)(iVar4 + 0x150))(uVar3);
    }
  }
  FUN_00401f20(iStack_c4);
LAB_00479c0a:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00479eb5) */
/* WARNING: Removing unreachable block (ram,0x00479ec3) */

void FUN_00479c40(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af188;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\"')) {
    piVar1 = (int *)(in_ECX + 0x10c);
    local_30 = in_ECX;
    FUN_00478780(piVar1,1,0);
    if (*(char *)(param_1 + 4) == '\"') {
      FUN_00478780(piVar1,1,0);
      *piVar1 = param_1;
      *(int *)(in_ECX + 0x110) = param_1 + 0x30;
    }
    piVar1 = *(int **)(in_ECX + 0x110);
    if (piVar1 != (int *)0x0) {
      iVar8 = *(int *)(in_ECX + 0x150);
      if (iVar8 == DAT_00b333c4) {
        uVar4 = FUN_0065d770(in_ECX);
        uVar4 = FUN_00660110(uVar4);
        uVar4 = (**(code **)(*piVar1 + 0x14))(0xc,*(undefined4 *)(in_ECX + 0x150),uVar4);
        piVar5 = (int *)FUN_00479450(uVar4);
      }
      else {
        iVar6 = (**(code **)(*piVar1 + 0x14))(uVar3);
        if (((iVar6 == 0) || (iVar8 == 0)) ||
           (piVar1 = *(int **)(iVar8 + 0x3c), piVar1 == (int *)0x0)) {
          piVar5 = (int *)0x0;
        }
        else {
          uVar4 = FUN_00439eb0(iVar6,1,3,1);
          FUN_00478b90();
          uStack_10 = 0x3f800000;
          uStack_14 = 0x3f800000;
          uStack_18 = 0x3f800000;
          uStack_4 = 1;
          cVar2 = FUN_00480820(uVar4);
          if (cVar2 == '\0') {
            piVar5 = (int *)FUN_00700610(&puStack_28);
          }
          else {
            uVar7 = FUN_004430c0(uVar4,&puStack_28);
            FUN_0075fa90(uVar7);
            piVar5 = (int *)0x0;
          }
          iVar8 = FUN_006ff9c0(&DAT_00a7d0ec);
          if ((iVar8 != 0) && ((*(uint *)(iVar8 + 0xc) >> 4 & 1) != 0)) {
            FUN_004e26f0(piVar5);
          }
          FUN_006ffc60();
          if (piVar5 != (int *)0x0) {
            cVar2 = FUN_00405650(&DAT_00b35288,piVar5);
            if (cVar2 != '\0') {
              FUN_004a01b0(7);
            }
            piVar5[0x15] = DAT_00b3f9a8;
            piVar5[0x16] = DAT_00b3f9ac;
            piVar5[0x17] = DAT_00b3f9b0;
            piVar9 = &DAT_00b26dc4;
            piVar10 = piVar5 + 0xc;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar10 = *piVar9;
              piVar9 = piVar9 + 1;
              piVar10 = piVar10 + 1;
            }
            cVar2 = FUN_00471b80(piVar5);
            if (cVar2 == '\0') {
              FUN_00479140(piVar1,piVar5,uVar4,0,0xffffffff,0);
              iVar8 = (**(code **)(*piVar5 + 8))();
              if ((iVar8 != 0) && (piVar5[7] == 0)) {
                if ((DAT_00b065f8 == -1) ||
                   (piVar9 = (int *)FUN_006f94a0(piVar1,(&PTR_s_Bip01_Head_00b06550)[DAT_00b065f8]),
                   piVar9 == (int *)0x0)) {
                  iVar8 = *piVar1;
                }
                else {
                  iVar8 = *piVar9;
                }
                (**(code **)(iVar8 + 0x84))(piVar5,1);
              }
            }
            else {
              FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar5[2]
                          );
            }
            FUN_00707980();
            FUN_00707610();
            in_ECX = local_30;
          }
          uStack_4 = 0xffffffff;
          if (puStack_28 != (undefined4 *)0x0) {
            (**(code **)*puStack_28)(1);
          }
          if (puStack_24 != (undefined4 *)0x0) {
            (**(code **)*puStack_24)(1);
          }
        }
      }
      *(int **)(in_ECX + 0x114) = piVar5;
      local_30 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_4 = 2;
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0xd4))((*(int **)(in_ECX + 0x10c))[3]);
      FUN_00402e30(&local_30,"%s %s (%08X)",PTR_s_Quiver_00b065b8,uVar4);
      iVar8 = local_30;
      FUN_006ff420(local_30);
      FUN_00401f20(iVar8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0047a200) */
/* WARNING: Removing unreachable block (ram,0x0047a20e) */

void FUN_00479f80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  int *piStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af188;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\x14')) {
    FUN_00478780(in_ECX + 0x11c,1,0);
    uVar9 = 0xffffffff;
    (**(code **)(**(int **)(in_ECX + 0x150) + 0x170))(0xffffffff,uVar2);
    uVar3 = FUN_00519d20();
    FUN_004691d0(in_ECX,uVar3,uVar9);
    piVar5 = *(int **)(in_ECX + 0x120);
    if (piVar5 != (int *)0x0) {
      iVar6 = *(int *)(in_ECX + 0x150);
      if (iVar6 == DAT_00b333c4) {
        uVar3 = FUN_0065d770(in_ECX);
        uVar3 = FUN_00660110(uVar3);
        uVar3 = (**(code **)(*piVar5 + 0x14))(0xd,*(undefined4 *)(in_ECX + 0x150),uVar3);
        uVar3 = FUN_00479450(uVar3);
        *(undefined4 *)(in_ECX + 0x124) = uVar3;
      }
      else {
        iVar4 = (**(code **)(*piVar5 + 0x14))();
        if (((iVar4 == 0) || (iVar6 == 0)) ||
           (piStack_30 = *(int **)(iVar6 + 0x3c), piStack_30 == (int *)0x0)) {
          piVar5 = (int *)0x0;
        }
        else {
          uVar3 = FUN_00439eb0(iVar4,1,3,1);
          FUN_00478b90();
          uStack_10 = 0x3f800000;
          uStack_14 = 0x3f800000;
          uStack_18 = 0x3f800000;
          uStack_4 = 1;
          cVar1 = FUN_00480820(uVar3);
          if (cVar1 == '\0') {
            piVar5 = (int *)FUN_00700610(&puStack_28);
          }
          else {
            uVar9 = FUN_004430c0(uVar3,&puStack_28);
            FUN_0075fa90(uVar9);
            piVar5 = (int *)0x0;
          }
          iVar6 = FUN_006ff9c0(&DAT_00a7d0ec);
          if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0xc) >> 4 & 1) != 0)) {
            FUN_004e26f0(piVar5);
          }
          FUN_006ffc60();
          if (piVar5 != (int *)0x0) {
            cVar1 = FUN_00405650(&DAT_00b35288,piVar5);
            if (cVar1 != '\0') {
              FUN_004a01b0(7);
            }
            piVar5[0x15] = DAT_00b3f9a8;
            piVar5[0x16] = DAT_00b3f9ac;
            piVar5[0x17] = DAT_00b3f9b0;
            piVar8 = &DAT_00b26dc4;
            piVar7 = piVar5 + 0xc;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar7 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar7 = piVar7 + 1;
            }
            cVar1 = FUN_00471b80(piVar5);
            piVar8 = piStack_30;
            if (cVar1 == '\0') {
              FUN_00479140(piStack_30,piVar5,uVar3,0,0xffffffff,0);
              iVar6 = (**(code **)(*piVar5 + 8))();
              if ((iVar6 != 0) && (piVar5[7] == 0)) {
                if ((DAT_00b065fc == -1) ||
                   (piVar7 = (int *)FUN_006f94a0(piVar8,(&PTR_s_Bip01_Head_00b06550)[DAT_00b065fc]),
                   piVar7 == (int *)0x0)) {
                  iVar6 = *piVar8;
                }
                else {
                  iVar6 = *piVar7;
                }
                (**(code **)(iVar6 + 0x84))(piVar5,1);
              }
            }
            else {
              FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar5[2]
                          );
            }
            FUN_00707980();
            FUN_00707610();
          }
          uStack_4 = 0xffffffff;
          if (puStack_28 != (undefined4 *)0x0) {
            (**(code **)*puStack_28)(1);
          }
          if (puStack_24 != (undefined4 *)0x0) {
            (**(code **)*puStack_24)(1);
          }
        }
        *(int **)(in_ECX + 0x124) = piVar5;
      }
      piStack_30 = (int *)0x0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_4 = 2;
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x11c) + 0xd4))((*(int **)(in_ECX + 0x11c))[3]);
      FUN_00402e30(&piStack_30,"%s %s (%08X)",PTR_s_Shield_00b065bc,uVar3);
      piVar5 = piStack_30;
      FUN_006ff420(piStack_30);
      FUN_00401f20(piVar5);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0047a57c) */
/* WARNING: Removing unreachable block (ram,0x0047a58a) */

void FUN_0047a2c0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int *piStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af188;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\x1a')) {
    piVar9 = (int *)(in_ECX + 300);
    FUN_00478780(piVar9,1,0);
    if (*(char *)(param_1 + 4) == '\x1a') {
      FUN_00478780(piVar9,1,0);
      *piVar9 = param_1;
      *(int *)(in_ECX + 0x130) = param_1 + 0x30;
    }
    piVar9 = *(int **)(in_ECX + 0x130);
    if (piVar9 != (int *)0x0) {
      iVar4 = *(int *)(in_ECX + 0x150);
      if (iVar4 == DAT_00b333c4) {
        uVar3 = FUN_0065d770(in_ECX);
        uVar3 = FUN_00660110(uVar3);
        uVar3 = (**(code **)(*piVar9 + 0x14))(0xe,*(undefined4 *)(in_ECX + 0x150),uVar3);
        uVar3 = FUN_00479450(uVar3);
        *(undefined4 *)(in_ECX + 0x134) = uVar3;
        iVar4 = FUN_0041e650();
        if (iVar4 == 0) {
          uVar3 = FUN_0065d770(in_ECX);
          FUN_00663870(0,uVar3);
        }
        else {
          puVar5 = (undefined4 *)FUN_0041e650();
          uVar3 = *puVar5;
          uVar6 = FUN_0065d770(in_ECX);
          FUN_00663870(uVar3,uVar6);
        }
      }
      else {
        iVar7 = (**(code **)(*piVar9 + 0x14))(uVar2);
        piVar9 = (int *)0x0;
        if (((iVar7 != 0) && (iVar4 != 0)) &&
           (piStack_30 = *(int **)(iVar4 + 0x3c), piStack_30 != (int *)0x0)) {
          uVar3 = FUN_00439eb0(iVar7,1,3,1);
          FUN_00478b90();
          uStack_10 = 0x3f800000;
          uStack_14 = 0x3f800000;
          uStack_18 = 0x3f800000;
          uStack_4 = 1;
          cVar1 = FUN_00480820(uVar3);
          if (cVar1 == '\0') {
            piVar9 = (int *)FUN_00700610(&puStack_28);
          }
          else {
            uVar6 = FUN_004430c0(uVar3,&puStack_28);
            FUN_0075fa90(uVar6);
            piVar9 = (int *)0x0;
          }
          FUN_00478220(uVar3,piVar9,0xe,iVar4);
          FUN_006ffc60();
          if (piVar9 != (int *)0x0) {
            cVar1 = FUN_00405650(&DAT_00b35288,piVar9);
            if (cVar1 != '\0') {
              FUN_004a01b0(7);
            }
            piVar9[0x15] = DAT_00b3f9a8;
            piVar9[0x16] = DAT_00b3f9ac;
            piVar9[0x17] = DAT_00b3f9b0;
            piVar10 = &DAT_00b26dc4;
            piVar8 = piVar9 + 0xc;
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar8 = piVar8 + 1;
            }
            cVar1 = FUN_00471b80(piVar9);
            piVar10 = piStack_30;
            if (cVar1 == '\0') {
              FUN_00479140(piStack_30,piVar9,uVar3,0,0xffffffff,0);
              iVar4 = (**(code **)(*piVar9 + 8))();
              if ((iVar4 != 0) && (piVar9[7] == 0)) {
                if ((DAT_00b06600 == -1) ||
                   (piVar8 = (int *)FUN_006f94a0(piVar10,(&PTR_s_Bip01_Head_00b06550)[DAT_00b06600])
                   , piVar8 == (int *)0x0)) {
                  iVar4 = *piVar10;
                }
                else {
                  iVar4 = *piVar8;
                }
                (**(code **)(iVar4 + 0x84))(piVar9,1);
              }
            }
            else {
              FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar9[2]
                          );
            }
            FUN_00707980();
            FUN_00707610();
          }
          uStack_4 = 0xffffffff;
          if (puStack_28 != (undefined4 *)0x0) {
            (**(code **)*puStack_28)(1);
          }
          if (puStack_24 != (undefined4 *)0x0) {
            (**(code **)*puStack_24)(1);
          }
        }
        *(int **)(in_ECX + 0x134) = piVar9;
      }
      piStack_30 = (int *)0x0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_4 = 2;
      uVar3 = (**(code **)(**(int **)(in_ECX + 300) + 0xd4))((*(int **)(in_ECX + 300))[3]);
      FUN_00402e30(&piStack_30,"%s %s (%08X)",PTR_s_Torch_00b065c0,uVar3);
      piVar9 = piStack_30;
      if (*(int *)(in_ECX + 0x134) != 0) {
        FUN_006ff420(piStack_30);
      }
      FUN_00401f20(piVar9);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0047a934) */
/* WARNING: Removing unreachable block (ram,0x0047a942) */

void FUN_0047a640(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  int local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af1c8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == 0) || (*(char *)(param_1 + 4) != '\x16')) goto LAB_0047a9db;
  iVar10 = (param_2 != '\0') + 6;
  iVar9 = iVar10 * 0x10 + in_ECX;
  local_30 = iVar9;
  FUN_00478780(iVar9 + 0x4c,1,0);
  iVar8 = iVar10;
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x170))(iVar10,uVar4);
  uVar5 = FUN_00519d20();
  FUN_004691d0(in_ECX,uVar5,iVar8);
  iVar8 = ((param_2 != '\0') + 0xb) * 0x10;
  if ((*(int *)(iVar8 + in_ECX) == 0) || (cVar3 = FUN_00478290(iVar10), cVar3 != '\0'))
  goto LAB_0047a9db;
  piVar1 = *(int **)(in_ECX + 0x150);
  piVar2 = *(int **)(iVar8 + in_ECX);
  if (piVar1 == DAT_00b333c4) {
    uVar5 = FUN_0065d770(in_ECX);
    uVar5 = FUN_00660110(uVar5);
    uVar5 = (**(code **)(*piVar2 + 0x14))(iVar10,*(undefined4 *)(in_ECX + 0x150),uVar5);
    piVar6 = (int *)FUN_00479450(uVar5);
  }
  else {
    iVar8 = (**(code **)(*piVar2 + 0x14))();
    if (((iVar8 == 0) || (piVar1 == (int *)0x0)) ||
       (piVar2 = (int *)piVar1[0xf], piVar2 == (int *)0x0)) {
      piVar6 = (int *)0x0;
    }
    else {
      uVar5 = FUN_00439eb0(iVar8,1,3,1);
      FUN_00478b90();
      uStack_10 = 0x3f800000;
      uStack_14 = 0x3f800000;
      uStack_18 = 0x3f800000;
      uStack_4 = 1;
      cVar3 = FUN_00480820(uVar5);
      if (cVar3 == '\0') {
        piVar6 = (int *)FUN_00700610(&puStack_28);
      }
      else {
        uVar7 = FUN_004430c0(uVar5,&puStack_28);
        FUN_0075fa90(uVar7);
        piVar6 = (int *)0x0;
      }
      FUN_00478220(uVar5,piVar6,iVar10,piVar1);
      FUN_006ffc60();
      if (piVar6 != (int *)0x0) {
        cVar3 = FUN_00405650(&DAT_00b35288,piVar6);
        if (cVar3 != '\0') {
          FUN_004a01b0(7);
        }
        piVar6[0x15] = DAT_00b3f9a8;
        piVar6[0x16] = DAT_00b3f9ac;
        piVar6[0x17] = DAT_00b3f9b0;
        piVar11 = &DAT_00b26dc4;
        piVar12 = piVar6 + 0xc;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar12 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar12 = piVar12 + 1;
        }
        cVar3 = FUN_00471b80(piVar6);
        if (cVar3 == '\0') {
          FUN_00479140(piVar2,piVar6,uVar5,0,0xffffffff,0);
          iVar9 = (**(code **)(*piVar6 + 8))();
          if (iVar9 != 0) {
            iVar9 = piVar6[7];
            piVar11 = (int *)0x0;
            if ((((iVar9 == 0) || (iVar10 == 7)) || (iVar10 == 6)) &&
               ((iVar10 != -1 && (*(int *)(&DAT_00b065c8 + iVar10 * 4) != -1)))) {
              piVar11 = (int *)FUN_006f94a0(piVar2,(&PTR_s_Bip01_Head_00b06550)
                                                   [*(int *)(&DAT_00b065c8 + iVar10 * 4)]);
            }
            if (iVar9 == 0) {
              if (piVar11 == (int *)0x0) {
                iVar9 = *piVar2;
              }
              else {
                iVar9 = *piVar11;
              }
            }
            else {
              if (((iVar10 != 7) && (iVar10 != 6)) ||
                 (((iVar9 = (**(code **)(*piVar1 + 0x168))(), iVar9 != 0 &&
                   (piVar6[7] == *(int *)(iVar9 + 0x20))) || (piVar11 == (int *)0x0))))
              goto LAB_0047a915;
              iVar9 = *piVar11;
            }
            (**(code **)(iVar9 + 0x84))(piVar6,1);
          }
        }
        else {
          FUN_004a7a60("Tyring to add skinned object \'%s\' as an add on to skeleton.",piVar6[2]);
        }
LAB_0047a915:
        FUN_00707980();
        FUN_00707610();
        iVar9 = local_30;
      }
      uStack_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        (**(code **)*puStack_28)(1);
      }
      if (puStack_24 != (undefined4 *)0x0) {
        (**(code **)*puStack_24)(1);
      }
    }
  }
  *(int **)(iVar9 + 0x54) = piVar6;
  local_30 = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_4 = 2;
  uVar5 = (**(code **)(**(int **)(iVar9 + 0x4c) + 0xd4))((*(int **)(iVar9 + 0x4c))[3]);
  FUN_00402e30(&local_30,"%s %s (%08X)",(&PTR_DAT_00b06588)[iVar10],uVar5);
  iVar8 = local_30;
  if (*(int *)(iVar9 + 0x54) != 0) {
    FUN_006ff420(local_30);
  }
  FUN_00401f20(iVar8);
LAB_0047a9db:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047aa00(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
  if (iVar2 == 0) {
    if (iVar3 != 0) {
      piVar5 = (int *)(param_3 * 0x10 + 0x4c + in_ECX);
      FUN_00478780(piVar5,1,0);
      *piVar5 = param_1;
      *(undefined4 *)((param_3 + 5) * 0x10 + in_ECX) = param_2;
    }
    return;
  }
  if (param_3 != -1) {
    cVar1 = FUN_00468ff0(7,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_00468ff0(6,0);
      if (cVar1 == '\0') goto LAB_0047aa95;
    }
    piVar5 = (int *)(param_3 * 0x10 + 0x4c + in_ECX);
    FUN_00478780(piVar5,1,0);
    *piVar5 = param_1;
    *(undefined4 *)((param_3 + 5) * 0x10 + in_ECX) = param_2;
    return;
  }
LAB_0047aa95:
  piVar5 = (int *)(in_ECX + 0x4c);
  uVar4 = 0;
  do {
    cVar1 = FUN_00468ff0(uVar4,0);
    if ((cVar1 != '\0') && (iVar2 = *piVar5, iVar2 != param_1)) {
      if (iVar2 != 0) {
        iVar2 = FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
        if (iVar2 != 0) {
          FUN_00478780(piVar5,1,0);
          goto LAB_0047aaed;
        }
      }
      FUN_00479740(*piVar5);
    }
LAB_0047aaed:
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 4;
    if (0xf < uVar4) {
      uVar4 = 0;
      do {
        cVar1 = FUN_00468ff0(uVar4,1);
        if (cVar1 != '\0') {
          *(undefined4 *)((uVar4 + 5) * 0x10 + in_ECX) = param_2;
          *(int *)(uVar4 * 0x10 + 0x4c + in_ECX) = param_1;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      return;
    }
  } while( true );
}



void thunk_FUN_004796f0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  FUN_00401020(&DAT_00a2f830);
  iVar2 = in_ECX + 0x4c;
  iVar1 = 0x10;
  do {
    FUN_00478780(iVar2,1,0);
    iVar2 = iVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00401040();
  return;
}



void FUN_0047ab90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    puVar3 = &DAT_00b33c80;
    puVar1 = (undefined4 *)(in_ECX + 0x4c);
    do {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar3 = puVar3 + 4;
      puVar1 = puVar1 + 4;
    } while ((int)puVar3 < 0xb33d80);
    piVar4 = &DAT_00b06574;
    do {
      iVar5 = *piVar4;
      if ((*(int *)(&DAT_00b065c8 + iVar5 * 4) == -1) ||
         ((*(byte *)(in_ECX + 4 + *(int *)(&DAT_00b065c8 + iVar5 * 4) * 8) & 1) != 0)) {
        uVar2 = FUN_0052be80(param_2,iVar5);
        FUN_0047aa00(param_1,uVar2,iVar5);
      }
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0xb06588);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0047ac20(int *param_1)

{
  char *_Str1;
  char *_Str2;
  undefined *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  LONG LVar11;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined1 *puVar12;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_1a0;
  undefined4 *puStack_19c;
  int iStack_198;
  undefined4 *puStack_194;
  int iStack_190;
  char *apcStack_18c [6];
  undefined1 auStack_174 [88];
  char acStack_11c [268];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af235;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_1a0;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe50;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || (iVar6 = (**(code **)(*param_1 + 0xc))(uVar5), iVar6 == 0))
  goto LAB_0047b048;
  iVar6 = FUN_00707530(2);
  iStack_198 = FUN_00707530(6);
  if ((iVar6 == 0) ||
     ((*(char **)(iVar6 + 8) == (char *)0x0 ||
      (iVar6 = __stricmp(*(char **)(iVar6 + 8),"skin"), iVar6 != 0)))) goto LAB_0047b048;
  _eh_vector_constructor_iterator_(auStack_174,0x18,4,FUN_0043eb30,FUN_0043ace0);
  iStack_4 = 0;
  uVar7 = (**(code **)(**(int **)(in_ECX + 0x150) + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0)
  ;
  iStack_190 = FUN_009832e6(uVar7);
  puStack_19c = (undefined4 *)0x0;
  puStack_194 = (undefined4 *)0x0;
  _Str1 = (char *)param_1[2];
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  apcStack_18c[0] = "UpperBody";
  apcStack_18c[1] = "LowerBody";
  apcStack_18c[2] = "Hand";
  apcStack_18c[3] = "Foot";
  apcStack_18c[4] = "Arms";
  apcStack_18c[5] = "Tail";
  iStack_1a0 = 3;
  iVar6 = 0;
  do {
    _Str2 = apcStack_18c[iVar6];
    pcVar8 = _Str2;
    do {
      cVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar4 != '\0');
    iVar9 = __strnicmp(_Str1,_Str2,(int)pcVar8 - (int)(_Str2 + 1));
  } while ((iVar9 != 0) && (iVar6 = iVar6 + 1, iVar6 < 6));
  switch(iVar6) {
  case 0:
  case 4:
    iStack_1a0 = 2;
    break;
  case 1:
    iStack_1a0 = 3;
    break;
  case 2:
    iStack_1a0 = 4;
    break;
  case 3:
    iStack_1a0 = 5;
    break;
  case 5:
    iStack_1a0 = 0xf;
    break;
  default:
    FUN_004a7a60("Bad skin name \'%s\' on \'%s\'.",_Str1,*(undefined4 *)(param_1[7] + 8));
  }
  iVar6 = iStack_190;
  if (iStack_190 == 0) {
LAB_0047ae46:
    if (iStack_198 == 0) {
      piVar10 = (int *)FUN_00707530(4);
      if (((piVar10 == (int *)0x0) || (iVar6 = (**(code **)(*piVar10 + 0x54))(), iVar6 < 5)) ||
         (iVar6 = (**(code **)(*piVar10 + 0x54))(), 10 < iVar6)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      piVar10 = (int *)(-(uint)bVar2 & (uint)piVar10);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0x80))(0,puStack_19c);
        iVar6 = FUN_00560920(&DAT_00b3f95c,unaff_EBX);
        uVar7 = 0;
        if (iVar6 != 0) {
          uVar7 = *(undefined4 *)(iVar6 + 0x38);
        }
        FUN_007b4160(acStack_11c,uVar7,&DAT_00a3cf00);
        if (acStack_11c[0] != '\0') {
          FUN_007b8200(&stack0xfffffe58,acStack_11c,1,1);
          local_c._0_1_ = 3;
          if (unaff_EBP != 0) {
            (**(code **)(*piVar10 + 0x84))(0,unaff_EBP);
          }
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_007016a0();
        }
        (**(code **)(*piVar10 + 0x80))(1,puStack_19c);
        iVar6 = *piVar10;
        uVar7 = FUN_004783a0();
        (**(code **)(iVar6 + 0x84))(1,uVar7);
        piVar10[7] = piVar10[7] | 0x400;
        piVar10[9] = 0;
        goto LAB_0047afd2;
      }
      iStack_198 = FUN_00401f00(0x30);
      iStack_4._0_1_ = 4;
      if (iStack_198 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_007043b0();
      }
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      FUN_004057b0(puStack_19c);
    }
    else {
      uVar7 = FUN_00700900();
      FUN_004057b0(puStack_19c);
      FUN_00708560(&iStack_198,6);
      FUN_007016a0();
    }
    FUN_00405680(uVar7);
  }
  else {
    TESNPC_FaceGenFiller(auStack_174);
    iVar9 = iStack_1a0;
    cVar4 = FUN_0052d2c0(&puStack_19c,&puStack_194,iVar6,iStack_1a0);
    if (cVar4 != '\0') goto LAB_0047ae46;
    puVar12 = *(undefined1 **)(*(int *)(iVar6 + 0xe8) + 0x1c);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &DAT_00a2f7ec;
    }
    puVar1 = (&PTR_DAT_00b06588)[iVar9];
    iVar6 = FUN_00519d20();
    FUN_004a7a60("Missing \'%s\' race texture for \'%s\' in race \'%s\'.",(&PTR_DAT_00b10bc4)[iVar6]
                 ,puVar1,puVar12);
  }
LAB_0047afd2:
  puVar3 = puStack_194;
  iStack_4._0_1_ = 1;
  if (((puStack_194 != (undefined4 *)0x0) &&
      (LVar11 = InterlockedDecrement(puStack_194 + 1), LVar11 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = puStack_19c;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (((puStack_19c != (undefined4 *)0x0) &&
      (LVar11 = InterlockedDecrement(puStack_19c + 1), LVar11 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  iStack_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_174,0x18,4,FUN_0043ace0);
LAB_0047b048:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047b090(int *param_1,int *param_2,int param_3,char param_4,int param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *in_ECX;
  undefined *puVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  int local_9c;
  uint local_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *local_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  uint uStack_74;
  undefined4 *puStack_70;
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af299;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff50;
  *unaff_FS_OFFSET = (int)&local_c;
  local_9c = 0;
  FUN_004784a0(uVar3);
  FUN_00477f90();
  if ((param_3 == 1) && (local_9c = param_5, param_5 == 0)) {
    local_9c = FUN_00478a40();
  }
  param_1[0x15] = DAT_00b3f9a8;
  param_1[0x16] = DAT_00b3f9ac;
  param_1[0x17] = DAT_00b3f9b0;
  if (param_2 != (int *)0x0) {
    param_2[0x15] = DAT_00b3f9a8;
    param_2[0x16] = DAT_00b3f9ac;
    param_2[0x17] = DAT_00b3f9b0;
  }
  local_94 = 0;
  if (*(short *)((int)param_1 + 0xb6) != 0) {
    do {
      if (local_94 < *(ushort *)((int)param_1 + 0xb6)) {
        piVar14 = *(int **)(param_1[0x2c] + local_94 * 4);
        if ((piVar14 == (int *)0x0) || (iVar5 = (**(code **)(*piVar14 + 0xc))(), iVar5 != 0))
        goto LAB_0047b16e;
        (**(code **)(*param_1 + 0x88))(&puStack_70,piVar14);
        puVar8 = puStack_70;
        if ((puStack_70 != (undefined4 *)0x0) &&
           ((LVar6 = InterlockedDecrement(puStack_70 + 1), LVar6 == 0 &&
            (puVar8 != (undefined4 *)0x0)))) {
          (**(code **)*puVar8)(1);
        }
      }
      else {
        piVar14 = (int *)0x0;
LAB_0047b16e:
        if (param_4 != '\0') {
          pcVar4 = PTR_s_UpperBody_00b06590;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          iVar5 = __strnicmp((char *)piVar14[2],PTR_s_UpperBody_00b06590,
                             (int)pcVar4 - (int)(PTR_s_UpperBody_00b06590 + 1));
          if (iVar5 == 0) {
            (**(code **)(*param_1 + 0x88))(&local_84,piVar14);
            puVar8 = local_84;
            if (((local_84 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(local_84 + 1), LVar6 == 0)) &&
               (puVar8 != (undefined4 *)0x0)) {
              (**(code **)*puVar8)(1);
            }
            goto LAB_0047b548;
          }
        }
        iVar5 = piVar14[0x2e];
        if ((((piVar14[0x2d] != 0) && (iVar5 != 0)) &&
            ((local_9c != 0 &&
             ((in_ECX[0x54] != 0 &&
              (iVar7 = (**(code **)(*(int *)in_ECX[0x54] + 0x170))(), iVar7 != 0)))))) &&
           (iVar7 = (**(code **)(*(int *)in_ECX[0x54] + 0x170))(), *(char *)(iVar7 + 4) == '#')) {
          (**(code **)(*(int *)in_ECX[0x54] + 0x170))();
          _eh_vector_constructor_iterator_(auStack_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
          iStack_4 = 0;
          puVar8 = (undefined4 *)FUN_00700790(auStack_78);
          FUN_00405070(*puVar8);
          iStack_4._0_1_ = 1;
          FUN_007016a0();
          (**(code **)(*piVar14 + 0x8c))(uStack_8c);
          if ((piVar14[0x2e] != 0) && (*(int *)(piVar14[0x2e] + 0xc) != 0)) {
            puVar8 = (undefined4 *)FUN_00700790(auStack_80);
            FUN_00405070(*puVar8);
            iStack_4._0_1_ = 2;
            FUN_007016a0();
            uVar9 = FUN_00700900();
            FUN_00478350(uVar9);
            FUN_00478300(uStack_88);
            iStack_4._0_1_ = 1;
            FUN_007016a0();
          }
          TESNPC_FaceGenFiller(auStack_6c);
          if (DAT_00b120b4 != '\0') {
            FUN_00558840(auStack_6c,piVar14,0x3f800000,0);
          }
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_007016a0();
          iStack_4 = 0xffffffff;
          _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
        }
        FUN_0047ac20(piVar14);
        if (iVar5 != 0) {
          uStack_74 = *(uint *)(*(int *)(iVar5 + 8) + 0x40);
          iVar7 = *(int *)(iVar5 + 0x14);
          uVar3 = 0;
          iStack_7c = iVar7;
          if (uStack_74 != 0) {
            do {
              iVar10 = FUN_006f94a0(*in_ECX,*(undefined4 *)(*(int *)(iVar7 + uVar3 * 4) + 8));
              if (iVar10 == 0) {
                pcVar4 = *(char **)(*(int *)(iVar7 + uVar3 * 4) + 8);
                pcVar11 = pcVar4;
                do {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar1 != '\0');
                iVar10 = __strnicmp((char *)piVar14[2],pcVar4,(int)pcVar11 - (int)(pcVar4 + 1));
                if (iVar10 == 0) {
                  if (param_1[7] == 0) {
                    puVar13 = &DAT_00a3d014;
                  }
                  else {
                    puVar13 = *(undefined **)(param_1[7] + 8);
                  }
                  FUN_004a7a60("Bone \'%s\' not found for part \'%s->%s\'.\r\nMake sure all the vertices are skinned to a bone in Max."
                               ,*(undefined4 *)(*(int *)(iVar7 + uVar3 * 4) + 8),puVar13,param_1[2])
                  ;
                }
                else {
                  if (*(int *)(*in_ECX + 0x1c) == 0) {
                    puVar13 = &DAT_00a3d014;
                  }
                  else {
                    puVar13 = *(undefined **)(*(int *)(*in_ECX + 0x1c) + 8);
                  }
                  iVar10 = param_1[2];
                  uVar9 = *(undefined4 *)(*(int *)(iVar7 + uVar3 * 4) + 8);
                  uVar12 = FUN_004da2a0(puVar13);
                  FUN_004a7a60("Bone \'%s\' not found for part \'%s\'.\r\nRequested by \'%s\' model \'%s\'."
                               ,uVar9,iVar10,uVar12);
                  iVar7 = iStack_7c;
                }
              }
              else {
                *(int *)(*(int *)(iVar5 + 0x14) + uVar3 * 4) = iVar10;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_74);
          }
          if (param_2 != (int *)0x0) {
            *(int **)(iVar5 + 0x10) = param_2;
            (**(code **)(*param_2 + 0x84))(piVar14,1);
          }
        }
      }
LAB_0047b548:
      local_94 = local_94 + 1;
    } while (local_94 < *(ushort *)((int)param_1 + 0xb6));
  }
  FUN_004784a0();
  if (*(short *)((int)param_1 + 0xb6) != 0) {
    do {
      if (*(int *)(param_1[0x2c] + -4 + (uint)*(ushort *)((int)param_1 + 0xb6) * 4) != 0) break;
      sVar2 = *(ushort *)((int)param_1 + 0xb6) - 1;
      *(short *)((int)param_1 + 0xb6) = sVar2;
    } while (sVar2 != 0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0047b5b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 uVar6;
  LONG LVar7;
  int *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af2db;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    for (puVar4 = (undefined *)(**(code **)(*param_1 + 4))(uVar3); puVar4 != (undefined *)0x0;
        puVar4 = *(undefined **)(puVar4 + 4)) {
      if (puVar4 == &DAT_00b35408) {
        bVar1 = 1;
        goto LAB_0047b608;
      }
    }
    bVar1 = 0;
LAB_0047b608:
    uVar3 = -(uint)bVar1 & (uint)param_1;
  }
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    cVar2 = FUN_00471b80(param_1);
    *(char *)(in_ECX + param_2 * 4 + 0x16) = cVar2;
    if (*in_ECX != 0) {
      if (cVar2 != '\0') {
        local_4._0_1_ = 1;
        uVar10 = uVar3;
        if (uVar3 == 0) {
          iVar8 = FUN_00401f00(0xdc);
          local_4._0_1_ = 2;
          if (iVar8 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_0070b780(0);
          }
        }
        local_4._0_1_ = 1;
        FUN_0075fa90(uVar10);
        uRam00000054 = DAT_00b3f9a8;
        uRam00000058 = DAT_00b3f9ac;
        uRam0000005c = DAT_00b3f9b0;
        puVar9 = &DAT_00b26dc4;
        puVar11 = (undefined4 *)0x30;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        piVar5 = (int *)FUN_006f94a0(*in_ECX,"SkinAttachment");
        if (piVar5 == (int *)0x0) {
          iVar8 = **(int **)(*in_ECX + 0x1c);
        }
        else {
          iVar8 = *piVar5;
        }
        (**(code **)(iVar8 + 0x84))(0,1);
        if (uVar3 == 0) {
          FUN_0047b090(param_1,0,param_2,param_3,param_4);
        }
        else {
          uVar10 = 0;
          if (*(short *)(uVar3 + 0xb6) != 0) {
            if (*(short *)(uVar3 + 0xb6) != 0) goto LAB_0047b70d;
            uVar6 = 0;
            while( true ) {
              FUN_0047b090(uVar6,0,param_2,param_3,param_4);
              uVar10 = uVar10 + 1;
              if (*(ushort *)(uVar3 + 0xb6) <= uVar10) break;
LAB_0047b70d:
              uVar6 = *(undefined4 *)(*(int *)(uVar3 + 0xb0) + uVar10 * 4);
            }
          }
        }
        if (param_1 != (int *)0x0) {
          InterlockedIncrement(param_1 + 1);
          LVar7 = InterlockedDecrement(param_1 + 1);
          if (LVar7 == 0) {
            (**(code **)*param_1)(1);
          }
        }
        local_4 = (uint)local_4._1_3_ << 8;
        LVar7 = InterlockedDecrement((LONG *)&DAT_00000004);
        if (LVar7 == 0) {
          (*(code *)*_DAT_00000000)(1);
        }
      }
      param_1 = (int *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_0047b7d0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  int aiStack_54 [9];
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar7 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af308;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_00b065cc;
  if ((param_1 == 0) || (param_2 == (int *)0x0)) goto LAB_0047b963;
  param_1 = 0;
  if ((in_ECX[0x54] == DAT_00b333c4) && (cVar2 = FUN_0065d770(in_ECX), cVar2 != '\0')) {
    param_1 = 1;
  }
  piVar4 = (int *)FUN_0047b5b0(param_2,1,param_1,iVar7);
  if (piVar4 == (int *)0x0) {
    FUN_00479140(*in_ECX,param_2,0);
    piVar4 = param_2;
  }
  local_5c = 0;
  local_58 = 0;
  local_56 = 0;
  local_4 = 0;
  uVar5 = (**(code **)(*(int *)in_ECX[0x17] + 0xd4))(((int *)in_ECX[0x17])[3]);
  FUN_00402e30(&local_5c,"%s %s (%08X)",PTR_DAT_00b0658c,uVar5);
  FUN_006ff420(local_5c);
  if (*(char *)(in_ECX + 0x1a) != '\0') {
    piVar6 = piVar4 + 0xc;
    piVar8 = aiStack_54;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    piVar6 = (int *)FUN_004d7c50(auStack_30,aiStack_54,1);
    piVar8 = piVar4 + 0xc;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  iVar7 = FUN_006ff9c0(&DAT_00a7d0ec);
  if ((iVar7 != 0) && ((*(uint *)(iVar7 + 0xc) >> 4 & 1) != 0)) {
    FUN_004e26f0(param_2);
  }
  if ((*(char *)(in_ECX + 0x1a) == '\0') && (iVar7 = (**(code **)(*piVar4 + 8))(), iVar7 != 0)) {
    if (in_ECX[iVar1 * 2 + 2] == 0) {
      if (piVar4[7] == 0) goto LAB_0047b94b;
      piVar6 = (int *)*in_ECX;
    }
    else {
      piVar6 = (int *)in_ECX[iVar1 * 2 + 2];
    }
    (**(code **)(*piVar6 + 0x84))(piVar4,1);
  }
LAB_0047b94b:
  in_ECX[0x19] = piVar4;
  local_4 = 0xffffffff;
  FUN_00401f20(local_5c);
LAB_0047b963:
  if ((in_ECX[0x54] != 0) && (*(int *)(in_ECX[0x54] + 0x3c) != 0)) {
    FUN_00707610(uVar3);
    FUN_00707980();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047b9a0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [9];
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af340;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff78;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (*(char *)(param_1 + 4) == '\x16')) {
    FUN_00478780(in_ECX + 0xcc,1,0);
    uVar9 = 0xffffffff;
    (**(code **)(**(int **)(in_ECX + 0x150) + 0x170))(0xffffffff,uVar2);
    uVar3 = FUN_00519d20();
    FUN_004691d0(in_ECX,uVar3,uVar9);
    if (*(int *)(in_ECX + 0xd0) != 0) {
      iVar6 = 0;
      puVar5 = (undefined4 *)(in_ECX + 0x4c);
      do {
        iVar4 = FUN_009832e6(*puVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 6) & 2) != 0)) goto LAB_0047bc20;
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar6 < 0x10);
      if (*(int *)(in_ECX + 0x150) == DAT_00b333c4) {
        cVar1 = FUN_0065d770(in_ECX);
        if (cVar1 != '\0') goto LAB_0047bc20;
      }
      uVar10 = 1;
      uVar8 = 3;
      uVar9 = 1;
      uVar3 = (**(code **)(**(int **)(in_ECX + 0xd0) + 0x14))(1,3,1);
      FUN_00439eb0(uVar3,uVar9,uVar8,uVar10);
      FUN_00478b90();
      uStack_58 = 0x3f800000;
      uStack_5c = 0x3f800000;
      uStack_60 = 0x3f800000;
      uStack_4 = 0;
      iVar4 = FUN_00700610(auStack_70);
      iVar6 = 0;
      if (iVar4 != 0) {
        cVar1 = FUN_00405650(&DAT_00b35288,iVar4);
        if (cVar1 != '\0') {
          FUN_004a01b0(7);
        }
        FUN_006ffac0(&DAT_00a3ceb0);
        *(undefined4 *)(iVar4 + 0x54) = DAT_00b3f9a8;
        *(undefined4 *)(iVar4 + 0x58) = DAT_00b3f9ac;
        *(undefined4 *)(iVar4 + 0x5c) = DAT_00b3f9b0;
        puVar5 = &DAT_00b26dc4;
        puVar7 = (undefined4 *)(iVar4 + 0x30);
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar6 = FUN_0047b5b0(iVar4,8,0,0);
        if (iVar6 == 0) {
          FUN_00479140(*(undefined4 *)(*(int *)(in_ECX + 0x150) + 0x3c),iVar4,0);
          iVar6 = iVar4;
        }
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_72 = 0;
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        uVar3 = (**(code **)(**(int **)(in_ECX + 0xcc) + 0xd4))((*(int **)(in_ECX + 0xcc))[3]);
        FUN_00402e30(&uStack_78,"%s %s (%08X)",PTR_s_Amulet_00b065a8,uVar3);
        FUN_006ff420(uStack_78);
        if (*(char *)(in_ECX + 0xd8) != '\0') {
          puVar5 = (undefined4 *)(iVar6 + 0x30);
          puVar7 = auStack_54;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = (undefined4 *)FUN_004d7c50(auStack_30,auStack_54,1);
          puVar7 = (undefined4 *)(iVar6 + 0x30);
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_00402da0();
      }
      *(int *)(in_ECX + 0xd4) = iVar6;
      uStack_4 = 0xffffffff;
      FUN_004781a0();
    }
  }
LAB_0047bc20:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0047c514) */
/* WARNING: Removing unreachable block (ram,0x0047c557) */
/* WARNING: Removing unreachable block (ram,0x0047c565) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bc40(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *in_ECX;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_174;
  uint uStack_168;
  int *piStack_164;
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined2 uStack_152;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  undefined1 auStack_13c [8];
  int iStack_134;
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [4];
  int iStack_128;
  undefined4 *puStack_124;
  undefined4 *puStack_120;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [36];
  int aiStack_e4 [9];
  undefined1 auStack_c0 [36];
  undefined4 auStack_9c [9];
  undefined1 auStack_78 [100];
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009af3aa;
  local_14 = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe78;
  *unaff_FS_OFFSET = (int)&local_14;
  cVar3 = '\0';
  if ((in_ECX[0x54] == DAT_00b333c4) && (cVar4 = FUN_0065d770(in_ECX), cVar4 != '\0')) {
    cVar3 = '\x01';
  }
  if (DAT_00b33d80 != '\0') {
    iVar6 = (**(code **)(*(int *)in_ECX[0x54] + 0x170))(uVar5);
    FUN_00550240(*(undefined4 *)(iVar6 + 0xc));
  }
  local_174 = 0;
  do {
    piStack_150 = in_ECX + (local_174 + 5) * 4;
    if ((*piStack_150 == 0) || (*piStack_150 != (&DAT_00b33c84)[local_174 * 4])) {
      if ((&DAT_00b33c88)[local_174 * 4] != 0) {
        FUN_00478780(&DAT_00b33c80 + local_174 * 4,1,0);
      }
LAB_0047be48:
      if ((((local_174 < 6) || (8 < local_174)) || (cVar4 = FUN_00478290(local_174), cVar4 == '\0'))
         && ((*piStack_150 != 0 && (*piStack_150 != -1)))) {
        if (cVar3 != '\0') {
          switch(local_174) {
          case 2:
          case 4:
          case 6:
          case 7:
          case 9:
          case 0xc:
          case 0xd:
          case 0xe:
            break;
          default:
            goto switchD_0047be97_caseD_3;
          }
        }
        if (local_174 == 1) {
          if ((((in_ECX[0x54] != DAT_00b333c4) && (in_ECX[0x19] == 0)) && (DAT_00b06608 != '\0')) &&
             ((DAT_00b120b4 != '\0' && (cVar4 = FUN_00477ed0(), cVar4 != '\0')))) {
            FUN_004781d0(auStack_130,0,0);
            FUN_004bddc0();
            goto switchD_0047be97_caseD_3;
          }
        }
        else if (((local_174 == 0xe) && (iVar6 = in_ECX[0x54], iVar6 != 0)) &&
                (*(int **)(iVar6 + 0x58) != (int *)0x0)) {
          (**(code **)(**(int **)(iVar6 + 0x58) + 0x348))(iVar6);
        }
        iStack_134 = *(int *)(&DAT_00b065c8 + local_174 * 4);
        uVar15 = 1;
        uVar14 = 3;
        uVar13 = 1;
        uVar7 = (**(code **)(*(int *)*piStack_150 + 0x14))(1,3,1);
        uVar7 = FUN_00439eb0(uVar7,uVar13,uVar14,uVar15);
        uStack_14c = uVar7;
        FUN_00478b90();
        uStack_10c = 0x3f800000;
        uStack_110 = 0x3f800000;
        uStack_114 = 0x3f800000;
        uStack_c = 1;
        cVar4 = FUN_00480820(uVar7);
        if (cVar4 == '\0') {
          piVar9 = (int *)FUN_00700610(&puStack_124);
        }
        else {
          uVar7 = FUN_004430c0(uVar7,&puStack_124);
          FUN_0075fa90(uVar7);
          piVar9 = (int *)0x0;
        }
        if (piVar9 != (int *)0x0) {
          for (puVar8 = (undefined4 *)(**(code **)(*piVar9 + 4))(); puVar8 != (undefined4 *)0x0;
              puVar8 = (undefined4 *)puVar8[1]) {
            if (puVar8 == &DAT_00b35288) {
              FUN_004a01b0(7);
              break;
            }
          }
          FUN_006ffac0(&DAT_00a3ceb0);
          piVar9[0x15] = DAT_00b3f9a8;
          piVar9[0x16] = DAT_00b3f9ac;
          piVar9[0x17] = DAT_00b3f9b0;
          piVar11 = &DAT_00b26dc4;
          piVar10 = piVar9 + 0xc;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar10 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar10 = piVar10 + 1;
          }
          piStack_164 = (int *)FUN_0047b5b0(piVar9,local_174,cVar3,0);
          if (piStack_164 == (int *)0x0) {
            if (((local_174 == 1) && (iStack_128 = FUN_00478a40(), iStack_128 != 0)) &&
               (uStack_168 = 0, *(short *)((int)piVar9 + 0xb6) != 0)) {
              do {
                if (((((uStack_168 < *(ushort *)((int)piVar9 + 0xb6)) &&
                      (piVar11 = *(int **)(piVar9[0x2c] + uStack_168 * 4), piVar11 != (int *)0x0))
                     && (piVar11[0x2d] != 0)) &&
                    ((in_ECX[0x54] != 0 &&
                     (iVar6 = (**(code **)(*(int *)in_ECX[0x54] + 0x170))(), iVar6 != 0)))) &&
                   (iVar6 = (**(code **)(*(int *)in_ECX[0x54] + 0x170))(),
                   *(char *)(iVar6 + 4) == '#')) {
                  (**(code **)(*(int *)in_ECX[0x54] + 0x170))();
                  _eh_vector_constructor_iterator_(auStack_78,0x18,4,FUN_0043eb30,FUN_0043ace0);
                  uStack_c._0_1_ = 2;
                  puVar8 = (undefined4 *)FUN_00700790(auStack_13c);
                  FUN_00405070(*puVar8);
                  uStack_c = CONCAT31(uStack_c._1_3_,3);
                  FUN_007016a0();
                  (**(code **)(*piVar11 + 0x8c))(uStack_140);
                  TESNPC_FaceGenFiller(auStack_78);
                  if ((DAT_00b120b4 == '\0') ||
                     (cVar4 = FUN_00558840(auStack_78,piVar11,0x3f800000,0), cVar4 != '\0')) {
                    FUN_0070fd80(0xbfc90fdb);
                    piVar10 = (int *)FUN_007100a0(auStack_c0,auStack_108);
                    piVar11 = piVar11 + 0xc;
                    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *piVar11 = *piVar10;
                      piVar10 = piVar10 + 1;
                      piVar11 = piVar11 + 1;
                    }
                  }
                  uStack_c._0_1_ = 2;
                  FUN_007016a0();
                  uStack_c = CONCAT31(uStack_c._1_3_,1);
                  _eh_vector_destructor_iterator_(auStack_78,0x18,4,FUN_0043ace0);
                }
                uStack_168 = uStack_168 + 1;
              } while (uStack_168 < *(ushort *)((int)piVar9 + 0xb6));
            }
            FUN_00479140(*in_ECX,piVar9,0);
            cVar4 = FUN_0045a500();
            piStack_164 = piVar9;
            if (((cVar4 == '\0') && (local_174 == 9)) &&
               (iVar6 = in_ECX[0x54], *(int *)(iVar6 + 0x58) != 0)) {
              if ((iVar6 == DAT_00b333c4) &&
                 (puVar8 = (undefined4 *)FUN_006600d0(1), in_ECX == puVar8)) {
                iVar6 = **(int **)(iVar6 + 0x58);
                FUN_0065d750(1);
                uVar7 = FUN_005e0da0();
                (**(code **)(iVar6 + 0x150))(uVar7);
              }
              else {
                iVar1 = **(int **)(iVar6 + 0x58);
                FUN_004d8370(iVar6);
                uVar7 = FUN_005e0da0();
                (**(code **)(iVar1 + 0x150))(uVar7);
              }
            }
          }
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_152 = 0;
          uStack_c = CONCAT31(uStack_c._1_3_,4);
          uVar7 = (**(code **)(*(int *)in_ECX[local_174 * 4 + 0x13] + 0xd4))
                            (((int *)in_ECX[local_174 * 4 + 0x13])[3]);
          FUN_00402e30(&uStack_158,"%s %s (%08X)",(&PTR_DAT_00b06588)[local_174],uVar7);
          FUN_006ff420(uStack_158);
          if (*(char *)(in_ECX + local_174 * 4 + 0x16) != '\0') {
            piVar11 = piStack_164 + 0xc;
            piVar10 = aiStack_e4;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar10 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar10 = piVar10 + 1;
            }
            piVar11 = (int *)FUN_004d7c50(auStack_c0,aiStack_e4,1);
            piVar10 = piStack_164 + 0xc;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar10 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar10 = piVar10 + 1;
            }
          }
          FUN_00478220(uStack_14c,piVar9,local_174,in_ECX[0x54]);
          if ((local_174 == 0xe) && (in_ECX[0x54] == DAT_00b333c4)) {
            iVar6 = FUN_0041e650();
            if (iVar6 == 0) {
              uVar13 = FUN_0065d770(in_ECX);
              uVar7 = 0;
            }
            else {
              puVar8 = (undefined4 *)FUN_0041e650();
              uVar7 = *puVar8;
              uVar13 = FUN_0065d770(in_ECX);
            }
            FUN_00663870(uVar7,uVar13);
          }
          if ((*(char *)(in_ECX + local_174 * 4 + 0x16) == '\0') &&
             (iVar6 = (**(code **)(*piStack_164 + 8))(), iVar6 != 0)) {
            piVar9 = (int *)piStack_164[7];
            if (iStack_134 == -1) {
              piVar11 = (int *)*piStack_150;
              uVar7 = FUN_004da2a0();
              uVar7 = (**(code **)(*piVar11 + 0x14))(uVar7);
              FUN_004a7a60("The biped part \'%s\' should be skinned for \'%s\'.",uVar7);
              if (piVar9 == (int *)0x0) {
                FUN_00405070(piStack_164);
                FUN_007016a0();
                piStack_164 = (int *)0x0;
              }
              else {
                (**(code **)(*piVar9 + 0x88))(auStack_12c);
                FUN_007016a0();
                piStack_164 = (int *)0x0;
              }
            }
            else if (piVar9 == (int *)0x0) {
              if (in_ECX[iStack_134 * 2 + 2] != 0) {
                (**(code **)(*(int *)in_ECX[iStack_134 * 2 + 2] + 0x84))(piStack_164,1);
              }
            }
            else if (((iStack_134 == 3) && (in_ECX[0x54] == DAT_00b333c4)) && (cVar3 == '\0')) {
              uStack_148 = 0;
              uStack_144 = 0;
              uStack_142 = 0;
              uStack_c._0_1_ = 5;
              uVar7 = FUN_004702d0(in_ECX[local_174 * 4 + 0x13],0,DAT_00b333c4);
              FUN_00402e30(&uStack_148,"\\%s\\%s","Icons",uVar7);
              FUN_0057b190(uStack_148);
              uStack_c = CONCAT31(uStack_c._1_3_,4);
              FUN_00402da0();
            }
          }
          in_ECX[local_174 * 4 + 0x15] = piStack_164;
          FUN_00401f20(uStack_158);
          uStack_158 = 0;
          uStack_152 = 0;
          uStack_154 = 0;
        }
        uStack_c = 0xffffffff;
        if (puStack_124 != (undefined4 *)0x0) {
          (**(code **)*puStack_124)(1);
        }
        if (puStack_120 != (undefined4 *)0x0) {
          (**(code **)*puStack_120)(1);
        }
      }
    }
    else {
      in_ECX[local_174 * 4 + 0x13] = (&DAT_00b33c80)[local_174 * 4];
      puVar8 = in_ECX + local_174 * 4 + 0x13;
      puVar8[1] = (&DAT_00b33c84)[local_174 * 4];
      puVar8[2] = (&DAT_00b33c88)[local_174 * 4];
      puVar8[3] = (&DAT_00b33c8c)[local_174 * 4];
      (&DAT_00b33c80)[local_174 * 4] = 0;
      (&DAT_00b33c84)[local_174 * 4] = 0;
      (&DAT_00b33c88)[local_174 * 4] = 0;
      bVar2 = false;
      (&DAT_00b33c8c)[local_174 * 4] = 0;
      if ((local_174 < 6) || (8 < local_174)) {
LAB_0047bd5d:
        if ((DAT_00b33d80 != '\0') &&
           (iVar6 = FUN_00560920(&DAT_00b3fab0,in_ECX[local_174 * 4 + 0x15]), iVar6 != 0)) {
          uVar5 = 0;
          if (*(short *)(iVar6 + 0xb6) != 0) {
            if (*(short *)(iVar6 + 0xb6) != 0) goto LAB_0047bda4;
            uVar7 = 0;
            while( true ) {
              FUN_0047ac20(uVar7);
              uVar5 = uVar5 + 1;
              if (*(ushort *)(iVar6 + 0xb6) <= uVar5) break;
LAB_0047bda4:
              uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0xb0) + uVar5 * 4);
            }
          }
        }
        if ((*(char *)(in_ECX + local_174 * 4 + 0x16) != '\0') &&
           (in_ECX[local_174 * 4 + 0x15] != 0)) {
          puVar8 = &DAT_00b26dc4;
          puVar12 = auStack_9c;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar8 = (undefined4 *)FUN_004d7c50(auStack_108,auStack_9c,1);
          puVar12 = (undefined4 *)(in_ECX[local_174 * 4 + 0x15] + 0x30);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        if (bVar2) goto LAB_0047be48;
      }
      else {
        cVar4 = FUN_00478290(local_174);
        if (cVar4 == '\0') {
          if (in_ECX[local_174 * 4 + 0x15] == 0) {
            bVar2 = true;
          }
          goto LAB_0047bd5d;
        }
        FUN_00478780(puVar8,0,0);
      }
    }
switchD_0047be97_caseD_3:
    local_174 = local_174 + 1;
    if (0xf < local_174) {
      FUN_00707610();
      FUN_00707980();
      *unaff_FS_OFFSET = local_14;
      return;
    }
  } while( true );
}



void FUN_0047c600(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  
  fVar8 = in_ECX[2] * 2.0;
  fVar9 = in_ECX[3] * 2.0;
  fVar10 = in_ECX[1] * 2.0 * *in_ECX;
  fVar1 = *in_ECX;
  fVar2 = *in_ECX;
  fVar11 = in_ECX[1] * in_ECX[1] * 2.0;
  fVar3 = in_ECX[1];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  fVar6 = in_ECX[2];
  fVar7 = in_ECX[3];
  *param_1 = 1.0 - (fVar8 * fVar5 + fVar9 * fVar7);
  param_1[3] = fVar9 * fVar2 + fVar8 * fVar3;
  param_1[6] = fVar9 * fVar4 - fVar8 * fVar1;
  param_1[1] = fVar8 * fVar3 - fVar9 * fVar2;
  param_1[4] = 1.0 - (fVar11 + fVar9 * fVar7);
  param_1[7] = fVar10 + fVar6 * fVar9;
  param_1[2] = fVar8 * fVar1 + fVar9 * fVar4;
  param_1[5] = fVar6 * fVar9 - fVar10;
  param_1[8] = 1.0 - (fVar8 * fVar5 + fVar11);
  return;
}



uint FUN_0047c710(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(ushort *)(in_ECX + 0x44) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x40) + (uVar1 & 0xffff) * 4) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((ushort)uVar1 < *(ushort *)(in_ECX + 0x44));
  }
  return CONCAT22((short)(uVar1 >> 0x10),0xffff);
}



void FUN_0047c740(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af408;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 8) >> 3 & 1) != 0) {
    local_10 = -3.4028235e+38;
    local_2c = DAT_00b24260;
    local_28 = DAT_00b24264;
    local_24 = DAT_00b24268;
    local_20 = DAT_00b3cba4;
    iVar5 = 0;
    local_1c = DAT_00b3cba8;
    local_18 = DAT_00b3cbac;
    local_14 = DAT_00b3cbb0;
    if (*(short *)(in_ECX + 0x44) != 0) {
      iVar6 = 0;
      do {
        puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x40) + iVar5 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
        local_4 = 0;
        if ((puVar1 == (undefined4 *)0x0) || ((*(byte *)(puVar1 + 6) >> 1 & 1) == 0)) {
          local_4 = 0xffffffff;
          if (puVar1 != (undefined4 *)0x0) goto LAB_0047c8e5;
        }
        else {
          cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + iVar6) + 0x4c))
                            (param_1,puVar1,&local_2c,uVar3);
          if (cVar2 != '\0') {
            if (local_2c != -3.4028235e+38) {
              puVar1[0x15] = local_2c;
              puVar1[0x16] = local_28;
              puVar1[0x17] = local_24;
            }
            if (local_1c != -3.4028235e+38) {
              FUN_0047c600(puVar1 + 0xc);
            }
            if (local_10 == -3.4028235e+38) {
              if ((*(byte *)(in_ECX + 8) >> 6 & 1) != 0) {
                puVar1[0x18] = 0x3f800000;
              }
            }
            else {
              puVar1[0x18] = ABS(local_10);
            }
          }
LAB_0047c8e5:
          local_4 = 0xffffffff;
          LVar4 = InterlockedDecrement(puVar1 + 1);
          if (LVar4 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x30;
      } while (iVar5 < (int)(uint)*(ushort *)(in_ECX + 0x44));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047c930(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_2 != '\0') {
    puVar1 = *(undefined4 **)(in_ECX + 0x9c);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if ((piVar2 != (int *)0x0) && (piVar2[3] != 0)) {
        (**(code **)(*piVar2 + 0x50))(param_1);
      }
    }
  }
  for (piVar2 = *(int **)(in_ECX + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xd]) {
    (**(code **)(*piVar2 + 0x54))(param_1);
  }
  return;
}



void FUN_0047c990(undefined4 param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  DAT_00ba7a8c = 3;
  piVar1 = (int *)in_ECX[3];
  do {
    if (piVar1 == (int *)0x0) {
      (**(code **)(*in_ECX + 0x74))();
      if (param_2 != (int *)0x0) {
        if ((int *)param_2[7] != in_ECX) {
          (**(code **)(*(int *)param_2[7] + 0x74))();
        }
        FUN_0047c930(param_1,1);
        (**(code **)(*param_2 + 0x74))();
      }
      DAT_00ba7a8c = 0;
      return;
    }
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3cd7c) {
        bVar2 = 1;
        goto LAB_0047c9c3;
      }
    }
    bVar2 = 0;
LAB_0047c9c3:
    if ((-(uint)bVar2 & (uint)piVar1) == 0) {
      (**(code **)(*piVar1 + 0x54))(param_1);
    }
    piVar1 = (int *)piVar1[0xd];
  } while( true );
}



void FUN_0047ca30(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3cd7c) {
        bVar2 = 1;
        goto LAB_0047ca60;
      }
    }
    bVar2 = 0;
LAB_0047ca60:
    if ((-(uint)bVar2 & (uint)piVar1) != 0) {
      FUN_0047c740(param_1,param_2);
    }
    piVar1 = (int *)piVar1[0xd];
  } while( true );
}



void FUN_0047ca90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(in_ECX + 0xb8) != 0) {
    do {
      if (((uVar2 < *(ushort *)(in_ECX + 0xb6)) &&
          (iVar1 = *(int *)(*(int *)(in_ECX + 0xb0) + uVar2 * 4), iVar1 != 0)) && (iVar1 != param_3)
         ) {
        FUN_00707370(param_1,param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xb8));
  }
  return;
}



void FUN_0047caf0(float param_1)

{
  byte bVar1;
  undefined *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float local_40;
  float local_3c [3];
  int aiStack_30 [12];
  
  local_3c[0] = 0.3;
  iVar3 = 2;
  local_3c[1] = 0.65;
  local_3c[2] = 1.0;
  do {
    aiStack_30[iVar3] = in_ECX;
    in_ECX = *(int *)(in_ECX + 0x1c);
    if (in_ECX == 0) {
      return;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  local_40 = 0.0;
  iVar3 = 0;
  do {
    FUN_007116a0((*(float *)((int)local_3c + iVar3) - local_40) * param_1,0,0);
    piVar6 = *(int **)(*(int *)((int)aiStack_30 + iVar3) + 0xa8);
    if (piVar6 != (int *)0x0) {
      for (puVar2 = (undefined *)(**(code **)(*piVar6 + 4))(); puVar2 != (undefined *)0x0;
          puVar2 = *(undefined **)(puVar2 + 4)) {
        if (puVar2 == &DAT_00ba7a14) {
          bVar1 = 1;
          goto LAB_0047cb95;
        }
      }
      bVar1 = 0;
LAB_0047cb95:
      if ((-(uint)bVar1 & (uint)piVar6) != 0) {
        piVar5 = aiStack_30 + 3;
        piVar6 = (int *)((-(uint)bVar1 & (uint)piVar6) + 0x28);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
    }
    local_40 = *(float *)((int)local_3c + iVar3);
    iVar3 = iVar3 + 4;
    if (0xb < iVar3) {
      return;
    }
  } while( true );
}



void FUN_0047cbd0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  
  if (param_1 != (int *)0x0) {
    uVar2 = 0;
    if (*(ushort *)(in_ECX + 0x44) != 0) {
      do {
        if (*(int **)(*(int *)(in_ECX + 0x40) + (uint)uVar2 * 4) == param_1) {
          if (uVar2 != 0xffff) {
            *(undefined4 *)(*(int *)(in_ECX + 0x40) + (uint)uVar2 * 4) = 0;
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(in_ECX + 0x44));
    }
    for (puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3fab0) {
        bVar1 = 1;
        goto LAB_0047cc32;
      }
    }
    bVar1 = 0;
LAB_0047cc32:
    uVar4 = -(uint)bVar1 & (uint)param_1;
    if (uVar4 != 0) {
      uVar6 = 0;
      if (*(short *)(uVar4 + 0xb6) != 0) {
        if (*(short *)(uVar4 + 0xb6) != 0) goto LAB_0047cc55;
        uVar5 = 0;
        while( true ) {
          FUN_0047cbd0(uVar5);
          uVar6 = uVar6 + 1;
          if (*(ushort *)(uVar4 + 0xb6) <= uVar6) break;
LAB_0047cc55:
          uVar5 = *(undefined4 *)(*(int *)(uVar4 + 0xb0) + uVar6 * 4);
        }
      }
    }
  }
  return;
}



void FUN_0047cc80(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3cd7c) {
        bVar2 = 1;
        goto LAB_0047cca5;
      }
    }
    bVar2 = 0;
LAB_0047cca5:
    if ((-(uint)bVar2 & (uint)piVar1) != 0) {
      FUN_0047cbd0();
      return;
    }
    piVar1 = (int *)piVar1[0xd];
  } while( true );
}



void FUN_0047ccd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a372ec;
  FUN_0070b810();
  return;
}



void FUN_0047cce0(float param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  LONG LVar8;
  int *in_ECX;
  uint uVar9;
  undefined4 *puStack_4;
  
  if ((float)in_ECX[0x37] == 0.0) {
    fVar1 = (float)in_ECX[0x37];
  }
  else {
    fVar1 = param_1 - (float)in_ECX[0x37];
  }
  uVar9 = (uint)*(ushort *)((int)in_ECX + 0xb6);
  in_ECX[0x37] = (int)param_1;
  do {
    do {
      if (uVar9 == 0) {
        return;
      }
      uVar9 = uVar9 - 1;
    } while ((*(ushort *)((int)in_ECX + 0xb6) <= uVar9) ||
            (piVar2 = *(int **)(in_ECX[0x2c] + uVar9 * 4), piVar2 == (int *)0x0));
    for (puVar6 = (undefined *)(**(code **)(*piVar2 + 4))(); puVar6 != (undefined *)0x0;
        puVar6 = *(undefined **)(puVar6 + 4)) {
      if (puVar6 == &DAT_00b33e88) {
        bVar4 = 1;
        goto LAB_0047cd74;
      }
    }
    bVar4 = 0;
LAB_0047cd74:
    uVar7 = -(uint)bVar4 & (uint)piVar2;
    if (uVar7 != 0) {
      fVar3 = *(float *)(uVar7 + 0xdc) - fVar1;
      *(float *)(uVar7 + 0xdc) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)(uVar7 + 0xdc) = 0;
      }
      if ((((*(float *)(uVar7 + 0xdc) == 0.0) &&
           ((**(code **)(*in_ECX + 0x8c))(&puStack_4,uVar9), puVar5 = puStack_4,
           puStack_4 != (undefined4 *)0x0)) &&
          (LVar8 = InterlockedDecrement(puStack_4 + 1), LVar8 == 0)) &&
         (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
    }
  } while( true );
}



void FUN_0047cea0(void)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d0f0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  iVar2 = FUN_00401f00(0x80,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00401000();
    in_ECX[1] = uVar3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[1] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047cf30(int *param_1)

{
  (**(code **)(*param_1 + 4))(param_1,0);
  return;
}



void FUN_0047cf50(void)

{
  int in_ECX;
  
  FUN_00401020("Resume_Thread");
  if (*(char *)(in_ECX + 0x18) == '\0') {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),-1);
    *(undefined1 *)(in_ECX + 0x18) = 1;
    FUN_00401040();
    ResumeThread(*(HANDLE *)(in_ECX + 8));
    return;
  }
  FUN_00401040();
  return;
}



void FUN_0047cfa0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00747830(*(undefined4 *)(in_ECX + 0x10),param_1);
  return;
}



void FUN_0047cfd0(void)

{
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID in_ECX;
  
  if (*(int *)((int)in_ECX + 8) == 0) {
    pvVar1 = GetCurrentThread();
    *(HANDLE *)((int)in_ECX + 0xc) = pvVar1;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)((int)in_ECX + 0x14) = DVar2;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0047cf30,in_ECX,0,
                          (LPDWORD)((int)in_ECX + 0x10));
    *(HANDLE *)((int)in_ECX + 8) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      FUN_004a7a60("Could not create a thread for background loading.\r\n");
    }
    FUN_00401020("Resume_Thread");
    if (*(char *)((int)in_ECX + 0x18) != '\0') {
      FUN_00401040();
      return;
    }
    SetThreadPriority(*(HANDLE *)((int)in_ECX + 8),-1);
    *(undefined1 *)((int)in_ECX + 0x18) = 1;
    FUN_00401040();
    ResumeThread(*(HANDLE *)((int)in_ECX + 8));
  }
  return;
}



void FUN_0047d060(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined1 *)(in_ECX + 0x18) = 0;
    FUN_00401020("Exiting Thread");
    CloseHandle(*(HANDLE *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
    FUN_00401040();
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    FUN_00401010();
    FUN_00401f20(iVar1);
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



void FUN_0047d0b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d0f0;
  FUN_0047d060();
  return;
}



void FUN_0047d0c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d0f0;
  FUN_0047d060();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0047d0f0(void)

{
  char cVar1;
  DWORD DVar2;
  char *in_ECX;
  
  if ((*in_ECX != '\0') && (cVar1 = *in_ECX + -1, *in_ECX = cVar1, cVar1 == '\0')) {
    DVar2 = GetTickCount();
    *(DWORD *)(in_ECX + 0x10) = DVar2 - *(int *)(in_ECX + 0x10);
    *(DWORD *)(in_ECX + 0x14) = DVar2 - *(int *)(in_ECX + 0x14);
  }
  return;
}



void FUN_0047d120(void)

{
  char cVar1;
  DWORD DVar2;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  *in_ECX = cVar1 + '\x01';
  if (cVar1 == '\0') {
    DVar2 = GetTickCount();
    *(DWORD *)(in_ECX + 0x10) = DVar2 - *(int *)(in_ECX + 0x10);
    *(DWORD *)(in_ECX + 0x14) = DVar2 - *(int *)(in_ECX + 0x14);
  }
  return;
}



void FUN_0047d150(undefined4 param_1)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d170(int param_1)

{
  float fVar1;
  char *in_ECX;
  int iVar2;
  int local_8;
  
  fVar1 = 0.0;
  param_1 = param_1 - *(int *)(in_ECX + 0x14);
  _DAT_00b39db4 = DAT_00b39db0;
  DAT_00b39db0 = param_1;
  if (*in_ECX == '\0') {
    if (*(float *)(in_ECX + 4) == 0.0) {
      iVar2 = param_1 - *(int *)(in_ECX + 0x10);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        fVar1 = (float)iVar2;
        if (iVar2 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        if (166.66667 < fVar1) {
          iVar2 = 0xa6;
        }
      }
      fVar1 = (float)iVar2;
      if (iVar2 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
    }
    else {
      local_8 = (int)(longlong)ROUND(*(float *)(in_ECX + 8) + *(float *)(in_ECX + 4));
      fVar1 = (float)local_8;
      if (local_8 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      *(float *)(in_ECX + 8) = (*(float *)(in_ECX + 8) + *(float *)(in_ECX + 4)) - fVar1;
      fVar1 = *(float *)(in_ECX + 4);
      param_1 = *(int *)(in_ECX + 0x10) + local_8;
    }
    *(int *)(in_ECX + 0x10) = param_1;
    *(float *)(in_ECX + 0xc) = fVar1 * 0.001;
    fVar1 = *(float *)(in_ECX + 0xc) * _DAT_00b06704;
  }
  *(float *)(in_ECX + 0xc) = fVar1;
  return;
}



void FUN_0047d260(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_0047d270(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}



undefined2 FUN_0047d290(void)

{
  undefined2 *in_ECX;
  
  return *in_ECX;
}



undefined2 FUN_0047d2a0(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 2);
}



undefined2 FUN_0047d2b0(int param_1)

{
  if (0xb < param_1) {
    return 0;
  }
  return (&DAT_00b06710)[param_1];
}



ushort FUN_0047d2d0(ushort param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  
  if (0xc < param_2) {
    param_2 = 0xb;
  }
  uVar2 = (uint)param_2;
  if ((ushort)(&DAT_00b06710)[uVar2] <= param_1) {
    param_1 = (&DAT_00b06710)[uVar2] - 1;
  }
  iVar1 = 0;
  if (uVar2 != 0) {
    do {
      param_1 = param_1 + (&DAT_00b06710)[iVar1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return param_1;
}



void FUN_0047d330(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = 1;
  if ((ushort)DAT_00b067b8 < param_1) {
    param_1 = (ushort)DAT_00b067b8 - 1;
  }
  do {
    if (param_1 < *(ushort *)((uint)uVar1 * 2 + 0xb06728)) {
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  return;
}



void FUN_0047d390(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *in_ECX;
  
  uVar1 = FUN_0047d2d0(param_1,param_2);
  *in_ECX = uVar1;
  in_ECX[1] = param_3;
  return;
}



undefined4 FUN_0047d3c0(void)

{
  undefined2 *in_ECX;
  undefined4 extraout_EDX;
  
  FUN_0047d330(*in_ECX);
  return extraout_EDX;
}



void FUN_0047d3e0(void)

{
  undefined2 *in_ECX;
  
  FUN_0047d330(*in_ECX);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0047d400(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 *in_ECX;
  char extraout_DL;
  int *unaff_FS_OFFSET;
  undefined8 uVar5;
  int local_34 [2];
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_19;
  undefined1 local_17;
  undefined2 local_16;
  undefined1 local_14;
  undefined2 local_13;
  undefined1 local_11;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af479;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_34;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_28 = param_1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  uVar1 = *in_ECX;
  local_4 = 0;
  local_1c = 0x6874;
  local_1a = 0;
  local_17 = 0;
  local_16 = 0x646e;
  local_19 = 0x7473;
  local_2c = 1;
  local_14 = 0;
  local_13 = 0x6472;
  local_11 = 0;
  FUN_0047d330(uVar1,uVar3);
  if ((extraout_DL < '\x01') || ('\x03' < extraout_DL)) {
    local_34[0] = 0;
  }
  else {
    local_34[0] = (int)extraout_DL;
  }
  uVar2 = in_ECX[1];
  uVar5 = FUN_0047d330(uVar1,uVar3);
  local_20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((undefined4 *)(&PTR_DAT_00b06fa4)[(int)uVar5] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(&PTR_DAT_00b06fa4)[(int)uVar5];
  }
  FUN_00402e30(param_1,"%d%s of %s, 3E%d",(int)extraout_DL,(int)&local_1c + local_34[0] * 3,uVar4,
               uVar2);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 FUN_0047d550(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  if (((pcVar2 != param_1 + 1) &&
      (((cVar1 = *param_1, '/' < cVar1 && (cVar1 < ':')) || (cVar1 == '-')))) &&
     ((iVar3 != 1 || (cVar1 != '-')))) {
    iVar4 = 1;
    if (1 < iVar3) {
      do {
        if (9 < (byte)(param_1[iVar4] - 0x30U)) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_0047d5b0(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if ((pcVar3 == param_1 + 1) ||
     ((((cVar1 = *param_1, cVar1 < '0' || ('9' < cVar1)) && (cVar1 != '-')) && (cVar1 != '.')))) {
    return 0;
  }
  bVar2 = false;
  if (iVar4 == 1) {
    if (cVar1 == '-') {
      return 0;
    }
    if (cVar1 == '.') {
      return 0;
    }
  }
  else if (cVar1 == '.') {
    bVar2 = true;
  }
  iVar5 = 1;
  if (1 < iVar4) {
    do {
      cVar1 = param_1[iVar5];
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if (cVar1 != '.') {
          return 0;
        }
        if (bVar2) {
          return 0;
        }
LAB_0047d62d:
        bVar2 = true;
      }
      else if (cVar1 == '.') goto LAB_0047d62d;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return 1;
}



ushort FUN_0047d810(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = ABS(*param_1 - *param_2);
  uVar2 = (ushort)(param_3 < fVar1) << 8 | (ushort)(NAN(param_3) || NAN(fVar1)) << 10 |
          (ushort)(param_3 == fVar1) << 0xe;
  if (param_3 < fVar1 == (param_3 == fVar1)) {
    fVar1 = ABS(param_1[1] - param_2[1]);
    uVar2 = (ushort)(fVar1 < param_3) << 8 | (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
            (ushort)(fVar1 == param_3) << 0xe;
    if (fVar1 < param_3) {
      fVar1 = ABS(param_1[2] - param_2[2]);
      uVar2 = (ushort)(fVar1 < param_3) << 8 | (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
              (ushort)(fVar1 == param_3) << 0xe;
      if (fVar1 < param_3) {
        return CONCAT11((char)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2;
}



ushort FUN_0047d890(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = ABS(*param_1 - *param_2);
  uVar2 = (ushort)(param_3 < fVar1) << 8 | (ushort)(NAN(param_3) || NAN(fVar1)) << 10 |
          (ushort)(param_3 == fVar1) << 0xe;
  if (param_3 < fVar1 == (param_3 == fVar1)) {
    fVar1 = ABS(param_1[1] - param_2[1]);
    uVar2 = (ushort)(fVar1 < param_3) << 8 | (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
            (ushort)(fVar1 == param_3) << 0xe;
    if (fVar1 < param_3) {
      return CONCAT11((char)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}



undefined4 FUN_0047d8f0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  *param_2 = '\0';
  if (param_1[1] == ':') {
    param_1 = param_1 + 3;
  }
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  iVar2 = __strnicmp(param_1,"data\\",5);
  pcVar4 = param_1;
  if (iVar2 == 0) {
    param_1 = param_1 + 5;
    pcVar4 = param_1;
  }
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar6 = param_2 + -1;
  do {
    pcVar5 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar5 = pcVar4;
  for (uVar3 = (uint)((int)param_1 - (int)pcVar4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = (int)param_1 - (int)pcVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  __strlwr(param_2);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047d970(float param_1)

{
  float10 fVar1;
  
  if (param_1 <= -1.0) {
    return -(float10)_DAT_00b3f99c;
  }
  if (param_1 < 1.0) {
    fVar1 = (float10)FUN_00985870();
    return (float10)(float)fVar1;
  }
  return (float10)_DAT_00b3f99c;
}



void FUN_0047d9b0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  return;
}



float10 FUN_0047d9e0(float *param_1)

{
  float *in_ECX;
  
  return (float10)(param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]);
}



void FUN_0047da10(float *param_1,float param_2,float *param_3)

{
  *param_1 = param_2 * *param_3;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_2 * param_3[2];
  return;
}



float10 FUN_0047da40(void)

{
  float *in_ECX;
  
  return (float10)(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
}



undefined4 FUN_0047da70(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = (param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]) - param_1[3];
  if (fVar1 <= -in_ECX[3]) {
    return 2;
  }
  if (in_ECX[3] < fVar1 != (in_ECX[3] == fVar1)) {
    return 1;
  }
  return 0;
}



void FUN_0047dad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1,param_2,param_3);
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
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr,param_1,param_2);
  return;
}



undefined4 FUN_0047db90(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  *param_1 = puVar1[2];
  param_1[1] = puVar1[3];
  param_1[2] = puVar1[4];
  return 1;
}



void FUN_0047dbf0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_2 = piVar3[1];
  *param_3 = piVar3[2];
  param_3[1] = piVar3[3];
  param_3[2] = piVar3[4];
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



void FUN_0047dca0(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 5;
  do {
    FUN_00716db0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(in_ECX + 0x60) = 0x3f;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0047dcd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}



void FUN_0047dd50(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 * 0.14287673;
  in_ECX[1] = param_1[1] * 0.14287673;
  in_ECX[2] = param_1[2] * 0.14287673;
  in_ECX[3] = 0.0;
  return;
}



void FUN_0047dd90(byte param_1)

{
  FUN_0089d780();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0047ddc0(byte param_1)

{
  FUN_0089d870();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_0047dde0(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x02') {
    return *(int *)(param_1 + 0x10) + param_1;
  }
  return 0;
}



int FUN_0047de00(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    return *(int *)(param_1 + 0x10) + param_1;
  }
  return 0;
}



undefined4 FUN_0047de20(void)

{
  int in_ECX;
  
  if (in_ECX != 0) {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



float10 FUN_0047de30(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    fVar1 = (float10)FUN_0089da90();
    return (float10)(float)fVar1;
  }
  return (float10)0.0;
}



void FUN_0047de70(byte param_1)

{
  FUN_0089dff0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047de90(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7378;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a3d414;
  in_ECX[3] = 0;
  DAT_00ba7d00 = DAT_00ba7d00 + 1;
  *in_ECX = &PTR_FUN_00a3d49c;
  _DAT_00ba7d0c = _DAT_00ba7d0c + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3d524;
  FUN_0089e620(param_1);
  _DAT_00ba7d18 = _DAT_00ba7d18 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0047df20(byte param_1)

{
  FUN_0089e300();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



ushort FUN_0047df40(float param_1,float param_2,float param_3)

{
  if (param_3 < 0.0) {
    return (ushort)(param_3 < 0.0) << 8 | (ushort)NAN(param_3) << 10 |
           (ushort)(param_3 == 0.0) << 0xe;
  }
  if (param_1 <= param_2) {
    param_2 = param_2 - param_1;
  }
  else {
    param_2 = param_1 - param_2;
  }
  if (param_2 < param_3) {
    return 1;
  }
  return 0;
}



void FUN_0047df80(int param_1)

{
  __time64_t _Var1;
  
  if (param_1 != 0) {
    FUN_009859d0(param_1);
    DAT_00b069c3 = 0;
    _rand();
    return;
  }
  if (DAT_00b069c3 != '\0') {
    _Var1 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var1);
    DAT_00b069c3 = '\0';
  }
  _rand();
  return;
}



int FUN_0047dfd0(int param_1,int param_2)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (iVar1 * (param_2 - param_1)) / 0x7fff + param_1;
}



int FUN_0047e020(int param_1)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (iVar1 * param_1) / 0x7fff;
}



float10 FUN_0047e060(float param_1,float param_2)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (float10)(((float)iVar1 * (param_2 - param_1)) / 32767.0 + param_1);
}



float10 FUN_0047e0b0(float param_1)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (float10)(((float)iVar1 * param_1) / 32767.0);
}



float10 FUN_0047e0f0(void)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (float10)(((float)iVar1 * 1.0) / 32767.0 + 0.0);
}



float10 FUN_0047e140(void)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  return (float10)(((float)iVar1 + (float)iVar1) / 32767.0 - 1.0);
}



undefined2 FUN_0047e320(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_c;
  float local_8;
  float local_4;
  
  if (*param_1 < param_1[2]) {
    if (param_1[3] < param_1[1]) {
      local_c = (float)*param_1;
      if ((((((*param_2 < local_c) && (*param_3 < local_c)) ||
            ((fVar2 = (float)param_1[3], param_2[1] < fVar2 && (param_3[1] < fVar2)))) ||
           ((fVar6 = (float)param_1[2], fVar6 < *param_2 && (fVar6 < *param_3)))) ||
          ((fVar1 = (float)param_1[1], fVar1 < param_2[1] && (fVar1 < param_3[1])))) ||
         ((((local_c < *param_2 && (*param_2 < fVar6)) && (fVar2 < param_2[1])) &&
          (((param_2[1] < fVar1 && (local_c < *param_3)) &&
           ((*param_3 < fVar6 && ((fVar2 < param_3[1] && (param_3[1] < fVar1)))))))))) {
        return 0;
      }
      if ((*param_2 != *param_3) && (param_2[1] != param_3[1])) {
        uVar7 = 0;
        local_30 = 3.4028235e+38;
        local_2c = 3.4028235e+38;
        local_28 = 3.4028235e+38;
        local_24 = 3.4028235e+38;
        local_20 = 3.4028235e+38;
        local_1c = 3.4028235e+38;
        fVar4 = (param_3[1] - param_2[1]) / (*param_3 - *param_2);
        fVar5 = param_3[1] - fVar4 * *param_3;
        fVar3 = fVar5 + fVar4 * local_c;
        if ((fVar3 < fVar1 == (fVar3 == fVar1)) || (fVar2 < fVar3 == (fVar2 == fVar3))) {
          fVar8 = 3.4028235e+38;
        }
        else {
          uVar7 = 1;
          fVar8 = 0.0;
          local_28 = 0.0;
          local_30 = local_c;
          local_2c = fVar3;
        }
        fVar3 = (fVar1 - fVar5) / fVar4;
        if ((fVar3 < fVar6 != (fVar3 == fVar6)) && (local_c < fVar3 != (local_c == fVar3))) {
          if (uVar7 == 0) {
            fVar8 = 0.0;
            local_28 = 0.0;
            uVar7 = 1;
            local_30 = fVar3;
            local_2c = fVar1;
          }
          else {
            local_1c = 0.0;
            uVar7 = uVar7 + 1;
            local_24 = fVar3;
            local_20 = fVar1;
          }
        }
        if (uVar7 < 2) {
          fVar3 = fVar6 * fVar4 + fVar5;
          if ((fVar3 < fVar1 != (fVar3 == fVar1)) && (fVar2 < fVar3 != (fVar2 == fVar3))) {
            if (uVar7 == 0) {
              fVar8 = 0.0;
              local_28 = 0.0;
              uVar7 = 1;
              local_30 = fVar6;
              local_2c = fVar3;
            }
            else {
              local_1c = 0.0;
              uVar7 = uVar7 + 1;
              local_24 = fVar6;
              local_20 = fVar3;
            }
          }
          if (((uVar7 < 2) && (fVar4 = (fVar2 - fVar5) / fVar4, fVar4 < fVar6 != (fVar4 == fVar6)))
             && (local_c < fVar4 != (local_c == fVar4))) {
            if (uVar7 == 0) {
              fVar8 = 0.0;
              local_28 = 0.0;
              local_30 = fVar4;
              local_2c = fVar2;
            }
            else {
              local_1c = 0.0;
              local_24 = fVar4;
              local_20 = fVar2;
            }
            uVar7 = uVar7 + 1;
          }
        }
        if (uVar7 != 0) {
          if (uVar7 != 2) {
            *param_4 = local_30;
            param_4[1] = local_2c;
            param_4[2] = fVar8;
            return 1;
          }
          if (((*param_2 <= local_c) || (fVar6 <= *param_2)) ||
             ((param_2[1] <= fVar2 || (fVar1 <= param_2[1])))) {
            local_c = local_30 - *param_2;
            local_8 = local_2c - param_2[1];
            local_4 = local_28 - param_2[2];
            fVar9 = (float10)FUN_00404c90();
            fVar10 = (float10)FUN_00404c90();
            if (fVar10 <= (float10)(float)fVar9) {
              *param_4 = local_24;
              param_4[1] = local_20;
              param_4[2] = local_1c;
              return 1;
            }
          }
          else {
            FUN_004121a0(&local_c,param_2);
            local_4 = 0.0;
            FUN_0043f350();
            FUN_0043f350();
            fVar9 = (float10)FUN_00404c90();
            if (fVar9 <= (float10)1.0) {
              *param_4 = local_24;
              param_4[1] = local_20;
              param_4[2] = local_1c;
              return 1;
            }
          }
          *param_4 = local_30;
          param_4[1] = local_2c;
          param_4[2] = fVar8;
          return 1;
        }
        return 0;
      }
      if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
        if (((*param_2 < fVar6 != (*param_2 == fVar6)) && (local_c <= *param_2)) &&
           ((param_2[1] < fVar1 != (param_2[1] == fVar1) && (fVar2 <= param_2[1])))) {
          *param_4 = *param_2;
          param_4[1] = param_2[1];
          param_4[2] = param_2[2];
          return 1;
        }
      }
      else if (*param_2 == *param_3) {
        if ((*param_2 < fVar6 != (*param_2 == fVar6)) && (local_c <= *param_2)) {
          if (param_2[1] <= param_3[1]) {
            local_c = *param_2;
LAB_0047e97c:
            *param_4 = local_c;
            param_4[1] = fVar2;
            param_4[2] = 0.0;
            return 1;
          }
          local_c = *param_2;
LAB_0047e9f2:
          *param_4 = local_c;
          param_4[1] = fVar1;
          param_4[2] = 0.0;
          return 1;
        }
      }
      else if (((param_2[1] == param_3[1]) && (param_2[1] < fVar1 != (param_2[1] == fVar1))) &&
              (fVar2 <= param_2[1])) {
        if (*param_2 <= *param_3) {
          fVar2 = param_2[1];
          goto LAB_0047e97c;
        }
        fVar1 = param_2[1];
        local_c = fVar6;
        goto LAB_0047e9f2;
      }
      return 0;
    }
  }
  return 0;
}



void FUN_0047ea50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



undefined4 FUN_0047ea60(float param_1,float param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af4c6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  param_1 = param_1 * 0.5;
  param_2 = param_2 * 0.5;
  param_3 = param_3 * 0.5;
  pfVar4 = (float *)FUN_00401f00(0x60,uVar3);
  fVar1 = -param_1;
  *pfVar4 = fVar1;
  pfVar4[1] = param_2;
  pfVar4[2] = param_3;
  pfVar4[3] = param_1;
  pfVar4[4] = param_2;
  pfVar4[5] = param_3;
  pfVar4[6] = param_1;
  fVar2 = -param_2;
  pfVar4[7] = fVar2;
  pfVar4[8] = param_3;
  pfVar4[9] = fVar1;
  pfVar4[10] = fVar2;
  pfVar4[0xb] = param_3;
  pfVar4[0xc] = fVar1;
  pfVar4[0xd] = param_2;
  param_3 = -param_3;
  pfVar4[0xe] = param_3;
  pfVar4[0xf] = param_1;
  pfVar4[0x10] = param_2;
  pfVar4[0x11] = param_3;
  pfVar4[0x12] = param_1;
  pfVar4[0x13] = fVar2;
  pfVar4[0x14] = param_3;
  pfVar4[0x15] = fVar1;
  pfVar4[0x16] = fVar2;
  pfVar4[0x17] = param_3;
  puVar5 = (undefined4 *)FUN_00401f00(0x80);
  local_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar5,0x10,8,FUN_0047ea50);
  }
  *puVar5 = *param_4;
  puVar5[1] = param_4[1];
  puVar5[2] = param_4[2];
  puVar5[3] = param_4[3];
  puVar5[4] = *param_4;
  puVar5[5] = param_4[1];
  puVar5[6] = param_4[2];
  puVar5[7] = param_4[3];
  puVar5[8] = *param_4;
  puVar5[9] = param_4[1];
  puVar5[10] = param_4[2];
  puVar5[0xb] = param_4[3];
  puVar5[0xc] = *param_4;
  puVar5[0xd] = param_4[1];
  puVar5[0xe] = param_4[2];
  puVar5[0xf] = param_4[3];
  puVar5[0x10] = *param_4;
  puVar5[0x11] = param_4[1];
  puVar5[0x12] = param_4[2];
  puVar5[0x13] = param_4[3];
  puVar5[0x14] = *param_4;
  puVar5[0x15] = param_4[1];
  puVar5[0x16] = param_4[2];
  puVar5[0x17] = param_4[3];
  puVar5[0x18] = *param_4;
  puVar5[0x19] = param_4[1];
  puVar5[0x1a] = param_4[2];
  puVar5[0x1b] = param_4[3];
  puVar5[0x1c] = *param_4;
  puVar5[0x1d] = param_4[1];
  puVar5[0x1e] = param_4[2];
  local_4 = 0xffffffff;
  puVar5[0x1f] = param_4[3];
  puVar6 = (undefined2 *)FUN_00401f00(0x90,uVar3);
  *puVar6 = 0;
  puVar6[1] = 2;
  puVar6[2] = 1;
  puVar6[3] = 0;
  puVar6[4] = 3;
  puVar6[5] = 2;
  puVar6[6] = 0;
  puVar6[7] = 7;
  puVar6[8] = 3;
  puVar6[0xc] = 1;
  puVar6[0xf] = 1;
  puVar6[0x12] = 2;
  puVar6[0x14] = 1;
  puVar6[0x15] = 2;
  puVar6[0x1a] = 2;
  puVar6[0x26] = 2;
  puVar6[0x28] = 2;
  puVar6[0x36] = 2;
  puVar6[0x39] = 2;
  puVar6[0x3d] = 2;
  puVar6[9] = 0;
  puVar6[10] = 4;
  puVar6[0xb] = 7;
  puVar6[0xd] = 4;
  puVar6[0xe] = 0;
  puVar6[0x10] = 5;
  puVar6[0x11] = 4;
  puVar6[0x13] = 5;
  puVar6[0x16] = 6;
  puVar6[0x17] = 5;
  puVar6[0x18] = 3;
  puVar6[0x19] = 6;
  puVar6[0x1b] = 3;
  puVar6[0x1c] = 7;
  puVar6[0x1d] = 6;
  puVar6[0x1e] = 4;
  puVar6[0x1f] = 7;
  puVar6[0x20] = 6;
  puVar6[0x21] = 4;
  puVar6[0x22] = 6;
  puVar6[0x23] = 5;
  puVar6[0x24] = 0;
  puVar6[0x25] = 1;
  puVar6[0x27] = 0;
  puVar6[0x29] = 3;
  puVar6[0x2a] = 0;
  puVar6[0x2b] = 3;
  puVar6[0x2c] = 7;
  puVar6[0x2d] = 0;
  puVar6[0x2e] = 7;
  puVar6[0x2f] = 4;
  puVar6[0x30] = 1;
  puVar6[0x31] = 0;
  puVar6[0x32] = 4;
  puVar6[0x33] = 1;
  puVar6[0x34] = 4;
  puVar6[0x35] = 5;
  puVar6[0x37] = 1;
  puVar6[0x38] = 5;
  puVar6[0x3a] = 5;
  puVar6[0x3b] = 6;
  puVar6[0x3c] = 3;
  puVar6[0x3e] = 6;
  puVar6[0x3f] = 3;
  puVar6[0x40] = 6;
  puVar6[0x41] = 7;
  puVar6[0x42] = 4;
  puVar6[0x43] = 6;
  puVar6[0x44] = 7;
  puVar6[0x45] = 4;
  puVar6[0x46] = 5;
  puVar6[0x47] = 6;
  iVar7 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar7 != 0) {
    uVar8 = FUN_007174b0(8,pfVar4,0,puVar5,0,0,0,0x18,puVar6);
    *unaff_FS_OFFSET = local_c;
    return uVar8;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4
FUN_0047eef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 *param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af506;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar2[4] = param_5;
  puVar2[5] = param_6;
  puVar2[6] = param_7;
  puVar2[7] = param_8;
  puVar2[8] = param_9;
  puVar3 = (undefined4 *)FUN_00401f00(0x30);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar3,0x10,3,FUN_0047ea50);
  }
  *puVar3 = *param_10;
  puVar3[1] = param_10[1];
  puVar3[2] = param_10[2];
  puVar3[3] = param_10[3];
  puVar3[4] = *param_10;
  puVar3[5] = param_10[1];
  puVar3[6] = param_10[2];
  puVar3[7] = param_10[3];
  puVar3[8] = *param_10;
  puVar3[9] = param_10[1];
  puVar3[10] = param_10[2];
  local_4 = 0xffffffff;
  puVar3[0xb] = param_10[3];
  puVar4 = (undefined2 *)FUN_00401f00(0xc,uVar1);
  *puVar4 = 0;
  puVar4[1] = 2;
  puVar4[2] = 1;
  puVar4[3] = 0;
  puVar4[4] = 1;
  puVar4[5] = 2;
  iVar5 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar5 != 0) {
    uVar6 = FUN_007174b0(3,puVar2,0,puVar3,0,0,0,2,puVar4);
    *unaff_FS_OFFSET = local_c;
    return uVar6;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4
FUN_0047f070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = *param_3;
  puVar2[4] = param_3[1];
  puVar2[5] = param_3[2];
  puVar3 = (undefined4 *)FUN_00401f00(0x20);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar3,0x10,2,FUN_0047ea50);
  }
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = *param_4;
  puVar3[5] = param_4[1];
  puVar3[6] = param_4[2];
  local_4 = 0xffffffff;
  puVar3[7] = param_4[3];
  puVar4 = (undefined1 *)FUN_00401f00(2,uVar1);
  *puVar4 = 1;
  puVar4[1] = 0;
  iVar5 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar5 != 0) {
    uVar6 = FUN_007177e0(2,puVar2,puVar3,0,0,0,puVar4);
    *unaff_FS_OFFSET = local_c;
    return uVar6;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_0047f1a0(float param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af546;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  pfVar3 = (float *)FUN_00401f00(0x30,uVar2);
  puVar4 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar4,0x10,4,FUN_0047ea50);
  }
  local_4 = 0xffffffff;
  iVar5 = FUN_00401f00(4,uVar2);
  fVar1 = -param_1;
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = 0.0;
  pfVar3[3] = fVar1;
  pfVar3[4] = param_1;
  pfVar3[5] = 0.0;
  pfVar3[6] = param_1;
  pfVar3[7] = param_1;
  pfVar3[8] = 0.0;
  pfVar3[9] = param_1;
  pfVar3[10] = fVar1;
  pfVar3[0xb] = 0.0;
  iVar8 = 0;
  puVar6 = puVar4;
  do {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    *(undefined1 *)(iVar8 + iVar5) = 1;
    iVar8 = iVar8 + 1;
    puVar6 = puVar6 + 4;
  } while (iVar8 < 4);
  iVar8 = FUN_00401f00(0xc0,uVar2);
  local_4 = 1;
  if (iVar8 != 0) {
    uVar7 = FUN_007177e0(4,pfVar3,puVar4,0,0,0,iVar5);
    *unaff_FS_OFFSET = local_c;
    return uVar7;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_0047f340(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  void *_Dst;
  int *unaff_FS_OFFSET;
  int *piVar10;
  int *piVar11;
  void *_Src;
  undefined4 **ppuVar12;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  int *piStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  uint uStack_9c;
  undefined4 local_80;
  undefined1 auStack_7c [40];
  undefined4 uStack_54;
  char cStack_44;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af57b;
  local_c = *unaff_FS_OFFSET;
  uStack_9c = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  local_80 = 0;
  puStack_a0 = &DAT_00b25e00;
  if (param_3 == '\0') {
    puStack_a0 = &DAT_00b25e48;
  }
  iStack_a4 = 0x47f392;
  FUN_0070f010();
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar3 = *(int **)(param_1 + 0x24);
    piVar10 = *(int **)(param_2 + 0x280);
    puStack_a0 = (undefined4 *)0x47f3c2;
    iVar1 = (**(code **)(*piVar3 + 4))();
    puStack_a0 = (undefined4 *)0x47f3cd;
    piVar2 = (int *)(**(code **)(*piVar3 + 8))();
    if ((piVar10 != (int *)0x0) && ((iVar1 != 0 && (piVar2 != (int *)0x0)))) {
      puStack_a0 = (undefined4 *)0x47f3f0;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))();
      puStack_a0 = (undefined4 *)0x47f3f9;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
      puStack_a0 = &local_80;
      iStack_a4 = 0;
      puStack_ac = (undefined1 *)0x47f40a;
      piStack_a8 = piVar3;
      (**(code **)(*piVar3 + 0x48))();
      puStack_ac = auStack_7c;
      uStack_b0 = 0;
      uStack_b8 = 0x47f419;
      piStack_b4 = piVar3;
      (**(code **)(*piVar3 + 0x44))();
      uStack_b8 = 0;
      ppuVar12 = &puStack_a0;
      _Src = (void *)0x0;
      piVar11 = piVar2;
      (**(code **)(*piVar10 + 0x90))(piVar10,iVar1,piVar2,0,2,ppuVar12);
      piVar3 = piStack_b4;
      (**(code **)(*piVar10 + 0x80))(piVar10,piStack_b4,ppuVar12);
      (**(code **)(*piVar11 + 0x34))(piVar11,&uStack_b8,0,0);
      iVar4 = FUN_00401f00(0x70);
      uStack_54 = 0;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0070e560(iVar1,piVar2,&puStack_a0,1,1);
      }
      _Dst = (void *)(**(int **)(iVar1 + 0x5c) + *(int *)(iVar1 + 0x50));
      uStack_54 = 0xffffffff;
      uVar5 = (int)((int)piVar11 + ((int)piVar11 >> 0x1f & 3U)) >> 2 & 0xffff;
      if (cStack_44 == '\0') {
        for (; piVar2 != (int *)0x0; piVar2 = (int *)((int)piVar2 + -1)) {
          if (uVar5 != 0) {
            puVar8 = (undefined1 *)((int)_Dst + 2);
            puVar6 = (undefined1 *)((int)_Src + 2);
            uVar9 = uVar5;
            do {
              puVar8[-2] = puVar6[-2];
              puVar8[-1] = puVar6[-1];
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 4;
              puVar8 = puVar8 + 3;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          _Dst = (void *)((int)_Dst + uVar5 * 3);
          _Src = (void *)((int)_Src + uVar5 * 4);
        }
      }
      else {
        _memcpy(_Dst,_Src,uVar5 * (int)piVar2 * 4);
      }
      (**(code **)(*piVar3 + 0x38))(piVar3);
      (**(code **)(*piVar10 + 8))(piVar10);
      (**(code **)(*piVar3 + 8))(piVar3);
      puStack_a0 = (undefined4 *)&DAT_00b256d0;
      piStack_a8 = (int *)0x47f566;
      iStack_a4 = iVar1;
      uVar7 = FUN_00701fc0();
      DAT_00b256cd = 0;
      goto LAB_0047f574;
    }
  }
  uVar7 = 0;
LAB_0047f574:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_0047f590(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar6 = 1;
    if (1 < uVar2) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x54) + uVar6 * 4);
        local_8 = *(int *)(*(int *)(param_1 + 0x58) + uVar6 * 4);
        iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + uVar6 * 4) + *(int *)(param_1 + 0x50);
        if (local_8 != 0) {
          local_c = 0;
          iVar4 = iVar3;
          iVar1 = local_c;
joined_r0x0047f5eb:
          do {
            if (iVar4 == 0) goto LAB_0047f627;
            switch(uVar6) {
            case 1:
              goto switchD_0047f5f7_caseD_1;
            case 2:
              *(undefined1 *)(iVar1 + 1 + iVar5) = 0xff;
              break;
            case 3:
              goto switchD_0047f5f7_caseD_3;
            case 4:
              *(undefined1 *)(iVar1 + 1 + iVar5) = 0xff;
              goto switchD_0047f5f7_caseD_1;
            case 5:
              *(undefined1 *)(iVar1 + 1 + iVar5) = 0xff;
switchD_0047f5f7_caseD_3:
              *(undefined1 *)(iVar1 + 2 + iVar5) = 0xff;
              break;
            case 6:
              *(undefined1 *)(iVar1 + 2 + iVar5) = 0xff;
switchD_0047f5f7_caseD_1:
              *(undefined1 *)(iVar1 + iVar5) = 0xff;
            }
            iVar4 = iVar4 + -1;
            iVar1 = iVar1 + 4;
          } while( true );
        }
LAB_0047f63d:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  return;
LAB_0047f627:
  iVar1 = local_c + iVar3 * 4;
  local_8 = local_8 + -1;
  iVar4 = iVar3;
  local_c = iVar1;
  if (local_8 == 0) goto LAB_0047f63d;
  goto joined_r0x0047f5eb;
}



undefined4 FUN_0047f6f0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < param_2 * param_2) {
    return 0xffffffff;
  }
  if (param_2 * param_2 < fVar1) {
    return 1;
  }
  return 0;
}



int FUN_0047f750(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_00700010(&DAT_00b3cd7c);
    if (iVar2 != 0) {
      uVar1 = FUN_0047c710(param_2);
      if (uVar1 != 0xffff) {
        return (int)*(char *)((uint)uVar1 * 0x30 + 0x10 + *(int *)(iVar2 + 0x3c));
      }
    }
    return 0;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047f7b0(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af5ae;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((_DAT_00b343fc & 1) == 0) {
      _DAT_00b343fc = _DAT_00b343fc | 1;
      local_4 = 0;
      FUN_0047dca0(uVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_00b069c4 != DAT_00b33ea0) {
      FUN_00718200(param_2);
      DAT_00b069c4 = DAT_00b33ea0;
    }
    local_1c = *(undefined4 *)(param_1 + 0x20);
    local_18 = *(undefined4 *)(param_1 + 0x24);
    local_14 = *(undefined4 *)(param_1 + 0x28);
    local_10 = *(undefined4 *)(param_1 + 0x2c);
    puVar3 = &DAT_00b34398;
    uVar1 = 0;
    while( true ) {
      local_28 = puVar3[1];
      local_2c = *puVar3;
      local_24 = puVar3[2];
      local_20 = puVar3[3];
      puVar2 = (undefined1 *)FUN_0047da70(&local_2c);
      if (puVar2 == &DAT_00000002) break;
      uVar1 = uVar1 + 0x10;
      puVar3 = puVar3 + 4;
      if (0x5f < uVar1) {
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0047f8d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d36c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0047f8f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d36c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0047f920(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a3d604;
  *(undefined2 *)(in_ECX + 6) = 0xec;
  *(undefined1 *)((int)in_ECX + 0x1a) = 0;
  return;
}



void FUN_0047f950(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[1];
  uVar2 = in_ECX[2];
  uVar3 = in_ECX[3];
  *param_1 = *in_ECX;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



int * FUN_0047f990(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar1 = *(int **)(in_ECX + 0x44);
    piVar4 = piVar1;
    do {
      if (*piVar4 == param_2) {
        iVar2 = piVar1[iVar3 * 4 + 2];
        param_1[1] = piVar1[iVar3 * 4 + 3];
        *param_1 = iVar2;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < *(int *)(in_ECX + 0x48));
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



void FUN_0047f9f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0x3f000000;
  in_ECX[0xd] = 0x3e99999a;
  in_ECX[0xe] = 0x437a0000;
  in_ECX[0xf] = 0x3f733333;
  return;
}



int * FUN_0047fa60(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 local_8 [8];
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_0047f990(local_8,&DAT_00ba7b80);
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        if (puVar2 == &DAT_00ba7d24) break;
        puVar2 = (undefined4 *)puVar2[1];
      }
      return piVar1;
    }
  }
  return (int *)0x0;
}



int * FUN_0047fac0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    if (puVar2 == &DAT_00ba7d24) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return piVar1;
}



int * FUN_0047fb10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 local_8 [8];
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_0047f990(local_8,&DAT_00ba7b80);
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        if (puVar2 == &DAT_00ba7d2c) break;
        puVar2 = (undefined4 *)puVar2[1];
      }
      return piVar1;
    }
  }
  return (int *)0x0;
}



undefined4 FUN_0047fb70(float param_1)

{
  int iVar1;
  __time64_t _Var2;
  
  if (DAT_00b069c3 != '\0') {
    _Var2 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var2);
    DAT_00b069c3 = '\0';
  }
  iVar1 = _rand();
  if (((float)iVar1 * 1.0) / 32767.0 + 0.0 <= param_1) {
    return 1;
  }
  return 0;
}



undefined1
FUN_0047fbd0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int *param_5)

{
  ushort uVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 local_1d;
  
  uVar4 = 0;
  local_1d = 0;
  if (((param_1 != 0) && (param_5 != (int *)0x0)) &&
     ((*(char *)(param_1 + 0x11) == '\0' || ((*(byte *)(param_5 + 6) & 1) == 0)))) {
    fVar2 = (float)param_5[0xb];
    fVar8 = (float10)FUN_00982c30();
    if (fVar2 + param_4 <= (float)fVar8) {
      return 0;
    }
    iVar5 = (**(code **)(*param_5 + 8))();
    uVar4 = local_1d;
    if (iVar5 == 0) {
      FUN_00441920(param_5);
      cVar3 = FUN_00959d60(param_2,param_3,1);
      if (cVar3 != '\0') {
        return 1;
      }
    }
    else {
      uVar1 = *(ushort *)(iVar5 + 0xb6);
      uVar7 = 0;
      if (uVar1 != 0) {
        do {
          if (uVar7 < *(ushort *)(iVar5 + 0xb6)) {
            uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0xb0) + uVar7 * 4);
          }
          else {
            uVar6 = 0;
          }
          cVar3 = FUN_0047fbd0(param_1,param_2,param_3,param_4,uVar6);
          if (cVar3 != '\0') {
            local_1d = 1;
          }
          uVar7 = uVar7 + 1;
          uVar4 = local_1d;
        } while ((int)uVar7 < (int)(uint)uVar1);
      }
    }
  }
  return uVar4;
}



undefined4 FUN_0047fd30(float param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af4c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x48,uVar2);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_1 * 1.4142135;
  fVar1 = -param_1;
  puVar3[3] = fVar1;
  puVar3[4] = param_1;
  puVar3[5] = 0;
  puVar3[6] = param_1;
  puVar3[7] = param_1;
  puVar3[8] = 0;
  puVar3[9] = param_1;
  puVar3[10] = fVar1;
  puVar3[0xb] = 0;
  puVar3[0xc] = fVar1;
  puVar3[0xd] = fVar1;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = fVar1 * 1.4142135;
  puVar4 = (undefined4 *)FUN_00401f00(0x60);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar4,0x10,6,FUN_0047ea50);
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[4] = *param_2;
  puVar4[5] = param_2[1];
  puVar4[6] = param_2[2];
  puVar4[7] = param_2[3];
  puVar4[8] = *param_2;
  puVar4[9] = param_2[1];
  puVar4[10] = param_2[2];
  puVar4[0xb] = param_2[3];
  puVar4[0xc] = *param_2;
  puVar4[0xd] = param_2[1];
  puVar4[0xe] = param_2[2];
  puVar4[0xf] = param_2[3];
  puVar4[0x10] = *param_2;
  puVar4[0x11] = param_2[1];
  puVar4[0x12] = param_2[2];
  puVar4[0x13] = param_2[3];
  puVar4[0x14] = *param_2;
  puVar4[0x15] = param_2[1];
  puVar4[0x16] = param_2[2];
  local_4 = 0xffffffff;
  puVar4[0x17] = param_2[3];
  puVar5 = (undefined2 *)FUN_00401f00(0x30,uVar2);
  puVar5[1] = 2;
  puVar5[3] = 0;
  puVar5[5] = 2;
  puVar5[6] = 0;
  puVar5[0xd] = 2;
  *puVar5 = 0;
  puVar5[2] = 1;
  puVar5[4] = 3;
  puVar5[7] = 4;
  puVar5[8] = 3;
  puVar5[9] = 0;
  puVar5[10] = 1;
  puVar5[0xb] = 4;
  puVar5[0xc] = 1;
  puVar5[0xe] = 5;
  puVar5[0xf] = 2;
  puVar5[0x10] = 3;
  puVar5[0x11] = 5;
  puVar5[0x12] = 3;
  puVar5[0x13] = 4;
  puVar5[0x14] = 5;
  puVar5[0x15] = 4;
  puVar5[0x16] = 1;
  puVar5[0x17] = 5;
  iVar6 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar6 != 0) {
    uVar7 = FUN_007174b0(6,puVar3,0,puVar4,0,0,0,8,puVar5);
    *unaff_FS_OFFSET = local_c;
    return uVar7;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}


