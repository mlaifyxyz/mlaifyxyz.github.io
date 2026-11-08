/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00021bdc */
/* function FUN_00021bdc @ 00021bdc */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00021bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,
            undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char acStack_238 [32];
  char acStack_218 [256];
  int local_118;
  undefined1 auStack_114 [252];
  
  uVar10 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  sprintf(acStack_238,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar11 = uVar10;
  uVar12 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_RESTORECONFIG from %s: %d. msg=%s\n\n",DAT_00021c54,
             0x87c,param_1,acStack_238,uVar10,param_6);
  iVar6 = FUN_0001fd2c(param_6,acStack_218,0x100);
  if (iVar6 != 0) {
    return 0;
  }
  DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_00021f48,0x883,acStack_218,param_5,uVar11,
             uVar12);
  local_118 = strcasecmp(acStack_218,param_5);
  if (local_118 != 0) {
    return 0;
  }
  memset(auStack_114,0,0xfc);
  iVar6 = FUN_0001fdd4(param_6,&local_118,0x100);
  uVar11 = 0;
  if (iVar6 == 0) {
    pcVar7 = strstr((char *)&local_118,"network");
    uVar11 = (uint)(pcVar7 != (char *)0x0);
    pcVar7 = strstr((char *)&local_118,"language");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 2;
    }
    pcVar7 = strstr((char *)&local_118,"time");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 4;
    }
    pcVar7 = strstr((char *)&local_118,"usercfg");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 8;
    }
    pcVar7 = strstr((char *)&local_118,"mediacode");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x10;
    }
    pcVar7 = strstr((char *)&local_118,"ptzcfg");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x20;
    }
    pcVar7 = strstr((char *)&local_118,"streamaccess");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x40;
    }
    pcVar7 = strstr((char *)&local_118,"record");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x80;
    }
    pcVar7 = strstr((char *)&local_118,"gb28181");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x100;
    }
    pcVar7 = strstr((char *)&local_118,"alarm");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x200;
    }
    DebugPrint(8,7,"[%s:%u]reserved_bits=%u, %s\n",DAT_00021f48,0x8a0,uVar11,&local_118);
  }
  MsgLogEvent2(3,"got RESTORECONFIG from %s: %d.\n",acStack_238,uVar10);
  if (DAT_000b2708 == 0) {
    if (DAT_000b2344 == 0) {
      pcVar7 = (char *)FUN_0001f6ec();
    }
    else {
      pcVar7 = "XML_WTD";
    }
  }
  else {
    pcVar7 = "XML_ANJVISION";
  }
  snprintf(param_7,0x800,
           "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER\nMsg_type=\"SYSTEM_SEARCHIPC_MESSAGE\"\nMsg_code=\"%d\"\nMsg_flag=\"0\"\n/>\n<MESSAGE_BODY>\n<IPC_SERIALNUMBER\nSerialNumber=\"%s\"\n/>\n</MESSAGE_BODY>\n</%s>\n"
           ,pcVar7,6,param_5,pcVar7);
  iVar6 = FUN_00020830(param_2,param_7,param_8,param_9,param_10,param_11);
  if (iVar6 < 1) {
    return 0xffffffff;
  }
  DebugPrint(1,7,"[%s:%u]send restore config response ok.\n\n",DAT_00021f48,0x8b8);
  if (DAT_000adfa4 - 0x199 < 0x19) {
    bVar3 = false;
    bVar1 = false;
    uVar9 = 0x1f8f801U >> (DAT_000adfa4 - 0x199 & 0xff) & 1;
    bVar2 = false;
    bVar4 = false;
  }
  else {
    bVar1 = (DAT_000adfa4 & 0xffffff7f) - 0x701 < 2;
    bVar2 = DAT_000adfa4 - 0x71b < 0x19;
    bVar3 = (DAT_000adfa4 & 0xffffff7f) == 0x707;
    bVar4 = DAT_000adfa4 == 0x488;
    if (DAT_000adfa4 - 0x682 < 0xb) {
      uVar9 = 0;
      uVar10 = 0;
      uVar8 = 0x483U >> (DAT_000adfa4 - 0x682 & 0xff) & 1;
      goto LAB_00021e6c;
    }
    uVar9 = 0;
  }
  if (DAT_000adfa4 - 0x602 < 0x20) {
    uVar8 = 0;
    uVar10 = 0xd7ffffb5U >> (DAT_000adfa4 - 0x602 & 0xff) & 1;
  }
  else {
    uVar8 = 0;
    uVar10 = uVar8;
  }
LAB_00021e6c:
  if (DAT_000adfa4 == 0x801) {
    bVar4 = true;
  }
  bVar5 = bVar2 | bVar3 | bVar4;
  if (DAT_000adfa4 - 0x6a8 < 7) {
    bVar5 = 1;
  }
  if (DAT_000adfa4 - 0x789 < 2) {
    bVar5 = 1;
  }
  if (DAT_000adfa4 - 0x623 < 3) {
    bVar5 = 1;
  }
  if (DAT_000adfa4 - 0x628 < 3) {
    bVar5 = 1;
  }
  if (DAT_000adfa4 - 0x70b < 8) {
    bVar5 = 1;
  }
  if (DAT_000adfa4 - 0x714 < 6) {
    bVar5 = 1;
  }
  if (uVar10 != 0 || ((uVar9 != 0 || (bool)(bVar5 | bVar1)) || uVar8 != 0)) {
    DebugPrint(1,7,"[%s:%u]CMD_RESET_TO_VOICECONFIG_MODE\n\n",DAT_00021f48,0x926);
    mysystem_with_param("rm -rf %s","/mnt/nand/skyworth_netconfiged.db");
    mysystem_with_param("rm -rf %s","/mnt/nand/aiot_netconfiged.db");
    mysystem_with_param("rm -rf %s","/mnt/nand/ap_mode");
    iVar6 = access("/opt/ch/flag.support.QRcode.scan",0);
    if (iVar6 == 0) {
      mysystem_with_param("touch %s","/mnt/nand/wifi.connection.flag");
    }
    iVar6 = access("/mnt/nand/ptzcfg.xml",0);
    if (iVar6 != -1) {
      mysystem_with_param("rm -rf %s","/mnt/nand/ptzcfg.xml");
    }
    mysystem_with_param("rm -rf %s","/mnt/nand/moto_preset.txt");
    mysystem_with_param("rm -rf %s","/mnt/nand/privacy_protection");
    mysystem_with_param("rm -rf %s","/mnt/nand/wtd_preset_list.xml");
    FUN_000200b8(uVar11);
    return 0;
  }
  FUN_00021b7c(uVar11);
  return 0;
}


