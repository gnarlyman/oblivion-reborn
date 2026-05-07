
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

