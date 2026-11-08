/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00028e9c */
/* function FUN_00028e9c @ 00028e9c */

undefined4 FUN_00028e9c(int param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char *__s2;
  byte *pbVar4;
  char acStack_38 [32];
  
  pbVar1 = DAT_00028f48;
  pbVar4 = *(byte **)(param_1 + 0x2034);
  iVar2 = FUN_0004a922(*(undefined4 *)(DAT_00028f48 + 0x28b8));
  if (iVar2 == 0) {
    return 0xfffffff3;
  }
  DebugPrint(1,7,DAT_00028f4c,DAT_00028f50,0x9eb,param_2);
  FUN_00049ea0(param_1,acStack_38,0x1f);
  if (*DAT_00028f54 == 0) {
    __s2 = DAT_00028f6c;
  }
  else {
    iVar3 = strcmp(param_2,DAT_00028f58);
    iVar2 = 0;
    if (iVar3 == 0) goto LAB_00028efa;
    __s2 = DAT_00028f5c;
  }
  iVar3 = strcmp(param_2,__s2);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = 1;
  }
LAB_00028efa:
  if (((int)((uint)*pbVar1 << 0x1c) < 0) && (-1 < (int)((uint)*pbVar4 << 0x1e))) {
    sprintf(param_3,DAT_00028f64,acStack_38,(uint)*(ushort *)(DAT_00028f60 + 0x84),iVar2);
  }
  DebugPrint(1,7,DAT_00028f68,DAT_00028f50,0xa14,param_3);
  param_3[300] = '\0';
  param_3[0x12d] = '\0';
  param_3[0x130] = '<';
  param_3[0x131] = '\0';
  param_3[0x132] = '\0';
  param_3[0x133] = '\0';
  return 0;
}


