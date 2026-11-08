/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000215ac */
/* function FUN_000215ac @ 000215ac */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_000215ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  char acStack_240 [32];
  char acStack_220 [256];
  int local_120;
  undefined1 auStack_11c [256];
  
  uVar9 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  sprintf(acStack_240,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar11 = uVar9;
  uVar12 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_RESTORECONFIG from %s: %d. msg=%s\n\n",DAT_00021620,
             0x82c,param_1,acStack_240,uVar9,param_6);
  iVar6 = FUN_0001f688(param_6,acStack_220);
  if (iVar6 != 0) {
    return 0;
  }
  DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_00021938,0x833,acStack_220,param_5,uVar11,
             uVar12);
  local_120 = strcasecmp(acStack_220,param_5);
  if (local_120 != 0) {
    return 0;
  }
  memset(auStack_11c,0,0xfc);
  iVar6 = FUN_0001f720(param_6,&local_120);
  uVar11 = 0;
  if (iVar6 == 0) {
    pcVar7 = strstr((char *)&local_120,"network");
    uVar11 = (uint)(pcVar7 != (char *)0x0);
    pcVar7 = strstr((char *)&local_120,"language");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 2;
    }
    pcVar7 = strstr((char *)&local_120,"time");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 4;
    }
    pcVar7 = strstr((char *)&local_120,"usercfg");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 8;
    }
    pcVar7 = strstr((char *)&local_120,"mediacode");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x10;
    }
    pcVar7 = strstr((char *)&local_120,"ptzcfg");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x20;
    }
    pcVar7 = strstr((char *)&local_120,"streamaccess");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x40;
    }
    pcVar7 = strstr((char *)&local_120,"record");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x80;
    }
    pcVar7 = strstr((char *)&local_120,"gb28181");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x100;
    }
    pcVar7 = strstr((char *)&local_120,"alarm");
    if (pcVar7 != (char *)0x0) {
      uVar11 = uVar11 | 0x200;
    }
    DebugPrint(8,7,"[%s:%u]reserved_bits=%u, %s\n",DAT_00021938,0x850,uVar11,&local_120);
  }
  MsgLogEvent2(3,"got RESTORECONFIG from %s: %d.\n",acStack_240,uVar9);
  if (DAT_000ac874 == 0) {
    if (DAT_000ac2ac == 0) {
      pcVar7 = (char *)FUN_0001f07c();
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
  iVar6 = FUN_00020140(param_2,param_7,param_8,param_9,param_10,param_11);
  if (iVar6 < 1) {
    return 0xffffffff;
  }
  DebugPrint(1,7,"[%s:%u]send restore config response ok.\n\n",DAT_00021938,0x868);
  if (DAT_000a8ec0 - 0x199 < 0x19) {
    bVar4 = false;
    uVar10 = 0x1f8f801U >> (DAT_000a8ec0 - 0x199 & 0xff) & 1;
  }
  else {
    bVar4 = (DAT_000a8ec0 & 0xfffffdff) == 0x488;
    if (DAT_000a8ec0 - 0x707 < 0x13) {
      bVar1 = false;
      bVar2 = false;
      uVar8 = 0x7eff1U >> (DAT_000a8ec0 - 0x707 & 0xff) & 1;
      bVar3 = false;
      uVar10 = 0;
      uVar9 = 0;
      goto LAB_0002185e;
    }
    uVar10 = 0;
  }
  bVar1 = (DAT_000a8ec0 & 0xffffff7f) - 0x701 < 2;
  bVar2 = DAT_000a8ec0 - 0x71b < 0x16;
  bVar3 = DAT_000a8ec0 - 0x682 < 2;
  if (DAT_000a8ec0 - 0x602 < 0x20) {
    uVar8 = 0;
    uVar9 = 0xd7ffffb5U >> (DAT_000a8ec0 - 0x602 & 0xff) & 1;
  }
  else {
    uVar8 = 0;
    uVar9 = uVar8;
  }
LAB_0002185e:
  bVar5 = bVar3 | bVar2 | bVar4 | (DAT_000a8ec0 == 0x801 ||
                                  (DAT_000a8ec0 == 0x786 || DAT_000a8ec0 == 0x68b));
  if (DAT_000a8ec0 - 0x6a5 < 6) {
    bVar5 = 1;
  }
  if (DAT_000a8ec0 - 0x788 < 2) {
    bVar5 = 1;
  }
  if (DAT_000a8ec0 - 0x623 < 3) {
    bVar5 = 1;
  }
  if (DAT_000a8ec0 - 0x628 < 3) {
    bVar5 = 1;
  }
  if (uVar9 != 0 || (uVar8 != 0 || ((bool)(bVar5 | bVar1) || uVar10 != 0))) {
    DebugPrint(1,7,"[%s:%u]CMD_RESET_TO_VOICECONFIG_MODE\n\n",DAT_00021938,0x8d2);
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
    FUN_0001f9f4(uVar11);
    return 0;
  }
  FUN_0002154c(uVar11);
  return 0;
}


