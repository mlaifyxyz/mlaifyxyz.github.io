/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000671c0 */
/* function FUN_000671c0 @ 000671c0 */

int FUN_000671c0(undefined4 param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int local_250;
  undefined4 local_24c;
  undefined1 auStack_248 [32];
  uint local_228;
  undefined1 auStack_224 [252];
  uint local_128;
  undefined1 auStack_124 [256];
  
  iVar3 = DAT_00067408;
  DebugPrint(1,7,DAT_000673c0,DAT_000673bc,0x79e);
  iVar1 = FUN_0004a922(*(undefined4 *)(iVar3 + 0x28b8),param_2 + 0x20);
  if (iVar1 == 0) {
    DebugPrint(1,7,DAT_000673c4,DAT_000673bc,0x7a5);
    return -0xd;
  }
  DebugPrint(1,7,DAT_000673c8,DAT_000673bc,0x7a9,param_2 + 0x20);
  local_228 = 0;
  memset(auStack_224,0,0xfc);
  local_128 = 0;
  memset(auStack_124,0,0xfc);
  FUN_00020778(&local_228,&local_128);
  if (*param_2 != '\0') {
    iVar2 = strcasecmp(param_2,DAT_000673cc);
    if ((iVar2 == 0) || (iVar2 = strcasecmp(param_2,DAT_000673d0), iVar2 == 0)) {
      if (-1 < (int)((uint)*(byte *)(iVar3 + 0x40b0) << 0x1a)) {
        uVar5 = 0xffffffff;
        goto LAB_000672bc;
      }
    }
    else {
      iVar2 = strcasecmp(param_2,DAT_000673d4);
      if (iVar2 == 0) {
        if (-1 < (int)((uint)*(byte *)(iVar3 + 0x40b0) << 0x1e)) {
          uVar5 = 0xfffffffe;
LAB_000672bc:
          DebugPrint(8,7,DAT_000673e4,DAT_000673bc,2000,uVar5);
          return -0x2f;
        }
      }
      else {
        iVar3 = strcasecmp(param_2,DAT_000673d8);
        if (((iVar3 != 0) && (iVar3 = strcasecmp(param_2,DAT_000673dc), iVar3 != 0)) &&
           (iVar3 = strcasecmp(param_2,DAT_000673e0), iVar3 != 0)) {
          uVar5 = 0xfffffffd;
          goto LAB_000672bc;
        }
      }
    }
  }
  local_250 = 0;
  local_24c = 0;
  FUN_00049ea0(param_1,auStack_248,0x1f);
  iVar3 = *(int *)(iVar1 + 8) + 0x70;
  if (*DAT_000673e8 == 0) {
    iVar3 = FUN_00022a10(iVar3,&local_250,&local_24c);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (((local_228 & 0xff) != 0) && ((local_128 & 0xff) != 0)) {
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_00067400;
      goto LAB_00067320;
    }
    uVar5 = FUN_000206d8();
    pcVar4 = DAT_00067404;
  }
  else {
    iVar3 = FUN_00022a10(iVar3,&local_250,&local_24c);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_250 == 1) {
      if (((local_228 & 0xff) != 0) && ((local_128 & 0xff) != 0)) {
        uVar5 = FUN_000206d8();
        pcVar4 = DAT_000673ec;
LAB_00067320:
        snprintf(param_3,300,pcVar4,auStack_248,uVar5,local_24c,&local_228,&local_128);
        goto LAB_0006732a;
      }
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_000673f4;
    }
    else {
      if (((local_228 & 0xff) != 0) && ((local_128 & 0xff) != 0)) {
        uVar5 = FUN_000206d8();
        pcVar4 = DAT_000673f8;
        goto LAB_00067320;
      }
      uVar5 = FUN_000206d8();
      pcVar4 = DAT_000673fc;
    }
  }
  snprintf(param_3,300,pcVar4,auStack_248,uVar5,local_24c);
LAB_0006732a:
  DebugPrint(1,7,DAT_000673f0,DAT_000673bc,0x7fb,param_3);
  return 0;
}


