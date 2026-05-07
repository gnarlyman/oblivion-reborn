
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

