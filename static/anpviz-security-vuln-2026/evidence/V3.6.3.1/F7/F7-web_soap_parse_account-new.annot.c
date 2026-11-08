/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00080e48 */
/* function FUN_00080e48 @ 00080e48 */

undefined4 FUN_00080e48(undefined4 param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *param2;
  int local_4d4;
  char local_4d0 [40];
  char local_4a8 [40];
  char local_480 [32];
  char local_460 [1092];
  
  memset(&local_4d4,0,0x4b4);
  iVar1 = System_getUserCfgByXml(&local_4d4,param_1);
  if ((iVar1 == 0) && (0 < local_4d4)) {
    if ((((local_4d0[0] != '\0') && (local_4a8[0] != '\0')) && (local_480[0] != '\0')) &&
       (local_460[0] != '\0')) {
      param2 = (char *)(DAT_00080f30 + 0x80ea6 /*"%s"*/);
      snprintf(param_2,100,param2,local_4d0);
      snprintf(param_3,100,param2,local_4a8);
      snprintf(param_4,0x14,param2,local_480);
      snprintf(param_5,10,param2,local_460);
      DebugPrint(8,7,DAT_00080f38 + 0x80ee8 /*"[%s:%u]%s %s %s %s
"*/,DAT_00080f34 + 0x81018 /*"parseAccountInfoByXML"*/,0x4fb,param_2,param_3,param_4,
                 param_5);
      return 0;
    }
    uVar2 = 0x4f0;
    iVar3 = DAT_00080f3c + 0x80f0e /*"firmware_upgrade_thr"*/;
    iVar1 = DAT_00080f40 + 0x80f10 /*"[%s:%u]parseAccountInfoByXML: missing attribute (Username/Password/Group/Status)

"*/;
  }
  else {
    uVar2 = 0x4e7;
    iVar3 = DAT_00080f44 + 0x80f2e /*"firmware_upgrade_thr"*/;
    iVar1 = (int)&DAT_00080f30 + DAT_00080f48;
  }
  DebugPrint(8,7,iVar1,iVar3 + 0x138,uVar2);
  return 0xffffffff;
}


