
void FUN_00520030(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7d1d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a53654;
  in_ECX[6] = &PTR_FUN_00a53640;
  in_ECX[9] = &PTR_FUN_00a53620;
  in_ECX[0xf] = &PTR_FUN_00a53604;
  local_4 = 3;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005200f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7d69;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_00a53654;
  in_ECX[6] = &PTR_FUN_00a53640;
  in_ECX[9] = &PTR_FUN_00a53620;
  in_ECX[0xf] = &PTR_FUN_00a53604;
  *(undefined1 *)(in_ECX + 1) = 7;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005201a0(byte param_1)

{
  FUN_00520030();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005201c0(byte param_1)

{
  FUN_0046d850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005201e0(void)

{
  int in_ECX;
  
  thunk_FUN_0046b090();
  *(undefined1 *)(in_ECX + 0x38) = 4;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}



byte FUN_00520200(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x38) & 0x7f;
}



byte FUN_00520210(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x38) >> 7;
}



undefined4 FUN_00520220(void)

{
  char *pcVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0x2e;
  pcVar1 = (char *)(**(code **)(*(int *)(in_ECX + 0x18) + 0x14))();
  pcVar1 = _strrchr(pcVar1,iVar2);
  if ((pcVar1 != (char *)0x0) && (iVar2 = __stricmp(pcVar1,(char *)&PTR_DAT_00a3cb20), iVar2 == 0))
  {
    return 1;
  }
  return 0;
}



void FUN_00520260(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    uVar5 = 0;
    ppuVar4 = &PTR_PTR_00b06514;
    ppuVar3 = &PTR_PTR_00b02f9c;
    uVar2 = 0;
    uVar1 = FUN_00494ed0(param_1);
    FUN_009832e6(uVar1,uVar2,ppuVar3,ppuVar4,uVar5);
  }
  return;
}



void FUN_00520290(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7dae;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  in_ECX[6] = &PTR_FUN_00a53734;
  local_4._0_1_ = 1;
  *in_ECX = &PTR_FUN_00a53774;
  in_ECX[6] = &PTR_FUN_00a53754;
  FUN_00434920();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x3c;
  in_ECX[0xf] = 0;
  thunk_FUN_0046b090();
  *(undefined1 *)(in_ECX + 0xe) = 4;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005203e0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0046b990();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0056a450();
  FUN_0046ae40(0x4d414e41,in_ECX + 0x38,1);
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    local_8 = *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0xc);
  }
  if ((*(uint *)(in_ECX + 8) >> 5 & 1) == 0) {
    for (iVar1 = *(int *)(in_ECX + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x44)) {
      if ((*(uint *)(iVar1 + 8) >> 5 & 1) == 0) {
        local_4 = *(undefined4 *)(iVar1 + 0xc);
        break;
      }
    }
  }
  FUN_0046ae40(0x41544144,&local_8,8);
  FUN_0046b9f0();
  return;
}



void FUN_00520490(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0056a480(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



undefined4 FUN_005204c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0xc);
  }
  return uVar1;
}



void FUN_005204f0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    uVar8 = 0;
    ppuVar7 = &PTR_PTR_00b06514;
    ppuVar6 = &PTR_PTR_00b02f9c;
    uVar5 = 0;
    uVar2 = FUN_00494ed0(param_1 + 1);
    iVar3 = FUN_009832e6(uVar2,uVar5,ppuVar6,ppuVar7,uVar8);
    uVar2 = 0;
    if (*(int *)(in_ECX + 0x3c) != 0) {
      uVar8 = 0;
      ppuVar7 = &PTR_PTR_00b06514;
      ppuVar6 = &PTR_PTR_00b02f9c;
      uVar5 = 0;
      uVar2 = FUN_00494ed0(param_1 - 1);
      uVar2 = FUN_009832e6(uVar2,uVar5,ppuVar6,ppuVar7,uVar8);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x44) = uVar2;
    }
    iVar3 = *(int *)(in_ECX + 0x3c);
    if (param_1 < *(uint *)(iVar3 + 0xc)) {
      iVar1 = *(int *)(*(int *)(iVar3 + 4) + param_1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + 4) + param_1 * 4) = 0;
      if (iVar1 != 0) {
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
      }
      uVar4 = *(int *)(iVar3 + 0xc) - 1;
      if (param_1 == uVar4) {
        *(uint *)(iVar3 + 0xc) = uVar4;
      }
    }
    FUN_005a56f0();
  }
  return;
}



undefined4 FUN_00520590(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 != in_ECX) {
    uVar5 = 0;
    if (*(int *)(in_ECX + 0x3c) != 0) {
      uVar5 = *(uint *)(*(int *)(in_ECX + 0x3c) + 0xc);
    }
    uVar4 = 0;
    if (uVar5 == 0) {
      return 0;
    }
    do {
      if (*(int *)(in_ECX + 0x3c) != 0) {
        uVar9 = 0;
        ppuVar8 = &PTR_PTR_00b06514;
        ppuVar7 = &PTR_PTR_00b02f9c;
        uVar6 = 0;
        uVar2 = FUN_00494ed0(uVar4);
        iVar3 = FUN_009832e6(uVar2,uVar6,ppuVar7,ppuVar8,uVar9);
        if ((iVar3 != 0) && (cVar1 = FUN_00520590(param_1), cVar1 != '\0')) {
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
      if (uVar5 <= uVar4) {
        return 0;
      }
    } while( true );
  }
  return 1;
}



void FUN_00520620(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  thunk_FUN_0046b170();
  FUN_0056a750();
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    if (*(int *)(in_ECX + 0x40) == 0) {
      iVar2 = FUN_00521730(in_ECX);
      if ((iVar2 != 0) && (iVar2 = FUN_00494e90(in_ECX), iVar2 != -1)) {
        iVar3 = FUN_00494ed0(iVar2 + 1);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
        }
        FUN_005304c0(iVar2);
        FUN_005a56f0();
        return;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 0x40) + 0x3c) != 0) {
      uVar1 = FUN_00494e90(in_ECX);
      FUN_005204f0(uVar1);
      return;
    }
  }
  return;
}



int FUN_005206b0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  
  iVar5 = 0;
  if ((*(uint *)(in_ECX + 8) >> 5 & 1) != 0) {
    return 0;
  }
  cVar2 = FUN_0056a950(param_1,param_2);
  if (cVar2 != '\0') {
    if (((*(byte *)(in_ECX + 0x38) & 0x80) != 0) ||
       (cVar2 = FUN_00520220(), iVar5 = 0, cVar2 != '\0')) {
      iVar5 = in_ECX;
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      uVar1 = *(uint *)(*(int *)(in_ECX + 0x3c) + 0xc);
      if (uVar1 == 0) {
        return iVar5;
      }
      uVar6 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(in_ECX + 0x3c) != 0) {
            uVar10 = 0;
            ppuVar9 = &PTR_PTR_00b06514;
            ppuVar8 = &PTR_PTR_00b02f9c;
            uVar7 = 0;
            uVar3 = FUN_00494ed0(uVar6);
            iVar4 = FUN_009832e6(uVar3,uVar7,ppuVar8,ppuVar9,uVar10);
            if ((iVar4 != 0) && (iVar4 = FUN_005206b0(param_1,param_2), iVar4 != 0)) {
              return iVar4;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      return iVar5;
    }
  }
  return iVar5;
}



void FUN_00520780(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != 0) {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[2] = 0;
        puVar2[5] = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = &PTR__scalar_deleting_destructor__00a53854;
      }
      *(undefined4 **)(in_ECX + 0x3c) = puVar2;
    }
    local_4 = 0xffffffff;
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x3c) + 0xc);
    if (uVar1 < param_1) {
      param_1 = uVar1;
    }
    *(int *)(param_2 + 0x40) = in_ECX;
    if (param_1 == 0) {
      *(undefined4 *)(param_2 + 0x44) = 0;
    }
    else {
      uVar3 = 0;
      if (*(int *)(in_ECX + 0x3c) != 0) {
        uVar8 = 0;
        ppuVar7 = &PTR_PTR_00b06514;
        ppuVar6 = &PTR_PTR_00b02f9c;
        uVar5 = 0;
        uVar3 = FUN_00494ed0(param_1 - 1);
        uVar3 = FUN_009832e6(uVar3,uVar5,ppuVar6,ppuVar7,uVar8);
      }
      *(undefined4 *)(param_2 + 0x44) = uVar3;
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      uVar8 = 0;
      ppuVar7 = &PTR_PTR_00b06514;
      ppuVar6 = &PTR_PTR_00b02f9c;
      uVar5 = 0;
      uVar3 = FUN_00494ed0(param_1);
      iVar4 = FUN_009832e6(uVar3,uVar5,ppuVar6,ppuVar7,uVar8);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x44) = param_2;
      }
    }
    FUN_0052f3c0(param_1,param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00520880(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b7e0a;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a53774;
  in_ECX[6] = &PTR_FUN_00a53754;
  local_4 = 2;
  FUN_00520620(uVar1);
  if (in_ECX[0xf] != 0) {
    uVar1 = *(uint *)(in_ECX[0xf] + 0xc);
    if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
      do {
        piVar2 = (int *)0x0;
        if (in_ECX[0xf] != 0) {
          uVar8 = 0;
          ppuVar7 = &PTR_PTR_00b06514;
          ppuVar6 = &PTR_PTR_00b02f9c;
          uVar5 = 0;
          uVar3 = FUN_00494ed0(uVar4);
          piVar2 = (int *)FUN_009832e6(uVar3,uVar5,ppuVar6,ppuVar7,uVar8);
        }
        piVar2[0x10] = 0;
        (**(code **)(*piVar2 + 0x10))(1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    if ((undefined4 *)in_ECX[0xf] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0xf])(1);
    }
  }
  local_4._0_1_ = 1;
  thunk_FUN_0056a750();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00520970(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  int local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b7e40;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar3 = FUN_004511c0(local_14);
  if (iVar3 == 0x3c) {
    FUN_00451210(in_ECX);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      iVar5 = 0;
      if (iVar3 < 0x4c444f4e) {
        if (iVar3 == 0x4c444f4d) {
LAB_00520cb5:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 6,param_1);
          }
        }
        else if (iVar3 < 0x42444f4e) {
          if (iVar3 == 0x42444f4d) goto LAB_00520cb5;
          if (iVar3 == 0x41445443) goto LAB_00520ca7;
          if (iVar3 == 0x41544144) {
            local_1c = 0;
            local_18 = 0;
            FUN_00450c20(&local_1c,8);
            iVar3 = 0;
            if (local_1c != 0) {
              uVar4 = FUN_0046b680(0xffffffff);
              FUN_0046bb20(&local_1c,uVar4);
              uVar4 = FUN_0046b250(local_1c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06514,0);
              iVar3 = FUN_009832e6(uVar4);
              if (iVar3 == 0) {
                local_28 = 0;
                local_24 = 0;
                local_22 = 0;
                local_8 = 0;
                (**(code **)(*in_ECX + 0x74))(&local_28);
                FUN_004a7a60("Could not find parent idle (%08X) for %s.",local_1c,local_28);
                local_8 = 0xffffffff;
                FUN_00402da0();
              }
            }
            in_ECX[0x10] = iVar3;
            if (local_18 != 0) {
              uVar4 = FUN_0046b680(0xffffffff);
              FUN_0046bb20(&local_18,uVar4);
              uVar4 = FUN_0046b250(local_18,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06514,0);
              iVar5 = FUN_009832e6(uVar4);
              if (iVar5 == 0) {
                local_2c = 0;
                local_2a = 0;
                local_8 = 1;
                local_30 = iVar5;
                (**(code **)(*in_ECX + 0x74))(&local_30);
                FUN_004a7a60("Could not find previous idle (%08X) for %s.",local_18,local_30);
                local_8 = 0xffffffff;
                FUN_00402da0();
              }
            }
            in_ECX[0x11] = iVar5;
            if (iVar3 == 0) {
              local_20 = FUN_005216a0(in_ECX);
              if (local_20 != 0) {
                uVar7 = 0;
                if ((iVar5 != 0) && (uVar7 = FUN_00494e90(iVar5), uVar7 != 0xffffffff)) {
                  uVar7 = uVar7 + 1;
                }
                uVar1 = *(uint *)(local_20 + 0xc);
                if (uVar1 == 0) {
                  if (uVar7 != 0) {
LAB_00520be8:
                    if (uVar1 < uVar7) {
LAB_00520bec:
                      uVar7 = uVar1;
                    }
                    goto LAB_00520bee;
                  }
                }
                else {
                  if (uVar7 != 0) goto LAB_00520be8;
                  if (((uint)in_ECX[2] >> 5 & 1) != 0) goto LAB_00520bec;
LAB_00520bee:
                  uVar11 = 0;
                  ppuVar10 = &PTR_PTR_00b06514;
                  ppuVar9 = &PTR_PTR_00b02f9c;
                  uVar8 = 0;
                  uVar4 = FUN_00494ed0(uVar7);
                  iVar3 = FUN_009832e6(uVar4,uVar8,ppuVar9,ppuVar10,uVar11);
                  if (iVar3 != 0) {
                    *(int **)(iVar3 + 0x44) = in_ECX;
                  }
                  uVar11 = 0;
                  ppuVar10 = &PTR_PTR_00b06514;
                  ppuVar9 = &PTR_PTR_00b02f9c;
                  uVar8 = 0;
                  uVar4 = FUN_00494ed0(uVar7 - 1);
                  iVar3 = FUN_009832e6(uVar4,uVar8,ppuVar9,ppuVar10,uVar11);
                  in_ECX[0x11] = iVar3;
                }
                FUN_0052f3c0(uVar7,in_ECX);
              }
            }
            else {
              iVar6 = 0;
              if (iVar5 == 0) {
                if (((uint)in_ECX[2] >> 5 & 1) != 0) {
                  iVar6 = -1;
                }
              }
              else {
                iVar6 = -1;
                if (*(int *)(iVar3 + 0x3c) != 0) {
                  iVar6 = FUN_00494e90(iVar5);
                }
                if (iVar6 != -1) {
                  iVar6 = iVar6 + 1;
                }
              }
              FUN_00520780(iVar6,in_ECX);
            }
          }
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffc4,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffc4);
        }
      }
      else if (iVar3 == 0x4d414e41) {
        FUN_00450c20(in_ECX + 0xe,1);
      }
      else {
        if (iVar3 == 0x54444f4d) goto LAB_00520cb5;
        if (iVar3 == 0x54445443) {
LAB_00520ca7:
          FUN_0056a7b0(param_1);
        }
      }
      cVar2 = FUN_0044fea0();
      if (cVar2 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}



undefined1 FUN_00520cf0(int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 uVar8;
  char *pcStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  char *local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7180;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 4) == '<') {
      uVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06514,0,uVar4);
      if (uVar4 != 0) {
        local_14 = (char *)0x0;
        local_10 = 0;
        local_e = 0;
        local_4 = 0;
        uVar5 = (**(code **)(*(int *)(in_ECX + 0x18) + 0x14))(&local_14);
        FUN_00521370(uVar5);
        pcStack_1c = (char *)0x0;
        uStack_18 = 0;
        uStack_16 = 0;
        bVar1 = true;
        local_4 = CONCAT31(local_4._1_3_,1);
        uVar5 = (**(code **)(*(int *)(uVar4 + 0x18) + 0x14))(&pcStack_1c);
        FUN_00521370(uVar5);
        if ((pcStack_1c == (char *)0x0) || (local_14 == (char *)0x0)) {
          iVar6 = (uint)(pcStack_1c == (char *)0x0) * 2 + -1;
        }
        else {
          iVar6 = __stricmp(local_14,pcStack_1c);
        }
        uVar8 = iVar6 < 0;
        if (iVar6 == 0) {
          uVar7 = *(uint *)(in_ECX + 8) >> 5;
          uVar2 = uVar7 & 1;
          if (((uVar7 & 1) == 0) || ((*(uint *)(uVar4 + 8) >> 5 & 1) != 0)) {
            if ((*(uint *)(uVar4 + 8) >> 5 & 1) == 0) goto LAB_00520e01;
            while (uVar8 = bVar1, uVar2 != 0) {
LAB_00520e01:
              uVar8 = bVar1;
              if (!bVar1) break;
              if (in_ECX == uVar4) {
                bVar1 = false;
              }
              iVar6 = *(int *)(in_ECX + 0x44);
              while ((iVar6 != 0 && (bVar1 != false))) {
                cVar3 = FUN_00520590(uVar4);
                if (cVar3 != '\0') {
                  bVar1 = false;
                }
                iVar6 = *(int *)(iVar6 + 0x44);
              }
              in_ECX = *(uint *)(in_ECX + 0x40);
              uVar2 = in_ECX;
            }
          }
          else {
            uVar8 = false;
          }
        }
        FUN_00401f20(pcStack_1c);
        pcStack_1c = (char *)0x0;
        uStack_16 = 0;
        uStack_18 = 0;
        FUN_00401f20(local_14);
      }
    }
    else {
      uVar8 = FUN_0046b500(param_1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



void FUN_00520e90(byte param_1)

{
  FUN_00520880();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00520eb0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x6c))();
    uVar1 = FUN_005204c0();
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = FUN_00520260(uVar3);
        FUN_00520eb0(uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



undefined4 FUN_00520ef0(void)

{
  return DAT_00b362c4;
}



void FUN_00520f00(undefined4 param_1)

{
  DAT_00b362c4 = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520f20(undefined4 param_1)

{
  _DAT_00b10a6c = param_1;
  return;
}



void FUN_00520f40(undefined1 param_1)

{
  DAT_00b362c8 = param_1;
  return;
}



void FUN_00520f50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a538b4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00520f70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a538b4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00520fa0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  int local_10;
  int local_c;
  uint local_8 [2];
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar3 = *(int **)(in_ECX + 8);
    do {
      if (*piVar3 != 0) {
        local_c = (*(int **)(in_ECX + 8))[uVar1];
        goto joined_r0x00520fd7;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 4));
  }
  local_c = 0;
joined_r0x00520fd7:
  while (local_c != 0) {
    local_10 = 0;
    FUN_00452600(&local_c,local_8,&local_10);
    if (local_10 != 0) {
      local_8[0] = *(uint *)(local_10 + 0xc);
      uVar1 = 0;
      if (local_8[0] != 0) {
        do {
          uVar9 = 0;
          ppuVar8 = &PTR_PTR_00b06514;
          ppuVar7 = &PTR_PTR_00b02f9c;
          uVar6 = 0;
          uVar2 = FUN_00494ed0(uVar1);
          piVar3 = (int *)FUN_009832e6(uVar2,uVar6,ppuVar7,ppuVar8,uVar9);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x6c))();
            uVar4 = FUN_005204c0();
            uVar5 = 0;
            if (uVar4 != 0) {
              do {
                uVar2 = FUN_00520260(uVar5);
                FUN_00520eb0(uVar2);
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar4);
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < local_8[0]);
      }
    }
  }
  return;
}



void FUN_005210a0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  int local_10;
  int local_c [2];
  undefined1 local_4 [4];
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar4 = *(int **)(in_ECX + 8);
    do {
      if (*piVar4 != 0) {
        local_c[0] = (*(int **)(in_ECX + 8))[uVar2];
        goto joined_r0x005210da;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 4));
  }
  local_c[0] = 0;
joined_r0x005210da:
  while (local_c[0] != 0) {
    local_10 = 0;
    FUN_00452600(local_c,local_4,&local_10);
    iVar1 = local_10;
    if (local_10 != 0) {
      uVar2 = *(uint *)(local_10 + 0xc);
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar9 = 0;
          ppuVar8 = &PTR_PTR_00b06514;
          ppuVar7 = &PTR_PTR_00b02f9c;
          uVar6 = 0;
          uVar3 = FUN_00494ed0(uVar5);
          piVar4 = (int *)FUN_009832e6(uVar3,uVar6,ppuVar7,ppuVar8,uVar9);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x10))(1);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar2 = 0;
      if (*(int *)(iVar1 + 0xc) != 0) {
        do {
          *(undefined4 *)(*(int *)(iVar1 + 4) + uVar2 * 4) = 0;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(iVar1 + 0xc));
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00521190(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_88;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_88;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_88 = 0;
    iVar1 = -(int)param_1;
    do {
      cVar2 = *param_1;
      param_1[(int)(local_84 + iVar1)] = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    pcVar3 = _strrchr(local_84,0x5c);
    builtin_strncpy(pcVar3 + 1,"IdleAnims",10);
    cVar2 = FUN_0055e000(local_84,&local_88);
    if ((cVar2 != '\0') && (local_88 != 0)) {
      return *(undefined4 *)(local_88 + 0x20);
    }
  }
  return 0;
}



void FUN_00521240(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7e78;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a538e0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a538b4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005212b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a53900;
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
  FUN_00521240();
  return;
}



void FUN_00521300(byte param_1)

{
  FUN_00521240();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00521320(byte param_1)

{
  FUN_005212b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00521340(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[5] = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[1] = 0;
  *in_ECX = &PTR__scalar_deleting_destructor__00a53854;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00521370(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  FUN_00401f20(*param_2);
  *param_2 = 0;
  *(undefined2 *)((int)param_2 + 6) = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = -(int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(local_108 + iVar2)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strstr(local_108,"IdleAnims");
    if (pcVar3 != (char *)0x0) {
      pcVar3[9] = '\0';
      FUN_004028d0(local_108,0);
      return;
    }
    pcVar3 = _strrchr(local_108,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar3[1] = '\0';
      FUN_004028d0(local_108,0);
      FUN_00412fa0("IdleAnims");
    }
  }
  return;
}



int FUN_00521450(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  char *local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = 0;
  if (param_1 != (int *)0x0) {
    local_14 = (char *)0x0;
    local_10 = 0;
    local_e = 0;
    local_4 = 0;
    uVar4 = (**(code **)(*param_1 + 0x170))(&local_14,uVar3);
    uVar4 = FUN_0046d3f0(uVar4);
    FUN_00521370(uVar4);
    pcVar7 = local_14;
    if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
      param_1 = (int *)0x0;
      cVar2 = FUN_0055e000(local_14,&param_1);
      if ((cVar2 != '\0') && (param_1 != (int *)0x0)) {
        param_1 = (int *)param_1[3];
        piVar6 = (int *)0x0;
        pcVar7 = local_14;
        if (param_1 != (int *)0x0) {
          do {
            iVar5 = FUN_00494ed0(piVar6);
            if ((iVar5 != 0) &&
               (iVar8 = FUN_005206b0(piVar1,param_2), pcVar7 = local_14, iVar8 != 0)) break;
            piVar6 = (int *)((int)piVar6 + 1);
            pcVar7 = local_14;
          } while (piVar6 < param_1);
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_00401f20(pcVar7);
    if (((iVar8 != 0) && (cVar2 = FUN_00520210(), cVar2 != '\0')) &&
       (cVar2 = FUN_00520220(), cVar2 == '\0')) {
      iVar8 = 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar8;
}



void FUN_00521590(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a53920;
  FUN_005212b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_005215c0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pcVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_1 = (char *)0x0;
    cVar2 = FUN_0055e000(pcVar1,&param_1);
    iVar4 = 0;
    if ((cVar2 != '\0') && (param_1 != (char *)0x0)) {
      iVar4 = (int)param_1;
    }
    if (iVar4 == 0) {
      param_1 = (char *)FUN_00401f00(0x24,uVar3);
      if (param_1 == (char *)0x0) {
        iVar4 = 0;
      }
      else {
        local_4 = iVar4;
        iVar4 = FUN_00521340();
      }
      local_4 = 0xffffffff;
      FUN_004028d0(pcVar1,0);
      FUN_00452910(1);
      *(undefined4 *)(iVar4 + 0x14) = 1;
      uVar5 = FUN_00435830(pcVar1,1);
      *(undefined4 *)(iVar4 + 0x20) = uVar5;
      FUN_00412d30(pcVar1,iVar4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



undefined4 FUN_005216a0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c08d8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  if (param_1 != 0) {
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_4 = 0;
    uVar3 = FUN_0046d3f0(param_1,&local_14,uVar2);
    FUN_00521370(uVar3);
    uVar1 = local_14;
    uVar3 = FUN_005215c0(local_14);
    FUN_00401f20(uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_00521730(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  char *local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  if (param_1 != 0) {
    local_14 = (char *)0x0;
    local_10 = 0;
    local_e = 0;
    local_4 = 0;
    uVar5 = FUN_0046d3f0(param_1,&local_14,uVar3);
    FUN_00521370(uVar5);
    pcVar1 = local_14;
    iVar4 = 0;
    if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
      param_1 = 0;
      cVar2 = FUN_0055e000(local_14,&param_1);
      if ((cVar2 != '\0') && (param_1 != 0)) {
        iVar4 = param_1;
      }
    }
    FUN_00401f20(pcVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_005217e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined4 *local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7ea8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar7 = *(int **)(in_ECX + 8);
    do {
      if (*piVar7 != 0) {
        local_18[0] = (*(int **)(in_ECX + 8))[uVar5];
        goto joined_r0x0052183a;
      }
      uVar5 = uVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 4));
  }
  local_18[0] = 0;
joined_r0x0052183a:
  while (local_18[0] != 0) {
    local_1c = (undefined4 *)0x0;
    FUN_00452600(local_18,local_10,&local_1c);
    puVar3 = local_1c;
    if (local_1c != (undefined4 *)0x0) {
      uVar5 = local_1c[3];
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          uVar12 = 0;
          ppuVar11 = &PTR_PTR_00b06514;
          ppuVar10 = &PTR_PTR_00b02f9c;
          uVar9 = 0;
          uVar6 = FUN_00494ed0(uVar8);
          piVar7 = (int *)FUN_009832e6(uVar6,uVar9,ppuVar10,ppuVar11,uVar12);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x10))(1);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      if (puVar3[8] != 0) {
        while ((piVar7 = (int *)puVar3[8], piVar7[1] != 0 || (*piVar7 != 0))) {
          FUN_00401f20(*piVar7);
          puVar1 = (undefined4 *)puVar3[8];
          puVar2 = (undefined4 *)puVar1[1];
          if (puVar2 == (undefined4 *)0x0) {
            *puVar1 = 0;
          }
          else {
            puVar1[1] = puVar2[1];
            *puVar1 = *puVar2;
            FUN_00401f20(puVar2);
          }
        }
        FUN_00401f20(piVar7);
      }
      FUN_00401f20(puVar3[6]);
      puVar3[6] = 0;
      *(undefined2 *)((int)puVar3 + 0x1e) = 0;
      *(undefined2 *)(puVar3 + 7) = 0;
      uStack_4 = 0xffffffff;
      *puVar3 = &PTR__scalar_deleting_destructor__00a37aac;
      FUN_00401f20(puVar3[1]);
      FUN_00401f20(puVar3);
    }
  }
  FUN_007c2a40(uVar4);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00521950(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a538b4;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *(undefined1 *)(in_ECX + 4) = 1;
  *in_ECX = &PTR_FUN_00a53920;
  return;
}



void FUN_005219b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7ed8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_005217e0(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a53920;
  FUN_005212b0();
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_00521a10(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar2 = in_ECX + 0x5a;
  if (iVar1 == 0) {
    piVar2 = in_ECX + 0x42;
  }
  return piVar2;
}



undefined4 FUN_00521a40(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x168))(uVar1);
    uVar2 = FUN_004b3750(param_1,0);
    iVar4 = FUN_006f94a0(uVar2,&DAT_00a30968);
    if (iVar3 == 0) {
      if (iVar4 == 0) goto LAB_00521b0f;
      iVar3 = FUN_00401f00(0x154);
      uStack_4 = 0;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00478730(param_1,uVar2);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*param_1 + 0x16c))(uVar5);
    }
    else {
      if (iVar4 == 0) goto LAB_00521b0f;
      FUN_00478070(uVar2);
    }
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
  }
LAB_00521b0f:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



uint FUN_00521ba0(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0051a3b0(param_1);
  uVar1 = uVar1 & 0xffff;
  if ((param_1 & 0x200) != 0) {
    uVar1 = uVar1 + 0x15;
  }
  if ((param_1 & 0x400) != 0) {
    uVar1 = uVar1 + 4;
  }
  return uVar1;
}



void FUN_00521be0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  ushort uVar5;
  
  if (*(short *)(in_ECX + 0xc) != *(short *)(in_ECX + 10)) {
    if (*(short *)(in_ECX + 0xc) != 0) {
      uVar5 = 0;
      uVar4 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar1 = *(int *)(in_ECX + 4);
          iVar2 = *(int *)(iVar1 + (uint)uVar5 * 4);
          if (iVar2 != 0) {
            if (*(int *)(iVar1 + (uVar4 & 0xffff) * 4) != iVar2) {
              *(int *)(iVar1 + (uVar4 & 0xffff) * 4) = iVar2;
            }
            uVar4 = uVar4 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(in_ECX + 10));
      }
    }
    uVar5 = *(ushort *)(in_ECX + 0xc);
    iVar1 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 10) = uVar5;
    *(ushort *)(in_ECX + 8) = uVar5;
    if (uVar5 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar3 = FUN_00401f00((uint)uVar5 * 4);
      uVar5 = 0;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          uVar4 = (uint)uVar5;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(uVar4 * 4 + *(int *)(in_ECX + 4)) = *(undefined4 *)(uVar4 * 4 + iVar1);
        } while (uVar5 < *(ushort *)(in_ECX + 10));
        FUN_00401f20(iVar1);
        return;
      }
    }
    FUN_00401f20(iVar1);
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a5395c;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a53964;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a53950;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00521da0(void)

{
  undefined4 *puVar1;
  char cVar2;
  LONG LVar3;
  int in_ECX;
  
  cVar2 = FUN_0045a500();
  if (cVar2 == '\0') {
    puVar1 = *(undefined4 **)(in_ECX + 0x1d4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x1d4) = 0;
    }
    FUN_0055e2a0((undefined4 *)(in_ECX + 0x1d4));
    puVar1 = *(undefined4 **)(in_ECX + 0x1dc);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x1dc) = 0;
    }
  }
  *(undefined2 *)(in_ECX + 0x1e0) = 0xff;
  thunk_FUN_0046b170();
  return;
}



void FUN_00521e40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar4 = in_ECX + 0x5a;
  if (iVar2 == 0) {
    piVar4 = in_ECX + 0x42;
  }
  uVar3 = FaceGen_DefaultGetter(piVar4);
  FaceGen_FallbackPopulator(uVar3);
  iVar2 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar4 = in_ECX + 0x5a;
  if (iVar2 == 0) {
    piVar4 = in_ECX + 0x42;
  }
  FUN_00552880(piVar4);
  puVar1 = (undefined4 *)in_ECX[0x77];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x77] = 0;
  }
  return;
}



void FUN_00521ed0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  
  piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
  if (piVar1 != (int *)0x0) {
    FUN_0046f520(param_1);
    FUN_0046e480(param_1);
    FUN_004673f0(param_1);
    FUN_0046ca60(param_1);
    FUN_00468bd0(param_1);
    FUN_0046c840(param_1);
    FUN_0046d570(param_1);
    in_ECX[0x3b] = piVar1[0x3b];
    in_ECX[0x3c] = piVar1[0x3c];
    in_ECX[0x3d] = piVar1[0x3d];
    in_ECX[0x3e] = piVar1[0x3e];
    iVar3 = *in_ECX;
    in_ECX[0x3f] = piVar1[0x3f];
    *(char *)(in_ECX + 0x40) = (char)piVar1[0x40];
    in_ECX[0x41] = piVar1[0x41];
    in_ECX[0x72] = piVar1[0x72];
    in_ECX[0x73] = piVar1[0x73];
    in_ECX[0x74] = piVar1[0x74];
    in_ECX[0x7a] = piVar1[0x7a];
    uVar2 = (**(code **)(*piVar1 + 0x120))();
    (**(code **)(iVar3 + 0x124))(uVar2);
    iVar3 = (**(code **)(*in_ECX + 0x128))(0x45);
    if (iVar3 == 0) {
      piVar5 = in_ECX + 0x42;
    }
    else {
      piVar5 = in_ECX + 0x5a;
    }
    iVar3 = (**(code **)(*piVar1 + 0x128))(0x45);
    piVar4 = piVar1 + 0x5a;
    if (iVar3 == 0) {
      piVar4 = piVar1 + 0x42;
    }
    FaceGen_FallbackPopulator(piVar4,piVar5);
  }
  return;
}



void TESNPC_FaceGenFiller(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  FUN_00552880(param_1);
  if (in_ECX[0x3a] == 0) {
    uVar1 = FaceGen_DefaultGetter(param_1);
    FaceGen_FallbackPopulator(uVar1);
    return;
  }
  iVar2 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar3 = in_ECX + 0x5a;
  if (iVar2 == 0) {
    piVar3 = in_ECX + 0x42;
  }
  FaceGen_SilentSkipLoop_TESRace_unk12(in_ECX[0x3a] + 0x29c,piVar3,param_1,0,0);
  return;
}



float10 FUN_00522230(void)

{
  int iVar1;
  
  iVar1 = FUN_00519d20();
  if (iVar1 == 0) {
    return (float10)-2.0;
  }
  return (float10)2.0;
}



void FaceGen_ReleaseFace0Face1(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1d4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005222d0(char param_1)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  int in_ECX;
  int iVar17;
  bool bVar18;
  float local_18;
  uint local_10;
  int local_c;
  undefined1 local_8;
  int local_4;
  
  sVar9 = FUN_004677f0();
  iVar10 = sVar9 + -1;
  if ((*(int *)(in_ECX + 0xe8) != 0) && (*(int *)(in_ECX + 0x104) != 0)) {
    bVar18 = *(int *)(in_ECX + 0xc) == 7;
    bVar2 = true;
    if ((bVar18) && (DAT_00b37d00 == *(int *)(*(int *)(in_ECX + 0x104) + 0xc))) {
      bVar2 = false;
    }
    local_4 = 0;
    do {
      iVar11 = FUN_00565be0(0,local_4);
      if ((iVar11 != 6) || (bVar18)) {
        if ((*(byte *)(in_ECX + 0x28) & 1) == 0) {
          bVar3 = FUN_00468ad0(iVar11);
        }
        else {
          bVar3 = FUN_00468ad0(iVar11);
        }
        local_18 = (float)bVar3;
        if (bVar2) {
          iVar12 = FUN_00780f70();
          fVar1 = _DAT_00b362e4;
          if ((iVar11 == iVar12) ||
             (iVar12 = FUN_00422de0(), fVar1 = _DAT_00b362ec, iVar11 == iVar12)) {
            local_18 = fVar1 + local_18;
          }
          local_10 = local_10 & 0xffffff00;
          do {
            iVar12 = FUN_00446af0(local_10);
            if (*(int *)(iVar12 + 0x30) == iVar11) {
              iVar12 = FUN_00565be0(2,local_10);
              local_c = -1;
              iVar17 = 0;
              do {
                iVar13 = FUN_0051bf00(iVar17);
                if (iVar13 == iVar12) {
                  uVar14 = FUN_00565c50(2,iVar13);
                  iVar13 = FUN_00446af0(uVar14);
                  if (*(int *)(iVar13 + 0x30) == iVar11) {
                    local_c = 1;
                  }
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < 7);
              fVar1 = (float)iVar10;
              if (local_c != 1) {
                fVar1 = fVar1 * 0.2;
              }
              local_18 = fVar1 + local_18;
            }
            cVar4 = (char)local_10 + '\x01';
            local_10 = CONCAT31(local_10._1_3_,cVar4);
          } while (cVar4 < '\x15');
        }
        if (100.0 < local_18) {
          local_18 = 100.0;
        }
        FUN_00468af0(iVar11,(int)ROUND(local_18));
      }
      local_4 = local_4 + 1;
    } while (local_4 < 8);
    fVar1 = (float)iVar10;
    iVar11 = 0;
    do {
      iVar12 = FUN_00565be0(2,iVar11);
      iVar17 = -1;
      if (bVar2) {
        iVar13 = 0;
        do {
          iVar15 = FUN_0051bf00(iVar13);
          if (iVar15 == iVar12) {
            iVar17 = 1;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 7);
      }
      if (iVar17 == 1) {
        local_18 = fVar1 + 25.0;
      }
      else {
        local_18 = fVar1 * 0.1 + 5.0;
      }
      if (bVar2) {
        iVar17 = FUN_00446af0(iVar11);
        iVar17 = *(int *)(iVar17 + 0x34);
        iVar13 = FUN_006ecc80();
        if (iVar13 == iVar17) {
          local_18 = fVar1 * 0.5 + local_18 + 5.0;
        }
      }
      pcVar16 = (char *)(*(int *)(in_ECX + 0xe8) + 0x50);
      iVar17 = 7;
      do {
        if (*pcVar16 == iVar12) {
          local_18 = (float)(int)pcVar16[1] + local_18;
        }
        pcVar16 = pcVar16 + 2;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      if (100.0 < local_18) {
        local_18 = 100.0;
      }
      local_8 = (undefined1)(int)ROUND(local_18);
      *(undefined1 *)(in_ECX + 0xec + iVar11) = local_8;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x15);
    FUN_0046abf0(0x200);
    local_4 = 0;
    iVar11 = FUN_00780f70();
    if ((iVar11 == 5) || (iVar11 = FUN_00422de0(), iVar11 == 5)) {
      local_4 = 1;
    }
    if (bVar18) {
      uVar5 = FUN_00468ad0(5);
      uVar6 = FUN_00468ad0(0);
      uVar14 = FUN_00548020(uVar6,uVar5);
    }
    else {
      uVar5 = FUN_00468ad0(5);
      uVar6 = FUN_00468ad0(0);
      uVar14 = FUN_006ecc80();
      uVar14 = FUN_00547f80(uVar6,uVar5,iVar10,local_4,uVar14);
    }
    if (param_1 == '\0') {
      FUN_00519c50(uVar14);
      uVar5 = FUN_00468ad0(1);
      uVar14 = FUN_005482b0(uVar5,0);
      FUN_00467290(uVar14);
      uVar5 = FUN_00468ad0(2);
      uVar6 = FUN_00468ad0(3);
      uVar7 = FUN_00468ad0(5);
      uVar8 = FUN_00468ad0(0);
      uVar14 = FUN_005479d0(uVar8,uVar7,uVar6,uVar5);
      FUN_004672b0(uVar14);
    }
    if (*(int *)(in_ECX + 0x104) != 0) {
      FUN_00468230(*(undefined4 *)(*(int *)(in_ECX + 0x104) + 100));
      uVar14 = FUN_0051beb0();
      FUN_004684c0(uVar14);
      uVar14 = FUN_004a9700();
      FUN_00468270(uVar14);
      return;
    }
    FUN_00468230(0);
  }
  return;
}



void FUN_00522760(void)

{
  undefined1 uVar1;
  
  FUN_00519d20();
  uVar1 = FUN_00468ad0(6);
  FUN_00468af0(6,uVar1);
  return;
}



void FUN_005227a0(int *param_1,char param_2,char param_3,char param_4,char param_5)

{
  undefined1 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_10;
  undefined4 uStack_8;
  int local_4;
  
  piVar2 = param_1;
  local_4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar1 = *(undefined1 *)(local_4 + 0x185);
  if (param_5 == '\0') {
    *(undefined1 *)(local_4 + 0x185) = 0;
  }
  cVar3 = (**(code **)(*param_1 + 400))();
  if (((cVar3 != '\0') && ((int *)param_1[0x16] != (int *)0x0)) &&
     (cVar3 = (**(code **)(*(int *)param_1[0x16] + 0x138))(), cVar3 != '\0')) {
    FUN_004dc5b0();
  }
  if (in_ECX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = in_ECX + 0x44;
  }
  FUN_00485e00(param_1,iVar4);
  FUN_00486030(1);
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((iVar4 != 0) && (*(int **)(iVar4 + 0x58) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x58) + 0x10c))(0);
    (**(code **)(**(int **)((int)piStack_18 + 0x58) + 0x110))(0);
    (**(code **)(**(int **)((int)piStack_1c + 0x58) + 0x108))(0);
    (**(code **)(**(int **)((int)piStack_20 + 0x58) + 0x104))(0,0);
  }
  _param_5 = (int *)0x0;
  param_1 = (int *)0x0;
  piStack_28 = (int *)0x0;
  piStack_1c = (int *)0x0;
  piStack_20 = (int *)0x0;
  piStack_24 = (int *)0x0;
  piStack_18 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_10 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_30 = (int *)0x0;
  if ((param_2 != '\0') || (param_4 != '\0')) {
    _param_5 = (int *)FUN_0048c870(in_ECX,2,1);
    param_1 = (int *)FUN_0048c870(in_ECX,3,1);
    piStack_28 = (int *)FUN_0048c870(in_ECX,5,1);
    piStack_24 = (int *)FUN_0048c870(in_ECX,4,1);
    if (param_4 == '\0') {
      piStack_20 = (int *)FUN_0048c870(in_ECX,1,1);
      piStack_1c = (int *)FUN_0048c870(in_ECX,0,1);
      piStack_18 = (int *)FUN_0048c870(in_ECX,0xd,1);
    }
    piStack_34 = (int *)FUN_0048c870(in_ECX,6,1);
    piStack_38 = (int *)FUN_0048c870(in_ECX,7,1);
    piStack_30 = (int *)FUN_0048c870(in_ECX,8,1);
  }
  uStack_8 = 0;
  if (param_3 != '\0') {
    piStack_2c = (int *)FUN_0048bda0(in_ECX,&uStack_8,0xffffffff,1);
  }
  piVar5 = (int *)FUN_0048b660(in_ECX,1);
  if ((((piStack_2c != (int *)0x0) && (piStack_2c[2] != 0)) &&
      (iVar6 = FUN_009832e6(piStack_2c[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0), iVar6 != 0)) &&
     (*(char *)(iVar6 + 0x90) == '\x05')) {
    piStack_10 = (int *)FUN_0048b9c0(in_ECX,1);
  }
  if ((_param_5 == (int *)0x0) || (param_4 != '\0')) {
    _param_2 = (int *)0x0;
    if (param_4 != '\0') {
      _param_2 = _param_5;
    }
    _param_5 = (int *)FUN_0048d110(in_ECX,2,1);
    if ((_param_5 == (int *)0x0) && (param_4 != '\0')) {
      _param_5 = _param_2;
    }
    else if (_param_2 != (int *)0x0) {
      FUN_00484470();
      FUN_00401f20(_param_2);
    }
  }
  if ((param_1 == (int *)0x0) || (param_4 != '\0')) {
    piVar9 = (int *)0x0;
    if (param_4 != '\0') {
      piVar9 = param_1;
    }
    piVar7 = (int *)FUN_0048d110(in_ECX,3,1);
    if (((piVar7 != (int *)0x0) || (param_1 = piVar9, param_4 == '\0')) &&
       (param_1 = piVar7, piVar9 != (int *)0x0)) {
      FUN_00484470();
      FUN_00401f20(piVar9);
    }
  }
  if (piStack_28 == (int *)0x0) {
    piStack_28 = (int *)FUN_0048d110(in_ECX,5,1);
  }
  if (piStack_24 == (int *)0x0) {
    piStack_24 = (int *)FUN_0048d110(in_ECX,4,1);
  }
  if (piStack_20 == (int *)0x0) {
    piStack_20 = (int *)FUN_0048d110(in_ECX,1,1);
  }
  if (piStack_1c == (int *)0x0) {
    piStack_1c = (int *)FUN_0048d110(in_ECX,0,1);
  }
  if (piStack_18 == (int *)0x0) {
    piStack_18 = (int *)FUN_0048d110(in_ECX,0xd,1);
  }
  if (piStack_30 == (int *)0x0) {
    piStack_30 = (int *)FUN_0048d110(in_ECX,8,1);
  }
  if (piStack_34 == (int *)0x0) {
    piStack_34 = (int *)FUN_0048d110(in_ECX,6,1);
  }
  if (piStack_38 == (int *)0x0) {
    piStack_38 = (int *)FUN_0048d110(in_ECX,7,1);
  }
  if ((piStack_30 != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_30), cVar3 == '\0')) {
    if ((undefined4 *)*piStack_30 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_30;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_30[2],1,uVar8,0);
  }
  if ((piStack_38 != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_38), cVar3 == '\0')) {
    if ((undefined4 *)*piStack_38 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_38;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_38[2],1,uVar8,0);
  }
  if ((piStack_34 != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_34), cVar3 == '\0')) {
    if ((undefined4 *)*piStack_34 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_34;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_34[2],1,uVar8,0);
  }
  iVar6 = 0;
  iVar10 = 0;
  _param_4 = 0;
  _param_2 = (int *)0x0;
  _param_3 = 0;
  if ((_param_5 != (int *)0x0) && (cVar3 = FUN_004d8880(_param_5), cVar3 == '\0')) {
    if ((undefined4 *)*_param_5 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*_param_5;
    }
    (**(code **)(*piVar2 + 0x108))(_param_5[2],1,uVar8,0);
    iVar6 = FUN_009832e6(_param_5[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
    if ((iVar6 != 0) && (cVar3 = FUN_00468ff0(3,0), cVar3 != '\0')) goto LAB_00522cc2;
  }
  if ((param_1 != (int *)0x0) && (cVar3 = FUN_004d8880(param_1), cVar3 == '\0')) {
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*param_1;
    }
    (**(code **)(*piVar2 + 0x108))(param_1[2],1,uVar8,0);
    iVar10 = FUN_009832e6(param_1[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
  }
LAB_00522cc2:
  if ((((iVar6 == 0) || (cVar3 = FUN_00468ff0(4,0), cVar3 == '\0')) &&
      ((iVar10 == 0 || (cVar3 = FUN_00468ff0(4,0), cVar3 == '\0')))) &&
     ((piStack_24 != (int *)0x0 && (cVar3 = FUN_004d8880(piStack_24), cVar3 == '\0')))) {
    if ((undefined4 *)*piStack_24 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_24;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_24[2],1,uVar8,0);
    _param_4 = FUN_009832e6(piStack_24[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
  }
  if ((((iVar6 == 0) || (cVar3 = FUN_00468ff0(5,0), cVar3 == '\0')) &&
      ((iVar10 == 0 || (cVar3 = FUN_00468ff0(5,0), cVar3 == '\0')))) &&
     ((((_param_4 == 0 || (cVar3 = FUN_00468ff0(5,0), cVar3 == '\0')) && (piStack_28 != (int *)0x0))
      && (cVar3 = FUN_004d8880(piStack_28), cVar3 == '\0')))) {
    if ((undefined4 *)*piStack_28 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_28;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_28[2],1,uVar8,0);
    _param_2 = (int *)FUN_009832e6(piStack_28[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
  }
  if (((((iVar6 == 0) || (cVar3 = FUN_00468ff0(1,0), cVar3 == '\0')) &&
       (((iVar10 == 0 || (cVar3 = FUN_00468ff0(1,0), cVar3 == '\0')) &&
        ((_param_4 == 0 || (cVar3 = FUN_00468ff0(1,0), cVar3 == '\0')))))) &&
      ((_param_2 == (int *)0x0 || (cVar3 = FUN_00468ff0(1,0), cVar3 == '\0')))) &&
     ((piStack_20 != (int *)0x0 && (cVar3 = FUN_004d8880(piStack_20), cVar3 == '\0')))) {
    if ((undefined4 *)*piStack_20 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_20;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_20[2],1,uVar8,0);
    _param_3 = FUN_009832e6(piStack_20[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
  }
  if ((((((iVar6 == 0) || (cVar3 = FUN_00468ff0(0,0), cVar3 == '\0')) &&
        ((iVar10 == 0 || (cVar3 = FUN_00468ff0(0,0), cVar3 == '\0')))) &&
       ((_param_4 == 0 || (cVar3 = FUN_00468ff0(0,0), cVar3 == '\0')))) &&
      ((_param_3 == 0 || (cVar3 = FUN_00468ff0(0,0), cVar3 == '\0')))) &&
     ((((_param_2 == (int *)0x0 || (cVar3 = FUN_00468ff0(0,0), cVar3 == '\0')) &&
       (piStack_1c != (int *)0x0)) && (cVar3 = FUN_004d8880(piStack_1c), cVar3 == '\0')))) {
    if ((undefined4 *)*piStack_1c == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_1c;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_1c[2],1,uVar8,0);
  }
  if (((piVar2 != DAT_00b333c4) && (piVar5 != (int *)0x0)) &&
     (cVar3 = FUN_004d8880(piVar5[2]), cVar3 == '\0')) {
    if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piVar5;
    }
    (**(code **)(*piVar2 + 0x108))(piVar5[2],1,uVar8,0);
  }
  if ((piStack_18 != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_18), cVar3 == '\0')) {
    if ((undefined4 *)*piStack_18 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_18;
    }
    (**(code **)(*piVar2 + 0x108))(piStack_18[2],1,uVar8,0);
  }
  if ((piStack_2c != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_2c[2]), cVar3 == '\0')) {
    if ((undefined4 *)*piStack_2c == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)*piStack_2c;
    }
    iVar6 = piStack_2c[2];
    iVar10 = *piVar2;
    uVar8 = FUN_004b2460(uVar8,0);
    (**(code **)(iVar10 + 0x108))(iVar6,uVar8);
    if ((piStack_10 != (int *)0x0) && (cVar3 = FUN_004d8880(piStack_10[2]), cVar3 == '\0')) {
      if ((undefined4 *)*piStack_10 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)*piStack_10;
      }
      iVar6 = piStack_10[2];
      iVar10 = *piVar2;
      uVar8 = FUN_004b2460(uVar8,0);
      (**(code **)(iVar10 + 0x108))(iVar6,uVar8);
    }
  }
  if (_param_5 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(_param_5);
  }
  if (param_1 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(param_1);
  }
  if (piStack_28 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_28);
  }
  if (piStack_24 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_24);
  }
  if (piStack_20 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_20);
  }
  if (piStack_1c != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_1c);
  }
  if (piStack_18 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_18);
  }
  if (piStack_2c != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_2c);
  }
  if (piStack_10 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_10);
  }
  if (piVar5 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piVar5);
  }
  if (piStack_38 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_38);
  }
  if (piStack_34 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_34);
  }
  if (piStack_30 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_30);
  }
  *(undefined1 *)(local_4 + 0x185) = uVar1;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) != 0)) {
    FUN_005eda20(1);
  }
  return;
}



int FUN_00523170(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*param_1 + 0x168))(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x154);
    uStack_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00478730(param_1,0);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*param_1 + 0x16c))(iVar2);
  }
  else {
    uVar3 = (**(code **)(*in_ECX + 0xd4))();
    FUN_004a7a60("This npc \"%s\" has already been used.\r\nOnly the first reference will be used.\r\n"
                 ,uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FaceGen_GatingFunction(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1d4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (((*(int *)(in_ECX + 0x1d4) == 0) && (*(int *)(in_ECX + 0x1d8) == 0)) &&
     (*(int *)(in_ECX + 0xe8) != 0)) {
    FaceGen_ChokepointAlloc(param_1,param_2,in_ECX,1,0);
    *(undefined2 *)(in_ECX + 0x1e0) = *(undefined2 *)(*(int *)(in_ECX + 0xe8) + 0x2fc);
  }
  return;
}



uint FUN_005232d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = 0;
  if (param_1 - 0xcU < 0x15) {
    cVar1 = FUN_00565c50(2,param_1);
    return (uint)*(byte *)(cVar1 + 0xec + in_ECX);
  }
  if (2 < param_1 - 0x25U) {
    uVar2 = FUN_00519d90(param_1);
  }
  return uVar2;
}



void FUN_00523370(uint param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = param_1;
  FUN_0051a520(param_1);
  if ((uVar1 & 0x200) != 0) {
    FUN_0046ac70(in_ECX + 0xec,0x15);
  }
  if ((uVar1 & 0x400) != 0) {
    param_1 = 0;
    if (*(int *)(in_ECX + 0x1e4) != 0) {
      param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x1e4) + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  return;
}



undefined4 FUN_005233d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x1ec) != 0)) {
    cVar1 = FUN_00451a40(0,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_00451460(*(undefined4 *)(in_ECX + 0x1ec));
      if (cVar1 != '\0') {
        uVar2 = FUN_004511c0();
        if ((uVar2 == DAT_00b05fa4) && (*(int *)(param_1 + 0x248) == *(int *)(in_ECX + 0xc))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



int FUN_00523440(void)

{
  short *psVar1;
  int in_ECX;
  int iVar2;
  uint local_4;
  
  local_4._0_2_ = 0;
  psVar1 = (short *)(in_ECX + 0x124);
  iVar2 = 2;
  do {
    local_4._0_2_ = (ushort)local_4 + (psVar1[-0xe] * psVar1[-0xc] + psVar1[-2] * *psVar1) * 4;
    psVar1 = psVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = (uint)(ushort)local_4;
  return local_4 + 0x15;
}



float10 FUN_005234a0(void)

{
  int *piVar1;
  int in_ECX;
  float10 fVar2;
  float local_4;
  
  local_4 = 1.0;
  for (piVar1 = (int *)(in_ECX + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
      piVar1 = (int *)piVar1[1]) {
    fVar2 = (float10)FUN_0051f0a0();
    if ((float10)local_4 < fVar2) {
      fVar2 = (float10)FUN_0051f0a0();
      local_4 = (float)fVar2;
    }
  }
  return (float10)local_4;
}



undefined4 * FUN_005234f0(char param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14 [5];
  
  local_3c = (undefined4 *)FUN_00401f00(8);
  iVar5 = 0;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    *local_3c = 0;
    local_3c[1] = 0;
  }
  uVar3 = FUN_00519d20();
  iVar7 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = 0;
  local_24 = 0;
  local_18 = 0;
  if (param_1 != '\0') {
    iVar5 = FUN_00469b30(in_ECX,2);
    local_34 = FUN_00469b30(in_ECX,3);
    local_2c = FUN_00469b30(in_ECX,5);
    local_30 = FUN_00469b30(in_ECX,4);
    local_28 = FUN_00469b30(in_ECX,1);
    iVar7 = FUN_00469b30(in_ECX,0);
    local_24 = FUN_00469b30(in_ECX,0xd);
  }
  if (param_2 != '\0') {
    local_18 = FUN_00469ab0(in_ECX);
  }
  if (iVar5 == 0) {
    iVar5 = FUN_00469bd0(in_ECX,2);
  }
  if (local_34 == 0) {
    local_34 = FUN_00469bd0(in_ECX,3);
  }
  if (local_2c == 0) {
    local_2c = FUN_00469bd0(in_ECX,5);
  }
  if (local_30 == 0) {
    local_30 = FUN_00469bd0(in_ECX,4);
  }
  if (local_28 == 0) {
    local_28 = FUN_00469bd0(in_ECX,1);
  }
  if (iVar7 == 0) {
    FUN_00469bd0(in_ECX,0);
  }
  if (local_24 == 0) {
    local_24 = FUN_00469bd0(in_ECX,0xd);
  }
  iVar7 = 0;
  _param_1 = 0;
  _param_2 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((iVar5 != 0) &&
     (iVar7 = FUN_009832e6(iVar5,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar7 != 0)) {
    iVar5 = FUN_00469330(uVar3);
    if (iVar5 != 0) {
      FUN_00446cb0(iVar5);
    }
    cVar2 = FUN_00468ff0(3,0);
    if (cVar2 != '\0') goto LAB_005236ed;
  }
  if (((local_34 != 0) &&
      (_param_1 = FUN_009832e6(local_34,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), _param_1 != 0)) &&
     (iVar5 = FUN_00469330(uVar3), iVar5 != 0)) {
    FUN_00446cb0(iVar5);
  }
LAB_005236ed:
  if ((((iVar7 == 0) || (cVar2 = FUN_00468ff0(4,0), cVar2 == '\0')) &&
      ((_param_1 == 0 || (cVar2 = FUN_00468ff0(4,0), cVar2 == '\0')))) &&
     (((local_30 != 0 &&
       (_param_2 = FUN_009832e6(local_30,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), _param_2 != 0))
      && (iVar5 = FUN_00469330(uVar3), iVar5 != 0)))) {
    FUN_00446cb0(iVar5);
  }
  if ((((iVar7 == 0) || (cVar2 = FUN_00468ff0(5,0), cVar2 == '\0')) &&
      ((_param_1 == 0 || (cVar2 = FUN_00468ff0(5,0), cVar2 == '\0')))) &&
     ((((_param_2 == 0 || (cVar2 = FUN_00468ff0(5,0), cVar2 == '\0')) && (local_2c != 0)) &&
      ((local_20 = FUN_009832e6(local_2c,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), local_20 != 0 &&
       (iVar5 = FUN_00469330(uVar3), iVar5 != 0)))))) {
    FUN_00446cb0(iVar5);
  }
  if ((((iVar7 == 0) || (cVar2 = FUN_00468ff0(1,0), cVar2 == '\0')) &&
      (((_param_1 == 0 || (cVar2 = FUN_00468ff0(1,0), cVar2 == '\0')) &&
       ((_param_2 == 0 || (cVar2 = FUN_00468ff0(1,0), cVar2 == '\0')))))) &&
     (((local_20 == 0 || (cVar2 = FUN_00468ff0(1,0), cVar2 == '\0')) &&
      (((local_28 != 0 &&
        (local_1c = FUN_009832e6(local_28,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), local_1c != 0))
       && (iVar5 = FUN_00469330(uVar3), iVar5 != 0)))))) {
    FUN_00446cb0(iVar5);
  }
  if (((local_24 != 0) &&
      (iVar5 = FUN_009832e6(local_24,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar5 != 0)) &&
     (iVar5 = FUN_00469330(uVar3), iVar5 != 0)) {
    FUN_00446cb0(iVar5);
  }
  local_14[0] = 2;
  local_14[1] = 3;
  local_14[2] = 4;
  local_14[3] = 5;
  local_14[4] = 0xf;
  uVar6 = 0;
  do {
    uVar1 = local_14[uVar6];
    if (((((iVar7 == 0) || (cVar2 = FUN_00468ff0(uVar1,0), cVar2 == '\0')) &&
         (((_param_1 == 0 || (cVar2 = FUN_00468ff0(uVar1,0), cVar2 == '\0')) &&
          ((_param_2 == 0 || (cVar2 = FUN_00468ff0(uVar1,0), cVar2 == '\0')))))) &&
        ((local_20 == 0 || (cVar2 = FUN_00468ff0(uVar1,0), cVar2 == '\0')))) &&
       ((((local_1c == 0 || (cVar2 = FUN_00468ff0(uVar1,0), cVar2 == '\0')) &&
         (piVar4 = (int *)FUN_0052be80(uVar3,uVar1), piVar4 != (int *)0x0)) &&
        (iVar5 = (**(code **)(*piVar4 + 0x14))(), iVar5 != 0)))) {
      FUN_00446cb0(iVar5);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  if (((local_18 != 0) &&
      (piVar4 = (int *)FUN_009832e6(local_18,0,&PTR_PTR_00b03248,&PTR_PTR_00b03304,0),
      piVar4 != (int *)0x0)) && (iVar5 = (**(code **)(*piVar4 + 0x14))(), iVar5 != 0)) {
    FUN_00446cb0(iVar5);
    return local_3c;
  }
  return local_3c;
}



void FUN_005239c0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  
  if (in_ECX[3] != 7) {
    for (piVar1 = in_ECX + 0x16; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
        piVar1 = (int *)piVar1[1]) {
      iVar4 = *piVar1;
      if ((iVar4 != 0) &&
         ((iVar2 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x18))(), iVar2 == 4 &&
          (iVar4 = iVar4 + 0x24, iVar4 != 0)))) {
        while ((*(int *)(iVar4 + 8) != 0 || (*(int *)(iVar4 + 4) != 0))) {
          if ((*(int **)(iVar4 + 4) != (int *)0x0) && (**(int **)(iVar4 + 4) == 0x504d4156)) {
            FUN_00413320();
          }
          if ((*(int *)(iVar4 + 8) == 0) || (iVar4 = *(int *)(iVar4 + 8) + -4, iVar4 == 0)) break;
        }
      }
    }
    if (in_ECX[0x3a] != 0) {
      for (piVar1 = (int *)(in_ECX[0x3a] + 0x30);
          (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
      {
        iVar4 = *piVar1;
        if ((iVar4 != 0) &&
           ((iVar2 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x18))(), iVar2 == 4 &&
            (iVar4 = iVar4 + 0x24, iVar4 != 0)))) {
          while ((*(int *)(iVar4 + 8) != 0 || (*(int *)(iVar4 + 4) != 0))) {
            if ((*(int **)(iVar4 + 4) != (int *)0x0) && (**(int **)(iVar4 + 4) == 0x504d4156)) {
              FUN_00413320();
            }
            if ((*(int *)(iVar4 + 8) == 0) || (iVar4 = *(int *)(iVar4 + 8) + -4, iVar4 == 0)) break;
          }
        }
      }
    }
    iVar4 = *in_ECX;
    uVar3 = FUN_009828c0();
    (**(code **)(iVar4 + 0x134))(0x45,uVar3);
  }
  return;
}



void FUN_00523af0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void FUN_00523b10(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint *puVar9;
  int in_ECX;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d71cb;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar12 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar10 = param_1 & 0xffff;
      if (uVar12 < *(ushort *)(in_ECX + 10)) {
        do {
          piVar1 = (int *)(*(int *)(in_ECX + 4) + (uVar10 & 0xffff) * 4);
          if (*piVar1 != 0) {
            puVar2 = (undefined4 *)*piVar1;
            local_4 = 0;
            if (puVar2 != (undefined4 *)0x0) {
              LVar8 = InterlockedDecrement(puVar2 + 1);
              if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              *piVar1 = 0;
            }
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar10 = uVar10 + 1;
        } while ((ushort)uVar10 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar12;
    }
    local_4 = 0xffffffff;
    pvVar3 = *(void **)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar12;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      param_1 = param_1 & 0xffff;
      puVar9 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < param_1 * 4) | param_1 * 4 + 4,uVar7);
      local_4 = 1;
      if (puVar9 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
      }
      else {
        puVar11 = puVar9 + 1;
        *puVar9 = param_1;
        _eh_vector_constructor_iterator_(puVar11,4,param_1,FUN_007c88a0,FUN_007016a0);
      }
      local_4 = 0xffffffff;
      *(uint **)(in_ECX + 4) = puVar11;
      uVar12 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          iVar6 = (uint)uVar12 * 4;
          puVar2 = *(undefined4 **)(iVar4 + iVar6);
          if (puVar2 != *(undefined4 **)(iVar6 + (int)pvVar3)) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            iVar5 = *(int *)(iVar6 + (int)pvVar3);
            *(int *)(iVar4 + iVar6) = iVar5;
            if (iVar5 != 0) {
              InterlockedIncrement((LONG *)(iVar5 + 4));
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(in_ECX + 10));
      }
      uVar12 = *(ushort *)(in_ECX + 10);
      if (uVar12 < *(ushort *)(in_ECX + 8)) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          puVar2 = *(undefined4 **)(iVar4 + (uint)uVar12 * 4);
          local_4 = 2;
          if (puVar2 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar2 + 1);
            if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)(iVar4 + (uint)uVar12 * 4) = 0;
          }
          uVar12 = uVar12 + 1;
          local_4 = 0xffffffff;
        } while (uVar12 < *(ushort *)(in_ECX + 8));
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



undefined4 FUN_00523d60(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xb8);
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00523db6) */
/* WARNING: Removing unreachable block (ram,0x00523dc4) */

undefined4 FUN_00523d80(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_00b39b80 == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = (undefined4 *)(DAT_00b39b80 + 0xdb4);
  }
  return *puVar1;
}



void FUN_00523de0(ushort param_1,undefined2 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a539bc;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
  }
  else {
    uVar3 = (uint)param_1;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3 * 4) | uVar3 * 4 + 4,uVar1);
    local_4 = 0;
    if (puVar2 == (uint *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      *puVar2 = uVar3;
      _eh_vector_constructor_iterator_(puVar2 + 1,4,uVar3,FUN_007c88a0,FUN_007016a0);
      in_ECX[1] = puVar2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00523eb0(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a539bc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00524100(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  bool bVar7;
  undefined4 uStack_124;
  undefined4 local_120 [2];
  undefined4 *local_118 [66];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7f2d;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_124;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (uint)&local_c;
  local_120[0] = 0;
  local_118[0] = param_1;
  iVar3 = (**(code **)(*in_ECX + 0x128))(0x45,uVar2);
  if (iVar3 != 0) {
    *param_1 = 0;
    goto LAB_00524245;
  }
  iVar3 = FUN_0046b680(0);
  if (iVar3 != 0) {
    cVar1 = FUN_0044faa0();
    if (cVar1 != '\0') {
      if ((int)param_1 < 3) {
        if (param_1 == (undefined4 *)&DAT_00000002) {
          iVar5 = FUN_00519d20();
          bVar7 = iVar5 == 1;
LAB_005241c7:
          if (!bVar7) goto LAB_00524199;
        }
        else if (param_1 == (undefined4 *)0x1) {
          iVar5 = FUN_00519d20();
          bVar7 = iVar5 == 0;
          goto LAB_005241c7;
        }
        _sprintf((char *)local_118,"data\\Textures\\Faces\\%s\\%08X_%i.dds",iVar3 + 0x1c,in_ECX[3],
                 param_1);
        puVar6 = (undefined4 *)FUN_00442890(local_120,local_118,1,1);
        FUN_00405070(*puVar6);
        puStack_8 = (undefined1 *)0x1;
        FUN_007016a0();
        FUN_004a19f0(&stack0xfffffed8);
        uStack_124 = 1;
        puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
        FUN_007016a0();
      }
      else {
LAB_00524199:
        uVar4 = FUN_00523d80();
        FUN_00405070(uVar4);
      }
      goto LAB_00524245;
    }
  }
  *param_1 = 0;
LAB_00524245:
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



void FUN_00524280(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int in_ECX;
  char *pcVar8;
  int local_8;
  
  iVar1 = param_2;
  iVar4 = param_1;
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0x44;
  }
  FUN_00485e00(param_1,iVar3);
  param_1 = 0;
  local_8 = 0;
  iVar3 = FUN_009832e6(iVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((iVar4 != 0) && (param_2 != 0)) {
    param_2 = 0;
    do {
      iVar4 = FUN_00486790(param_2,0);
      if (iVar4 != 0) {
        puVar7 = *(undefined1 **)(iVar4 + 8);
        if (puVar7 == (undefined1 *)0x0) {
          FUN_00484470();
          FUN_00401f20(iVar4);
        }
        else {
          switch(param_2) {
          case 0:
          case 1:
            iVar6 = FUN_009832e6(puVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
            if (iVar6 != 0) {
              FUN_004691d0(iVar1,*(uint *)(in_ECX + 0x28) & 1,0xffffffff);
            }
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 0xf:
switchD_00524323_caseD_2:
            iVar6 = FUN_009832e6(puVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
            cVar2 = FUN_00484e80(1);
            if (iVar6 == 0) {
              puVar5 = (undefined *)FUN_00469cd0(puVar7);
              pcVar8 = "Bad part \'%s\' in TESNPC::InitWorn.";
              goto LAB_005244a1;
            }
            FUN_004691d0(iVar1,*(uint *)(in_ECX + 0x28) & 1,(cVar2 != '\0') + '\x06');
            break;
          case 9:
            FUN_00478ca0(puVar7);
            break;
          default:
            iVar6 = FUN_009832e6(puVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
            if ((iVar6 == 0) || (puVar7 = *(undefined1 **)(iVar6 + 4), puVar7 == (undefined1 *)0x0))
            {
              puVar7 = &DAT_00a2f7ec;
            }
            puVar5 = (&PTR_DAT_00b06588)[param_2];
            pcVar8 = 
            "Need to add support for BipedObject \'%s\' object name \'%s\' in TESNPC::InitWorn.";
LAB_005244a1:
            FUN_004a7a60(pcVar8,puVar5,puVar7);
            break;
          case 0xc:
            FUN_00478d70(puVar7);
            break;
          case 0xd:
            if (((iVar3 != 0) && (*(int **)(iVar3 + 0x58) != (int *)0x0)) &&
               (iVar6 = (**(code **)(**(int **)(iVar3 + 0x58) + 8))(), iVar6 < 2)) {
              local_8 = (**(code **)(**(int **)(iVar3 + 0x58) + 0xf8))(0);
            }
            if ((local_8 == 0) || (cVar2 = FUN_00484e80(0), cVar2 != '\0'))
            goto switchD_00524323_caseD_2;
            break;
          case 0xe:
            if ((iVar3 != 0) && (iVar6 = (**(code **)(**(int **)(iVar3 + 0x58) + 8))(), iVar6 < 2))
            {
              param_1 = (**(code **)(**(int **)(iVar3 + 0x58) + 0xf0))(0);
            }
            if ((param_1 == 0) || (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
              FUN_00478df0(puVar7);
            }
          }
          FUN_00484470();
          FUN_00401f20(iVar4);
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < 0x10);
  }
  return;
}



void FUN_00524510(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  if ((param_2 != 0) || (param_2 = *(int *)(param_1 + 0x3c), param_2 != 0)) {
    iVar1 = FUN_006f94a0(param_2,"BSFaceGenNiNodeBiped");
    iVar2 = FUN_006f94a0(param_2,"BSFaceGenNiNodeSkinned");
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar3 = FUN_006f94a0(param_2,"FaceGenHair");
      iVar4 = FUN_006f94a0(param_2,PTR_s_FaceGenEars_00b10cac);
      if (iVar4 == 0) {
        iVar4 = FUN_006f94a0(param_2,PTR_s_FaceGenEars_00b10cb0);
      }
      if (in_ECX == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = in_ECX + 0x44;
      }
      FUN_00485e00(param_1,iVar5);
      iVar5 = FUN_00486790(1,0);
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xfffe;
        }
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
        }
      }
      else {
        if (iVar4 != 0) {
          *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
        }
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
        }
        FUN_00484470();
        FUN_00401f20(iVar5);
      }
      iVar3 = FUN_00486790(0,0);
      if (iVar3 != 0) {
        *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
        *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
        FUN_00484470();
        FUN_00401f20(iVar3);
        return;
      }
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
    }
  }
  return;
}



void FUN_00525380(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0051a6f0(param_1,param_2);
  if ((param_1 & 0x200) != 0) {
    FUN_0046ac80(in_ECX + 0xec,0x15);
  }
  if ((param_1 & 0x400) != 0) {
    FUN_0046aca0(&param_2,4);
    uVar1 = FUN_0046b250(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053e0,0);
    uVar1 = FUN_009832e6(uVar1);
    *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  }
  if (*(int *)(in_ECX + 0xc) != 7) {
    FUN_005239c0();
  }
  return;
}



void FUN_00525400(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iStack_50;
  undefined1 auStack_28 [40];
  
  DAT_00b33d80 = 1;
  iStack_50 = param_1;
  piVar4 = &iStack_50;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x318))();
  DAT_00b33d80 = 0;
  if (param_1 == DAT_00b333c4) {
    iVar1 = FUN_00660110(1);
    if ((iVar1 == 0) || (*(short *)(iVar1 + 0xb6) == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = **(int **)(iVar1 + 0xb0);
    }
    puVar2 = &DAT_00b26dc4;
    for (iVar3 = 9; piVar4 = piVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *puVar2;
      puVar2 = puVar2 + 1;
    }
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_004d7c50(auStack_28,&stack0xffffffb4,0);
      puVar5 = (undefined4 *)(iVar1 + 0x30);
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}



void * FUN_005254a0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005254d0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b362f8 & 1) == 0) {
    _DAT_00b362f8 = _DAT_00b362f8 | 1;
    DAT_00b362f4 = 0;
    _atexit(FUN_00a1c190);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b362f4) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b362f4) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b362f4) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b362f4) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  puVar2 = *(undefined4 **)(iVar1 + param_1 * 4);
  if (puVar2 != (undefined4 *)*param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_2;
    *(int *)(iVar1 + param_1 * 4) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  return;
}



void FUN_005255a0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  LONG LVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  *(undefined1 *)(in_ECX + 0x40) = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x74] = 0;
  cVar3 = FUN_0045a500();
  if (cVar3 == '\0') {
    puVar1 = (undefined4 *)in_ECX[0x76];
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0x76] = 0;
    }
    FUN_0055e2a0(in_ECX + 0x76);
    puVar1 = (undefined4 *)in_ECX[0x77];
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0x77] = 0;
    }
  }
  pcVar2 = *(code **)(*in_ECX + 0x128);
  *(undefined2 *)(in_ECX + 0x78) = 0xff;
  in_ECX[0x41] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0x19324b;
  iVar5 = (*pcVar2)(0x45);
  piVar6 = in_ECX + 0x5a;
  if (iVar5 == 0) {
    piVar6 = in_ECX + 0x42;
  }
  uVar7 = FaceGen_DefaultGetter(piVar6);
  FaceGen_FallbackPopulator(uVar7);
  piVar6 = in_ECX + 0x45;
  iVar5 = 2;
  do {
    iVar8 = 2;
    do {
      if (piVar6[-3] != 0) {
        if ((*piVar6 == 0) || (piVar6[1] - *piVar6 >> 2 == 0)) {
          FUN_00984d5e();
        }
        _memset((void *)*piVar6,0,piVar6[-2] * piVar6[-3] * 4);
      }
      if (piVar6[0x15] != 0) {
        if ((piVar6[0x18] == 0) || (piVar6[0x19] - piVar6[0x18] >> 2 == 0)) {
          FUN_00984d5e();
        }
        _memset((void *)piVar6[0x18],0,piVar6[0x16] * piVar6[0x15] * 4);
      }
      piVar6 = piVar6 + 6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  in_ECX[0x3b] = 0x5050505;
  in_ECX[0x3c] = 0x5050505;
  in_ECX[0x3d] = 0x5050505;
  in_ECX[0x3e] = 0x5050505;
  in_ECX[0x3f] = 0x5050505;
  *(undefined1 *)(in_ECX + 0x40) = 5;
  thunk_FUN_0046b090();
  pcVar2 = *(code **)(in_ECX[9] + 0x50);
  in_ECX[10] = in_ECX[10] & 0xfffffdff;
  (*pcVar2)(0x10);
  in_ECX[0x21] = 0x32;
  return;
}



void FUN_00525a70(int *param_1,int *param_2)

{
  ushort uVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int *in_ECX;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  int *piStack_88;
  int *piStack_84;
  int iStack_80;
  int local_7c;
  int *local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  undefined1 auStack_64 [4];
  int *piStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined1 auStack_54 [28];
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [9];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7f98;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  local_78 = in_ECX;
  iVar5 = FUN_00553600(uVar4);
  if ((((iVar5 == 0) || (*param_2 == 0)) || (DAT_00b120b4 == '\0')) ||
     ((param_1 == DAT_00b333c4 && (cVar3 = FUN_0065d770(param_2), cVar3 != '\0'))))
  goto LAB_00526214;
  local_7c = 0;
  if ((int *)param_1[0xf] != (int *)0x0) {
    local_7c = (**(code **)(*(int *)param_1[0xf] + 8))();
  }
  iVar5 = FUN_00477ec0(0);
  uStack_74 = 0;
  iStack_58 = iVar5;
  iVar6 = (**(code **)(*param_1 + 0x164))();
  if ((iVar6 != 0) && (iVar6 = (**(code **)(*param_1 + 0x164))(), *(int *)(iVar6 + 0x98) != 0)) {
    iVar6 = (**(code **)(*param_1 + 0x164))();
    uStack_74 = *(undefined4 *)(*(int *)(iVar6 + 0x98) + 0x7c);
  }
  if ((iVar5 == 0) || (local_7c == 0)) {
    FUN_004a7a60("Cannot create a head for an NPC (%d) that does not have a biped-head node.",
                 in_ECX[3]);
    goto LAB_00526214;
  }
  iVar6 = (**(code **)(*param_1 + 0x130))(iVar5);
  if (iVar6 == 0) {
    iVar5 = (**(code **)(*param_1 + 0x134))(iVar5);
    if (iVar5 == 0) {
      piStack_88 = (int *)0x0;
      piStack_84 = (int *)0x0;
      iStack_68 = 0;
      iStack_80 = 0;
      iStack_70 = 0;
      iStack_4._1_3_ = 0;
      uVar2 = iStack_4._1_3_;
      iStack_4._0_1_ = 1;
      iStack_4._1_3_ = 0;
      iVar5 = 0;
      if ((int *)in_ECX[0x75] != (int *)0x0) {
        if ((in_ECX[0x76] == 0) || (piVar7 = (int *)in_ECX[0x75], 1 < *(uint *)(in_ECX[0x76] + 4)))
        {
          FUN_00478c80(0x3f800000);
          iStack_4._0_1_ = 2;
          piStack_88 = (int *)FUN_00700610(auStack_54);
          iStack_4._0_1_ = 1;
          FUN_004781a0();
          piVar7 = piStack_88;
          uVar2 = iStack_4._1_3_;
        }
        iStack_4._1_3_ = uVar2;
        piStack_88 = piVar7;
        uVar1 = *(ushort *)((int)piStack_88 + 0xb6);
        uVar4 = 0;
        if (uVar1 != 0) {
          do {
            piVar7 = (int *)FUN_00405790(uVar4);
            if (piVar7 != (int *)0x0) {
              piVar7 = (int *)(**(code **)(*piVar7 + 0x10))();
              if ((piVar7 != (int *)0x0) && ((int *)local_78[0x75] != piStack_88)) {
                puVar8 = (undefined4 *)FUN_00700790(&uStack_6c);
                iStack_4._0_1_ = 3;
                FUN_0075fa90(*puVar8);
                iStack_4._0_1_ = 1;
                FUN_007016a0();
                if (iStack_80 != 0) {
                  (**(code **)(*piVar7 + 0x8c))(iStack_80);
                }
              }
            }
            uVar4 = uVar4 + 1;
            in_ECX = local_78;
          } while (uVar4 < uVar1);
        }
        uVar2 = iStack_4._1_3_;
        iVar5 = iStack_68;
        if ((int *)in_ECX[0x75] != piStack_88) {
          (**(code **)(*piStack_88 + 0x9c))();
          iStack_68 = FUN_0054d2c0();
          uVar2 = iStack_4._1_3_;
          iVar5 = iStack_68;
          if (iStack_68 != 0) {
            (**(code **)(*piStack_88 + 0xa0))(iStack_68);
            uVar2 = iStack_4._1_3_;
            iVar5 = iStack_68;
          }
        }
      }
      iStack_68 = iVar5;
      iStack_4._1_3_ = uVar2;
      piVar9 = (int *)in_ECX[0x76];
      piVar7 = in_ECX + 0x76;
      if (piVar9 != (int *)0x0) {
        if (1 < (uint)piVar9[1]) {
          FUN_00478c80(0x3f800000);
          iStack_4._0_1_ = 4;
          piStack_84 = (int *)FUN_00700610(auStack_54);
          iStack_4._0_1_ = 1;
          FUN_004781a0();
          piVar9 = piStack_84;
        }
        piStack_84 = piVar9;
        uStack_5c = (uint)*(ushort *)((int)piStack_84 + 0xb6);
        uStack_6c = 0;
        if (uStack_5c != 0) {
          do {
            piVar7 = (int *)FUN_00405790(uStack_6c);
            if ((piVar7 != (int *)0x0) &&
               (piVar7 = (int *)(**(code **)(*piVar7 + 0x10))(), piVar7 != (int *)0x0)) {
              if ((int *)in_ECX[0x76] != piStack_84) {
                puVar8 = (undefined4 *)FUN_00700790(auStack_64);
                iStack_4._0_1_ = 5;
                FUN_0075fa90(*puVar8);
                iStack_4._0_1_ = 1;
                FUN_007016a0();
                if (iStack_80 != 0) {
                  (**(code **)(*piVar7 + 0x8c))(iStack_80);
                }
              }
              if ((piVar7[0x2e] != 0) && (*(int *)(piVar7[0x2e] + 0xc) != 0)) {
                piVar9 = (int *)FUN_00550790(piVar7);
                if ((piVar9 == (int *)0x0) || (iVar5 = (**(code **)(*piVar9 + 0x54))(), iVar5 == 0))
                {
LAB_005261e0:
                  uVar11 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
                  FUN_004a7a60("Could not correctly handle skinning for duplicate NPC \"%s\" (%08X)."
                               ,uVar11);
                }
                else {
                  (**(code **)(*piVar9 + 0x54))();
                  iVar5 = FUN_00523d60();
                  if (iVar5 == 0) goto LAB_005261e0;
                  (**(code **)(*piVar9 + 0x54))();
                  iVar6 = FUN_00523d60();
                  iVar5 = *(int *)(iVar6 + 0x14);
                  uVar4 = *(uint *)(*(int *)(iVar6 + 8) + 0x40);
                  iVar6 = piVar7[0x2e];
                  uVar10 = 0;
                  if (uVar4 != 0) {
                    do {
                      *(undefined4 *)(*(int *)(iVar6 + 0x14) + uVar10 * 4) =
                           *(undefined4 *)(iVar5 + uVar10 * 4);
                      uVar10 = uVar10 + 1;
                      in_ECX = local_78;
                    } while (uVar10 < uVar4);
                  }
                }
                puVar8 = (undefined4 *)FUN_00700790(&piStack_60);
                iStack_4._0_1_ = 6;
                FUN_0075fa90(*puVar8);
                iStack_4._0_1_ = 1;
                FUN_007016a0();
                if (iStack_70 != 0) {
                  FUN_00478300(iStack_70);
                }
              }
            }
            uStack_6c = uStack_6c + 1;
          } while (uStack_6c < uStack_5c);
        }
        piVar7 = in_ECX + 0x76;
        if ((int *)in_ECX[0x76] != piStack_84) {
          iVar5 = iStack_68;
          if (iStack_68 == 0) {
            (**(code **)(*piStack_84 + 0x9c))();
            iVar5 = FUN_0054d2c0();
            if (iVar5 == 0) goto LAB_00525f13;
          }
          (**(code **)(*piStack_84 + 0xa0))(iVar5);
        }
      }
LAB_00525f13:
      if (((in_ECX[0x75] == 0) && (*piVar7 == 0)) && (in_ECX[0x3a] != 0)) {
        FaceGen_ChokepointAlloc(&piStack_88,&piStack_84,in_ECX,0,0);
        *(undefined2 *)(in_ECX + 0x78) = *(undefined2 *)(in_ECX[0x3a] + 0x2fc);
        FUN_0075fa90(piStack_88);
        FUN_0075fa90(piStack_84);
      }
      if (piStack_88 == (int *)0x0) {
        if (piStack_84 == (int *)0x0) {
          FUN_004a7a60("Cannot create a head for an NPC (%d) (no race or bad race data).",in_ECX[3])
          ;
          if (piStack_88 != (int *)0x0) goto LAB_00525f9f;
          goto LAB_00526085;
        }
LAB_00526091:
        puVar8 = &DAT_00b26dc4;
        puVar12 = auStack_30;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
        (**(code **)(*piStack_84 + 0xb0))(piStack_88 == (int *)0x0);
        (**(code **)(*piStack_88 + 0xb8))(unaff_EBX == (int *)0x0);
        unaff_EBX[0x15] = DAT_00b3f9a8;
        unaff_EBX[0x16] = DAT_00b3f9ac;
        unaff_EBX[0x17] = DAT_00b3f9b0;
        iVar5 = *unaff_EBX;
        uVar11 = FUN_004d7c50(&uStack_5c,auStack_38,1);
        (**(code **)(iVar5 + 0xa8))(uVar11);
        piVar7 = piStack_88;
        (**(code **)(*piStack_88 + 0x84))(unaff_EBP,1);
        unaff_EDI[0x45] = (int)param_1;
        FUN_007165b0(unaff_EDI,piStack_88);
        (**(code **)(*unaff_EDI + 0xc4))(piVar7,1);
      }
      else {
LAB_00525f9f:
        iVar5 = (**(code **)(*piStack_88 + 0x9c))();
        if ((iVar5 != 0) &&
           (fVar13 = (float10)FUN_004d7570(), fVar13 < (float10)0.0 != (fVar13 == (float10)0.0))) {
          piVar7 = (int *)(**(code **)(*piStack_88 + 0x9c))();
          (**(code **)(*piVar7 + 0x9c))(1,1);
          piVar7 = (int *)(**(code **)(*unaff_EBP + 0x9c))();
          (**(code **)(*piVar7 + 0x94))(1);
        }
        (**(code **)(*piStack_88 + 0xb0))(1);
        (**(code **)(*unaff_EBX + 0xb8))(1);
        unaff_EBP[0x15] = DAT_00b3f9a8;
        unaff_EBP[0x16] = DAT_00b3f9ac;
        unaff_EBP[0x17] = DAT_00b3f9b0;
        piVar7 = &DAT_00b26dc4;
        piVar9 = unaff_EBP + 0xc;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        (**(code **)(*piStack_60 + 0x84))(unaff_EBP,1);
        piStack_88[0x45] = (int)param_1;
        FUN_007165b0(piStack_88,uStack_74);
LAB_00526085:
        if (piStack_84 != (int *)0x0) goto LAB_00526091;
      }
      if (((piStack_88 != (int *)0x0) &&
          (piVar7 = (int *)(**(code **)(*piStack_88 + 0x9c))(), piVar7 != (int *)0x0)) ||
         ((piStack_84 != (int *)0x0 &&
          (piVar7 = (int *)(**(code **)(*piStack_84 + 0x9c))(), piVar7 != (int *)0x0)))) {
        (**(code **)(*piVar7 + 0x78))(0,1,1,1,1,0);
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_007016a0();
      iStack_4 = 0xffffffff;
      FUN_007016a0();
    }
  }
  FUN_00707370(0,0);
LAB_00526214:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00526230(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_29;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_1c = 0;
  puVar4 = (uint *)(in_ECX + 0x108);
  do {
    local_24 = 0;
    uVar1 = local_1c;
    do {
      uVar3 = *puVar4;
      local_28 = puVar4[1];
      uVar5 = 0;
      uVar6 = local_24;
      local_20 = puVar4;
      local_8 = uVar3;
      if (uVar3 != 0) {
        do {
          uVar7 = 0;
          if (local_28 != 0) {
            iVar2 = in_ECX + (uVar1 + 0xb + uVar6) * 0x18;
            do {
              if ((*(int *)(iVar2 + 0xc) == 0) ||
                 (*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2 == 0)) {
                FUN_00984d5e();
              }
              local_c = *(undefined4 *)
                         (*(int *)(iVar2 + 0xc) + (*(int *)(iVar2 + 4) * uVar5 + uVar7) * 4);
              FUN_0046ac70(&local_c,4);
              uVar7 = uVar7 + 1;
              uVar1 = local_1c;
              uVar3 = local_8;
              puVar4 = local_20;
              uVar6 = local_24;
            } while (uVar7 < local_28);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      local_24 = uVar6 + 1;
      puVar4 = puVar4 + 6;
    } while (local_24 < 2);
    local_1c = uVar1 + 2;
  } while (local_1c < 4);
  local_18 = 0;
  if (*(int *)(in_ECX + 0xe8) != 0) {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0xc);
  }
  local_20 = puVar4;
  FUN_0046ac90(&local_18,4);
  local_14 = 0;
  if (*(int *)(in_ECX + 0x1c8) != 0) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x1c8) + 0xc);
  }
  FUN_0046ac90(&local_14,4);
  local_10 = 0;
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0xc);
  }
  FUN_0046ac90(&local_10,4);
  FUN_0046ac70(in_ECX + 0x1cc,4);
  FUN_0046ac70(in_ECX + 0x1e8,4);
  local_29 = 0;
  iVar2 = FUN_00519d20();
  if (iVar2 == 1) {
    local_29 = 1;
  }
  FUN_0046ac70(&local_29,1);
  return;
}



void FUN_005263b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  LONG LVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b7feb;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar11 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  puVar14 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    local_1c = (undefined4 *)(uint)*(ushort *)(*(int *)(in_ECX + 0x1d4) + 0xb6);
    if (local_1c != (undefined4 *)0x0) {
      do {
        if (puVar10 < (undefined4 *)(uint)*(ushort *)(*(int *)(in_ECX + 0x1d4) + 0xb6)) {
          piVar12 = *(int **)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0xb0) + (int)puVar10 * 4);
        }
        else {
          piVar12 = (int *)0x0;
        }
        iVar9 = 0xf;
        bVar16 = true;
        pcVar13 = (char *)piVar12[2];
        pcVar15 = "FaceGenEyeLeft";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar16 = *pcVar13 == *pcVar15;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        } while (bVar16);
        if ((bVar16) &&
           (puVar11 = (undefined4 *)(**(code **)(*piVar12 + 0x10))(uVar5), local_28 != puVar11)) {
          if ((local_28 != (undefined4 *)0x0) &&
             (LVar6 = InterlockedDecrement(local_28 + 1), LVar6 == 0)) {
            (**(code **)*local_28)(1);
          }
          local_28 = puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar11 + 1);
          }
        }
        iVar9 = 0x10;
        bVar16 = true;
        pcVar13 = (char *)piVar12[2];
        pcVar15 = "FaceGenEyeRight";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar16 = *pcVar13 == *pcVar15;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        } while (bVar16);
        if ((bVar16) &&
           (puVar11 = (undefined4 *)(**(code **)(*piVar12 + 0x10))(), local_24 != puVar11)) {
          if ((local_24 != (undefined4 *)0x0) &&
             (LVar6 = InterlockedDecrement(local_24 + 1), LVar6 == 0)) {
            (**(code **)*local_24)(1);
          }
          local_24 = puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar11 + 1);
          }
        }
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      } while (puVar10 < local_1c);
      puVar11 = local_28;
      puVar14 = local_24;
      if ((local_28 != (undefined4 *)0x0) && (local_24 != (undefined4 *)0x0)) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_e = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        if (param_1 == (undefined4 *)0x0) {
          FUN_00402e30(&uStack_14,"Data\\Textures\\Characters\\Eyes\\EyeDefault.dds");
        }
        else {
          puVar7 = (undefined1 *)param_1[10];
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&uStack_14,"Data\\Textures\\%s",puVar7);
        }
        FUN_00442890(&param_1,uStack_14,0,0);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (param_1 != (undefined4 *)0x0) {
          piVar12 = (int *)FUN_00405760(&local_1c);
          puVar10 = local_1c;
          iVar9 = *piVar12;
          if (((local_1c != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(local_1c + 1), LVar6 == 0)) &&
             (puVar10 != (undefined4 *)0x0)) {
            (**(code **)*puVar10)(1);
          }
          piVar12 = (int *)FUN_00405760(&puStack_18);
          iVar1 = *piVar12;
          if (((puStack_18 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puStack_18 + 1), LVar6 == 0)) &&
             (puStack_18 != (undefined4 *)0x0)) {
            (**(code **)*puStack_18)(1);
          }
          if ((iVar9 != 0) && (iVar1 != 0)) {
            piVar12 = *(int **)(iVar9 + 0x18);
            if (piVar12 == (int *)0x0) {
LAB_00526648:
              bVar3 = 0;
            }
            else {
              iVar9 = (**(code **)(*piVar12 + 0x54))();
              if (4 < iVar9) {
                (**(code **)(*piVar12 + 0x54))();
              }
              iVar9 = (**(code **)(*piVar12 + 0x54))();
              if ((iVar9 < 5) || (iVar9 = (**(code **)(*piVar12 + 0x54))(), 10 < iVar9))
              goto LAB_00526648;
              bVar3 = 1;
            }
            piVar2 = *(int **)(iVar1 + 0x18);
            if (((piVar2 == (int *)0x0) || (iVar9 = (**(code **)(*piVar2 + 0x54))(), iVar9 < 5)) ||
               (iVar9 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar9)) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            if (((int *)(-(uint)bVar3 & (uint)piVar12) != (int *)0x0) &&
               ((int *)(-(uint)bVar4 & (uint)piVar2) != (int *)0x0)) {
              (**(code **)(*(int *)(-(uint)bVar3 & (uint)piVar12) + 0x80))(0,param_1);
              (**(code **)(*(int *)(-(uint)bVar4 & (uint)piVar2) + 0x80))(0,local_4);
              local_4._0_1_ = 2;
              FUN_007016a0();
              local_4._0_1_ = 1;
              FUN_00402da0();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_007016a0();
              local_4 = 0xffffffff;
              FUN_007016a0();
              goto LAB_005268ac;
            }
          }
          puStack_18 = (undefined4 *)FUN_00401f00(0x30);
          local_4._0_1_ = 4;
          if (puStack_18 == (undefined4 *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_007043b0();
          }
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_004057b0(param_1);
          FUN_00405870(3);
          FUN_00405900(2);
          iVar9 = FUN_00707530(6);
          if (((iVar9 != 0) &&
              (FUN_00708560(&puStack_18,6), puVar10 = puStack_18, puStack_18 != (undefined4 *)0x0))
             && ((LVar6 = InterlockedDecrement(puStack_18 + 1), LVar6 == 0 &&
                 (puVar10 != (undefined4 *)0x0)))) {
            (**(code **)*puVar10)(1);
          }
          FUN_00405680(uVar8);
          iVar9 = FUN_00707530(6);
          if ((((iVar9 != 0) &&
               (FUN_00708560(&puStack_18,6), puVar10 = puStack_18, puStack_18 != (undefined4 *)0x0))
              && (LVar6 = InterlockedDecrement(puStack_18 + 1), LVar6 == 0)) &&
             (puVar10 != (undefined4 *)0x0)) {
            (**(code **)*puVar10)(1);
          }
          FUN_00405680(uVar8);
        }
        puVar10 = param_1;
        local_4._0_1_ = 2;
        if (((param_1 != (undefined4 *)0x0) &&
            (LVar6 = InterlockedDecrement(param_1 + 1), LVar6 == 0)) &&
           (puVar10 != (undefined4 *)0x0)) {
          (**(code **)*puVar10)(1);
        }
        local_4._0_1_ = 1;
        FUN_00401f20(uStack_14);
      }
    }
    iVar9 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x58))("FaceGenEyeLeft");
    if (iVar9 != 0) {
      FUN_007b8940(iVar9,1,1,1);
    }
    iVar9 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x58))("FaceGenEyeRight");
    if (iVar9 != 0) {
      FUN_007b8940(iVar9,1,1,1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((puVar14 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar14 + 1), LVar6 == 0)) {
    (**(code **)*puVar14)(1);
  }
  local_4 = 0xffffffff;
  if ((puVar11 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar11 + 1), LVar6 == 0)) {
    (**(code **)*puVar11)(1);
  }
LAB_005268ac:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005268d0(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  bool bVar7;
  
  piVar2 = param_1;
  FUN_0047ab90(*(undefined4 *)(in_ECX + 0xe8),*(uint *)(in_ECX + 0x28) & 1);
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((iVar4 != 0) && (*(int **)(iVar4 + 0x58) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x58) + 0x31c))(1);
  }
  if (param_1[0xf] == 0) {
    bVar7 = true;
    param_1 = (int *)0x1;
    iVar5 = FUN_005e0380();
    if ((iVar5 != 0) &&
       (bVar7 = (*(uint *)(iVar5 + 0x1c) >> 0x14 & 1) == 0,
       (*(uint *)(iVar5 + 0x1c) >> 0x15 & 1) != 0)) {
      param_1 = (int *)0x0;
    }
    bVar1 = true;
    if (((*(uint *)(DAT_00b33b00 + 0x18) >> 1 & 1) != 0) &&
       (uVar6 = FUN_004533f0(piVar2,1), (uVar6 & 0x8000000) != 0)) {
      bVar1 = false;
    }
    cVar3 = (**(code **)(*piVar2 + 0x198))(0);
    if (((cVar3 == '\0') || (uVar6 = FUN_004533f0(piVar2,1), (uVar6 & 0x40) == 0)) && (bVar1)) {
      FUN_005227a0(piVar2,bVar7,param_1,0,0);
    }
  }
  if ((DAT_00b120dc == '\0') || (DAT_00b120b4 == '\0')) {
    FUN_00525a70(piVar2,param_2);
  }
  FUN_00524280(piVar2,param_2);
  iVar5 = FUN_006600d0(1);
  if (param_2 != iVar5) {
    FUN_00524510(piVar2,0);
  }
  if ((iVar4 != 0) && (*(int **)(iVar4 + 0x58) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x58) + 0x31c))(0);
  }
  return;
}



uint FUN_00526a30(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar1) {
    FUN_00523b10(*(ushort *)(in_ECX + 0xe) + uVar1);
  }
  FUN_005254d0(uVar1,param_1);
  return uVar1;
}



void FUN_00526a70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b8080;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a53dd4;
  in_ECX[9] = &PTR_LAB_00a53d6c;
  in_ECX[0x11] = &PTR_LAB_00a53d58;
  in_ECX[0x15] = &PTR_FUN_00a53d38;
  in_ECX[0x1a] = &PTR_LAB_00a53d14;
  in_ECX[0x20] = &PTR_LAB_00a53cfc;
  in_ECX[0x22] = &PTR_LAB_00a53cdc;
  in_ECX[0x25] = &PTR_FUN_00a53cc8;
  in_ECX[0x28] = &PTR_FUN_00a53cb4;
  in_ECX[0x2b] = &PTR_FUN_00a53c94;
  in_ECX[0x31] = &PTR_LAB_00a53c80;
  in_ECX[0x39] = &PTR_LAB_00a53c6c;
  local_4 = 6;
  FUN_00521da0(uVar2);
  in_ECX[0x7c] = &PTR__scalar_deleting_destructor__00a53950;
  FUN_00401f20(in_ECX[0x7d]);
  puVar1 = (undefined4 *)in_ECX[0x77];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x76];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x75];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x5a,0x18,4,FUN_0043ace0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x42,0x18,4,FUN_0043ace0);
  local_4 = 0xffffffff;
  FUN_0051e850();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00526ce0(void)

{
  void *pvVar1;
  uint uVar2;
  void *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b80da;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  pvVar1 = *(void **)((int)in_ECX + 0xa8);
  local_4 = 3;
  *(undefined ***)((int)in_ECX + 0xa4) = &PTR_FUN_00a539bc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4,uVar2);
  }
  *(undefined ***)((int)in_ECX + 0x94) = &PTR__scalar_deleting_destructor__00a3640c;
  FUN_00401f20(*(undefined4 *)((int)in_ECX + 0x98),uVar2);
  *(undefined ***)((int)in_ECX + 0x84) = &PTR__scalar_deleting_destructor__00a53964;
  FUN_00401f20(*(undefined4 *)((int)in_ECX + 0x88));
  *(undefined ***)((int)in_ECX + 0x74) = &PTR__scalar_deleting_destructor__00a5395c;
  FUN_00401f20(*(undefined4 *)((int)in_ECX + 0x78));
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(in_ECX,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00526db0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  
  piVar1 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x168))();
  bVar4 = param_1 != DAT_00b333c4;
  piVar3 = (int *)param_1[0xf];
  param_1 = (int *)0x1;
  if (bVar4) goto LAB_00526e26;
  param_1 = (int *)0x2;
  do {
    if ((piVar1 == DAT_00b333c4) && (param_1 == (int *)0x1)) {
      uVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
      piVar3 = (int *)FUN_00660110(1);
    }
LAB_00526e26:
    FUN_005268d0(piVar1,uVar2);
    FUN_0047bc40();
    if (piVar3 != (int *)0x0) {
      FUN_00707610();
      FUN_00707980();
      (**(code **)(*piVar3 + 0x78))();
      FUN_00707370(0,0);
    }
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  return;
}



void FUN_00526e70(void)

{
  void *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b8113;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  _eh_vector_destructor_iterator_((void *)((int)in_ECX + 0x60),0x18,4,FUN_0043ace0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(in_ECX,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00526ee0(byte param_1)

{
  FUN_00526a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00526f00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (*(ushort *)((int)in_ECX + 0x1fa) != 0) {
    iVar1 = *(int *)(in_ECX[0x7d] + -4 + (uint)*(ushort *)((int)in_ECX + 0x1fa) * 4);
    FaceGen_FallbackPopulator(iVar1,in_ECX[0x3a] + 0x29c);
    iVar2 = (**(code **)(*in_ECX + 0x128))(0x45);
    piVar3 = in_ECX + 0x5a;
    if (iVar2 == 0) {
      piVar3 = in_ECX + 0x42;
    }
    FaceGen_FallbackPopulator(iVar1 + 0x60,piVar3);
    FUN_00405020(*(ushort *)((int)in_ECX + 0x1fa) - 1);
    if (iVar1 != 0) {
      FUN_00526e70();
      FUN_00401f20(iVar1);
    }
    FUN_00521be0();
    return;
  }
  return;
}



void FUN_00526fa0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  param_4 = (undefined4 *)*param_4;
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xc) - iVar4 >> 2;
  }
  uVar6 = CONCAT44(iVar4,iVar1);
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 2;
    }
    if (-iVar4 - 1U < param_3) {
      uVar6 = FUN_00790b90();
    }
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar4 >> 2;
    }
    if (uVar2 < iVar1 + param_3) {
      if (-(uVar2 >> 1) - 1 < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar4 >> 2;
      }
      if (uVar2 < iVar1 + param_3) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 2;
        }
        uVar2 = iVar4 + param_3;
      }
      iVar1 = FUN_00401f00(uVar2 * 4);
      uVar3 = FUN_007a25c0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_00784b30(uVar3,param_3,&param_4);
      FUN_007a25c0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar4 >> 2;
      }
      if (iVar4 != 0) {
        FUN_00401f20(iVar4);
      }
      *(int *)(in_ECX + 4) = iVar1;
      *(uint *)(in_ECX + 0xc) = uVar2 * 4 + iVar1;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar5) * 4;
      return;
    }
    iVar1 = *(int *)(in_ECX + 8);
    iVar4 = param_3 * 4;
    if ((uint)(iVar1 - param_2 >> 2) < param_3) {
      FUN_007a25c0(param_2,iVar1,iVar4 + param_2);
      FUN_00784b30(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 2),&param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar4;
      FUN_00523af0(param_2,*(int *)(in_ECX + 8) + param_3 * -4,&param_4);
      return;
    }
    iVar5 = iVar1 + param_3 * -4;
    uVar3 = FUN_007a25c0(iVar5,iVar1,iVar1);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    FUN_005254a0(param_2,iVar5,iVar1);
    FUN_00523af0(param_2,iVar4 + param_2,&param_4);
  }
  return;
}



void FUN_00527160(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  undefined1 local_8 [4];
  uint local_4;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 2;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 2;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_00526fa0(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
    return;
  }
  if ((uVar2 != 0) && (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar2) >> 2)))
  {
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar1 = uVar2 + param_1 * 4;
    local_4 = uVar2;
    if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_00439050(local_8,in_ECX,uVar1,in_ECX,uVar3);
  }
  return;
}



void FUN_00527220(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b81a0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0051e560(uVar1);
  local_4 = 0;
  FUN_0046e450();
  *in_ECX = &PTR_FUN_00a53dd4;
  in_ECX[9] = &PTR_LAB_00a53d6c;
  in_ECX[0x11] = &PTR_LAB_00a53d58;
  in_ECX[0x15] = &PTR_FUN_00a53d38;
  in_ECX[0x1a] = &PTR_LAB_00a53d14;
  in_ECX[0x20] = &PTR_LAB_00a53cfc;
  in_ECX[0x22] = &PTR_LAB_00a53cdc;
  in_ECX[0x25] = &PTR_FUN_00a53cc8;
  in_ECX[0x28] = &PTR_FUN_00a53cb4;
  in_ECX[0x2b] = &PTR_FUN_00a53c94;
  in_ECX[0x31] = &PTR_LAB_00a53c80;
  in_ECX[0x39] = &PTR_LAB_00a53c6c;
  _eh_vector_constructor_iterator_(in_ECX + 0x42,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x5a,0x18,4,FUN_0043eb30,FUN_0043ace0);
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x7c] = &PTR__scalar_deleting_destructor__00a53950;
  *(undefined2 *)(in_ECX + 0x7e) = 0;
  *(undefined2 *)((int)in_ECX + 0x1fe) = 1;
  *(undefined2 *)((int)in_ECX + 0x1fa) = 0;
  *(undefined2 *)(in_ECX + 0x7f) = 0;
  in_ECX[0x7d] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined1 *)(in_ECX + 1) = 0x23;
  FUN_005255a0();
  FUN_00468210(0x32);
  FUN_00468180(5);
  FUN_004681b0(0x32);
  FUN_004681e0(0x32);
  in_ECX[0x7b] = 0;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005273a0(char param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  LONG LVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float local_d4;
  float local_d0;
  undefined1 local_cc [92];
  undefined1 auStack_70 [4];
  undefined1 local_6c [92];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b81e9;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff20;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(local_cc,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  _eh_vector_constructor_iterator_(local_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00552880(local_6c,uVar5);
  FUN_00553b70(_DAT_00b362d4,in_ECX[0x3a] + 0x29c,local_cc);
  fVar9 = (float10)FUN_00553b30(local_cc,0,0);
  local_d0 = (float)fVar9;
  fVar9 = (float10)FUN_00553b30(local_cc,0,1);
  local_d4 = local_d0;
  if (param_1 == '\0') {
    iVar6 = FUN_0047df80(0);
    local_d4 = ((float)iVar6 / 32767.0) * 50.0 + 15.0;
  }
  local_d0 = (float)fVar9 - (local_d0 - local_d4);
  if ((local_d4 <= 15.0) || (local_d4 < 65.0)) {
    if (local_d4 <= 15.0) {
      local_d4 = 15.0;
    }
  }
  else {
    local_d4 = 65.0;
  }
  if ((local_d0 <= 15.0) || (local_d0 < 65.0)) {
    if (local_d0 <= 15.0) {
      local_d0 = 15.0;
    }
  }
  else {
    local_d0 = 65.0;
  }
  FUN_00555a00(local_cc,0,0,local_d4);
  FUN_00555a00(local_cc,0,1,local_d0);
  iVar6 = FUN_00519d20();
  if (iVar6 == 0) {
    fVar2 = -2.0;
  }
  else {
    fVar2 = 2.0;
  }
  fVar9 = (float10)FUN_00553b30(local_cc,1,0);
  local_d0 = (float)(fVar9 - (float10)fVar2);
  iVar6 = FUN_00519d20();
  if (iVar6 == 0) {
    fVar2 = -2.0;
  }
  else {
    fVar2 = 2.0;
  }
  fVar9 = (float10)FUN_00553b30(local_cc,1,1);
  if (param_2 == '\0') {
    iVar6 = FUN_0047df80(0);
    local_d4 = ((float)iVar6 / 32767.0) * 4.0 - 2.0;
    local_d0 = (float)(fVar9 - (float10)fVar2) - (local_d0 - local_d4);
  }
  else {
    local_d4 = local_d0;
    local_d0 = (float)(fVar9 - (float10)fVar2);
  }
  if ((local_d4 <= -2.0) || (local_d4 < 2.0)) {
    if (local_d4 <= -2.0) {
      local_d4 = -2.0;
    }
  }
  else {
    local_d4 = 2.0;
  }
  if ((local_d0 <= -2.0) || (local_d0 < 2.0)) {
    if (local_d0 <= -2.0) {
      local_d0 = -2.0;
    }
  }
  else {
    local_d0 = 2.0;
  }
  iVar6 = FUN_00519d20();
  if (iVar6 == 0) {
    fVar2 = -2.0;
  }
  else {
    fVar2 = 2.0;
  }
  iVar6 = FUN_00519d20();
  if (iVar6 == 0) {
    fVar3 = -2.0;
  }
  else {
    fVar3 = 2.0;
  }
  local_d0 = fVar3 + local_d0;
  FUN_00555a00(local_cc,1,0,fVar2 + local_d4);
  FUN_00555a00(local_cc,1,1,local_d0);
  if (param_3 == '\0') {
    iVar6 = FUN_0047df80(0);
    in_ECX[0x73] = (int)((float)iVar6 / 32767.0);
  }
  FUN_00552c10(in_ECX[0x3a] + 0x29c,local_cc,local_6c);
  iVar6 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar7 = in_ECX + 0x5a;
  if (iVar6 == 0) {
    piVar7 = in_ECX + 0x42;
  }
  cVar4 = FUN_00551990(auStack_70,piVar7);
  if (cVar4 != '\0') {
    iVar6 = (**(code **)(*in_ECX + 0x128))(0x45);
    piVar7 = in_ECX + 0x5a;
    if (iVar6 == 0) {
      piVar7 = in_ECX + 0x42;
    }
    FaceGen_FallbackPopulator(auStack_70,piVar7);
    puVar1 = (undefined4 *)in_ECX[0x77];
    if (puVar1 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar1 + 1);
      if ((LVar8 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0x77] = 0;
    }
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  _eh_vector_destructor_iterator_(auStack_70,0x18,4,FUN_0043ace0);
  puStack_8 = (undefined1 *)0xffffffff;
  _eh_vector_destructor_iterator_(&local_d0,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00527860(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  char *pcVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  int unaff_retaddr;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  int iVar17;
  float fStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [4];
  undefined1 local_12c [84];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [4];
  undefined1 local_cc [84];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [88];
  int iStack_18;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b824f;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(local_12c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  _eh_vector_constructor_iterator_(local_cc,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = (**(code **)(*in_ECX + 0x128))(0x45,uVar2);
  piVar6 = in_ECX + 0x5a;
  if (iVar3 == 0) {
    piVar6 = in_ECX + 0x42;
  }
  FaceGen_SilentSkipLoop_TESRace_unk12(in_ECX[0x3a] + 0x29c,piVar6,auStack_130,0,0);
  fVar11 = (float10)FUN_00553b30(auStack_130,0,0);
  fVar12 = (float10)FUN_00553b30(auStack_130,0,1);
  fStack_140 = (float)unaff_retaddr;
  fVar16 = (float)fVar12 - ((float)fVar11 - fStack_140);
  if ((fStack_140 <= 15.0) || (fStack_140 < 65.0)) {
    if (fStack_140 <= 15.0) {
      fStack_140 = 15.0;
    }
  }
  else {
    fStack_140 = 65.0;
  }
  if ((fVar16 <= 15.0) || (fVar16 < 65.0)) {
    if (fVar16 <= 15.0) {
      fVar16 = 15.0;
    }
  }
  else {
    fVar16 = 65.0;
  }
  FUN_00555a00(auStack_130,0,0,fStack_140);
  FUN_00555a00(auStack_130,0,1,fVar16);
  FUN_00552880(auStack_d0);
  _eh_vector_constructor_iterator_(auStack_70,0x18,4,FUN_0043eb30,FUN_0043ace0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  TESNPC_FaceGenFiller(auStack_70);
  FUN_00552c10(auStack_70,auStack_130,auStack_d0);
  iVar3 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar6 = in_ECX + 0x5a;
  if (iVar3 == 0) {
    piVar6 = in_ECX + 0x42;
  }
  iVar3 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar4 = in_ECX + 0x5a;
  if (iVar3 == 0) {
    piVar4 = in_ECX + 0x42;
  }
  FaceGen_SilentSkipLoop_TESRace_unk12(auStack_d8,piVar4,piVar6,0,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  iVar3 = in_ECX[0x75];
  if (iVar3 != 0) {
    iVar17 = 2;
    do {
      if (iVar3 != 0) {
        uVar1 = *(ushort *)(iVar3 + 0xb6);
        uVar2 = 0;
        if (uVar1 != 0) {
          do {
            if ((((uVar2 < *(ushort *)(iVar3 + 0xb6)) &&
                 (piVar6 = *(int **)(*(int *)(iVar3 + 0xb0) + uVar2 * 4), piVar6 != (int *)0x0)) &&
                (iVar5 = (**(code **)(*piVar6 + 0x10))(), iVar5 != 0)) &&
               ((piVar6 = (int *)FUN_00550790(iVar5), piVar6 != (int *)0x0 &&
                (iVar7 = (**(code **)(*piVar6 + 0x54))(), iVar7 != 0)))) {
              uVar15 = 0;
              uVar14 = 0x3f800000;
              puVar13 = auStack_d8;
              iVar7 = iVar5;
              (**(code **)(*piVar6 + 0x54))(puVar13,iVar5,0x3f800000,0);
              FUN_00558840(puVar13,iVar7,uVar14,uVar15);
              iVar7 = 0xc;
              bVar10 = true;
              pcVar8 = *(char **)(iVar5 + 8);
              pcVar9 = "FaceGenHair";
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar10 = *pcVar8 == *pcVar9;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                FUN_00550980(iVar5,in_ECX[0x73]);
              }
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
        iVar3 = in_ECX[0x76];
      }
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  _DAT_00b39c7c = _DAT_00b39c7c + -1;
  if (_DAT_00b39c7c == 0) {
    _DAT_00b39c78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  iStack_10._0_1_ = 1;
  _eh_vector_destructor_iterator_(auStack_78,0x18,4,FUN_0043ace0);
  iStack_10 = (uint)iStack_10._1_3_ << 8;
  _eh_vector_destructor_iterator_(auStack_d8,0x18,4,FUN_0043ace0);
  iStack_10 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_138,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = iStack_18;
  return;
}



void FaceGen_LocalHelperCtor(void)

{
  ushort uVar1;
  void *in_ECX;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b82aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(in_ECX,0x18,4,FUN_0043eb30,FUN_0043ace0);
  *(undefined ***)((int)in_ECX + 0x74) = &PTR__scalar_deleting_destructor__00a5395c;
  *(undefined2 *)((int)in_ECX + 0x7c) = 0;
  *(undefined2 *)((int)in_ECX + 0x82) = 1;
  *(undefined2 *)((int)in_ECX + 0x7e) = 0;
  *(undefined2 *)((int)in_ECX + 0x80) = 0;
  *(undefined4 *)((int)in_ECX + 0x78) = 0;
  *(undefined ***)((int)in_ECX + 0x84) = &PTR__scalar_deleting_destructor__00a53964;
  *(undefined2 *)((int)in_ECX + 0x8c) = 0;
  *(undefined2 *)((int)in_ECX + 0x92) = 1;
  *(undefined2 *)((int)in_ECX + 0x8e) = 0;
  *(undefined2 *)((int)in_ECX + 0x90) = 0;
  *(undefined4 *)((int)in_ECX + 0x88) = 0;
  *(undefined ***)((int)in_ECX + 0x94) = &PTR__scalar_deleting_destructor__00a3640c;
  *(undefined2 *)((int)in_ECX + 0x9c) = 0;
  *(undefined2 *)((int)in_ECX + 0xa2) = 1;
  *(undefined2 *)((int)in_ECX + 0x9e) = 0;
  *(undefined2 *)((int)in_ECX + 0xa0) = 0;
  *(undefined4 *)((int)in_ECX + 0x98) = 0;
  *(undefined ***)((int)in_ECX + 0xa4) = &PTR_FUN_00a539bc;
  *(undefined2 *)((int)in_ECX + 0xac) = 0;
  *(undefined2 *)((int)in_ECX + 0xb2) = 1;
  *(undefined2 *)((int)in_ECX + 0xae) = 0;
  *(undefined2 *)((int)in_ECX + 0xb0) = 0;
  *(undefined4 *)((int)in_ECX + 0xa8) = 0;
  *(undefined4 *)((int)in_ECX + 0x68) = 0;
  *(undefined4 *)((int)in_ECX + 0x60) = 0;
  *(undefined4 *)((int)in_ECX + 100) = 0;
  *(undefined4 *)((int)in_ECX + 0x6c) = 0;
  *(undefined4 *)((int)in_ECX + 0x70) = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x7e) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)((int)in_ECX + 0x78) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x7e));
  }
  *(undefined2 *)((int)in_ECX + 0x7e) = 0;
  *(undefined2 *)((int)in_ECX + 0x80) = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x8e) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)((int)in_ECX + 0x88) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x8e));
  }
  *(undefined2 *)((int)in_ECX + 0x8e) = 0;
  *(undefined2 *)((int)in_ECX + 0x90) = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x9e) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)((int)in_ECX + 0x98) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x9e));
  }
  *(undefined2 *)((int)in_ECX + 0x9e) = 0;
  *(undefined2 *)((int)in_ECX + 0xa0) = 0;
  *(undefined1 *)((int)in_ECX + 0xb4) = 0;
  *(undefined4 *)((int)in_ECX + 0xc0) = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00527e40(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  char local_25;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_54 = param_1;
  cVar2 = FUN_004511c0();
  if (cVar2 == '#') {
    in_ECX[0x7b] = *(int *)(param_1 + 0x25c);
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    local_25 = '\0';
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4d414e44) {
        if (iVar3 == 0x4d414e43) {
          local_24 = 0;
          FUN_004510e0(&local_24);
          in_ECX[0x41] = local_24;
        }
        else if (iVar3 < 0x41544145) {
          if (iVar3 == 0x41544144) {
            iVar3 = FUN_0046bfd0();
            iVar3 = *(int *)(param_1 + 0x254) - iVar3;
            if (iVar3 == 0x17) {
              local_20 = 0;
              local_1c = 0;
              local_18 = 0;
              local_14 = 0;
              local_10 = 0;
              local_c = 0;
              uStack_b = 0;
              local_a = 0;
              FUN_0046bda0(param_1,&local_20,0x17);
              in_ECX[0x3b] = CONCAT13((undefined1)local_1c,local_20._1_3_);
              in_ECX[0x3c] = CONCAT13((undefined1)local_18,local_1c._1_3_);
              in_ECX[0x3d] = CONCAT13((undefined1)local_14,local_18._1_3_);
              in_ECX[0x3e] = CONCAT13((undefined1)local_10,local_14._1_3_);
              in_ECX[0x3f] = CONCAT13(local_c,local_10._1_3_);
              *(undefined1 *)(in_ECX + 0x40) = uStack_b;
            }
            else if (iVar3 == 0x15) {
              FUN_0046bda0(param_1,in_ECX + 0x3b,0x15);
            }
            else {
              uVar4 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3],param_1 + 0x1c);
              FUN_004a7a60("Unrecognized data format for NPC \'%s\' (%08X) in file \'%s\'.",uVar4);
            }
          }
          else if (iVar3 < 0x334d414f) {
            if (((((iVar3 == 0x334d414e) || (iVar3 == 0x304d414e)) || (iVar3 == 0x314d414e)) ||
                (iVar3 == 0x324d414e)) && (local_25 == '\0')) {
              uVar4 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3],param_1 + 0x1c);
              FUN_004a7a60("Found face texture for NPC \'%s\' (%08X) in file \'%s\'",uVar4);
              local_25 = '\x01';
            }
          }
          else if (iVar3 == 0x394d414e) {
LAB_0052835a:
            FUN_004510e0(in_ECX + 0x7a);
          }
          else if (iVar3 == 0x41474746) {
            iVar3 = 0;
            iVar5 = 1;
            goto LAB_005283e1;
          }
        }
        else if (iVar3 < 0x49524354) {
          if (iVar3 == 0x49524353) {
            local_24 = 0;
            FUN_004510e0(&local_24);
            in_ECX[0x32] = local_24;
            FUN_0046f020(in_ECX);
          }
          else {
            if (iVar3 == 0x42444f4d) goto LAB_0052849a;
            if (iVar3 == 0x44494445) {
              FUN_00450c20(&stack0xffffff94);
              (**(code **)(*in_ECX + 0xd8))();
            }
            else if (iVar3 == 0x44494b50) {
              local_24 = 0;
              FUN_004510e0(&local_24);
              FUN_00468380(local_24);
            }
          }
        }
        else if (iVar3 == 0x4c444f4d) {
LAB_0052849a:
          FUN_0046db00(in_ECX + 0x2b,param_1);
        }
        else if (iVar3 == 0x4c4c5546) {
          FUN_0046c7a0(in_ECX + 0x28,param_1);
        }
      }
      else if (iVar3 < 0x4d414e5b) {
        if (iVar3 == 0x4d414e5a) {
          FUN_004510e0(&local_50);
          (**(code **)(*in_ECX + 0x124))(local_50);
        }
        else {
          switch(iVar3) {
          case 0x4d414e45:
            FUN_004510e0(&local_34);
            FUN_0046bb20(&local_34,param_1);
            uVar9 = 0;
            ppuVar8 = &PTR_PTR_00b0541c;
            ppuVar7 = &PTR_PTR_00b02f9c;
            uVar6 = 0;
            uVar4 = FUN_004471a0(local_34);
            iVar3 = FUN_009832e6(uVar4,uVar6,ppuVar7,ppuVar8,uVar9);
            if (iVar3 == 0) {
              uVar4 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
              FUN_004a7a60("Could not find eyes (%08X) on NPC \'%s\' (%08X).",local_34,uVar4);
            }
            else {
              in_ECX[0x74] = iVar3;
            }
            break;
          case 0x4d414e46:
            if (1 < *(uint *)(param_1 + 0x254)) {
              FUN_004510f0(in_ECX + 0x78);
            }
            break;
          case 0x4d414e48:
            FUN_004510e0(&local_30);
            FUN_0046bb20(&local_30,param_1);
            uVar9 = 0;
            ppuVar8 = &PTR_PTR_00b05434;
            ppuVar7 = &PTR_PTR_00b02f9c;
            uVar6 = 0;
            uVar4 = FUN_004471a0(local_30);
            iVar3 = FUN_009832e6(uVar4,uVar6,ppuVar7,ppuVar8,uVar9);
            if (iVar3 == 0) {
              uVar4 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
              FUN_004a7a60("Could not find hair (%08X) on NPC \'%s\' (%08X).",local_30,uVar4);
            }
            else {
              in_ECX[0x72] = iVar3;
            }
            break;
          case 0x4d414e49:
            local_24 = 0;
            FUN_004510e0(&local_24);
            in_ECX[0xe] = local_24;
            break;
          case 0x4d414e4c:
            FUN_004510e0(&local_2c);
            if (0.0 <= local_2c) {
              if (local_2c <= 1.0) {
                in_ECX[0x73] = (int)local_2c;
              }
              else {
                local_2c = 1.0;
                in_ECX[0x73] = 0x3f800000;
              }
            }
            else {
              local_2c = 0.0;
              in_ECX[0x73] = 0;
            }
            break;
          case 0x4d414e52:
            local_24 = 0;
            FUN_004510e0(&local_24);
            in_ECX[0x3a] = local_24;
            break;
          case 0x4d414e53:
            local_44 = 0;
            local_40 = 0;
            FUN_00450c20(&local_44,8);
            FUN_004675e0(local_44,local_40);
          }
        }
      }
      else if (iVar3 < 0x53474747) {
        if (iVar3 == 0x53474746) {
          iVar3 = 0;
LAB_005283df:
          iVar5 = 0;
LAB_005283e1:
          local_24 = *(uint *)(param_1 + 0x254);
          puVar1 = (uint *)(in_ECX + (iVar5 + 0xb + iVar3 * 2) * 6);
          local_38 = local_24 >> 2;
          *puVar1 = local_38;
          puVar1[1] = 1;
          FUN_00527160(local_38,0);
          local_3c = &stack0xffffff90;
          _memset(&stack0xffffff90,0,local_24);
          FUN_00450c20(local_3c,local_24);
          local_24 = 0;
          if (local_38 != 0) {
            do {
              if ((puVar1[3] == 0) || ((int)(puVar1[4] - puVar1[3]) >> 2 == 0)) {
                FUN_00984d5e();
              }
              iVar5 = puVar1[1] * local_24;
              iVar3 = local_24 * 4;
              local_24 = local_24 + 1;
              *(undefined4 *)(puVar1[3] + iVar5 * 4) = *(undefined4 *)(local_3c + iVar3);
              param_1 = local_54;
            } while (local_24 < local_38);
          }
          FaceGen_FallbackPopulator(in_ECX + 0x42,in_ECX + 0x5a);
        }
        else if (iVar3 < 0x524c4349) {
          if (iVar3 == 0x524c4348) goto LAB_0052835a;
          if (iVar3 == 0x4f4c5053) {
            local_24 = 0;
            FUN_004510e0(&local_24);
            FUN_0046f420(local_24);
          }
          else if (iVar3 == 0x4f544e43) {
            local_4c = 0;
            local_48 = 0;
            FUN_00450c20(&local_4c,8);
            FUN_00469500(0);
            FUN_00469750(&local_4c);
          }
        }
        else if (iVar3 == 0x53424341) {
          FUN_00450c20(in_ECX + 10,0x10);
        }
      }
      else if (iVar3 < 0x54444f4e) {
        if (iVar3 == 0x54444f4d) goto LAB_0052849a;
        if (iVar3 == 0x53544746) {
          iVar3 = 1;
          goto LAB_005283df;
        }
        if (iVar3 == 0x54444941) {
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          FUN_00450c20(&local_60,0xc);
          FUN_00468280(&local_60);
        }
      }
      else if (iVar3 == 0x5a46464b) {
        FUN_004688d0(in_ECX + 0x25,param_1);
      }
      cVar2 = FUN_0044fea0();
      if (cVar2 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    if (((in_ECX[3] == 7) && (DAT_00b333c4 != (int *)0x0)) &&
       (iVar3 = (**(code **)(*DAT_00b333c4 + 0x170))(), iVar3 == 0)) {
      FUN_006c5420(in_ECX);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_00528550(int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  LONG LVar11;
  uint in_ECX;
  int *unaff_FS_OFFSET;
  int *piStack_e0;
  uint local_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined1 auStack_d0 [96];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_4e;
  ushort uStack_44;
  ushort uStack_42;
  ushort uStack_3e;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_2e;
  char cStack_1c;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b82e6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff10;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (int *)0x0) && (DAT_00b120bc != '\0')) {
    local_dc = in_ECX;
    uVar5 = (**(code **)(*param_1 + 0x154))(uVar4);
    puStack_d4 = (undefined4 *)(in_ECX + 0x1d8);
    uVar6 = (**(code **)(*param_1 + 0x138))(0);
    piVar7 = (int *)FUN_0075fa90(uVar6);
    piVar7 = (int *)*piVar7;
    piStack_e0 = piVar7;
    piVar8 = (int *)FUN_006f94a0(uVar5,PTR_s_FaceGenFace_00b10ca8);
    if ((piVar8 != (int *)0x0) &&
       ((puStack_d8 = (undefined4 *)(**(code **)(*piVar8 + 0x10))(), puStack_d8 != (undefined4 *)0x0
        && (piVar7 != (int *)0x0)))) {
      cVar3 = (**(code **)(*piVar7 + 0xbc))();
      if ((cVar3 == '\0') &&
         ((piVar7 = (int *)FUN_006f94a0(uVar5,"UpperBody"), piVar7 != (int *)0x0 &&
          (iVar9 = (**(code **)(*piVar7 + 8))(), iVar9 != 0)))) {
        piVar7 = (int *)FUN_00405790(0);
        if (piVar7 == (int *)0x0) {
          uVar1 = *(ushort *)(iVar9 + 0xb8);
          uVar4 = 0;
          in_ECX = local_dc;
          if (uVar1 != 0) {
            do {
              piVar7 = (int *)FUN_00405790(uVar4);
              if ((piVar7 != (int *)0x0) && (iVar9 = (**(code **)(*piVar7 + 0x10))(), iVar9 != 0)) {
                uVar5 = FUN_00707530(2);
                iVar10 = FUN_00560920(&DAT_00b3fa9c,uVar5);
                if ((iVar10 != 0) &&
                   (((*(char **)(iVar10 + 8) != (char *)0x0 &&
                     (iVar10 = __strnicmp(*(char **)(iVar10 + 8),"Skin",4), iVar10 == 0)) &&
                    (cVar3 = FUN_00481920(iVar9,puStack_d8,0x3f000000,1,0), cVar3 != '\0')))) {
                  (**(code **)(*piStack_e0 + 0xc0))(1);
                  in_ECX = local_dc;
                  break;
                }
              }
              uVar4 = uVar4 + 1;
              in_ECX = local_dc;
            } while (uVar4 < uVar1);
          }
        }
        else {
          iVar9 = (**(code **)(*piVar7 + 8))();
          if (iVar9 != 0) {
            local_dc = (uint)*(ushort *)(iVar9 + 0xb8);
            uVar4 = 0;
            if (local_dc != 0) {
              do {
                piVar7 = (int *)FUN_00405790(uVar4);
                if ((piVar7 != (int *)0x0) && (iVar9 = (**(code **)(*piVar7 + 0x10))(), iVar9 != 0))
                {
                  uVar5 = FUN_00707530(2);
                  iVar10 = FUN_00560920(&DAT_00b3fa9c,uVar5);
                  if (((iVar10 != 0) &&
                      ((*(char **)(iVar10 + 8) != (char *)0x0 &&
                       (iVar10 = __strnicmp(*(char **)(iVar10 + 8),"Skin",4), iVar10 == 0)))) &&
                     (cVar3 = FUN_00481920(iVar9,puStack_d8,0x3f000000,1,0), cVar3 != '\0')) {
                    (**(code **)(*piStack_e0 + 0xc0))(1);
                    break;
                  }
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < local_dc);
            }
          }
        }
      }
      if (*(int *)(in_ECX + 0xe8) != 0) {
        FaceGen_LocalHelperCtor();
        uStack_68 = *(undefined4 *)(in_ECX + 0x1cc);
        uStack_70 = *(undefined4 *)(in_ECX + 0x1c8);
        iStack_64 = *(int *)(in_ECX + 0x1d0);
        iStack_4 = 0;
        uStack_60 = FUN_00519d20();
        uStack_6c = *(undefined4 *)(in_ECX + 0x1e8);
        TESNPC_FaceGenFiller(auStack_d0);
        if (((iStack_64 == 0) && (iVar9 = *(int *)(in_ECX + 0xe8), iVar9 != -0xa8)) &&
           (cVar3 = FUN_0046cb60(), cVar3 == '\0')) {
          iStack_64 = *(int *)(iVar9 + 0xa8);
        }
        iVar9 = 0;
        do {
          piStack_e0 = (int *)FUN_0052bc50(iVar9);
          uVar4 = (uint)uStack_52;
          if (uStack_54 <= uVar4) {
            FUN_004e4a10(uStack_4e + uVar4);
          }
          FUN_0042bb90(uVar4,&piStack_e0);
          piStack_e0 = (int *)FUN_0052bd00(iVar9);
          uVar4 = (uint)uStack_42;
          if (uStack_44 <= uVar4) {
            FUN_004e4a10(uStack_3e + uVar4);
          }
          FUN_0042bb90(uVar4,&piStack_e0);
          uVar4 = (uint)uStack_32;
          piStack_e0 = (int *)(&PTR_s_FaceGenFace_00b10ca8)[iVar9];
          if (uStack_34 <= uVar4) {
            FUN_004e4a10(uStack_2e + uVar4);
          }
          FUN_0042bb90(uVar4,&piStack_e0);
          if (DAT_00b10d3c != '\0') {
            uVar5 = FUN_00524100(&puStack_d8,iVar9);
            iStack_4._0_1_ = 1;
            FUN_00526a30(uVar5);
            puVar2 = puStack_d8;
            iStack_4 = (uint)iStack_4._1_3_ << 8;
            if (((puStack_d8 != (undefined4 *)0x0) &&
                (LVar11 = InterlockedDecrement(puStack_d8 + 1), LVar11 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 9);
        cStack_1c = DAT_00b10d3c;
        BSFaceGen_DoSomething(*(undefined4 *)(in_ECX + 0x1d4),auStack_d0);
        BSFaceGen_DoSomething(*puStack_d4,auStack_d0);
        iStack_4 = 0xffffffff;
        FUN_00526ce0();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00528a10(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_ESI;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 uStack_124;
  int local_120;
  undefined1 uStack_11c;
  undefined4 auStack_118 [7];
  undefined1 auStack_fc [44];
  undefined1 auStack_d0 [196];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b831b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffec8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  local_120 = in_ECX;
  if ((int *)param_1[0xf] != (int *)0x0) {
    iVar7 = (**(code **)(*(int *)param_1[0xf] + 8))(uVar1);
  }
  piVar2 = (int *)FUN_00477ec0(0);
  uStack_124 = 0;
  iVar3 = (**(code **)(*param_1 + 0x164))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x164))();
    if (*(int *)(iVar3 + 0x98) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x164))();
      uStack_124 = *(undefined4 *)(*(int *)(iVar3 + 0x98) + 0x7c);
    }
  }
  if ((piVar2 == (int *)0x0) || (iVar7 == 0)) {
    FUN_004a7a60("Cannot create a head for an NPC (%d) that does not have a biped-head node.",
                 *(undefined4 *)(in_ECX + 0xc));
    goto LAB_00528d5f;
  }
  if (param_3 != (int *)0x0) {
    iVar7 = (**(code **)(*param_3 + 0x9c))();
    if (iVar7 != 0) {
      fVar10 = (float10)FUN_004d7570();
      if (fVar10 < (float10)0.0 != (fVar10 == (float10)0.0)) {
        piVar4 = (int *)(**(code **)(*param_3 + 0x9c))();
        (**(code **)(*piVar4 + 0x9c))(1,1);
        piVar4 = (int *)(**(code **)(*param_3 + 0x9c))();
        (**(code **)(*piVar4 + 0x94))(1);
      }
    }
    (**(code **)(*param_3 + 0xb0))(1);
    (**(code **)(*param_3 + 0xb8))(1);
    param_3[0x15] = DAT_00b3f9a8;
    param_3[0x16] = DAT_00b3f9ac;
    param_3[0x17] = DAT_00b3f9b0;
    piVar4 = &DAT_00b26dc4;
    piVar8 = param_3 + 0xc;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar8 = piVar8 + 1;
    }
    (**(code **)(*piVar2 + 0x84))(param_3,1);
    FUN_007165b0(param_3,uStack_124);
  }
  if (param_4 != (int *)0x0) {
    if ((*(short *)((int)param_4 + 0xb6) != 0) && (*(int *)param_4[0x2c] != 0)) {
      iVar7 = FUN_00707530(6);
      if (iVar7 != 0) {
        FaceGen_LocalHelperCtor();
        uStack_4 = 0;
        FaceGen_HelperPopulator(local_120,auStack_d0);
        BSFaceGen_DoSomething(param_4,auStack_d0);
        uStack_4 = 0xffffffff;
        FUN_00526ce0();
      }
    }
    iVar7 = *param_4;
    uStack_11c = param_3 == (int *)0x0;
    puVar6 = &DAT_00b26dc4;
    puVar9 = auStack_118;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    (**(code **)(iVar7 + 0xb0))(uStack_11c);
    (**(code **)(*param_4 + 0xb8))(local_120);
    iVar7 = *param_4;
    param_4[0x15] = DAT_00b3f9a8;
    param_4[0x16] = DAT_00b3f9ac;
    param_4[0x17] = DAT_00b3f9b0;
    uVar5 = FUN_004d7c50(auStack_fc,&local_120,1);
    (**(code **)(iVar7 + 0xa8))(uVar5);
    (**(code **)(*unaff_ESI + 0x84))(param_4,1);
    FUN_007165b0(param_4,unaff_EDI);
    (**(code **)(*param_4 + 0xc4))(unaff_ESI,1);
  }
  if (param_3 == (int *)0x0) {
LAB_00528ce5:
    if (param_4 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*param_4 + 0x9c))();
      if (piVar2 != (int *)0x0) goto LAB_00528cfa;
    }
  }
  else {
    piVar2 = (int *)(**(code **)(*param_3 + 0x9c))();
    if (piVar2 == (int *)0x0) goto LAB_00528ce5;
LAB_00528cfa:
    (**(code **)(*piVar2 + 0x78))(0,1,1,1,1,0);
  }
  FUN_0075fa90(param_3);
  FUN_0075fa90(param_4);
  FUN_00707980();
  FUN_00707610();
  FUN_00707370(0,0);
LAB_00528d5f:
  FUN_00524510(param_1,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FaceGen_PerFrameProcessor(void)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int *in_ECX;
  char unaff_BL;
  uint uVar10;
  int *piVar11;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  uint uVar12;
  int *unaff_FS_OFFSET;
  char cVar13;
  char cVar14;
  undefined4 local_13c;
  uint local_138;
  uint *local_134;
  int *local_130;
  int *local_12c;
  undefined1 *local_128;
  int local_124;
  float local_120 [2];
  uint local_118;
  int local_114;
  int local_110;
  float local_10c [2];
  int local_104 [7];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [200];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  int *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b8356;
  local_c = (int *)*unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_13c = local_13c & 0xffffff00;
  local_12c = (int *)0x0;
  local_134 = (uint *)(in_ECX + 0x42);
  do {
    local_130 = (int *)0x0;
    do {
      local_138 = *local_134;
      local_118 = local_134[1];
      uVar10 = 0;
      if (local_138 != 0) {
        local_128 = (undefined1 *)((int)local_12c + (int)local_130);
        do {
          uVar12 = 0;
          if (local_118 != 0) {
            iVar5 = (int)local_128 * 3 + 0x21;
            do {
              FUN_0046ac80(local_120,4);
              if ((in_ECX[iVar5 * 2 + 3] == 0) ||
                 (in_ECX[iVar5 * 2 + 4] - in_ECX[iVar5 * 2 + 3] >> 2 == 0)) {
                FUN_00984d5e();
              }
              iVar1 = in_ECX[iVar5 * 2 + 3];
              if (local_120[0] !=
                  *(float *)(iVar1 + in_ECX[iVar5 * 2 + 1] * uVar10 * 4 + uVar12 * 4)) {
                if ((iVar1 == 0) || (in_ECX[iVar5 * 2 + 4] - iVar1 >> 2 == 0)) {
                  FUN_00984d5e();
                }
                local_13c = CONCAT31(local_13c._1_3_,1);
                *(float *)(in_ECX[iVar5 * 2 + 3] + in_ECX[iVar5 * 2 + 1] * uVar10 * 4 + uVar12 * 4)
                     = local_120[0];
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_118);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_138);
      }
      local_134 = local_134 + 6;
      local_130 = (int *)((int)local_130 + 1);
    } while (local_130 < 2);
    local_12c = (int *)((int)local_12c + 2);
  } while (local_12c < &DAT_00000004);
  local_13c._0_2_ = (ushort)(byte)local_13c;
  if (in_ECX[0x3a] == 0) {
    puVar7 = (undefined1 *)in_ECX[0x29];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("%s has a bad current race when loading facegen",puVar7,uVar4);
    cVar13 = (char)(uVar4 >> 8);
  }
  else {
    iVar5 = FUN_0052bdb0(0);
    cVar13 = (char)(uVar4 >> 8);
    local_13c._0_2_ = CONCAT11(iVar5 != 0,(byte)local_13c);
  }
  FUN_0046aca0(&local_124,4);
  uVar6 = FUN_0046b250(local_124,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
  iVar5 = FUN_009832e6(uVar6);
  if ((local_124 != 0) && (iVar5 == 0)) {
    puVar7 = (undefined1 *)in_ECX[0x29];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("NPC %s could not find race %08X",puVar7,local_124);
  }
  if (in_ECX[0x3a] != iVar5) {
    local_13c = CONCAT31(local_13c._1_3_,1);
  }
  in_ECX[0x3a] = iVar5;
  local_13c._0_3_ = (uint3)(ushort)local_13c;
  if (iVar5 == 0) {
    puVar7 = (undefined1 *)in_ECX[0x29];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("%s has a bad new race when loading facegen",puVar7);
  }
  else {
    iVar5 = FUN_0052bdb0(0);
    local_13c._0_3_ = CONCAT12(iVar5 != 0,(ushort)local_13c);
  }
  FUN_0046aca0(&local_110,4);
  uVar6 = FUN_0046b250(local_110,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05434,0);
  iVar5 = FUN_009832e6(uVar6);
  if ((local_110 != 0) && (iVar5 == 0)) {
    puVar7 = (undefined1 *)in_ECX[0x29];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("NPC %s could not find hair %08X",puVar7,local_110);
  }
  if (in_ECX[0x72] != iVar5) {
    local_13c = CONCAT31(local_13c._1_3_,1);
  }
  in_ECX[0x72] = iVar5;
  FUN_0046aca0(&local_114,4);
  uVar6 = FUN_0046b250(local_114,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0541c,0);
  iVar5 = FUN_009832e6(uVar6);
  if ((local_114 != 0) && (iVar5 == 0)) {
    puVar7 = (undefined1 *)in_ECX[0x29];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("NPC %s could not find eyes %08X",puVar7,local_114);
  }
  if (in_ECX[0x74] != iVar5) {
    local_13c = CONCAT31(local_13c._1_3_,1);
  }
  in_ECX[0x74] = iVar5;
  FUN_0046ac80(local_10c,4);
  FUN_0046ac80(local_104,4);
  if ((local_10c[0] != (float)in_ECX[0x73]) || (in_ECX[0x7a] != local_104[0])) {
    local_13c = CONCAT31(local_13c._1_3_,1);
  }
  in_ECX[0x73] = (int)local_10c[0];
  in_ECX[0x7a] = local_104[0];
  FUN_0046ac80((int)&local_13c + 3,1);
  bVar2 = local_13c._3_1_;
  if ((*(byte *)(in_ECX + 10) & 1) != local_13c._3_1_) {
    local_13c = CONCAT31(local_13c._1_3_,1);
  }
  if (bVar2 == 0) {
    in_ECX[10] = in_ECX[10] & 0xfffffffe;
  }
  else {
    in_ECX[10] = in_ECX[10] | 1;
  }
  (**(code **)(in_ECX[9] + 0x50))(0x10);
  if (unaff_BL != '\0') {
    local_130 = (int *)(**(code **)(*in_ECX + 0x128))(0x45);
    (**(code **)(*in_ECX + 0x134))(0x45,0);
    piVar3 = local_c;
    iVar5 = 0;
    if ((int *)local_c[0xf] != (int *)0x0) {
      iVar5 = (**(code **)(*(int *)local_c[0xf] + 8))();
    }
    cVar14 = (char)((uint)unaff_EDI >> 0x10);
    if ((char)((uint)unaff_EDI >> 8) == cVar14) {
      if (iVar5 != 0) {
        uVar6 = 0;
        iVar5 = FUN_004d8370();
        if (iVar5 != 0) {
          iVar5 = FUN_004d8370();
          if (*(int *)(iVar5 + 0x98) != 0) {
            iVar5 = FUN_004d8370();
            uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x98) + 0x7c);
          }
        }
        iVar5 = (**(code **)(*piVar3 + 0x134))(0);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
          FUN_00716620(iVar5,uVar6);
          (**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&stack0xfffffeb4,iVar5);
          if (unaff_EDI != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(unaff_EDI + 1);
            if ((LVar8 == 0) && (unaff_EDI != (undefined4 *)0x0)) {
              (**(code **)*unaff_EDI)(1);
            }
          }
        }
        iVar5 = (**(code **)(*piVar3 + 0x130))(0);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
          FUN_00716620(iVar5,uVar6);
          (**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&stack0xfffffeb8,iVar5);
          if (unaff_ESI != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(unaff_ESI + 1);
            if ((LVar8 == 0) && (unaff_ESI != (undefined4 *)0x0)) {
              (**(code **)*unaff_ESI)(1);
            }
          }
        }
      }
      FUN_00977c50(3);
      piVar11 = local_12c;
      FUN_00405ce0();
      FUN_00977c50(2);
      if (piVar3[0x41] != 0) {
        FUN_00525a70(piVar3,piVar3[0x41]);
      }
      iVar5 = (**(code **)(*piVar3 + 0x130))(0);
      if (iVar5 != 0) {
        iVar5 = (**(code **)(*piVar3 + 0x134))(0);
        if (iVar5 != 0) {
          FaceGen_LocalHelperCtor();
          uStack_18 = 0;
          FaceGen_HelperPopulator(piVar11,auStack_e4);
          uVar6 = (**(code **)(*piVar3 + 0x130))(0,auStack_e4);
          BSFaceGen_DoSomething(uVar6);
          uVar6 = (**(code **)(*piVar3 + 0x134))(0,auStack_e8);
          BSFaceGen_DoSomething(uVar6);
          uStack_18 = 0xffffffff;
          FUN_00526ce0();
        }
      }
      if ((int *)piVar3[0x16] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[0x16] + 0x31c))(1);
      }
    }
    else {
      piVar11 = (int *)0x0;
      FUN_00977c50(3);
      FUN_00405ce0();
      FUN_00977c50(2);
      FUN_0066c580(0);
      if (iVar5 != 0) {
        iVar5 = FUN_00612220();
        piVar11 = *(int **)(iVar5 + 0x1c);
        FUN_0060e430(0);
      }
      if (cVar14 == '\0') {
        (**(code **)(in_ECX[0x2b] + 0x18))(DAT_00b38b70);
      }
      else {
        (**(code **)(in_ECX[0x2b] + 0x18))(DAT_00b38b68);
      }
      if (piVar11 != (int *)0x0) {
        DAT_00b33d80 = 1;
        uVar6 = FUN_00659f30();
        iVar5 = (**(code **)(*piVar3 + 0x134))(0);
        if (iVar5 == 0) {
          iVar5 = (**(code **)(*piVar3 + 0x130))(0);
          if (iVar5 == 0) {
            uVar9 = FUN_005e02e0(0);
            FUN_00437970(uVar9,0);
            uStack_1c = 1;
            QueuedHead_Run();
            (**(code **)(local_118 + 0x28))();
            FUN_004353d0(piVar3,piVar3[0x41]);
            uStack_1c = 0xffffffff;
            QueuedHead_dtor();
          }
        }
        (**(code **)(*piVar11 + 0x84))(uVar6,1);
        DAT_00b33d80 = 0;
        if (piVar3 == DAT_00b333c4) {
          FUN_0065f910(uVar6,0);
        }
        (**(code **)(*piVar3 + 0x148))();
        piVar11 = (int *)FUN_009832e6(piVar3[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b09dfc,0);
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 0x3ec))(piVar3);
        }
      }
      FUN_0066c580(cVar13 == '\0');
      piVar11 = local_130;
    }
    (**(code **)(*piVar11 + 0x134))(0x45,local_13c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00529530(float param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 local_130 [96];
  undefined1 local_d0 [196];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b83a1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b36308 == 0) goto LAB_00529725;
  iVar3 = DAT_00b36308 + 0x29c;
  FUN_00552880(in_ECX + 0x168,uVar1);
  iVar4 = 0;
  do {
    fVar5 = (float10)FUN_005538f0(iVar3,1,0,iVar4);
    FUN_005539e0(in_ECX + 0x168,1,0,iVar4,((float)fVar5 - 0.0) * ((param_1 - 0.0) / 100.0) + 0.0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1f);
  _eh_vector_constructor_iterator_(local_130,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  TESNPC_FaceGenFiller(local_130);
  FUN_00553b30(local_130,0,0);
  uVar2 = FUN_009828c0();
  FUN_00527860(uVar2);
  FaceGen_LocalHelperCtor();
  local_4 = CONCAT31(local_4._1_3_,1);
  FaceGen_HelperPopulator(in_ECX,local_d0);
  BSFaceGen_DoSomething(*(undefined4 *)(in_ECX + 0x1d4),local_d0);
  BSFaceGen_DoSomething(*(undefined4 *)(in_ECX + 0x1d8),local_d0);
  if (param_1 <= 0.0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x1d0);
LAB_005296c4:
    FUN_005263b0(uVar2);
  }
  else if ((undefined4 *)(DAT_00b36308 + 0xa8) != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(DAT_00b36308 + 0xa8);
    goto LAB_005296c4;
  }
  if (*(int **)(in_ECX + 0x1d4) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x9c))();
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x1dc) = param_1;
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00526ce0();
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_130,0x18,4,FUN_0043ace0);
LAB_00529725:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00529750(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x5c);
}



void FUN_00529760(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x40);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        thunk_FUN_0052b190();
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 0x44);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0x44) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



void FUN_005297c0(void)

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
        FUN_0052b330();
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



void FUN_00529820(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) & 0xfe;
  }
  else {
    *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) | 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0052983e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_00529840(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) & 0xfd;
  }
  else {
    *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) | 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0052985e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_00529920(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046ef80();
  FUN_0046c730();
  FUN_00470070(0x4e4f4349);
  FUN_0046bbb0(in_ECX + 0x3c,2);
  if (in_ECX != -0x50) {
    FUN_0056a450();
  }
  for (piVar1 = (int *)(in_ECX + 0x40);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    FUN_0060d0a0();
  }
  for (piVar1 = (int *)(in_ECX + 0x48);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    FUN_0060d0a0();
  }
  FUN_0046b9f0();
  return;
}



undefined4 FUN_005299b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x48);
  if (param_1 != (int *)0x0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if ((iVar2 != 0) && (cVar3 = FUN_0056a950(DAT_00b333c4,0), cVar3 != '\0')) {
        if (param_1 == (int *)0x0) {
          return 0;
        }
        if (*param_1 == 0) {
          return 0;
        }
        if (*param_1 != iVar2) {
          return 0;
        }
        param_1 = (int *)param_1[1];
      }
    }
    if ((param_1 != (int *)0x0) && ((param_1[1] != 0 || (*param_1 != 0)))) {
      return 0;
    }
  }
  return 1;
}



void FUN_00529a20(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  
  if ((param_1 != 0) && (FUN_004526e0(), (*(byte *)(in_ECX + 0x3c) & 2) == 0)) {
    piVar1 = (int *)(in_ECX + 0x48);
    while ((piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))) {
      piVar1 = (int *)piVar1[1];
      cVar3 = FUN_0056a950(DAT_00b333c4,0);
      if (cVar3 != '\0') {
        uVar4 = FUN_0065d8d0(iVar2);
        uVar5 = FUN_0052b440(0);
        *(uint *)(iVar2 + 0x10) = -(uint)(uVar4 != uVar5) & uVar4;
        FUN_0067b1e0(iVar2);
      }
    }
  }
  return;
}



void FUN_00529aa0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_004fbe00(0,*(undefined4 *)(in_ECX + 0x58),0,0);
  }
  return;
}



undefined4 FUN_00529ac0(byte param_1)

{
  byte *pbVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = in_ECX + 0x10;
  while ((piVar2 != (int *)0x0 && (((int *)piVar2[1] != (int *)0x0 || (*piVar2 != 0))))) {
    pbVar1 = (byte *)*piVar2;
    piVar2 = (int *)piVar2[1];
    if (*pbVar1 == param_1) {
      if (((*(byte *)(in_ECX + 0xf) & 2) == 0) || ((*(byte *)(in_ECX + 0xf) & 8) != 0)) {
        *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) | 1;
        (**(code **)(*in_ECX + 0x40))(4);
      }
      if (*(byte *)(in_ECX + 0x17) < param_1) {
        *(byte *)(in_ECX + 0x17) = param_1;
      }
      FUN_0052b080(in_ECX);
      (**(code **)(*in_ECX + 0x40))(0x10000000);
      return 1;
    }
  }
  return 0;
}



uint FUN_00529b30(char param_1)

{
  char *pcVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)(in_ECX + 0x40);
  while ((piVar2 != (int *)0x0 && (((int *)piVar2[1] != (int *)0x0 || (*piVar2 != 0))))) {
    pcVar1 = (char *)*piVar2;
    piVar2 = (int *)piVar2[1];
    if (*pcVar1 == param_1) {
      return CONCAT31((int3)((uint)pcVar1 >> 8),pcVar1[1]);
    }
  }
  return (uint)piVar2 & 0xffffff00;
}



void FUN_00529b70(void)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int *piVar4;
  byte bVar5;
  int in_ECX;
  
  piVar4 = (int *)(in_ECX + 0x40);
  bVar5 = 0;
  while ((piVar4 != (int *)0x0 &&
         ((piVar2 = (int *)piVar4[1], piVar2 != (int *)0x0 || (*piVar4 != 0))))) {
    pbVar3 = (byte *)*piVar4;
    piVar4 = piVar2;
    if ((pbVar3[1] != 0) && (bVar1 = *pbVar3, bVar5 < bVar1)) {
      bVar5 = bVar1;
    }
  }
  if (*(byte *)(in_ECX + 0x5c) < bVar5) {
    *(byte *)(in_ECX + 0x5c) = bVar5;
  }
  return;
}



void FUN_00529d20(uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char local_2e;
  char local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 *local_28;
  int local_24;
  undefined1 local_20 [4];
  short *local_1c;
  undefined4 local_18;
  char *local_14;
  char *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b83d8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046b5e0(param_1);
  local_18 = 0;
  local_24 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar5 = FUN_0045a170(uVar6);
  if (cVar5 != '\0') {
    local_28 = (undefined4 *)0x4b4f4c42;
    FUN_0045b9a0(&local_28,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  if ((param_1 & 4) != 0) {
    local_2c = *(undefined1 *)(in_ECX + 0x3c);
    FUN_0046ac70(&local_2c,1);
  }
  if ((param_1 & 0x10000000) != 0) {
    local_2d = '\0';
    local_10 = *(char **)(DAT_00b33b00 + 0x14);
    FUN_0046ac70(&local_2d,1);
    for (local_28 = (undefined4 *)(in_ECX + 0x40); local_28 != (undefined4 *)0x0;
        local_28 = (undefined4 *)local_28[1]) {
      puVar1 = (undefined1 *)*local_28;
      if (puVar1 != (undefined1 *)0x0) {
        local_2a = puVar1[1];
        local_2b = *puVar1;
        FUN_0046ac70(&local_2b,1);
        FUN_0046ac70(&local_2a,1);
        local_2e = '\0';
        local_14 = *(char **)(DAT_00b33b00 + 0x14);
        FUN_0046ac70(&local_2e,1);
        for (piVar7 = (int *)(puVar1 + 4); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
          iVar2 = *piVar7;
          if (iVar2 != 0) {
            local_29 = *(undefined1 *)(iVar2 + 0x60);
            iVar2 = *(int *)(iVar2 + 100);
            FUN_0046ac70(&local_29,1);
            if (iVar2 == 0) {
              FUN_0047d260();
              local_4 = 0;
              FUN_0045b9a0(local_20,4);
              local_4 = 0xffffffff;
              FUN_0060d0a0();
            }
            else {
              FUN_0045b9a0(iVar2,4);
            }
            local_2e = local_2e + '\x01';
          }
        }
        *local_14 = local_2e;
        local_2d = local_2d + '\x01';
      }
    }
    *local_10 = local_2d;
    local_28 = (undefined4 *)0x0;
  }
  if ((param_1 & 0x8000000) != 0) {
    FUN_004fa2d0();
  }
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar2 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar2 - local_24,0xc5a,
                   "..\\TES Shared\\TESQuest.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar3);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0xc5a,"..\\TES Shared\\TESQuest.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar2 - local_24,*puVar3,uVar8);
    }
  }
  cVar5 = FUN_0045a170();
  psVar4 = local_1c;
  if (cVar5 != '\0') {
    uVar6 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar6) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESQuest.cpp",0xc5a);
    }
    *psVar4 = (short)uVar6 - (short)psVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00529ff0(uint param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *in_ECX;
  char *pcVar11;
  int *unaff_FS_OFFSET;
  byte bStack_30;
  byte bStack_2f;
  undefined1 local_2e;
  char cStack_2d;
  undefined1 auStack_2c [4];
  uint local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b841e;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046b600(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  cVar3 = FUN_0045a170(uVar5);
  iVar8 = 0;
  if (cVar3 != '\0') {
    FUN_004534d0(&local_18,4);
    if (local_18 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESQuest.cpp",0xc66,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar6 = (int *)FUN_0046b250(*puVar2);
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESQuest.cpp",0xc66,*puVar2,uVar7);
      }
    }
    local_24 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_28,2);
    iVar8 = local_24;
  }
  if ((param_1 & 4) != 0) {
    FUN_0046ac80(&local_2e,1);
    *(undefined1 *)(in_ECX + 0xf) = local_2e;
  }
  if ((param_1 & 0x10000000) != 0) {
    FUN_0046ac80(&bStack_2f,1);
    iStack_1c = 0;
    if (bStack_2f != 0) {
      do {
        FUN_0046ac80(&param_2,1);
        FUN_0046ac80(&cStack_2d,1);
        piVar6 = in_ECX + 0x10;
        if (piVar6 != (int *)0x0) {
          do {
            pcVar11 = (char *)*piVar6;
            if ((pcVar11 != (char *)0x0) && (*pcVar11 == (char)param_2)) {
              pcVar11[1] = cStack_2d;
              goto LAB_0052a190;
            }
            piVar6 = (int *)piVar6[1];
          } while (piVar6 != (int *)0x0);
        }
        pcVar11 = (char *)0x0;
        uVar7 = (**(code **)(*in_ECX + 0xd4))();
        FUN_004a7a60("Could not find stage %i in quest %s during load.",param_2 & 0xff,uVar7);
LAB_0052a190:
        FUN_0046ac80(&bStack_30,1);
        iStack_20 = 0;
        if (bStack_30 != 0) {
          do {
            FUN_0047d260();
            uStack_4 = 0;
            FUN_0046ac80(&uStack_14,1);
            FUN_004534d0(auStack_2c,4);
            if ((pcVar11 != (char *)0x0) && (iVar8 = FUN_0052ac30(uStack_14), iVar8 != 0)) {
              sVar4 = FUN_0047d290();
              if ((sVar4 == 0) && (sVar4 = FUN_0047d2a0(), sVar4 == 0)) {
                iVar9 = *(int *)(iVar8 + 100);
                if (iVar9 != 0) {
                  FUN_0060d0a0();
                  FUN_00401f20(iVar9);
                  *(undefined4 *)(iVar8 + 100) = 0;
                }
              }
              else if (*(int *)(iVar8 + 100) == 0) {
                iStack_10 = FUN_00401f00(4);
                uStack_4 = CONCAT31(uStack_4._1_3_,1);
                if (iStack_10 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_0047d270(auStack_2c);
                }
                *(undefined4 *)(iVar8 + 100) = uVar7;
              }
              else {
                FUN_0047d270(auStack_2c);
              }
            }
            uStack_4 = 0xffffffff;
            FUN_0060d0a0();
            iStack_20 = iStack_20 + 1;
          } while (iStack_20 < (int)(uint)bStack_30);
        }
        iStack_1c = iStack_1c + 1;
        iVar8 = local_24;
      } while (iStack_1c < (int)(uint)bStack_2f);
    }
    *(undefined1 *)(in_ECX + 0x17) = 0;
    FUN_00529b70();
  }
  if ((param_1 & 0x8000000) != 0) {
    if (in_ECX[0x16] == 0) {
      iVar9 = FUN_00401f00(0x14);
      uStack_4 = 2;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_004f9db0();
      }
      uStack_4 = 0xffffffff;
      FUN_004fb760();
      if (iVar9 != 0) {
        FUN_004fb4e0();
        FUN_00401f20(iVar9);
      }
      *(uint *)(DAT_00b33b00 + 0x50) = *(uint *)(DAT_00b33b00 + 0x50) | 0x8000000;
    }
    else {
      FUN_004fb760();
    }
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar10 = local_28 & 0xffff;
      if (uVar10 + iVar8 < uVar5) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar5 - uVar10) - iVar8;
        pcVar11 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar10 + iVar8 <= uVar5) goto LAB_0052a44b;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar10 - uVar5) + iVar8;
        pcVar11 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar11,iVar8,"..\\TES Shared\\TESQuest.cpp",0xcc7,uVar1);
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar10 = (local_28 & 0xffff) + iVar8;
      if (uVar10 < uVar5) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar5 - (local_28 & 0xffff)) - iVar8,"..\\TES Shared\\TESQuest.cpp",0xcc7,
                     *puVar2,uVar7);
      }
      else if (uVar5 < uVar10) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_28 & 0xffff) - uVar5) + iVar8,"..\\TES Shared\\TESQuest.cpp",0xcc7,
                     *puVar2,uVar7);
      }
    }
  }
LAB_0052a44b:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052a500(void)

{
  int *in_ECX;
  
  *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) | 1;
  (**(code **)(*in_ECX + 0x40))(4);
  *(undefined1 *)(in_ECX + 0x17) = 0;
  thunk_FUN_0046b090();
  return;
}



void FUN_0052a520(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0056a750();
  FUN_00529760();
  FUN_005297c0();
  iVar1 = *(int *)(in_ECX + 0x58);
  if (iVar1 != 0) {
    FUN_004fb4e0();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  thunk_FUN_0046b170();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0052a570(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b8461;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  cVar1 = FUN_004511c0(local_14);
  if (cVar1 == ';') {
    iVar3 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = 0;
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    local_15 = '\0';
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4d414e44) {
        if (iVar2 == 0x4d414e43) {
          if (iVar3 != 0) {
            *(undefined1 *)(iVar3 + 0x61) = 1;
          }
        }
        else if (iVar2 < 0x41545352) {
          if (iVar2 == 0x41545351) {
            local_20 = 0;
            local_1c = 0;
            local_24 = FUN_00401f00(0x14);
            uVar4 = 0;
            local_8 = 0;
            if (local_24 != 0) {
              uVar4 = FUN_0052b310();
            }
            local_8 = 0xffffffff;
            local_24 = uVar4;
            FUN_0052b3f0(param_1);
            FUN_0067b1e0(uVar4);
            iVar3 = local_1c;
          }
          else if (iVar2 == 0x41444353) {
LAB_0052a750:
            if (iVar3 != 0) {
              FUN_0052b1f0(param_1);
            }
          }
          else {
            if (iVar2 == 0x41445443) goto LAB_0052a84e;
            if (iVar2 == 0x41544144) {
              FUN_0046bda0(param_1,in_ECX + 0xf,2);
            }
          }
        }
        else if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffcc,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffcc);
          iVar3 = local_1c;
        }
        else if (iVar2 == 0x49524353) {
          local_28 = 0;
          FUN_004510e0(&local_28);
          in_ECX[7] = local_28;
          FUN_0046f020(in_ECX);
        }
        else if (iVar2 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 0xc,param_1);
          }
        }
      }
      else if (iVar2 < 0x54445352) {
        if (iVar2 == 0x54445351) {
          if (local_20 != 0) {
            local_1c = FUN_00401f00(0x6c);
            local_8 = 2;
            if (local_1c == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_0052acc0();
            }
            local_8 = 0xffffffff;
            local_1c = iVar3;
            FUN_0052b1f0(param_1);
            *(char *)(iVar3 + 0x60) = local_15;
            local_15 = local_15 + '\x01';
            FUN_0067b1e0(iVar3);
          }
        }
        else if (iVar2 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 9,param_1);
          }
        }
        else if ((iVar2 == 0x4f524353) || (iVar2 == 0x52484353)) goto LAB_0052a750;
      }
      else if (iVar2 == 0x54445443) {
LAB_0052a84e:
        FUN_0056a7b0(param_1);
      }
      else if (iVar2 == 0x58444e49) {
        local_20 = FUN_00401f00(0xc);
        local_8 = 1;
        if (local_20 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_0052ac20();
        }
        local_8 = 0xffffffff;
        local_20 = iVar3;
        FUN_0052ac60(param_1);
        FUN_0067b1e0(iVar3);
        iVar3 = local_1c;
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}



void FUN_0052a8a0(int param_1,int param_2,byte param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  undefined4 local_c;
  
  if (param_1 == 0) {
    return;
  }
  FUN_004526e0();
  piVar4 = (int *)(DAT_00b333c4 + 0x5ec);
  local_10 = 0;
  local_c = 0;
joined_r0x0052a8d4:
  do {
    do {
      if ((piVar4 == (int *)0x0) || (iVar1 = *piVar4, iVar1 == 0)) {
        FUN_004526e0();
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x68);
      piVar4 = (int *)piVar4[1];
    } while (iVar3 == 0);
    if (param_2 == 0) goto LAB_0052a8f3;
  } while (iVar3 != param_2);
  goto LAB_0052a918;
LAB_0052a8f3:
  if (param_3 == (*(byte *)(iVar3 + 0x3c) >> 1 & 1)) {
    piVar2 = &local_10;
    do {
      if (*piVar2 == iVar3) goto joined_r0x0052a8d4;
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    FUN_00446cb0(iVar3);
LAB_0052a918:
    if ((*(int *)(iVar1 + 100) != 0) && (iVar3 = FUN_0052af40(iVar3), iVar3 != 0)) {
      if (param_4 == '\0') {
        FUN_00446cb0(iVar1);
      }
      else {
        FUN_0067b1e0(iVar1);
      }
    }
  }
  goto joined_r0x0052a8d4;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

bool FUN_0052a960(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  int aiStack_20 [2];
  undefined4 uStack_18;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  uStack_18 = 0x52a993;
  iVar2 = -(int)pcVar3;
  puVar5 = &stack0xffffffec + iVar2;
  iVar4 = iVar2 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(&stack0xffffffec + iVar4)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if ((&stack0xffffffec == pcVar3) || (iVar4 = *(int *)(in_ECX + 0x60), iVar4 == 0)) {
    iVar4 = (uint)(&stack0xffffffec == pcVar3) * 2 + -1;
  }
  else {
    *(undefined1 **)((int)&uStack_18 + iVar2) = &stack0xffffffec + iVar2;
    *(int *)((int)aiStack_20 + iVar2 + 4) = iVar4;
    *(undefined4 *)((int)aiStack_20 + iVar2) = 0x52a9c0;
    iVar4 = __stricmp(*(char **)((int)aiStack_20 + iVar2 + 4),*(char **)((int)&uStack_18 + iVar2));
    puVar5 = &stack0xffffffec + iVar2;
  }
  if (iVar4 != 0) {
    *(undefined4 *)(puVar5 + -4) = 0;
    *(undefined1 **)(puVar5 + -8) = &stack0xffffffec + iVar2;
    *(undefined4 *)(puVar5 + -0xc) = 0x52a9e2;
    FUN_004028d0();
  }
  return iVar4 != 0;
}



void FUN_0052aa00(void)

{
  uint uVar1;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b84c4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_0046ef60();
  FUN_0046ffd0();
  in_ECX[9] = (int)&PTR_FUN_00a320a4;
  in_ECX[0xc] = (int)&PTR_FUN_00a322a0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  *in_ECX = (int)&PTR_FUN_00a541ec;
  in_ECX[6] = (int)&PTR_LAB_00a541d8;
  in_ECX[9] = (int)&PTR_FUN_00a541bc;
  in_ECX[0xc] = (int)&PTR_FUN_00a541a8;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  local_4._0_1_ = 2;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  FUN_00434920();
  in_ECX[0x18] = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  *(undefined2 *)((int)in_ECX + 0x66) = 0;
  *(undefined1 *)(in_ECX + 1) = 0x3b;
  in_ECX[0x16] = 0;
  *(byte *)(in_ECX + 0xf) = *(byte *)(in_ECX + 0xf) | 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*in_ECX + 0x40))(4);
  *(undefined1 *)(in_ECX + 0x17) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_0052ab00(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b854c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a541ec;
  in_ECX[6] = &PTR_LAB_00a541d8;
  in_ECX[9] = &PTR_FUN_00a541bc;
  in_ECX[0xc] = &PTR_FUN_00a541a8;
  local_4 = 4;
  FUN_0056a750(uVar2);
  FUN_00529760();
  FUN_005297c0();
  iVar1 = in_ECX[0x16];
  if (iVar1 != 0) {
    FUN_004fb4e0();
    FUN_00401f20(iVar1);
    in_ECX[0x16] = 0;
  }
  thunk_FUN_0046b170();
  FUN_00401f20(in_ECX[0x18]);
  in_ECX[0x18] = 0;
  *(undefined2 *)((int)in_ECX + 0x66) = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  local_4._0_1_ = 2;
  thunk_FUN_0056a750();
  FUN_00401f20(in_ECX[0xd]);
  in_ECX[0xd] = 0;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00470040();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052ac00(byte param_1)

{
  FUN_0052ab00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0052ac20(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



int FUN_0052ac30(char param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x60) == param_1)) break;
    piVar2 = (int *)piVar2[1];
  }
  return iVar1;
}



void FUN_0052ac60(int param_1)

{
  int iVar1;
  undefined1 *in_ECX;
  undefined1 local_8;
  undefined1 local_7;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x58444e49) {
      if (*(int *)(param_1 + 0x254) == 8) {
        FUN_00450c20(&local_8,8);
        in_ECX[1] = local_7;
        *in_ECX = local_8;
        return;
      }
      FUN_00450c20(in_ECX,2);
    }
  }
  return;
}



void FUN_0052acc0(void)

{
  uint uVar1;
  undefined1 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b85b6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00434920(uVar1);
  local_4 = 0;
  FUN_004fbaa0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *in_ECX = 0;
  FUN_0046ab80(0);
  FUN_0046b590();
  in_ECX[0x34] = 1;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ad40(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b85b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  DAT_00b362fc = 0;
  FUN_00401f20(DAT_00b36300,uVar2);
  DAT_00b36300 = 0;
  _DAT_00b36306 = 0;
  _DAT_00b36304 = 0;
  iVar1 = *(int *)(in_ECX + 100);
  if (iVar1 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar1,uVar2);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004fc980();
  local_4 = 0xffffffff;
  thunk_FUN_0056a750();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052adf0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(int *)(in_ECX + 100) != 0) && (*(int *)(in_ECX + 0x68) != 0)) &&
     ((*(byte *)(*(int *)(in_ECX + 0x68) + 0x3c) & 8) == 0)) {
    FUN_004a7a60("Trying to resolve a quest stage item that already has a log date.",uVar2);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  cVar1 = FUN_0056a950(DAT_00b333c4,0);
  if (cVar1 != '\0') {
    iVar3 = FUN_00401f00(4);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00402b40();
      uVar5 = FUN_00402b80(uVar4);
      cVar1 = FUN_00402ba0(uVar5);
      uVar4 = FUN_0047d390((short)cVar1,uVar5,uVar4);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 100) = uVar4;
    if (((*in_ECX & 1) != 0) && (*(int *)(in_ECX + 0x68) != 0)) {
      FUN_00529840(1);
      if (*(int *)(in_ECX + 0x68) == *(int *)(DAT_00b333c4 + 0x5f4)) {
        FUN_00660450(0);
      }
    }
    if (in_ECX[0x61] != 0) {
      FUN_006697a0(in_ECX);
    }
    cVar1 = FUN_004f9fa0();
    if (((cVar1 != '\0') && (in_ECX != (byte *)0xfffffff4)) && (*(int *)(in_ECX + 0x2c) != 0)) {
      in_ECX[0x34] = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = FUN_0041e920(0,1);
      FUN_004fbe00(DAT_00b333c4,uVar4,uVar5,uVar6);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

int FUN_0052af40(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  char local_9;
  
  if (param_1 == 0) {
    return 0;
  }
  if (in_ECX != DAT_00b362fc) {
    DAT_00b362fc = in_ECX;
    FUN_004028d0(0,0);
    iVar3 = FUN_0046b680(0xffffffff);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x5c) == 0) {
      return 0;
    }
    iVar3 = FUN_004520f0();
    cVar2 = FUN_00451460(*(undefined4 *)(in_ECX + 0x5c));
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_004511c0();
    if (cVar2 != (&DAT_00b05e00)[(uint)*(byte *)(param_1 + 4) * 0xc]) {
      return 0;
    }
    bVar1 = false;
    local_9 = '\0';
    iVar4 = FUN_004510b0();
    while (iVar4 != 0) {
      if (iVar4 == 0x4d414e43) {
        if (bVar1) {
          FUN_00450c20(&stack0xffffffe4,*(undefined4 *)(iVar3 + 0x254));
          FUN_004028d0(&stack0xffffffe4,0);
        }
      }
      else if (iVar4 == 0x54445351) {
        if (local_9 == *(char *)(in_ECX + 0x60)) {
          bVar1 = true;
        }
        local_9 = local_9 + '\x01';
      }
      if (DAT_00b36300 != 0) {
        return DAT_00b36300;
      }
      cVar2 = FUN_0044fea0();
      if (cVar2 == '\0') break;
      iVar4 = FUN_004510b0();
    }
  }
  if (DAT_00b36300 == 0) {
    return 0;
  }
  return DAT_00b36300;
}



void FUN_0052b080(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 1) == '\0') || ((param_1 != 0 && ((*(byte *)(param_1 + 0x3c) & 8) != 0))))
  {
    piVar1 = (int *)(in_ECX + 4);
    *(undefined1 *)(in_ECX + 1) = 1;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[1];
      if (iVar2 != 0) {
        FUN_0052adf0();
      }
    }
  }
  return;
}



void FUN_0052b0c0(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int in_ECX;
  bool bVar3;
  
  if (in_ECX != -4) {
    FUN_0056a480(param_1);
  }
  uVar2 = DAT_00b34d88;
  uVar1 = DAT_00b06b18;
  DAT_00b06b18 = 1;
  DAT_00b34d88 = 0;
  FUN_004fbb60(param_1);
  bVar3 = DAT_00b34d88 != 0;
  DAT_00b06b18 = uVar1;
  DAT_00b34d88 = uVar2;
  if (bVar3) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*param_1 + 0xd4))(param_1[3]);
    FUN_004a7a60("Errors were encountered during InitItem for result script on quest stage %d, quest \'%s\' (%08X)\n\nSee Warnings file for more information."
                 ,uVar1,uVar2);
  }
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  return;
}



void FUN_0052b160(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_0052b0c0(param_1,in_ECX);
    }
  }
  return;
}



void FUN_0052b190(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_0052ad40();
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 8);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 8) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0052b1f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int *piStack_1c;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    piStack_1c = (int *)0x52b21f;
    local_c = in_ECX;
    iVar3 = FUN_004510b0();
    if (iVar3 < 0x52484354) {
      if (iVar3 == 0x52484353) {
        piStack_1c = (int *)0x0;
        iStack_20 = in_ECX + 0x24;
        uStack_24 = 0x52b2bf;
        FUN_00450c20();
        piStack_1c = (int *)0x52b2c6;
        FUN_0060d0a0();
      }
      else if (iVar3 == 0x41444353) {
        iVar3 = *(int *)(param_1 + 0x254);
        piStack_1c = (int *)0x52b28b;
        iVar1 = -iVar3;
        *(int *)((int)&piStack_1c + iVar1) = iVar3;
        *(undefined4 *)((int)&iStack_20 + iVar1) = 0;
        *(undefined1 **)((int)&uStack_24 + iVar1) = &stack0xffffffe8 + iVar1;
        *(undefined4 *)((int)&uStack_28 + iVar1) = 0x52b296;
        _memset(*(void **)((int)&uStack_24 + iVar1),*(int *)((int)&iStack_20 + iVar1),
                *(size_t *)((int)&piStack_1c + iVar1));
        *(undefined4 *)((int)&piStack_1c + iVar1) = 0;
        *(undefined1 **)((int)&iStack_20 + iVar1) = &stack0xffffffe8 + iVar1;
        *(undefined4 *)((int)&uStack_24 + iVar1) = 0x52b2a3;
        FUN_00450c20();
        *(undefined1 **)((int)&piStack_1c + iVar1) = &stack0xffffffe8 + iVar1;
        *(int *)((int)&iStack_20 + iVar1) = iVar3;
        *(undefined4 *)((int)&uStack_24 + iVar1) = 0x52b2b0;
        FUN_004f9df0();
      }
      else if (iVar3 == 0x4f524353) {
        piStack_1c = (int *)0x10;
        iStack_20 = 0x52b249;
        piVar4 = (int *)FUN_00401f00();
        piVar5 = (int *)0x0;
        if (piVar4 != (int *)0x0) {
          *piVar4 = 0;
          *(undefined2 *)(piVar4 + 1) = 0;
          *(undefined2 *)((int)piVar4 + 6) = 0;
          piVar4[2] = 0;
          piVar4[3] = 0;
          piVar5 = piVar4;
        }
        piStack_1c = &local_c;
        iStack_20 = 0x52b26d;
        FUN_004510e0();
        piVar5[2] = local_c;
        iStack_20 = 0x52b27c;
        piStack_1c = piVar5;
        FUN_0067b1e0();
      }
    }
    else if (iVar3 == 0x54445351) {
      piStack_1c = (int *)0x1;
      *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x25c);
      uStack_24 = 0x52b2e2;
      FUN_00450c20();
    }
    uVar2 = 1;
  }
  return uVar2;
}



void thunk_FUN_0052b190(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_0052ad40();
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 8);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 8) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



void FUN_0052b310(void)

{
  undefined1 *in_ECX;
  
  FUN_00434920();
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *in_ECX = 0;
  return;
}



void FUN_0052b330(void)

{
  thunk_FUN_0056a750();
  return;
}



void FUN_0052b340(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  local_4 = *(int *)(in_ECX + 0xc);
  if (local_4 == 0) {
    iVar2 = param_1[3];
    local_4 = in_ECX;
    uVar1 = (**(code **)(*param_1 + 0xd4))();
    FUN_004a7a60("No reference on target for quest (%08X) \'%s\'.",iVar2,uVar1);
  }
  else {
    uVar1 = FUN_0046b680(0xffffffff);
    FUN_0046bb20(&local_4,uVar1);
    uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    *(int *)(in_ECX + 0xc) = iVar2;
    if (iVar2 == 0) {
      iVar2 = param_1[3];
      uVar1 = (**(code **)(*param_1 + 0xd4))();
      FUN_004a7a60("Could not find target reference (%08X) on quest (%08X) \'%s\'.",local_4,iVar2,
                   uVar1);
    }
  }
  if (in_ECX != -4) {
    FUN_0056a480(param_1);
  }
  return;
}



void FUN_0052b3f0(int param_1)

{
  int iVar1;
  undefined1 *in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x41545351) {
      local_8 = 0;
      local_4 = 0;
      FUN_00450c20(&local_8,0);
      *(undefined4 *)(in_ECX + 0xc) = local_8;
      *in_ECX = (undefined1)local_4;
    }
  }
  return;
}



int FUN_0052b440(char param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 8) >> 5 & 1) != 0)) && (param_1 != '\0')) &&
     (iVar2 = FUN_0041fb00(), iVar2 != 0)) {
    return iVar2;
  }
  return iVar1;
}



void FUN_0052b470(void)

{
  return;
}



undefined4 FUN_0052b490(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x94 + param_1 * 4);
}



int FUN_0052b4a0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = 0;
  for (; in_ECX != (int *)0x0; in_ECX = (int *)in_ECX[1]) {
    if (*in_ECX != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



float10 FUN_0052b4c0(void)

{
  int in_ECX;
  
  if (0.0 < *(float *)(in_ECX + 0xa0)) {
    return (float10)*(float *)(in_ECX + 0xa0);
  }
  return (float10)5.0;
}



float10 FUN_0052b4f0(void)

{
  int in_ECX;
  
  if (0.0 < *(float *)(in_ECX + 0xa4)) {
    return (float10)*(float *)(in_ECX + 0xa4);
  }
  return (float10)3.0;
}



int FUN_0052b520(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x8c); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
      piVar1 = (int *)piVar1[1]) {
    if (*(int *)(iVar2 + 0xc) == param_1) {
      return iVar2;
    }
  }
  return 0;
}



void FUN_0052b550(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(in_ECX + 0x8c);
    if (piVar2 != (int *)0x0) {
      while (iVar1 = *piVar2, iVar1 != 0) {
        if (*(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0xc)) {
          if (iVar1 != 0) {
            return;
          }
          break;
        }
        piVar2 = (int *)piVar2[1];
        if (piVar2 == (int *)0x0) {
          FUN_0067b1e0(param_1);
          return;
        }
      }
    }
    FUN_0067b1e0(param_1);
  }
  return;
}



void FUN_0052b5a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x90);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x90) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x90));
    *(int *)(in_ECX + 0x90) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  return;
}



int FUN_0052b5e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0xa8); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
      piVar1 = (int *)piVar1[1]) {
    if (*(int *)(iVar2 + 0xc) == param_1) {
      return iVar2;
    }
  }
  return 0;
}



void FUN_0052b610(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(in_ECX + 0xa8);
    if (piVar2 != (int *)0x0) {
      while (iVar1 = *piVar2, iVar1 != 0) {
        if (*(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0xc)) {
          if (iVar1 != 0) {
            return;
          }
          break;
        }
        piVar2 = (int *)piVar2[1];
        if (piVar2 == (int *)0x0) {
          FUN_0067b1e0(param_1);
          return;
        }
      }
    }
    FUN_0067b1e0(param_1);
  }
  return;
}



void FUN_0052b660(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xac);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xac) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0xac));
    *(int *)(in_ECX + 0xac) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  return;
}



void FUN_0052b6a0(void)

{
  FUN_0046e080(DAT_00b36310);
  FUN_0046e080(DAT_00b36318);
  FUN_0046e080(DAT_00b36320);
  FUN_0046e080(DAT_00b36328);
  FUN_0046e080(DAT_00b36330);
  FUN_0046e080(DAT_00b36338);
  FUN_0046e080(DAT_00b36340);
  FUN_0046e080(DAT_00b36348);
  FUN_0046e080(DAT_00b36350);
  FUN_0046e080(DAT_00b36358);
  FUN_0046e080(DAT_00b36360);
  FUN_0046e080(DAT_00b36368);
  FUN_0046e080(DAT_00b36370);
  DAT_00b3630c = 1;
  return;
}



undefined4 FUN_0052b780(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return DAT_00b39338;
  case 1:
    return DAT_00b39340;
  case 2:
    return DAT_00b39348;
  case 3:
    return DAT_00b39350;
  case 4:
    return DAT_00b39358;
  case 5:
    return DAT_00b39360;
  case 6:
    return DAT_00b39368;
  case 7:
    return DAT_00b39370;
  case 8:
    return DAT_00b39378;
  case 9:
    return DAT_00b39380;
  case 10:
    return DAT_00b39388;
  case 0xb:
    return DAT_00b39390;
  case 0xc:
    return DAT_00b39398;
  case 0xd:
    return DAT_00b393a0;
  case 0xe:
    return DAT_00b393a8;
  case 0xf:
    return DAT_00b393b0;
  default:
    return 0;
  }
}



void FUN_0052b840(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined4 *puStack_8;
  int iStack_4;
  
  puVar1 = (undefined4 *)(in_ECX + 0x50);
  uVar4 = 0;
  *puVar1 = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  iVar3 = 7;
  do {
    *(undefined1 *)puVar1 = 0xff;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x68) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x60) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x6c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 100) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x300) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0x304) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined1 *)(in_ECX + 0x9c) = 0;
  uVar2 = FaceGen_DefaultGetter(in_ECX + 0x29c);
  FaceGen_FallbackPopulator(uVar2);
  FUN_00552880(in_ECX + 0x29c);
  *(undefined2 *)(in_ECX + 0x2fc) = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1b8);
  piVar5 = (int *)(in_ECX + 0xe0);
  do {
    (**(code **)*piVar5)();
    (**(code **)(*piVar5 + 0x18))
              (*(undefined4 *)((int)&PTR_s_Characters_Imperial_HeadHuman_ni_00b10ccc + uVar4));
    (**(code **)*puVar1)();
    FUN_004028d0(*(undefined4 *)((int)&PTR_s_Characters_Imperial_HeadHuman_dd_00b10cf0 + uVar4),0);
    uVar4 = uVar4 + 4;
    piVar5 = piVar5 + 6;
    puVar1 = puVar1 + 3;
  } while (uVar4 < 0x24);
  puStack_8 = (undefined4 *)(in_ECX + 0xb0);
  ppuVar6 = &PTR_s_Characters_Imperial_Male_UpperBo_00b10d14;
  puVar1 = (undefined4 *)(in_ECX + 0x224);
  iStack_4 = 2;
  do {
    iVar3 = 5;
    do {
      (**(code **)*puVar1)();
      FUN_004028d0(*ppuVar6,0);
      ppuVar6 = ppuVar6 + 1;
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(code **)*puStack_8)();
    puStack_8 = puStack_8 + 6;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  thunk_FUN_0046b090();
  return;
}



void FUN_0052b990(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_0052b5a0();
  FUN_0052b660();
  piVar4 = (int *)(in_ECX + 0x1b8);
  piVar3 = (int *)(in_ECX + 0xe0);
  iVar1 = 9;
  do {
    (**(code **)(*piVar3 + 4))();
    (**(code **)(*piVar4 + 4))();
    piVar3 = piVar3 + 6;
    piVar4 = piVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar4 = (int *)(in_ECX + 0xb0);
  piVar3 = (int *)(in_ECX + 0x224);
  iVar1 = 2;
  do {
    iVar2 = 5;
    do {
      (**(code **)(*piVar3 + 4))();
      piVar3 = piVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*piVar4 + 4))();
    piVar4 = piVar4 + 6;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  thunk_FUN_0046b170();
  return;
}



int FUN_0052bc50(uint param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  
  if (8 < param_1) {
    return 0;
  }
  if (param_1 == 1) {
    if (*(ushort *)(in_ECX + 0x100) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0xfc);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x100);
    }
    if (uVar4 == 0) {
      return in_ECX + 0x110;
    }
  }
  else if (param_1 == 2) {
    if (*(ushort *)(in_ECX + 0x118) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0x114);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x118);
    }
    if (uVar4 == 0) {
      return in_ECX + 0xf8;
    }
  }
  return in_ECX + 0xe0 + param_1 * 0x18;
}



int FUN_0052bd00(uint param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  
  if (8 < param_1) {
    return 0;
  }
  if (param_1 == 1) {
    if (*(ushort *)(in_ECX + 0x1cc) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0x1c8);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x1cc);
    }
    if (uVar4 == 0) {
      return in_ECX + 0x1d0;
    }
  }
  else if (param_1 == 2) {
    if (*(ushort *)(in_ECX + 0x1d8) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0x1d4);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x1d8);
    }
    if (uVar4 == 0) {
      return in_ECX + 0x1c4;
    }
  }
  return in_ECX + 0x1b8 + param_1 * 0xc;
}



int FUN_0052bdb0(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  iVar2 = in_ECX + param_1 * 0x18;
  if (*(ushort *)(iVar2 + 0xb8) == 0xffff) {
    pcVar4 = *(char **)(iVar2 + 0xb4);
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb8);
  }
  if (uVar5 != 0) {
    return iVar2 + 0xb0;
  }
  if (*(ushort *)(in_ECX + 0xb8) == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0xb4);
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 0xb8);
  }
  if (uVar5 != 0) {
    return in_ECX + 0xb0;
  }
  if (*(ushort *)(in_ECX + 0xd0) == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0xcc);
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 0xd0);
  }
  if (uVar5 != 0) {
    return in_ECX + 200;
  }
  return 0;
}



undefined * FUN_0052be80(uint param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  if (param_2 == 0xf) {
    puVar2 = (undefined *)FUN_0052bdb0(param_1);
    return puVar2;
  }
  uVar3 = param_2 - 2;
  if (4 < uVar3) {
    uVar3 = 0xffffffff;
  }
  if ((1 < param_1) || (4 < uVar3)) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_00449190();
  if (iVar1 != 0) {
    return &DAT_00b36380 + uVar3 * 0x18 + param_1 * 0x78;
  }
  if (param_1 == 0) {
    puVar2 = &DAT_00b363f8 + uVar3 * 0x18;
  }
  else {
    if (param_1 != 1) {
      return (undefined *)0x0;
    }
    puVar2 = &DAT_00b36380 + uVar3 * 0x18;
  }
  iVar1 = FUN_00449190();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  return puVar2;
}



/* WARNING: Function: __alloca_probe_8 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0052bf20(void)

{
  int *piVar1;
  size_t sVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int in_ECX;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_28 = 0x52bf3a;
  FUN_0046b990();
  local_28 = 0x52bf42;
  FUN_0046c730();
  local_28 = 0x52bf4a;
  FUN_0046a700();
  local_28 = 0x52bf52;
  FUN_0046f4b0();
  local_28 = 0x52bf5a;
  FUN_0046e650();
  local_28 = 0x24;
  local_2c = (undefined4 *)(in_ECX + 0x50);
  uStack_30 = 0x52bf67;
  FUN_0046bbb0();
  uVar8 = 0;
  if (*(int *)(in_ECX + 0x300) == 0) {
    if (*(int *)(in_ECX + 0x304) != 0) {
      local_14 = 0;
      goto LAB_0052bf8a;
    }
  }
  else {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0xc);
LAB_0052bf8a:
    if (*(int *)(in_ECX + 0x304) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x304) + 0xc);
    }
    local_28 = 8;
    local_2c = &local_14;
    uStack_30 = 0x4d414e56;
    uStack_34 = 0x52bfaf;
    FUN_0046ae40();
  }
  if (*(int *)(in_ECX + 0x94) == 0) {
    if (*(int *)(in_ECX + 0x98) == 0) goto LAB_0052bffb;
    local_14 = 0;
  }
  else {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x94) + 0xc);
  }
  if (*(int *)(in_ECX + 0x98) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + 0xc);
  }
  local_28 = 8;
  local_2c = &local_14;
  uStack_30 = 0x4d414e44;
  uStack_34 = 0x52bff8;
  FUN_0046ae40();
LAB_0052bffb:
  local_28 = 1;
  local_2c = (undefined4 *)(in_ECX + 0x9c);
  uStack_30 = 0x4d414e43;
  uStack_34 = 0x52c00e;
  thunk_FUN_0046ae40();
  local_28 = *(undefined4 *)(in_ECX + 0xa0);
  local_2c = (undefined4 *)0x4d414e50;
  uStack_30 = 0x52c024;
  FUN_0046ba80();
  local_28 = *(undefined4 *)(in_ECX + 0xa4);
  local_2c = (undefined4 *)0x4d414e55;
  uStack_30 = 0x52c03a;
  FUN_0046ba80();
  local_28 = 0x52c047;
  FUN_00468c80(&uStack_34);
  FUN_00468c80(&local_2c);
  thunk_FUN_0046ae40(0x52545441,&uStack_34,0x10);
  FUN_0046ba10(0x304d414e);
  local_c = (void *)(in_ECX + 0x1b8);
  do {
    FUN_0046ba80(0x58444e49,uVar8);
    FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
    FUN_00470070(0x4e4f4349);
    local_c = (void *)((int)local_c + 0xc);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 9);
  FUN_0046ba10(0x314d414e);
  local_c = (void *)0x0;
  do {
    if (local_c == (void *)0x0) {
      uVar10 = 0x4d414e4d;
LAB_0052c0fc:
      FUN_0046ba10(uVar10);
    }
    else if (local_c == (void *)0x1) {
      uVar10 = 0x4d414e46;
      goto LAB_0052c0fc;
    }
    FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
    uVar8 = 0;
    do {
      FUN_0046ba80(0x58444e49,uVar8);
      FUN_00470070(0x4e4f4349);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
    local_c = (void *)((int)local_c + 1);
    if (1 < local_c) {
      local_c = (void *)0x0;
      piVar1 = (int *)(in_ECX + 0x8c);
      for (piVar3 = piVar1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 != 0) {
          local_c = (void *)((int)local_c + 1);
        }
      }
      puVar4 = (undefined4 *)
               FUN_00401f00(-(uint)((int)(ZEXT48(local_c) * 4 >> 0x20) != 0) |
                            (uint)(ZEXT48(local_c) * 4));
      puVar6 = puVar4;
      for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        *puVar6 = *(undefined4 *)(*piVar1 + 0xc);
        puVar6 = puVar6 + 1;
      }
      FUN_0046ae40(0x4d414e48,puVar4,(int)local_c * 4);
      FUN_00401f20(puVar4);
      local_c = (void *)0x0;
      piVar1 = (int *)(in_ECX + 0xa8);
      for (piVar3 = piVar1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 != 0) {
          local_c = (void *)((int)local_c + 1);
        }
      }
      puVar4 = (undefined4 *)
               FUN_00401f00(-(uint)((int)(ZEXT48(local_c) * 4 >> 0x20) != 0) |
                            (uint)(ZEXT48(local_c) * 4));
      puVar6 = puVar4;
      for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        *puVar6 = *(undefined4 *)(*piVar1 + 0xc);
        puVar6 = puVar6 + 1;
      }
      FUN_0046ae40(0x4d414e45,puVar4,(int)local_c * 4);
      FUN_00401f20(puVar4);
      uVar8 = *(uint *)(in_ECX + 0x29c);
      if (uVar8 != 0) {
        sVar2 = uVar8 * 4;
        local_c = (void *)thunk_FUN_00401aa0(sVar2,1);
        _memset(local_c,0,sVar2);
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            if ((*(int *)(in_ECX + 0x2a8) == 0) ||
               (*(int *)(in_ECX + 0x2ac) - *(int *)(in_ECX + 0x2a8) >> 2 == 0)) {
              FUN_00984d5e();
            }
            iVar7 = *(int *)(in_ECX + 0x2a0) * uVar9;
            uVar9 = uVar9 + 1;
            *(undefined4 *)((int)local_c + uVar9 * 4 + -4) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x2a8) + iVar7 * 4);
          } while (uVar9 < uVar8);
        }
        pvVar5 = local_c;
        FUN_0046ae40(0x53474746,local_c,sVar2);
        FUN_00401e40(pvVar5);
      }
      local_c = *(void **)(in_ECX + 0x2b4);
      if (local_c != (void *)0x0) {
        sVar2 = (int)local_c * 4;
        pvVar5 = (void *)thunk_FUN_00401aa0(sVar2,1);
        _memset(pvVar5,0,sVar2);
        uVar8 = 0;
        if (local_c != (void *)0x0) {
          do {
            if ((*(int *)(in_ECX + 0x2c0) == 0) ||
               (*(int *)(in_ECX + 0x2c4) - *(int *)(in_ECX + 0x2c0) >> 2 == 0)) {
              FUN_00984d5e();
            }
            iVar7 = *(int *)(in_ECX + 0x2b8) * uVar8;
            uVar8 = uVar8 + 1;
            *(undefined4 *)((int)pvVar5 + uVar8 * 4 + -4) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x2c0) + iVar7 * 4);
          } while (uVar8 < local_c);
        }
        FUN_0046ae40(0x41474746,pvVar5,sVar2);
        FUN_00401e40(pvVar5);
      }
      local_c = *(void **)(in_ECX + 0x2cc);
      if (local_c != (void *)0x0) {
        sVar2 = (int)local_c * 4;
        pvVar5 = (void *)thunk_FUN_00401aa0(sVar2,1);
        _memset(pvVar5,0,sVar2);
        uVar8 = 0;
        if (local_c != (void *)0x0) {
          do {
            if ((*(int *)(in_ECX + 0x2d8) == 0) ||
               (*(int *)(in_ECX + 0x2dc) - *(int *)(in_ECX + 0x2d8) >> 2 == 0)) {
              FUN_00984d5e();
            }
            iVar7 = *(int *)(in_ECX + 0x2d0) * uVar8;
            uVar8 = uVar8 + 1;
            *(undefined4 *)((int)pvVar5 + uVar8 * 4 + -4) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x2d8) + iVar7 * 4);
          } while (uVar8 < local_c);
        }
        FUN_0046ae40(0x53544746,pvVar5,sVar2);
        FUN_00401e40(pvVar5);
      }
      FUN_0046ae40(0x4d414e53,in_ECX + 0x2fc,2);
      FUN_0046b9f0();
      return;
    }
  } while( true );
}



bool FUN_0052c870(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int unaff_EDI;
  int *piVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  int local_c;
  int *local_4;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
  if ((iVar3 == 0) || (cVar1 = FUN_0046ad70(iVar3), cVar1 != '\0')) {
    return true;
  }
  uVar4 = 0x24;
  pbVar7 = (byte *)(iVar3 + 0x50);
  pbVar8 = (byte *)(in_ECX + 0x50);
  do {
    if (*(int *)pbVar8 != *(int *)pbVar7) goto LAB_0052c8db;
    uVar4 = uVar4 - 4;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_0052c938:
    iVar5 = 0;
  }
  else {
LAB_0052c8db:
    iVar10 = (uint)*pbVar8 - (uint)*pbVar7;
    if (iVar10 == 0) {
      if (uVar4 == 1) goto LAB_0052c938;
      iVar10 = (uint)pbVar8[1] - (uint)pbVar7[1];
      if (iVar10 == 0) {
        if (uVar4 == 2) goto LAB_0052c938;
        iVar10 = (uint)pbVar8[2] - (uint)pbVar7[2];
        if (iVar10 == 0) {
          if ((uVar4 == 3) || (iVar10 = (uint)pbVar8[3] - (uint)pbVar7[3], iVar10 == 0))
          goto LAB_0052c938;
        }
      }
    }
    iVar5 = 1;
    if (iVar10 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 == 0) {
    iVar10 = *(int *)(in_ECX + 0x300);
    if (*(int *)(in_ECX + 0x300) == 0) {
      iVar10 = in_ECX;
    }
    iVar5 = *(int *)(iVar3 + 0x300);
    if (*(int *)(iVar3 + 0x300) == 0) {
      iVar5 = iVar3;
    }
    if (iVar10 == iVar5) {
      iVar10 = *(int *)(in_ECX + 0x304);
      if (*(int *)(in_ECX + 0x304) == 0) {
        iVar10 = in_ECX;
      }
      iVar5 = *(int *)(iVar3 + 0x304);
      if (*(int *)(iVar3 + 0x304) == 0) {
        iVar5 = iVar3;
      }
      if ((((iVar10 == iVar5) && (*(int *)(in_ECX + 0x94) == *(int *)(iVar3 + 0x94))) &&
          (*(int *)(in_ECX + 0x98) == *(int *)(iVar3 + 0x98))) &&
         (*(char *)(in_ECX + 0x9c) == *(char *)(iVar3 + 0x9c))) {
        fVar13 = (float10)FUN_0052b4c0();
        fVar14 = (float10)FUN_0052b4c0();
        if ((float10)(double)fVar13 == fVar14) {
          fVar13 = (float10)FUN_0052b4f0();
          fVar14 = (float10)FUN_0052b4f0();
          if ((((float10)(double)fVar13 == fVar14) &&
              (cVar1 = (**(code **)(*(int *)(in_ECX + 0x74) + 0xc))(iVar3 + 0x74), cVar1 == '\0'))
             && (cVar1 = (**(code **)(*(int *)(in_ECX + 0x80) + 0xc))(iVar3 + 0x80), cVar1 == '\0'))
          {
            uVar4 = 0;
            piVar9 = (int *)(in_ECX + 0x1b8);
            piVar11 = (int *)(in_ECX + 0xe0);
            do {
              uVar6 = FUN_0052bc50(uVar4);
              cVar1 = (**(code **)(*piVar11 + 0xc))(uVar6);
              if (cVar1 != '\0') {
                return true;
              }
              uVar6 = FUN_0052bd00(uVar4);
              cVar1 = (**(code **)(*piVar9 + 0xc))(uVar6);
              if (cVar1 != '\0') {
                return true;
              }
              uVar4 = uVar4 + 1;
              piVar11 = piVar11 + 6;
              piVar9 = piVar9 + 3;
            } while (uVar4 < 9);
            local_4 = (int *)(unaff_EDI + 0x224);
            local_c = SUB84((double)fVar13,0);
            uVar4 = 0;
            piVar9 = (int *)(unaff_EDI + 0xb0);
            do {
              uVar12 = 0;
              piVar11 = local_4;
              do {
                cVar1 = (**(code **)(*piVar11 + 0xc))((local_c - unaff_EDI) + (int)piVar11);
                if (cVar1 != '\0') {
                  return true;
                }
                uVar12 = uVar12 + 1;
                piVar11 = piVar11 + 3;
              } while (uVar12 < 5);
              cVar1 = (**(code **)(*piVar9 + 0xc))((local_c - unaff_EDI) + (int)piVar9);
              if (cVar1 != '\0') {
                return true;
              }
              local_4 = local_4 + 0xf;
              uVar4 = uVar4 + 1;
              piVar9 = piVar9 + 6;
            } while (uVar4 < 2);
            piVar9 = (int *)(local_c + 0x8c);
            iVar3 = FUN_0052b4a0();
            iVar10 = FUN_0052b4a0();
            if (iVar3 == iVar10) {
              for (; (piVar9 != (int *)0x0 && (*piVar9 != 0)); piVar9 = (int *)piVar9[1]) {
                iVar3 = FUN_0052b520(*(undefined4 *)(*piVar9 + 0xc));
                if (iVar3 == 0) {
                  return true;
                }
              }
              piVar9 = (int *)(local_c + 0xa8);
              iVar3 = FUN_0052b4a0();
              iVar10 = FUN_0052b4a0();
              if (iVar3 == iVar10) {
                for (; (piVar9 != (int *)0x0 && (*piVar9 != 0)); piVar9 = (int *)piVar9[1]) {
                  iVar3 = FUN_0052b5e0(*(undefined4 *)(*piVar9 + 0xc));
                  if (iVar3 == 0) {
                    return true;
                  }
                }
                cVar1 = FUN_00551990(local_c + 0x29c,unaff_EDI + 0x29c);
                if (cVar1 == '\0') {
                  return *(short *)(unaff_EDI + 0x2fc) != *(short *)(local_c + 0x2fc);
                }
                uVar2 = FUN_0047df80(0);
                *(undefined2 *)(unaff_EDI + 0x2fc) = uVar2;
              }
            }
          }
        }
      }
    }
  }
  return true;
}



void FUN_0052cbe0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b86fc;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a548fc;
  in_ECX[6] = &PTR_FUN_00a548e4;
  in_ECX[9] = &PTR_LAB_00a548cc;
  in_ECX[0xb] = &PTR_FUN_00a548ac;
  in_ECX[0x10] = &PTR_LAB_00a54898;
  local_4 = 0xb;
  FUN_0052b990(uVar1);
  in_ECX[0xc2] = &PTR__scalar_deleting_destructor__00a53950;
  FUN_00401f20(in_ECX[0xc3]);
  local_4._0_1_ = 9;
  _eh_vector_destructor_iterator_(in_ECX + 0xa7,0x18,4,FUN_0043ace0);
  local_4._0_1_ = 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x89,0xc,10,FUN_00470040);
  local_4._0_1_ = 7;
  _eh_vector_destructor_iterator_(in_ECX + 0x6e,0xc,9,FUN_00470040);
  local_4._0_1_ = 6;
  _eh_vector_destructor_iterator_(in_ECX + 0x38,0x18,9,FUN_0046d850);
  local_4._0_1_ = 5;
  _eh_vector_destructor_iterator_(in_ECX + 0x2c,0x18,2,FUN_0046d850);
  local_4._0_1_ = 4;
  FUN_00468ab0();
  local_4._0_1_ = 3;
  FUN_00468ab0();
  local_4._0_1_ = 2;
  FUN_0046e5c0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046f2b0();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FaceGen_HelperPopulator(int param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  LONG LVar7;
  char *_Str1;
  int iVar8;
  int in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int local_18;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b08;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    iVar6 = in_ECX + 0x29c;
    if (iVar6 == 0) {
      iVar6 = FaceGen_DefaultGetter(uVar4);
    }
    FaceGen_FallbackPopulator(iVar6,param_2);
    local_18 = 0;
  }
  else {
    TESNPC_FaceGenFiller(param_2);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x1d0);
    uVar5 = FUN_00519d20();
    *(undefined4 *)(param_2 + 0x70) = uVar5;
    local_18 = 0;
  }
  do {
    iVar6 = FUN_0052bc50(local_18);
    uVar1 = *(ushort *)(param_2 + 0x7e);
    uVar4 = (uint)uVar1;
    if (*(ushort *)(param_2 + 0x7c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0x82) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x7e)) {
      if (iVar6 == 0) {
        if (*(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x7e) = uVar1 + 1;
      if (iVar6 != 0) {
        *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + 1;
      }
    }
    *(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) = iVar6;
    iVar6 = FUN_0052bd00(local_18);
    uVar1 = *(ushort *)(param_2 + 0x8e);
    uVar4 = (uint)uVar1;
    if (*(ushort *)(param_2 + 0x8c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0x92) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x8e)) {
      if (iVar6 == 0) {
        if (*(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x8e) = uVar1 + 1;
      if (iVar6 != 0) {
        *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + 1;
      }
    }
    *(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) = iVar6;
    uVar1 = *(ushort *)(param_2 + 0x9e);
    uVar4 = (uint)uVar1;
    puVar2 = (&PTR_s_FaceGenFace_00b10ca8)[local_18];
    if (*(ushort *)(param_2 + 0x9c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0xa2) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x9e)) {
      if (puVar2 == (undefined *)0x0) {
        if (*(int *)(*(int *)(param_2 + 0x98) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x98) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x9e) = uVar1 + 1;
      if (puVar2 != (undefined *)0x0) {
        *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + 1;
      }
    }
    *(undefined **)(*(int *)(param_2 + 0x98) + uVar4 * 4) = puVar2;
    if ((param_1 != 0) && (DAT_00b10d3c != '\0')) {
      uVar5 = FUN_00524100(&local_10,local_18);
      uVar4 = (uint)*(ushort *)(param_2 + 0xae);
      local_4 = 0;
      if (*(ushort *)(param_2 + 0xac) <= uVar4) {
        FUN_00523b10(*(ushort *)(param_2 + 0xb2) + uVar4);
      }
      FUN_005254d0(uVar4,uVar5);
      puVar3 = local_10;
      local_4 = 0xffffffff;
      if (((local_10 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(local_10 + 1), LVar7 == 0)) && (puVar3 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar3)(1);
      }
    }
    local_18 = local_18 + 1;
  } while (local_18 < 9);
  *(char *)(param_2 + 0xb4) = DAT_00b10d3c;
  *(undefined4 *)(param_2 + 0xc0) = DAT_00b120b0;
  *(int *)(param_2 + 0xb8) = in_ECX + 0x188;
  *(int *)(param_2 + 0xbc) = in_ECX + 0x1a0;
  if (((*(int *)(param_2 + 0x60) == 0) && (piVar9 = (int *)(in_ECX + 0x8c), piVar9 != (int *)0x0))
     && ((*(int *)(in_ECX + 0x90) != 0 || (*piVar9 != 0)))) {
    *(int *)(param_2 + 0x60) = *piVar9;
  }
  if (*(int *)(param_2 + 0x6c) == 0) {
    piVar9 = (int *)(in_ECX + 0xa8);
    if ((piVar9 == (int *)0x0) || ((*(int *)(in_ECX + 0xac) == 0 && (*piVar9 == 0)))) {
      for (piVar9 = (int *)(DAT_00b33a98 + 0x3c); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
        iVar6 = *piVar9;
        if (iVar6 != 0) {
          _Str1 = *(char **)(iVar6 + 0x28);
          if (_Str1 == (char *)0x0) {
            _Str1 = "";
          }
          iVar8 = __stricmp(_Str1,"Characters\\Eyes\\EyeDefault.dds");
          if (iVar8 == 0) {
            *(int *)(param_2 + 0x6c) = iVar6;
            break;
          }
        }
      }
    }
    else {
      *(int *)(param_2 + 0x6c) = *piVar9;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052d0e0(byte param_1)

{
  FUN_0052cbe0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0052d100(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b87e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046a400();
  FUN_0046f2c0();
  local_4._0_1_ = 2;
  FUN_0046e5e0();
  local_4._0_1_ = 3;
  *in_ECX = &PTR_FUN_00a548fc;
  in_ECX[6] = &PTR_FUN_00a548e4;
  in_ECX[9] = &PTR_LAB_00a548cc;
  in_ECX[0xb] = &PTR_FUN_00a548ac;
  in_ECX[0x10] = &PTR_LAB_00a54898;
  FUN_00468bb0();
  local_4._0_1_ = 4;
  FUN_00468bb0();
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  local_4._0_1_ = 5;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x2c,0x18,2,FUN_0046d7e0,FUN_0046d850);
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_(in_ECX + 0x38,0x18,9,FUN_0046d7e0,FUN_0046d850);
  local_4._0_1_ = 7;
  _eh_vector_constructor_iterator_(in_ECX + 0x6e,0xc,9,FUN_0046ffd0,FUN_00470040);
  local_4._0_1_ = 8;
  _eh_vector_constructor_iterator_(in_ECX + 0x89,0xc,10,FUN_0046ffd0,FUN_00470040);
  local_4._0_1_ = 9;
  _eh_vector_constructor_iterator_(in_ECX + 0xa7,0x18,4,FUN_0043eb30,FUN_0043ace0);
  in_ECX[0xc2] = &PTR__scalar_deleting_destructor__00a53950;
  *(undefined2 *)(in_ECX + 0xc4) = 0;
  *(undefined2 *)((int)in_ECX + 0x316) = 1;
  *(undefined2 *)((int)in_ECX + 0x312) = 0;
  *(undefined2 *)(in_ECX + 0xc5) = 0;
  in_ECX[0xc3] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined1 *)(in_ECX + 1) = 9;
  FUN_0052b840();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0052d2c0(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  char *pcVar13;
  undefined4 local_19c;
  undefined2 local_198;
  undefined2 local_196;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  undefined4 local_184;
  undefined2 local_180;
  undefined2 local_17e;
  int local_17c;
  int *local_178;
  undefined4 *local_174;
  undefined1 local_170 [96];
  char acStack_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b8868;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_19c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe54;
  *unaff_FS_OFFSET = (int)&local_c;
  local_17c = param_3;
  local_178 = param_2;
  local_188 = param_4 - 2;
  if (param_4 == 0xf) {
    local_188 = 4;
  }
  else if (((int)local_188 < 0) || (4 < (int)local_188)) {
    local_188 = 0xffffffff;
  }
  local_190 = 0;
  local_194 = 0;
  local_18c = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(local_170,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_184 = 0;
  local_180 = 0;
  local_17e = 0;
  local_19c = 0;
  local_198 = 0;
  local_196 = 0;
  puVar8 = (undefined4 *)*param_1;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (puVar8 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar8 + 1);
    if ((LVar4 == 0) && (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1,uVar3);
    }
    *param_1 = 0;
  }
  puVar5 = (undefined4 *)FUN_00523d80();
  puVar8 = (undefined4 *)*local_178;
  if (puVar8 != puVar5) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar8 + 1), LVar4 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    *local_178 = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  uVar3 = local_188;
  if (local_188 < 5) {
    if (local_17c == 0) {
      local_188 = 0;
    }
    else {
      local_188 = FUN_00519d20();
    }
    iVar10 = uVar3 + local_188 * 5;
    iVar12 = iVar10 * 3;
    if (*(ushort *)(local_174 + iVar12 + 0x8b) == 0xffff) {
      pcVar6 = (char *)local_174[iVar12 + 0x8a];
      pcVar13 = pcVar6 + 1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar6 - (int)pcVar13;
    }
    else {
      uVar3 = (uint)*(ushort *)(local_174 + iVar12 + 0x8b);
    }
    if (uVar3 == 0) {
      FUN_00401f20(local_19c);
      local_19c = 0;
      local_196 = 0;
      local_198 = 0;
      FUN_00401f20(0);
      goto LAB_0052d7c1;
    }
    puVar7 = (undefined1 *)local_174[iVar10 * 3 + 0x8a];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    FUN_00402e30(&local_184,"Textures\\%s",puVar7);
    uVar9 = local_184;
    puVar8 = (undefined4 *)FUN_00442890(&local_174,local_184,0,0);
    local_4._0_1_ = 6;
    FUN_0075fa90(*puVar8);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (((local_174 != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(local_174 + 1), LVar4 == 0)) &&
       (local_174 != (undefined4 *)0x0)) {
      (**(code **)*local_174)(1);
    }
    if (*param_1 == 0) {
      FUN_00401f20(local_19c);
      local_19c = 0;
      local_196 = 0;
      local_198 = 0;
      FUN_00401f20(uVar9);
    }
    else {
      if (DAT_00b10d3c == '\0') {
LAB_0052d71c:
        local_4._0_1_ = 4;
        FUN_00402da0();
        local_4._0_1_ = 3;
        FUN_00402da0();
        local_4._0_1_ = 2;
        _eh_vector_destructor_iterator_(local_170,0x18,4,FUN_0043ace0);
        local_4._0_1_ = 1;
        FUN_007016a0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_007016a0();
        local_4 = 0xffffffff;
        FUN_007016a0();
        uVar9 = 1;
        goto LAB_0052d7d0;
      }
      if (param_4 == 2) {
        if (local_188 == 1) {
          pcVar13 = "%08XModUpperBodyFemale";
          piVar11 = (int *)(-(uint)(DAT_00b3630c != '\0') & 0xb364b8);
        }
        else {
          pcVar13 = "%08XModUpperBodyMale";
          piVar11 = (int *)(-(uint)(DAT_00b3630c != '\0') & 0xb364a0);
        }
      }
      else {
        pcVar13 = "%08XModBody";
        piVar11 = (int *)(-(uint)(DAT_00b3630c != '\0') & 0xb364d0);
      }
      _sprintf(acStack_110,pcVar13,*(undefined4 *)(local_17c + 0xc));
      if (piVar11 != (int *)0x0) {
        uVar9 = (**(code **)(*DAT_00b35300 + 4))(acStack_110,0);
        piVar2 = local_178;
        FUN_0075fa90(uVar9);
        if (*piVar2 != 0) goto LAB_0052d71c;
        uVar9 = (**(code **)(*piVar11 + 0x14))();
        FUN_00402e30(&local_184,"Meshes\\%s",uVar9);
        uVar9 = FUN_005500c0(&local_19c,local_184,1,0);
        iVar10 = FUN_00553620(0,0,0,uVar9);
        if (iVar10 != 0) {
          TESNPC_FaceGenFiller(local_170);
          iVar12 = 0;
          iVar10 = FUN_00579060();
          piVar11 = local_178;
          if (iVar10 == 0x40c) {
            iVar12 = (-(uint)(param_4 != 2) & 0xfffffffb) + 10;
          }
          FUN_00557e60(local_170,local_178,iVar12);
          if (*piVar11 != 0) {
            (**(code **)(*DAT_00b35300 + 8))(acStack_110,*piVar11);
            goto LAB_0052d71c;
          }
        }
      }
      local_4._0_1_ = 4;
      FUN_00402da0();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_00402da0();
    }
    local_4._0_1_ = 2;
    _eh_vector_destructor_iterator_(local_170,0x18,4,FUN_0043ace0);
    local_4._0_1_ = 1;
    FUN_007016a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_007016a0();
    local_4 = 0xffffffff;
    FUN_007016a0();
  }
  else {
    FUN_00401f20(local_19c);
    local_19c = 0;
    local_196 = 0;
    local_198 = 0;
    FUN_00401f20(0);
LAB_0052d7c1:
    local_4 = CONCAT31(local_4._1_3_,2);
    _eh_vector_destructor_iterator_(local_170,0x18,4,FUN_0043ace0);
  }
  uVar9 = 0;
LAB_0052d7d0:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_8 replaced with injection: alloca_probe */

undefined4 FUN_0052d800(int param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcStack_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  bVar2 = false;
  iVar4 = FUN_004511c0();
  if (iVar4 == 9) {
    FUN_00451210();
    iVar4 = FUN_004510b0();
    while (iVar4 != 0) {
      if (iVar4 < 0x4d414e44) {
        if (iVar4 == 0x4d414e43) {
          FUN_00450c20();
        }
        else if (iVar4 < 0x41544145) {
          if (iVar4 == 0x41544144) {
            pcStack_50 = (char *)0x52d8ba;
            FUN_0046bda0();
          }
          else if (iVar4 == 0x304d414e) {
            bVar2 = true;
          }
          else {
            if (iVar4 != 0x314d414e) {
              if (iVar4 != 0x41474746) goto switchD_0052d992_caseD_4d414e47;
              iVar4 = 0;
              iVar7 = 1;
              goto LAB_0052dca9;
            }
            bVar2 = false;
          }
        }
        else if (iVar4 == 0x43534544) {
          if (in_ECX == (int *)0x0) {
            FUN_0046a390();
          }
          else {
            FUN_0046a390();
          }
        }
        else if (iVar4 == 0x44494445) {
          FUN_00450c20();
          (**(code **)(*in_ECX + 0xd8))();
        }
        else {
          if (iVar4 != 0x4c4c5546) goto switchD_0052d992_caseD_4d414e47;
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0();
          }
          else {
            FUN_0046c7a0();
          }
        }
      }
      else if (iVar4 < 0x4f4c5054) {
        if (iVar4 == 0x4f4c5053) {
          FUN_004510e0();
          FUN_0046f420();
        }
        else {
          switch(iVar4) {
          case 0x4d414e44:
            FUN_00450c20();
            in_ECX[0x25] = local_34;
            in_ECX[0x26] = local_30;
            break;
          case 0x4d414e45:
            if (((*(uint *)(param_1 + 0x254) & 3) == 0) &&
               (uVar8 = *(uint *)(param_1 + 0x254) >> 2, uVar8 != 0)) {
              puVar5 = (undefined4 *)FUN_00401f00();
              FUN_00450c20();
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                FUN_0046bb20();
                pcStack_50 = (char *)0x0;
                uVar6 = FUN_004471a0(*puVar5);
                iVar4 = FUN_009832e6(uVar6);
                if (iVar4 == 0) {
                  (**(code **)(*in_ECX + 0xd4))();
                  pcStack_50 = "Could not find eyes (%08X) for race \'%s\' (%08X).";
                  FUN_004a7a60();
                }
                else {
                  FUN_0052b610();
                }
                puVar5 = puVar5 + 1;
              }
              FUN_00401f20();
            }
            break;
          case 0x4d414e46:
            break;
          default:
switchD_0052d992_caseD_4d414e47:
            cVar3 = FUN_0046ff00();
            if (bVar2) {
              if (cVar3 == '\0') {
                cVar3 = FUN_0046d3d0();
                if (cVar3 != '\0') {
                  FUN_0046db00();
                }
              }
              else {
                FUN_004700e0();
              }
            }
            else if (cVar3 == '\0') {
              cVar3 = FUN_0046d3d0();
              if (cVar3 != '\0') {
                FUN_0046db00();
              }
            }
            else {
              FUN_004700e0();
            }
            break;
          case 0x4d414e48:
            if (((*(uint *)(param_1 + 0x254) & 3) == 0) &&
               (uVar8 = *(uint *)(param_1 + 0x254) >> 2, uVar8 != 0)) {
              puVar5 = (undefined4 *)FUN_00401f00();
              FUN_00450c20();
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                FUN_0046bb20();
                pcStack_50 = (char *)0x0;
                uVar6 = FUN_004471a0(*puVar5);
                iVar4 = FUN_009832e6(uVar6);
                if (iVar4 == 0) {
                  (**(code **)(*in_ECX + 0xd4))();
                  pcStack_50 = "Could not find hair (%08X) for race \'%s\' (%08X).";
                  FUN_004a7a60();
                }
                else {
                  FUN_0052b550();
                }
                puVar5 = puVar5 + 1;
              }
              FUN_00401f20();
            }
            break;
          case 0x4d414e4d:
            break;
          case 0x4d414e50:
            FUN_004510e0();
            break;
          case 0x4d414e53:
            if (1 < *(uint *)(param_1 + 0x254)) {
              FUN_004510f0();
            }
            break;
          case 0x4d414e55:
            FUN_004510e0();
            break;
          case 0x4d414e56:
            if (*(int *)(param_1 + 0x254) == 4) {
              in_ECX[0xc0] = 0;
              in_ECX[0xc1] = 0;
            }
            else if (*(int *)(param_1 + 0x254) == 8) {
              FUN_00450c20();
              in_ECX[0xc0] = local_2c;
              in_ECX[0xc1] = local_28;
            }
            break;
          case 0x4d414e58:
            FUN_00401f00();
            FUN_00450c20();
            FUN_0067b1e0();
          }
        }
      }
      else if (iVar4 < 0x53544747) {
        if (iVar4 == 0x53544746) {
          iVar4 = 1;
        }
        else {
          if (iVar4 == 0x52545441) {
            FUN_00450c20(&pcStack_50,0x10);
            FUN_00468ca0(&pcStack_50);
            FUN_00468ca0(&stack0xffffffb8);
            goto LAB_0052dd4c;
          }
          if (iVar4 != 0x53474746) goto switchD_0052d992_caseD_4d414e47;
          iVar4 = 0;
        }
        iVar7 = 0;
LAB_0052dca9:
        uVar8 = *(uint *)(param_1 + 0x254);
        puVar1 = (uint *)(in_ECX + (iVar7 + iVar4 * 2) * 6 + 0xa7);
        uVar9 = uVar8 >> 2;
        *puVar1 = uVar9;
        puVar1[1] = 1;
        FUN_00527160();
        pcStack_50 = (char *)0x52dcf6;
        _memset(&stack0xffffffc0,0,uVar8);
        FUN_00450c20();
        if (uVar9 != 0) {
          uVar8 = 0;
          do {
            if ((puVar1[3] == 0) || ((int)(puVar1[4] - puVar1[3]) >> 2 == 0)) {
              FUN_00984d5e();
            }
            iVar7 = puVar1[1] * uVar8;
            iVar4 = uVar8 * 4;
            uVar8 = uVar8 + 1;
            *(undefined4 *)(puVar1[3] + iVar7 * 4) = *(undefined4 *)(&stack0xffffffc0 + iVar4);
          } while (uVar8 < uVar9);
        }
      }
      else {
        if (iVar4 != 0x58444e49) goto switchD_0052d992_caseD_4d414e47;
        FUN_004510e0();
        if (bVar2) {
          (**(code **)in_ECX[0x38])();
          (**(code **)in_ECX[0x6e])();
        }
      }
LAB_0052dd4c:
      cVar3 = FUN_0044fea0();
      if (cVar3 == '\0') break;
      iVar4 = FUN_004510b0();
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



undefined4 FaceGen_ChokepointAlloc(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b88d5;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  *param_1 = 0;
  *param_2 = 0;
  iVar2 = FUN_00401f00(0x1e0,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FaceGen_Struct1E0_ctor();
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(0x118,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FaceGen_Struct118_ctor();
  }
  local_4 = 0xffffffff;
  *param_1 = iVar2;
  FUN_006ff420("BSFaceGenNiNodeBiped");
  (**(code **)(*(int *)*param_1 + 0xa0))(uVar3);
  (**(code **)(*(int *)*param_1 + 0xb0))(1);
  (**(code **)(*(int *)*param_1 + 0xb8))(1);
  iVar2 = FUN_00401f00(0x118);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FaceGen_Struct118_ctor();
  }
  *param_2 = iVar2;
  FUN_006ff420("BSFaceGenNiNodeSkinned");
  (**(code **)(*(int *)*param_2 + 0xa0))(uVar3);
  (**(code **)(*(int *)*param_2 + 0xb0))(0);
  (**(code **)(*(int *)*param_2 + 0xb8))(0);
  FaceGen_LocalHelperCtor();
  iVar2 = local_c;
  FaceGen_HelperPopulator(local_c,&stack0xffffff18);
  FaceGen_HelperToOutStateMachine(param_1,param_2,&stack0xffffff18,local_4);
  if ((char)puStack_8 != '\0') {
    BSFaceGen_DoSomething(*param_1,&stack0xffffff18);
    BSFaceGen_DoSomething(*param_2,&stack0xffffff18);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 7)) {
    *(undefined1 *)(*param_1 + 0x111) = 1;
    *(undefined1 *)(*param_2 + 0x111) = 1;
  }
  FUN_00526ce0();
  *unaff_FS_OFFSET = iStack_24;
  return 1;
}



void FUN_0052e0d0(int param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x54445254) {
      FUN_00450c20(in_ECX,0x10);
    }
  }
  return;
}



undefined1 * FUN_0052e100(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  return puVar1;
}



void FUN_0052e110(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  puVar1 = (undefined1 *)param_1[4];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  FUN_004028d0(puVar1,0);
  return;
}



void FUN_0052e150(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b893b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0x32;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  FUN_00401f20(0,uVar1);
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052e1c0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_0052e1e0(undefined4 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  pcVar1 = local_108;
  cVar4 = *param_2;
  while (cVar4 != '\0') {
    param_2 = param_2 + 1;
    *pcVar1 = cVar4;
    pcVar1 = pcVar1 + 1;
    cVar4 = *param_2;
  }
  cVar4 = *param_3;
  *pcVar1 = '\\';
  while (pcVar1 = pcVar1 + 1, cVar4 != '\0') {
    param_3 = param_3 + 1;
    *pcVar1 = cVar4;
    cVar4 = *param_3;
  }
  cVar4 = *param_4;
  *pcVar1 = '\\';
  while (pcVar2 = pcVar1 + 1, cVar4 != '\0') {
    param_4 = param_4 + 1;
    *pcVar2 = cVar4;
    pcVar1 = pcVar2;
    cVar4 = *param_4;
  }
  cVar4 = *param_5;
  *pcVar2 = '\\';
  pcVar1 = pcVar1 + 2;
  if (cVar4 != '\0') {
    do {
      pcVar2 = pcVar1;
      param_5 = param_5 + 1;
      *pcVar2 = cVar4;
      cVar4 = *param_5;
      pcVar1 = pcVar2 + 1;
    } while (cVar4 != '\0');
    pcVar2[1] = '\\';
    pcVar1 = pcVar2 + 2;
  }
  cVar4 = *param_6;
  while (cVar4 != '\0') {
    param_6 = param_6 + 1;
    *pcVar1 = cVar4;
    pcVar1 = pcVar1 + 1;
    cVar4 = *param_6;
  }
  cVar4 = *param_7;
  *pcVar1 = '.';
  while (pcVar1 = pcVar1 + 1, cVar4 != '\0') {
    param_7 = param_7 + 1;
    *pcVar1 = cVar4;
    cVar4 = *param_7;
  }
  *pcVar1 = '\0';
  if (DAT_00b33a04 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*DAT_00b33a04 + 4))(local_108,0,0,0xffffffff);
  }
  FUN_004028d0(local_108,0);
  return iVar3 != 0;
}



void FUN_0052e320(int *param_1,int *param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != 0)) {
    cVar1 = *(char *)(in_ECX + 0xc);
    if (cVar1 == '\0') {
      FUN_004028d0("New Response",0);
    }
    else {
      if (param_5 == 0) {
        param_5 = *(uint *)(param_3 + 0xc);
      }
      FUN_004028d0("%s_%s_%08X_%u",0);
      local_4 = 0;
      uVar3 = (**(code **)(*param_2 + 0xd4))(param_5 & 0xffffff,cVar1,uVar2);
      uVar3 = (**(code **)(*param_1 + 0xd4))(uVar3);
      FUN_00402e30(param_4,0,uVar3);
      FUN_00401f20(0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_0052e410(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b8970;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_1c = 0;
  local_18 = 0;
  local_16 = 0;
  local_4 = 1;
  FUN_0052e320(param_2,param_3,param_4,&local_1c,0);
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar3);
  if (iVar4 == 0) {
LAB_0052e49b:
    FUN_00401f20(local_1c);
    FUN_00401f20(0);
  }
  else {
    param_4 = FUN_0046b680(0xffffffff);
    iVar4 = FUN_0046b680(0);
    if ((param_4 == 0) && (param_4 = iVar4, iVar4 == 0)) {
      FUN_00401f20(local_1c);
      FUN_00401f20(0);
    }
    else {
      param_2 = 0;
      uVar5 = FUN_005e1df0();
      iVar6 = FUN_005e32f0();
      if (iVar6 == 0) {
        FUN_00401f20(local_1c);
        FUN_00401f20(0);
      }
      else {
        iVar6 = FUN_0052b470(uVar5);
        if (iVar6 == 0) goto LAB_0052e49b;
        param_3 = *(undefined1 **)(iVar6 + 0x1c);
        if (param_3 == (undefined1 *)0x0) {
          param_3 = &DAT_00a2f7ec;
        }
        if ((param_3 != (undefined1 *)0x0) &&
           (((param_4 == 0 || (param_2 = param_4 + 0x1c, param_2 != 0)) ||
            (param_2 = iVar4 + 0x1c, param_4 = iVar4, param_2 != 0)))) {
          iVar6 = FUN_005e1df0();
          uVar5 = local_1c;
          puVar1 = PTR_DAT_00b10d60;
          if (iVar6 == 0) {
            puVar7 = &DAT_00a54e54;
          }
          else if (iVar6 == 1) {
            puVar7 = &DAT_00a54e58;
          }
          else {
            puVar7 = &DAT_00a2f7ec;
          }
          cVar2 = FUN_0052e1e0(param_5,"Data\\Sound\\Voice",param_2,param_3,puVar7,local_1c,
                               PTR_DAT_00b10d60);
          if ((cVar2 != '\0') ||
             (((param_4 != iVar4 && (iVar4 + 0x1c != 0)) &&
              (cVar2 = FUN_0052e1e0(param_5,"Data\\Sound\\Voice",iVar4 + 0x1c,param_3,puVar7,uVar5,
                                    puVar1), cVar2 != '\0')))) {
            local_4 = local_4 & 0xffffff00;
            FUN_00402da0();
            local_4 = 0xffffffff;
            FUN_00402da0();
            uVar5 = 1;
            goto LAB_0052e63b;
          }
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00402da0();
        local_4 = 0xffffffff;
        FUN_00402da0();
      }
    }
  }
  uVar5 = 0;
LAB_0052e63b:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_0052e660(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b8a7f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a54efc;
  in_ECX[6] = &PTR_LAB_00a54ee0;
  in_ECX[8] = &PTR_FUN_00a54ec4;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_00470040();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052e6e0(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046ae40(0x58444e49,in_ECX + 0x2c,4);
  FUN_0046a700();
  FUN_00470070(0x4e4f4349);
  FUN_0046bbb0(in_ECX + 0x2c,0x14);
  FUN_0046a440(in_ECX + 0x40,0x4d414e41);
  FUN_0046a440(in_ECX + 0x48,0x4d414e4a);
  FUN_0046a440(in_ECX + 0x50,0x4d414e45);
  FUN_0046a440(in_ECX + 0x58,0x4d414e4d);
  FUN_0046b9f0();
  return;
}



undefined4 FUN_0052e7e0(uint param_1)

{
  if ((param_1 < 3) && ((undefined4 *)(&PTR_DAT_00b10d90)[param_1] != (undefined4 *)0x0)) {
    return *(undefined4 *)(&PTR_DAT_00b10d90)[param_1];
  }
  return 0;
}



undefined4 FUN_0052e800(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0xcU < 0x15) {
    uVar1 = FUN_00565cc0();
    return uVar1;
  }
  return 0;
}



void FUN_0052e820(byte param_1)

{
  FUN_0052e660();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0052e840(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  
  iVar2 = FUN_004511c0();
  if (iVar2 == 0xb) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4d414e46) {
        if (iVar2 == 0x4d414e45) {
          piVar4 = in_ECX + 0x14;
          goto LAB_0052e948;
        }
        if (iVar2 < 0x44494446) {
          if (iVar2 == 0x44494445) {
            FUN_00450c20(&stack0xfffffff0,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
          }
          else if (iVar2 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0xb,0x14);
          }
          else if (iVar2 == 0x43534544) {
            if (in_ECX == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = in_ECX + 6;
            }
            goto LAB_0052e948;
          }
        }
        else if (iVar2 == 0x4d414e41) {
          piVar4 = in_ECX + 0x10;
          goto LAB_0052e948;
        }
      }
      else {
        if (iVar2 == 0x4d414e4a) {
          piVar4 = in_ECX + 0x12;
        }
        else {
          if (iVar2 != 0x4d414e4d) {
            if (iVar2 == 0x4e4f4349) {
              if (in_ECX == (int *)0x0) {
                FUN_004700e0(0,param_1);
              }
              else {
                FUN_004700e0(in_ECX + 8,param_1);
              }
            }
            goto LAB_0052e950;
          }
          piVar4 = in_ECX + 0x16;
        }
LAB_0052e948:
        FUN_0046a390(piVar4,param_1);
      }
LAB_0052e950:
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



undefined4 FUN_0052ea90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) - 0xcU < 0x15) {
    uVar1 = FUN_00565cc0(*(int *)(in_ECX + 0x2c));
    return uVar1;
  }
  return 0;
}



undefined1 * FUN_0052eab0(int param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    return DAT_00b36500;
  }
  if (param_1 + -1 < 4) {
    puVar1 = (undefined1 *)(**(code **)(*(int *)(in_ECX + 0x38 + param_1 * 8) + 0x10))();
    return puVar1;
  }
  return &DAT_00a2f7ec;
}



void FUN_0052eaf0(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  in_ECX[0xb] = -1;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  piVar2 = in_ECX + 0x10;
  iVar1 = 4;
  do {
    (**(code **)*piVar2)();
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(*in_ECX + 0x90))(0);
  if (in_ECX + 4 != (int *)0x0) {
    iVar1 = in_ECX[5];
    while (iVar1 != 0) {
      iVar1 = *(int *)(in_ECX[5] + 4);
      FUN_00401f20(in_ECX[5]);
      in_ECX[5] = iVar1;
    }
    in_ECX[4] = 0;
  }
  return;
}



void FUN_0052eb70(void)

{
  FUN_0052eaf0();
  thunk_FUN_0046b090();
  return;
}



void FUN_0052eb80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ab3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_0046a400();
  FUN_0046ffd0();
  in_ECX[6] = &PTR_LAB_00a54ee0;
  in_ECX[8] = &PTR_FUN_00a54ec4;
  local_4 = CONCAT31(local_4._1_3_,1);
  *in_ECX = &PTR_FUN_00a54efc;
  iVar2 = 3;
  do {
    FUN_0046a400();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined1 *)(in_ECX + 1) = 0xb;
  FUN_0052eaf0();
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0052ec30(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046ae40(0x58444958,in_ECX + 0x30,4);
  DAT_00b3650c = in_ECX;
  FUN_0046b9f0();
  return;
}



void FUN_0052ed10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    if (0 < *(int *)((int)&DAT_00b110f4 + iVar1)) {
      iVar3 = 0;
      do {
        *(undefined4 *)(iVar3 + *(int *)((int)&PTR_DAT_00b111b8 + iVar1)) = 0;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)((int)&DAT_00b110f4 + iVar1));
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x1c);
  return;
}



undefined4 FUN_0052ed50(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < (int)(&DAT_00b110f4)[param_1])) {
    return *(undefined4 *)((&PTR_DAT_00b111b8)[param_1] + param_2 * 0xc);
  }
  return 0;
}



uint FUN_0052ed80(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 8) <= param_1) {
    FUN_00452910(*(int *)(in_ECX + 0x14) + param_1);
  }
  FUN_00446c50(param_1,param_2);
  return param_1;
}



void FUN_0052ee30(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  int iStack_8;
  int *local_4;
  
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    local_4 = in_ECX;
    for (piVar3 = in_ECX + 10;
        (piVar3 != (int *)0x0 && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0));
        piVar3 = (int *)piVar3[1]) {
      if ((char)piVar1[8] == '\0') {
        if (*piVar1 == 0) {
          if (piVar1[7] == 0) {
            iVar5 = 0;
            if (piVar1 != (int *)0xfffffffc) {
              iVar5 = piVar1[4];
            }
            iVar7 = 0;
            if (0 < iVar5) {
              piVar6 = (int *)piVar1[2];
              do {
                if ((*(uint *)(*piVar6 + 8) >> 5 & 1) == 0) {
                  iVar7 = iVar7 + 1;
                }
                piVar6 = piVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              if (0 < iVar7) {
                uVar4 = (**(code **)(*in_ECX + 0xd4))(iVar7);
                FUN_004a7a60("No Quest Reference on Topic \"%s\" (%d non-deleted infos attached to this quest)."
                             ,uVar4);
              }
            }
          }
          else {
            iStack_8 = piVar1[7];
            uVar4 = FUN_0046b680(0xffffffff);
            FUN_0046bb20(&iStack_8,uVar4);
            uVar4 = FUN_0046b250(iStack_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
            iVar5 = FUN_009832e6(uVar4);
            piVar1[7] = iVar5;
          }
        }
        else {
          uVar4 = FUN_0046b250(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
          iVar5 = FUN_009832e6(uVar4);
          *piVar1 = iVar5;
        }
        *(undefined1 *)(piVar1 + 8) = 1;
      }
      if (piVar1 != (int *)0xfffffffc) {
        FUN_005a56f0();
        uVar2 = piVar1[4];
        uVar8 = 0;
        if (uVar2 != 0) {
          do {
            piVar6 = *(int **)(piVar1[2] + uVar8 * 4);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x6c))();
              *(short *)(piVar6 + 8) = (short)uVar8;
            }
            uVar8 = uVar8 + 1;
            in_ECX = local_4;
          } while (uVar8 < uVar2);
        }
      }
    }
    FUN_0046ab80(1);
  }
  return;
}



int * FUN_0052efa0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x28);
  do {
    if ((piVar1 == (int *)0x0) || (piVar2 = (int *)*piVar1, piVar2 == (int *)0x0)) {
      return (int *)0x0;
    }
    piVar1 = (int *)piVar1[1];
  } while ((*piVar2 != param_1) || ((param_1 == 0 && (piVar2[7] != 0))));
  return piVar2 + 1;
}



void FUN_0052efe0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 4) + uVar3 * 4);
        if (iVar2 != 0) {
          *(short *)(iVar2 + 0x20) = (short)uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



int FUN_0052f010(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int *param_6)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char local_11;
  int local_10;
  int *local_c;
  int local_8;
  uint local_4;
  
  *param_1 = 0;
  if ((*(uint *)(in_ECX + 8) >> 5 & 1) != 0) {
    return 0;
  }
  local_10 = in_ECX;
  if (DAT_00b36510 == (int *)0x0) {
    DAT_00b36510 = (int *)FUN_00401f00(8);
    if (DAT_00b36510 == (int *)0x0) {
      DAT_00b36510 = (int *)0x0;
    }
    else {
      *DAT_00b36510 = 0;
      DAT_00b36510[1] = 0;
    }
  }
  else {
    FUN_004526e0();
  }
  bVar3 = false;
  local_8 = 0;
  cVar8 = (char)param_4;
  piVar2 = (int *)(in_ECX + 0x28);
  piVar6 = DAT_00b36510;
joined_r0x0052f07a:
  do {
    do {
      if (((piVar2 == (int *)0x0) || (piVar1 = (int *)*piVar2, piVar1 == (int *)0x0)) || (bVar3)) {
        if ((piVar6[1] == 0) && (*piVar6 == 0)) {
          if (cVar8 == '\0') {
            return local_8;
          }
          iVar5 = 0;
          if (((*(char *)(DAT_00b333c4 + 0x116) != '\0') &&
              (cVar8 = *(char *)(in_ECX + 0x24), '\x01' < cVar8)) &&
             ((cVar8 < '\x05' || (cVar8 == '\x06')))) {
            *(undefined1 *)(DAT_00b333c4 + 0x116) = 0;
            iVar5 = FUN_0052f010(param_1,param_2,param_3,param_4,param_5,param_6);
            *(undefined1 *)(DAT_00b333c4 + 0x116) = 1;
            return iVar5;
          }
        }
        else {
          uVar10 = 0;
          for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
            if (*piVar6 != 0) {
              uVar10 = uVar10 + 1;
            }
          }
          uVar7 = FUN_0047df80(0);
          iVar11 = 0;
          iVar5 = 0;
          iVar9 = uVar7 % uVar10 + 1;
          piVar6 = DAT_00b36510;
          if (0 < iVar9) {
            do {
              if (piVar6 == (int *)0x0) {
                return iVar5;
              }
              if (*piVar6 != 0) {
                iVar11 = iVar11 + 1;
                iVar5 = *piVar6;
              }
              piVar6 = (int *)piVar6[1];
            } while (iVar11 < iVar9);
          }
        }
        return iVar5;
      }
      local_c = (int *)piVar2[1];
      bVar3 = false;
      piVar2 = local_c;
      in_ECX = local_10;
    } while (((piVar1 == (int *)0x0) || (*piVar1 == 0)) || ((*(byte *)(*piVar1 + 0x3c) & 1) == 0));
    local_4 = piVar1[4];
    uVar10 = 0;
  } while (local_4 == 0);
  do {
    iVar5 = *(int *)(piVar1[2] + uVar10 * 4);
    local_11 = '\0';
    if ((iVar5 != 0) && (cVar4 = FUN_00530830(&local_11,*piVar1,param_2,param_3), cVar4 != '\0')) {
      *param_1 = 0;
      if (cVar8 == '\0') {
LAB_0052f23e:
        uVar7 = (uint)*(char *)(iVar5 + 0x25);
        if ((uVar7 >> 5 & 1) != 0) {
          bVar3 = true;
        }
        if (((DAT_00b36510[1] == 0) && (*DAT_00b36510 == 0)) && ((uVar7 >> 1 & 1) == 0)) {
          return iVar5;
        }
        if ((uVar7 >> 1 & 1) == 0) {
          bVar3 = true;
          piVar2 = local_c;
          in_ECX = local_10;
          piVar6 = DAT_00b36510;
          goto joined_r0x0052f07a;
        }
        FUN_00446cb0(iVar5);
      }
      else if (*(int **)(iVar5 + 0x30) == (int *)0x0) {
LAB_0052f1f5:
        piVar6 = param_6;
        if ((*(byte *)(iVar5 + 0x25) >> 5 & 1) != 0) {
          bVar3 = true;
        }
        do {
          if ((piVar6 == (int *)0x0) ||
             ((piVar2 = (int *)piVar6[1], piVar2 == (int *)0x0 && (*piVar6 == 0))))
          goto LAB_0052f23e;
          iVar9 = *piVar6;
        } while ((*(int *)(iVar9 + 0xc) != iVar5) &&
                (((piVar6 = piVar2, (*(byte *)(*piVar1 + 0x3c) & 4) != 0 ||
                  (*(int *)(iVar9 + 0x14) != *piVar1)) || (*(int *)(iVar9 + 0x10) != local_10))));
      }
      else {
        piVar6 = *(int **)(iVar5 + 0x30);
        if (param_5 == 0) {
          cVar4 = FUN_0046cb60();
          if ((cVar4 != '\0') || (param_3 == DAT_00b333c4)) goto LAB_0052f1f5;
        }
        else {
          do {
            piVar2 = (int *)piVar6[1];
            if ((piVar2 == (int *)0x0) && (*piVar6 == 0)) break;
            if ((*piVar6 == param_5) || (*(int *)(*piVar6 + 0xc) == 0xd3)) goto LAB_0052f1f5;
            piVar6 = piVar2;
          } while (piVar2 != (int *)0x0);
        }
      }
    }
    if ((cVar8 == '\0') && (local_11 != '\0')) {
      *param_1 = 1;
      local_8 = iVar5;
    }
    piVar2 = local_c;
    in_ECX = local_10;
    piVar6 = DAT_00b36510;
    if ((bVar3) || (uVar10 = uVar10 + 1, local_4 <= uVar10)) goto joined_r0x0052f07a;
  } while( true );
}



undefined4 FUN_0052f330(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *local_4;
  
  iVar7 = 0;
  piVar1 = (int *)(in_ECX + 0x28);
  for (piVar5 = piVar1; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    if (*piVar5 != 0) {
      iVar7 = iVar7 + 1;
    }
  }
  piVar5 = (int *)(iVar7 + -1);
  piVar2 = piVar1;
  local_4 = piVar5;
  if (0 < (int)piVar5) {
    do {
      while ((piVar5 = piVar2, piVar5 != (int *)0x0 &&
             (piVar2 = (int *)*piVar5, piVar2 != (int *)0x0))) {
        piVar3 = (int *)piVar5[1];
        if ((piVar3 != (int *)0x0) && (piVar4 = (int *)*piVar3, piVar4 != (int *)0x0)) {
          if (*piVar2 == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)*(byte *)(*piVar2 + 0x3d);
          }
          if (*piVar4 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)*(byte *)(*piVar4 + 0x3d);
          }
          if ((int)uVar8 < (int)uVar6) {
            *piVar5 = (int)piVar4;
            *piVar3 = (int)piVar2;
          }
        }
        piVar2 = (int *)piVar5[1];
      }
      local_4 = (int *)((int)local_4 + -1);
      piVar2 = piVar1;
    } while (local_4 != (int *)0x0);
  }
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}



void FUN_0052f3c0(uint param_1,undefined4 param_2)

{
  void *_Src;
  uint uVar1;
  int in_ECX;
  
  FUN_005a56f0();
  if (*(uint *)(in_ECX + 0xc) < param_1) {
    if (*(uint *)(in_ECX + 8) <= param_1) {
      FUN_00452910(*(int *)(in_ECX + 0x14) + param_1);
    }
    FUN_00446c50(param_1,&param_2);
    return;
  }
  uVar1 = *(uint *)(in_ECX + 0xc) + 1;
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00452910(*(int *)(in_ECX + 0x14) + uVar1);
  }
  _Src = (void *)(*(int *)(in_ECX + 4) + param_1 * 4);
  _memmove((void *)((int)_Src + 4),_Src,(*(int *)(in_ECX + 0xc) - param_1) * 4);
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4) = param_2;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a5547c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

bool FUN_0052f480(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  int aiStack_20 [2];
  undefined4 uStack_18;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  uStack_18 = 0x52f4b3;
  iVar2 = -(int)pcVar3;
  puVar5 = &stack0xffffffec + iVar2;
  iVar4 = iVar2 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(&stack0xffffffec + iVar4)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if ((&stack0xffffffec == pcVar3) || (iVar4 = *(int *)(in_ECX + 0x34), iVar4 == 0)) {
    iVar4 = (uint)(&stack0xffffffec == pcVar3) * 2 + -1;
  }
  else {
    *(undefined1 **)((int)&uStack_18 + iVar2) = &stack0xffffffec + iVar2;
    *(int *)((int)aiStack_20 + iVar2 + 4) = iVar4;
    *(undefined4 *)((int)aiStack_20 + iVar2) = 0x52f4e0;
    iVar4 = __stricmp(*(char **)((int)aiStack_20 + iVar2 + 4),*(char **)((int)&uStack_18 + iVar2));
    puVar5 = &stack0xffffffec + iVar2;
  }
  if (iVar4 != 0) {
    *(undefined4 *)(puVar5 + -4) = 0;
    *(undefined1 **)(puVar5 + -8) = &stack0xffffffec + iVar2;
    *(undefined4 *)(puVar5 + -0xc) = 0x52f502;
    FUN_004028d0();
  }
  return iVar4 != 0;
}



int FUN_0052f520(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)(in_ECX + 0x28);
  do {
    do {
      if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
        return 0;
      }
      uVar3 = *(uint *)(iVar2 + 0x10);
      piVar1 = (int *)piVar1[1];
    } while ((uVar3 == 0) || (uVar4 = 0, uVar3 == 0));
    if (uVar3 == 0) {
      iVar5 = 0;
      goto LAB_0052f554;
    }
    do {
      iVar5 = *(int *)(*(int *)(iVar2 + 8) + uVar4 * 4);
LAB_0052f554:
      if (iVar5 == param_1) {
        return iVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  } while( true );
}



undefined4 FUN_0052f570(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)(in_ECX + 0x28);
  do {
    do {
      if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0)) {
        return 0;
      }
      uVar3 = puVar2[4];
      piVar1 = (int *)piVar1[1];
    } while ((uVar3 == 0) || (uVar4 = 0, uVar3 == 0));
    if (uVar3 == 0) {
      iVar5 = 0;
      goto LAB_0052f5ac;
    }
    do {
      iVar5 = *(int *)(puVar2[2] + uVar4 * 4);
LAB_0052f5ac:
      if (iVar5 == param_1) {
        return *puVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  } while( true );
}



int FUN_0052f5d0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  piVar1 = (int *)(in_ECX + 0x28);
  do {
    while( true ) {
      do {
        if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
          return 0;
        }
        uVar3 = *(uint *)(iVar2 + 0x10);
        piVar1 = (int *)piVar1[1];
      } while (uVar3 == 0);
      uVar5 = uVar3;
      if (param_2 != '\0') break;
      uVar5 = 0;
      if (uVar3 != 0) {
        if (uVar3 == 0) goto LAB_0052f633;
        do {
          iVar4 = *(int *)(*(int *)(iVar2 + 8) + uVar5 * 4);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == param_1)) {
            return iVar4;
          }
LAB_0052f633:
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
    }
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      if (((uVar5 < uVar3) && (iVar4 = *(int *)(*(int *)(iVar2 + 8) + uVar5 * 4), iVar4 != 0)) &&
         (*(int *)(iVar4 + 0xc) == param_1)) {
        return iVar4;
      }
    }
  } while( true );
}



void FUN_0052f650(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0052efa0(param_1);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
        if (iVar2 != 0) {
          *(short *)(iVar2 + 0x20) = (short)uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



int FUN_0052f690(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_00b33a98 + 0x7c);
  while ((piVar3 != (int *)0x0 && (iVar1 = *piVar3, iVar1 != 0))) {
    piVar3 = (int *)piVar3[1];
    iVar2 = FUN_0052f5d0(*(undefined4 *)(param_1 + 0xc),0);
    if (iVar2 == param_1) {
      return iVar1;
    }
  }
  return 0;
}



void FUN_0052f6d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uchar *_Str1;
  int iVar3;
  int iVar4;
  uchar *_Str2;
  int *piVar5;
  
  piVar5 = param_1;
  if (param_1 == (int *)0x0) {
    piVar5 = (int *)(DAT_00b33a98 + 0x7c);
  }
  iVar4 = 0;
  for (piVar1 = piVar5; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
  }
  param_1 = (int *)(iVar4 + -1);
  piVar1 = piVar5;
  if (0 < (int)param_1) {
    do {
      for (; (piVar1 != (int *)0x0 && (iVar4 = *piVar1, iVar4 != 0)); piVar1 = (int *)piVar1[1]) {
        if (((int *)piVar1[1] != (int *)0x0) && (iVar2 = *(int *)piVar1[1], iVar2 != 0)) {
          _Str2 = *(uchar **)(iVar2 + 0x1c);
          if (_Str2 == (uchar *)0x0) {
            _Str2 = "";
          }
          _Str1 = *(uchar **)(iVar4 + 0x1c);
          if (_Str1 == (uchar *)0x0) {
            _Str1 = "";
          }
          iVar3 = __mbsicmp(_Str1,_Str2);
          if (0 < iVar3) {
            *piVar1 = iVar2;
            *(int *)piVar1[1] = iVar4;
          }
        }
      }
      param_1 = (int *)((int)param_1 + -1);
      piVar1 = piVar5;
    } while (param_1 != (int *)0x0);
  }
  return;
}



void FUN_0052f770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0052f010(param_1,param_2,param_3,0,0,0);
  return;
}



undefined4 FUN_0052f790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 extraout_var;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0052f010(&param_4,param_1,param_2,1,param_3,param_4);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_00401f00(0x1c,uVar1);
    uVar4 = 0;
    local_4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_0052f570(iVar2);
      uVar4 = FUN_006b80d0(uVar4,extraout_var,iVar2,param_1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



int FUN_0052f830(int param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  while (cVar1 = FUN_0046cb60(), cVar1 == '\0') {
    iVar2 = *param_3;
    if (iVar2 != 0) {
      FUN_006b81d0();
      FUN_00401f20(iVar2);
    }
    piVar6 = (int *)param_3[1];
    if (piVar6 == (int *)0x0) {
      *param_3 = 0;
    }
    else {
      param_3[1] = piVar6[1];
      *param_3 = *piVar6;
      FUN_00401f20(piVar6);
    }
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  local_4 = param_1;
  local_c = param_2;
  local_8 = 0;
  if (param_4 != 0) goto LAB_0052f8e4;
  iVar2 = FUN_00447440(0xd2);
  iVar4 = param_1;
joined_r0x0052f8d2:
  local_4 = iVar4;
  param_4 = iVar2;
  if (param_4 != 0) {
LAB_0052f8e4:
    uVar3 = FUN_0052b4a0();
    if (uVar3 < 100) {
      iVar4 = FUN_0052f790(local_4,local_c,local_8,param_3);
      if ((iVar4 == 0) && (iVar4 = FUN_0052f790(local_4,local_c,local_8,param_3), iVar4 == 0)) {
        param_4 = FUN_00447440(0xd4);
        iVar4 = FUN_0052f790(local_4,local_c,local_8,param_3);
        if (iVar4 == 0) goto LAB_0052fa20;
      }
      if ((*(int *)(iVar4 + 0xc) != 0) && ((*(byte *)(*(int *)(iVar4 + 0xc) + 0x25) >> 3 & 1) != 0))
      {
        FUN_00531470(param_1);
        FUN_005308d0();
      }
      FUN_0067b1e0(iVar4);
      iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 0x30);
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar9 = 0;
        piVar10 = (int *)(iVar5 + 8);
        for (piVar6 = piVar10; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
          if (*piVar6 != 0) {
            iVar9 = iVar9 + 1;
          }
        }
        iVar5 = 0;
        if (iVar9 != 0) {
          iVar5 = _rand();
          iVar5 = iVar5 % iVar9 + 1;
        }
        iVar9 = 0;
        if (0 < iVar5) {
          do {
            if ((piVar10 == (int *)0x0) || (((int *)piVar10[1] == (int *)0x0 && (*piVar10 == 0))))
            break;
            iVar2 = *piVar10;
            iVar9 = iVar9 + 1;
            piVar10 = (int *)piVar10[1];
          } while (iVar9 < iVar5);
        }
        cVar1 = *(char *)(*(int *)(iVar4 + 0xc) + 0x24);
        local_8 = param_4;
        if (cVar1 != '\0') goto code_r0x0052f9ec;
        goto LAB_0052fa04;
      }
    }
  }
LAB_0052fa20:
  if (DAT_00b36508 != '\0') {
    FUN_00579b60("------NEW CONVERSATION CREATED---------------------");
    iVar2 = 1;
    piVar6 = param_3;
    do {
      iVar4 = *piVar6;
      if (iVar4 == 0) break;
      piVar6 = (int *)piVar6[1];
      cVar1 = FUN_006b7ba0();
      if (cVar1 == '\0') {
        uVar8 = (**(code **)(**(int **)(iVar4 + 0x18) + 0xd4))();
        FUN_00579b60("Item %d: %s has no response!",iVar2,uVar8);
      }
      else {
        piVar10 = *(int **)(iVar4 + 0x18);
        puVar7 = (undefined4 *)FUN_006b7c20();
        uVar8 = (**(code **)(*piVar10 + 0xd4))(*puVar7,puVar7[1]);
        FUN_00579b60("Item %d: %s says \'%s\'",iVar2,uVar8);
      }
      iVar2 = iVar2 + 1;
    } while (piVar6 != (int *)0x0);
  }
  iVar2 = 0;
  do {
    if (*param_3 != 0) {
      iVar2 = iVar2 + 1;
    }
    param_3 = (int *)param_3[1];
  } while (param_3 != (int *)0x0);
  return iVar2;
code_r0x0052f9ec:
  iVar4 = local_4;
  if (cVar1 == '\x02') {
    uVar3 = _rand();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    if (uVar3 == 0) {
LAB_0052fa04:
      iVar4 = local_c;
      local_c = local_4;
    }
  }
  goto joined_r0x0052f8d2;
}



void FUN_0052fae0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_00b33a98 + 0x7c);
  cVar3 = '\x01';
  do {
    if (((piVar4 == (int *)0x0) || (*piVar4 == 0)) || (cVar3 == '\0')) {
      return;
    }
    if (param_1 != 0) {
      piVar1 = (int *)(*piVar4 + 0x28);
      do {
        if ((piVar1 == (int *)0x0) || (piVar2 = (int *)*piVar1, piVar2 == (int *)0x0))
        goto LAB_0052fb28;
        piVar1 = (int *)piVar1[1];
      } while (*piVar2 != param_1);
    }
    cVar3 = FUN_0052f330();
LAB_0052fb28:
    piVar4 = (int *)piVar4[1];
  } while( true );
}



void FUN_0052fb40(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0046c460();
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *in_ECX = &PTR_FUN_00a5555c;
  in_ECX[6] = &PTR_FUN_00a55548;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 9) = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x39;
  return;
}



undefined4 FUN_0052fba0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (*(char *)(param_1 + 4) == '9') {
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
    if ((iVar2 != 0) && ((uint)in_ECX[3] < *(uint *)(iVar2 + 0xc))) {
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 4) != ':') {
      uVar1 = FUN_0046b500(param_1);
      return uVar1;
    }
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0052f690(iVar2);
      if (piVar3 != (int *)0x0) {
        if (piVar3 != in_ECX) {
          uVar1 = (**(code **)(*in_ECX + 0x34))(piVar3);
          return uVar1;
        }
        return 1;
      }
    }
  }
  return 0;
}



int * FUN_0052fc40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(in_ECX + 0x28);
    piVar3 = (int *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        piVar5 = (int *)*puVar4;
        if (piVar5 == (int *)0x0) break;
        if (piVar3 != (int *)0x0) goto LAB_0052fd09;
        puVar4 = (undefined4 *)puVar4[1];
        if ((char)piVar5[8] == '\0') {
          if (*piVar5 != param_1) {
            iVar1 = piVar5[7];
LAB_0052fcb3:
            if (iVar1 != param_1) goto LAB_0052fcb5;
          }
        }
        else if ((*piVar5 == 0) || (*(int *)(*piVar5 + 0xc) != param_1)) {
          if (piVar5[7] != 0) {
            iVar1 = *(int *)(piVar5[7] + 0xc);
            goto LAB_0052fcb3;
          }
LAB_0052fcb5:
          piVar5 = (int *)0x0;
        }
        piVar3 = piVar5;
      } while (puVar4 != (undefined4 *)0x0);
      if (piVar3 != (int *)0x0) goto LAB_0052fd09;
    }
    piVar3 = (int *)FUN_00401f00(0x24,uVar2);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[3] = 0;
      piVar3[6] = 1;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[2] = 0;
      piVar3[1] = (int)&PTR__scalar_deleting_destructor__00a554d4;
      *piVar3 = 0;
      piVar3[7] = 0;
      *(undefined1 *)(piVar3 + 8) = 0;
    }
    local_4 = 0xffffffff;
    *piVar3 = param_1;
    FUN_0067b1e0(piVar3);
  }
LAB_0052fd09:
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}



undefined4 FUN_0052fd20(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_2;
  if (((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(in_ECX + 8) >> 3 & 1) != 0)) {
    return 0;
  }
  iVar3 = FUN_0052fc40(param_1,0);
  iVar8 = param_3;
  if (param_3 == 0) {
LAB_0052fe5e:
    iVar8 = 0;
  }
  else {
    if (param_3 == -1) {
      if (*(short *)(iVar9 + 0x20) == -1) {
        uVar6 = *(uint *)(iVar3 + 0x10);
        do {
          uVar2 = uVar6;
          uVar6 = uVar2 - 1;
          if ((int)uVar6 < 1) break;
        } while ((*(uint *)(iVar3 + 0x10) <= uVar6) ||
                (*(int *)(*(int *)(iVar3 + 8) + uVar6 * 4) == 0));
        *(short *)(iVar9 + 0x20) = (short)uVar2;
        FUN_0052ed80(uVar2,&param_2);
      }
      goto LAB_0052fe68;
    }
    if (*(short *)(iVar9 + 0x20) != -1) {
      param_3 = 0;
      FUN_00446c50(*(short *)(iVar9 + 0x20),&param_3);
    }
    iVar4 = FUN_0052f5d0(iVar8,1);
    if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(in_ECX + 0xc);
      uVar5 = (**(code **)(*DAT_00b3650c + 0xd4))(DAT_00b3650c[3]);
      FUN_004a7a60("Could not find previous info (%08X) for TopicInfo (%08X) in Topic \"%s\" (%08X)."
                   ,iVar8,uVar1,uVar5);
      iVar9 = param_2;
      goto LAB_0052fe5e;
    }
    iVar8 = -1;
    iVar9 = param_2;
    if (*(ushort *)(iVar4 + 0x20) == 0xffff) {
      uVar6 = 0;
      if (*(uint *)(iVar3 + 0x10) != 0) {
        piVar7 = *(int **)(iVar3 + 8);
        do {
          if (*piVar7 == iVar4) {
            iVar8 = uVar6 + 1;
            goto LAB_0052fe60;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar6 < *(uint *)(iVar3 + 0x10));
        iVar8 = -1;
      }
    }
    else {
      iVar8 = *(ushort *)(iVar4 + 0x20) + 1;
    }
  }
LAB_0052fe60:
  FUN_0052f3c0(iVar8,iVar9);
LAB_0052fe68:
  FUN_005a56f0();
  FUN_0052f650(param_1);
  return 1;
}



void FUN_0052fe90(void)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = 0;
  do {
    local_18 = 0;
    if (0 < (int)(&DAT_00b110f4)[local_1c]) {
      ppuVar1 = &PTR_DAT_00b111b8 + local_1c;
      iVar4 = 0;
      do {
        if (*(int *)(*ppuVar1 + iVar4) == 0) {
          puVar3 = (undefined4 *)FUN_00401f00(0x3c,uVar2);
          local_4 = 0;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            FUN_0046c460();
            puVar3[6] = &PTR_FUN_00a322a0;
            puVar3[7] = 0;
            *(undefined2 *)(puVar3 + 8) = 0;
            *(undefined2 *)((int)puVar3 + 0x22) = 0;
            *puVar3 = &PTR_FUN_00a5555c;
            puVar3[6] = &PTR_FUN_00a55548;
            puVar3[10] = 0;
            puVar3[0xb] = 0;
            puVar3[0xd] = 0;
            *(undefined2 *)(puVar3 + 0xe) = 0;
            *(undefined2 *)((int)puVar3 + 0x3a) = 0;
            puVar3[0xc] = 0;
            *(undefined1 *)(puVar3 + 9) = (undefined1)local_1c;
            *(undefined1 *)(puVar3 + 1) = 0x39;
          }
          *(undefined4 **)(*ppuVar1 + iVar4) = puVar3;
          local_4 = 0xffffffff;
          FUN_0046c300(*(undefined4 *)(*ppuVar1 + iVar4 + 4),1);
          (**(code **)(**(int **)(*ppuVar1 + iVar4) + 0xd8))(*(undefined4 *)(*ppuVar1 + iVar4 + 8));
          FUN_004028d0(*(undefined4 *)(*ppuVar1 + iVar4 + 8),0);
          FUN_00447530(*(undefined4 *)(*ppuVar1 + iVar4));
          FUN_00412d30(*(undefined4 *)(*ppuVar1 + iVar4 + 8),*(undefined4 *)(*ppuVar1 + iVar4));
        }
        local_18 = local_18 + 1;
        iVar4 = iVar4 + 0xc;
      } while (local_18 < (int)(&DAT_00b110f4)[local_1c]);
    }
    local_1c = local_1c + 1;
  } while (local_1c < 7);
  *unaff_FS_OFFSET = local_c;
  return;
}


