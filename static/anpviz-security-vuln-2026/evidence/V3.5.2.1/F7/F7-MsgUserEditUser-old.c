/* ===== MsgUserAddUser @ 0003872c ===== */

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
  iVar1 = DAT_000387c4;
  if (*(int *)(DAT_000387c0 + 0x3874e) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x69;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_000387c4 + 0x38760);
    local_28 = *(undefined4 *)(DAT_000387c4 + 0x38764);
    SemWait(*(undefined4 *)(DAT_000387c4 + 0x38768));
    ShmWrite(*(undefined4 *)(iVar1 + 0x38764),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x38764) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x38764) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x38764) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x38768));
  }
  return local_30;
}


/* ===== MsgUserEditUser @ 000387c8 ===== */

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
  iVar1 = DAT_00038860;
  if (*(int *)(DAT_0003885c + 0x387ea) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x6a;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_00038860 + 0x387fc);
    local_28 = *(undefined4 *)(DAT_00038860 + 0x38800);
    SemWait(*(undefined4 *)(DAT_00038860 + 0x38804));
    ShmWrite(*(undefined4 *)(iVar1 + 0x38800),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x38800) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x38800) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x38800) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x38804));
  }
  return local_30;
}


/* ===== MsgUserAddOrEditUser @ 00038864 ===== */

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
  iVar1 = DAT_000388fc;
  if (*(int *)(DAT_000388f8 + 0x38886) < 0) {
    local_30 = 0xffffffff;
  }
  else {
    local_3c = 0x6d;
    local_44 = 1;
    local_40 = *(undefined4 *)(DAT_000388fc + 0x38898);
    local_28 = *(undefined4 *)(DAT_000388fc + 0x3889c);
    SemWait(*(undefined4 *)(DAT_000388fc + 0x388a0));
    ShmWrite(*(undefined4 *)(iVar1 + 0x3889c),param_1,0x28);
    ShmWrite(*(int *)(iVar1 + 0x3889c) + 0x28,param_2);
    ShmWrite(*(int *)(iVar1 + 0x3889c) + 0x50,param_3,0x20);
    ShmWrite(*(int *)(iVar1 + 0x3889c) + 0x70,param_4,8);
    local_24 = 0x78;
    SysMsg_SendRecv(&local_44,0,1);
    SemRelease(*(undefined4 *)(iVar1 + 0x388a0));
  }
  return local_30;
}


