/* ===== MsgUserAddUser @ 0003a64c ===== */

undefined4
MsgUserAddUser(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  memset(&local_44,0,0x24);
  iVar1 = DAT_0003a6e4;
  if (*(int *)(DAT_0003a6e0 + 0x3a66e) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x69;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_0003a6e4 + 0x3a680);
    local_28 = *(undefined4 *)(DAT_0003a6e4 + 0x3a684);
    SemWait(*(undefined4 *)(DAT_0003a6e4 + 0x3a688));
    ShmWrite(*(undefined4 *)(iVar1 + 0x3a684),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x3a684) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x3a684) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x3a684) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x3a688));
  }
  return local_30;
}


/* ===== MsgUserEditUser @ 0003a6e8 ===== */

undefined4
MsgUserEditUser(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  memset(&local_44,0,0x24);
  iVar1 = DAT_0003a780;
  if (*(int *)(DAT_0003a77c + 0x3a70a) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x6a;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_0003a780 + 0x3a71c);
    local_28 = *(undefined4 *)(DAT_0003a780 + 0x3a720);
    SemWait(*(undefined4 *)(DAT_0003a780 + 0x3a724));
    ShmWrite(*(undefined4 *)(iVar1 + 0x3a720),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x3a720) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x3a720) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x3a720) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x3a724));
  }
  return local_30;
}


/* ===== MsgUserAddOrEditUser @ 0003a784 ===== */

undefined4
MsgUserAddOrEditUser(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  memset(&local_44,0,0x24);
  iVar1 = DAT_0003a81c;
  if (*(int *)(DAT_0003a818 + 0x3a7a6) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x6d;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_0003a81c + 0x3a7b8);
    local_28 = *(undefined4 *)(DAT_0003a81c + 0x3a7bc);
    SemWait(*(undefined4 *)(DAT_0003a81c + 0x3a7c0));
    ShmWrite(*(undefined4 *)(iVar1 + 0x3a7bc),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x3a7bc) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x3a7bc) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x3a7bc) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x3a7c0));
  }
  return local_30;
}


