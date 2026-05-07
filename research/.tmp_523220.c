
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

