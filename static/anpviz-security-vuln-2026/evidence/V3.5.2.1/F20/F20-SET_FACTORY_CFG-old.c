/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00022328 */
/* function FUN_00022328 @ 00022328 */

undefined4
FUN_00022328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,
            undefined4 param_10,undefined4 param_11)

{
  int param7;
  int param8;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int local_140;
  int local_13c;
  char acStack_138 [32];
  char acStack_118 [256];
  
  sprintf(acStack_138,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar3 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  uVar5 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_SET_FACTORY_CFG from %s: %d. msg=%s\n\n",DAT_000224c0,
             0xaaf,param_1,acStack_138,uVar3,param_6);
  iVar1 = FUN_0001f688(param_6,acStack_118);
  if (iVar1 == 0) {
    pcVar2 = acStack_118;
    pcVar4 = param_5;
    DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_000224c0,0xab7,pcVar2,param_5,uVar3,uVar5)
    ;
    local_140 = strcasecmp(acStack_118,param_5);
    if (local_140 == 0) {
      local_13c = local_140;
      iVar1 = FUN_0001f8f8(param_6,&local_140);
      if (iVar1 == 0) {
        iVar1 = FUN_000271b4(&local_140);
        DebugPrint(8,7,"[%s:%u]ircut mode = %d, led mode = %d\n\n",DAT_000224c0,0xac5,local_13c,
                   local_140);
        system("touch /mnt/nand/need_reload_factory.flag");
      }
      else {
        DebugPrint(8,7,"[%s:%u]get_factory_default_cfg fail\n\n",DAT_000224c0,0xac0,pcVar2,pcVar4);
      }
      param8 = local_13c;
      param7 = local_140;
      if (DAT_000ac874 == 0) {
        if (DAT_000ac2ac == 0) {
          pcVar2 = (char *)FUN_0001f07c();
        }
        else {
          pcVar2 = "XML_WTD";
        }
      }
      else {
        pcVar2 = "XML_ANJVISION";
      }
      snprintf(param_7,0x800,
               "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER\nMsg_type=\"SYSTEM_SEARCHIPC_MESSAGE\"\nMsg_code=\"%d\"\nMsg_flag=\"%d\"\n/>\n<MESSAGE_BODY>\n<IPC_SERIALNUMBER\nSerialNumber=\"%s\"\n/>\n<FactoryCfg  LedMode=\"%d\"  IrcutMode=\"%d\" />\n</MESSAGE_BODY>\n</%s>\n"
               ,pcVar2,0xc,iVar1,param_5,param7,param8,pcVar2);
      iVar1 = FUN_00020140(param_2,param_7,param_8,param_9,param_10,param_11);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      DebugPrint(1,7,"[%s:%u]send IPC_MESSAGE_SET_FACTORY_CFG_RESPONSE response ok.\n\n",
                 DAT_000224c0,0xadf);
      return 0;
    }
  }
  return 0;
}


