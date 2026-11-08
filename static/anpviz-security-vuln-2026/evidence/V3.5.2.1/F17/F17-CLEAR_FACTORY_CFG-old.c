/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000221f0 */
/* function FUN_000221f0 @ 000221f0 */

undefined4
FUN_000221f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char *param3;
  uint uVar2;
  undefined4 uVar3;
  char acStack_138 [32];
  char acStack_118 [260];
  
  sprintf(acStack_138,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar2 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  uVar3 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_CLEAR_FACTORY_CFG from %s: %d. msg=%s\n\n",DAT_00022324,
             0xa7f,param_1,acStack_138,uVar2,param_6);
  iVar1 = FUN_0001f688(param_6,acStack_118);
  if (iVar1 == 0) {
    DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_00022324,0xa87,acStack_118,param_5,uVar2,
               uVar3);
    iVar1 = strcasecmp(acStack_118,param_5);
    if (iVar1 == 0) {
      system("rm -f /mnt/nand/factory.default.cfg");
      if (DAT_000ac874 == 0) {
        if (DAT_000ac2ac == 0) {
          param3 = (char *)FUN_0001f07c();
        }
        else {
          param3 = "XML_WTD";
        }
      }
      else {
        param3 = "XML_ANJVISION";
      }
      snprintf(param_7,0x800,
               "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER\nMsg_type=\"SYSTEM_SEARCHIPC_MESSAGE\"\nMsg_code=\"%d\"\nMsg_flag=\"%d\"\n/>\n<MESSAGE_BODY>\n<IPC_SERIALNUMBER\nSerialNumber=\"%s\"\n/>\n</MESSAGE_BODY>\n</%s>\n"
               ,param3,0xe,0,param_5,param3);
      iVar1 = FUN_00020140(param_2,param_7,param_8,param_9,param_10,param_11);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      DebugPrint(1,7,"[%s:%u]send IPC_MESSAGE_CLEAR_FACTORY_CFG_RESPONSE response ok.\n\n",
                 DAT_00022324,0xa9f);
      return 0;
    }
  }
  return 0;
}


