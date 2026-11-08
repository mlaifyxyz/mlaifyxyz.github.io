/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000259a4 */
/* function FUN_000259a4 @ 000259a4 */

undefined4 FUN_000259a4(int param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  pthread_t pStack_3c;
  char local_38 [32];
  
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  memset(local_38 + 4,0,0x1c);
  pbVar2 = *(byte **)(param_1 + 0x2034);
  memset(DAT_00025a3c,0,0x10);
  iVar1 = get_system_freemem();
  DebugPrint(1,7,DAT_00025a40,DAT_00025a44,0x758,0x3000,iVar1);
  if (iVar1 < 0x3000) {
    pthread_create(&pStack_3c,(pthread_attr_t *)0x0,DAT_00025a48,(void *)0x0);
  }
  FUN_00049ea0(param_1,local_38,0x1f);
  if (((int)((uint)*DAT_00025a4c << 0x1c) < 0) && (-1 < (int)((uint)*pbVar2 << 0x1e))) {
    sprintf(param_2,DAT_00025a54,local_38,(uint)*(ushort *)(DAT_00025a50 + 0x84));
  }
  param_2[0x100] = '\n';
  param_2[0x101] = '\0';
  param_2[0x102] = '\0';
  param_2[0x103] = '\0';
  param_2[0x104] = -0x4c;
  param_2[0x105] = '\0';
  param_2[0x106] = '\0';
  param_2[0x107] = '\0';
  return 0;
}


