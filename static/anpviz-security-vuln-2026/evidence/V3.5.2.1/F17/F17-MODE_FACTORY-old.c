/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00021c10 */
/* function FUN_00021c10 @ 00021c10 */

undefined4
FUN_00021c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,
            undefined4 param_10,undefined4 param_11,int param_12)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char acStack_238 [32];
  char local_218 [128];
  uint local_198;
  undefined1 auStack_194 [124];
  char acStack_118 [260];
  
  sprintf(acStack_238,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar4 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  uVar5 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_MODE_FACTORY from %s: %d. msg=%s\n\n",DAT_00021c7c,0x9aa
             ,param_1,acStack_238,uVar4,param_6);
  iVar1 = FUN_0001f688(param_6,acStack_118);
  if (iVar1 != 0) {
    return 0;
  }
  DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_00021fe8,0x9b0,acStack_118,param_5,uVar4,
             uVar5);
  iVar1 = strcasecmp(acStack_118,param_5);
  if (iVar1 != 0) {
    return 0;
  }
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
           "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER\nMsg_type=\"SYSTEM_SEARCHIPC_MESSAGE\"\nMsg_code=\"%d\"\nMsg_flag=\"0\"\n/>\n<MESSAGE_BODY>\n<IPC_SERIALNUMBER\nSerialNumber=\"%s\"\n/>\n</MESSAGE_BODY>\n</%s>\n"
           ,pcVar2,10,param_5,pcVar2);
  iVar1 = FUN_00020140(param_2,param_7,param_8,param_9,param_10,param_11);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  DebugPrint(1,7,"[%s:%u]send IPC_MESSAGE_MODE_FACTORY response ok.\n\n",DAT_00021fe8,0x9c7);
  if (param_12 != 0) {
    DAT_000aa1d0 = 0;
    system("rm -f /tmp/flag.mode.factory");
    goto LAB_00021fc6;
  }
  DAT_000aa1d0 = 1;
  mysystem("touch /tmp/flag.mode.factory");
  mysystem_with_param("rm -rf %s","/mnt/nand/ptzcfg.xml");
  mysystem_with_param("rm -rf %s","/mnt/nand/moto_preset.txt");
  mysystem_with_param("rm -rf %s","/mnt/nand/last_preset_pos");
  mysystem_with_param("rm -rf %s","/mnt/nand/last_preset_num");
  mysystem_with_param("rm -rf %s","/mnt/nand/preset_zoom.txt");
  mysystem_with_param("rm -rf %s","/mnt/nand/privacy_protection");
  mysystem_with_param("rm -rf %s","/mnt/nand/manual_ptz_speed");
  mysystem_with_param("rm -rf %s","/mnt/nand/wtd_preset_list.xml");
  mysystem_with_param("rm -rf %s"," /mnt/nand/power_save_default");
  mysystem_with_param("rm -rf %s","/mnt/nand/power_save_disable");
  iVar1 = FileExist("/opt/ch/flag.disable.defpwd");
  if (iVar1 != 0) {
    mysystem_with_param("killall -9 hik_server");
  }
  if (DAT_000a8ec0 - 0x703U < 0x1d) {
    uVar4 = 0x1880000fU >> (DAT_000a8ec0 - 0x703U & 0xff) & 1;
  }
  else {
    uVar4 = 0;
  }
  if (((DAT_000a8ec0 - 0x688U & 0xffffff7f) == 0 ||
      ((DAT_000a8ec0 == 0x802 || DAT_000a8ec0 == 0x622) || DAT_000a8ec0 - 0x68eU < 8)) || uVar4 != 0
     ) {
    system("touch /tmp/not.check.stream.exist");
    if (DAT_000a8ec0 - 0x703U < 0x18) {
      uVar4 = 0x800023U >> (DAT_000a8ec0 - 0x703U & 0xff) & 1;
    }
    else {
      uVar4 = 0;
    }
    if (DAT_000a8ec0 == 0x802) {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
      mysystem("touch /tmp/dualsensor.factory");
      mysystem_with_param("killall -9 media_server");
    }
  }
  if ((((((((DAT_000ac4a8 != 0 || DAT_000ac4ac != 0) || DAT_000ac4b4 != 0) || DAT_000ac4b8 != 0) ||
         DAT_000ac4bc != 0) || DAT_000ac4c0 != 0) || DAT_000ac4c4 != 0) || DAT_000ac4b0 != 0) ||
      DAT_000ac294 != 0) {
    FUN_00021b74();
  }
  local_218[0] = '\0';
  local_218[1] = '\0';
  local_218[2] = '\0';
  local_218[3] = '\0';
  memset(local_218 + 4,0,0x7c);
  local_198 = 0;
  memset(auStack_194,0,0x7c);
  FUN_0001f5c0(param_6,local_218,&local_198);
  if (local_218[0] == '\0') {
    uVar4 = local_198 & 0xff;
LAB_00021ff8:
    if ((uVar4 != 0) && (iVar1 = strcmp(DAT_0002208c,(char *)&local_198), iVar1 != 0)) {
LAB_00021f9e:
      strcpy(DAT_00021ff0,(char *)&local_198);
      DAT_000a9d54 = 1;
      goto LAB_0002200a;
    }
    if (DAT_000a9d54 != 0) goto LAB_0002200a;
  }
  else {
    iVar1 = strcmp(DAT_00021fec,local_218);
    uVar4 = local_198 & 0xff;
    if (iVar1 == 0) goto LAB_00021ff8;
    strcpy(DAT_00021fec,local_218);
    DAT_000a9d54 = 1;
    if ((uVar4 != 0) && (iVar1 = strcmp(DAT_00021ff0,(char *)&local_198), iVar1 != 0))
    goto LAB_00021f9e;
LAB_0002200a:
    if (DAT_000a9e58 == 0) {
      DAT_000a9d4c = DAT_000a9e58;
      iVar1 = pthread_create(DAT_00022090,(pthread_attr_t *)0x0,(__start_routine *)&LAB_0001edf8_1,
                             (void *)0x0);
      if (iVar1 != 0) {
        piVar3 = __errno_location();
        pcVar2 = strerror(*piVar3);
        DebugPrint(8,7,"[%s:%u]Create factory_cfg_nework_thread failed, err=%s\n\n",DAT_00022094,
                   0xa27,pcVar2);
        return 0xffffffff;
      }
      DebugPrint(8,7,"[%s:%u]start factory_cfg_nework_thread OK!!!\n\n",DAT_00022094,0xa2b);
    }
  }
  NotifyFactoryMode();
LAB_00021fc6:
  if (DAT_000ac88c == 1) {
    FUN_0001f0a8();
    return 0;
  }
  return 0;
}


