/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00025bb0 */
/* function FUN_00025bb0 @ 00025bb0 */

undefined4 FUN_00025bb0(int param_1,char *param_2)

{
  byte *pbVar1;
  char acStack_30 [36];
  
  pbVar1 = *(byte **)(param_1 + 0x2034);
  FUN_00049ea0(param_1,acStack_30,0x1f);
  if (((int)((uint)*DAT_00025bf0 << 0x1c) < 0) && (-1 < (int)((uint)*pbVar1 << 0x1e))) {
    sprintf(param_2,DAT_00025bf8,acStack_30,(uint)*(ushort *)(DAT_00025bf4 + 0x84));
  }
  param_2[0x100] = ',';
  param_2[0x101] = '\x01';
  param_2[0x102] = '\0';
  param_2[0x103] = '\0';
  return 0;
}


