/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00028b50 */
/* function FUN_00028b50 @ 00028b50 */

int FUN_00028b50(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 auStack_23c [28];
  uint local_220;
  undefined1 auStack_21c [252];
  uint local_120;
  undefined1 auStack_11c [252];
  
  DebugPrint(1,7,DAT_00028d34,DAT_00028d30,0x88b);
  iVar1 = FUN_0004a922(*(undefined4 *)(DAT_00028d38 + 0x28b8),param_2);
  if (iVar1 == 0) {
    DebugPrint(1,7,DAT_00028d3c,DAT_00028d30,0x891);
    return -0xd;
  }
  local_220 = 0;
  memset(auStack_21c,0,0xfc);
  local_120 = 0;
  memset(auStack_11c,0,0xfc);
  FUN_00020778(&local_220,&local_120);
  DebugPrint(1,7,DAT_00028d40,DAT_00028d30,0x899,param_2);
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  memset(auStack_23c,0,0x1c);
  FUN_00049ea0(param_1,&local_240,0x1f);
  iVar2 = *(int *)(iVar1 + 8);
  if (*DAT_00028d44 == 0) {
    if (iVar2 == 0) {
      uVar5 = 0x8c4;
      goto LAB_00028c3c;
    }
    iVar2 = FUN_00022a10(iVar2 + 0x70,&local_248,&local_244);
    if (iVar2 == 0) {
      if (((local_220 & 0xff) != 0) && ((local_120 & 0xff) != 0)) {
        uVar5 = FUN_000206d8();
        pcVar4 = DAT_00028d64;
        goto LAB_00028c70;
      }
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_00028d68;
      goto LAB_00028ca2;
    }
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = 0x8cb;
LAB_00028c22:
    param_3 = (char *)(iVar1 + 0x70);
    uVar3 = DAT_00028d48;
    goto LAB_00028c28;
  }
  if (iVar2 == 0) {
    uVar5 = 0x8a7;
LAB_00028c3c:
    DebugPrint(1,7,DAT_00028d4c,DAT_00028d30,uVar5,iVar2,0x70);
    return -0x91;
  }
  iVar2 = FUN_00022a10(iVar2 + 0x70,&local_248,&local_244);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = 0x8ae;
    goto LAB_00028c22;
  }
  if (local_248 == 1) {
    if (((local_220 & 0xff) == 0) || ((local_120 & 0xff) == 0)) {
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_00028d58;
      goto LAB_00028ca2;
    }
    uVar5 = FUN_000206d8();
    pcVar4 = DAT_00028d50;
LAB_00028c70:
    snprintf(param_3,300,pcVar4,&local_240,uVar5,local_244,&local_220,&local_120);
  }
  else {
    if (((local_220 & 0xff) != 0) && ((local_120 & 0xff) != 0)) {
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_00028d5c;
      goto LAB_00028c70;
    }
    uVar5 = FUN_000206d8();
    pcVar4 = DAT_00028d60;
LAB_00028ca2:
    snprintf(param_3,300,pcVar4,&local_240,uVar5,local_244);
  }
  iVar2 = 0;
  param_3[0x130] = '<';
  uVar3 = DAT_00028d54;
  param_3[0x131] = '\0';
  param_3[0x132] = '\0';
  param_3[0x133] = '\0';
  uVar5 = 0x8d9;
  param_3[300] = '\0';
  param_3[0x12d] = '\0';
LAB_00028c28:
  DebugPrint(1,7,uVar3,DAT_00028d30,uVar5,param_3);
  return iVar2;
}


