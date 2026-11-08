/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00022244 */
/* function FUN_00022244 @ 00022244 */

undefined4
FUN_00022244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,
            undefined4 param_10,undefined4 param_11,int param_12)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char acStack_248 [32];
  char local_228 [128];
  char local_1a8 [144];
  char acStack_118 [256];
  
  sprintf(acStack_248,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,param_9 >> 0x10 & 0xff,
          param_9 >> 0x18);
  uVar6 = (param_8._2_2_ & 0xff) << 8 | (uint)(param_8._2_2_ >> 8);
  uVar8 = param_6;
  DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_MODE_FACTORY from %s: %d. msg=%s\n\n",DAT_000222b8,0x9fe
             ,param_1,acStack_248,uVar6,param_6);
  iVar2 = FUN_0001fd2c(param_6,acStack_118,0x100);
  if (iVar2 != 0) {
    return 0;
  }
  DebugPrint(8,7,"[%s:%u]msg sn: %s, my sn: %s\n\n",DAT_00022618,0xa04,acStack_118,param_5,uVar6,
             uVar8);
  iVar2 = strcasecmp(acStack_118,param_5);
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_000b2708 == 0) {
    if (DAT_000b2344 == 0) {
      pcVar3 = (char *)FUN_0001f6ec();
    }
    else {
      pcVar3 = "XML_WTD";
    }
  }
  else {
    pcVar3 = "XML_ANJVISION";
  }
  snprintf(param_7,0x800,
           "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER\nMsg_type=\"SYSTEM_SEARCHIPC_MESSAGE\"\nMsg_code=\"%d\"\nMsg_flag=\"0\"\n/>\n<MESSAGE_BODY>\n<IPC_SERIALNUMBER\nSerialNumber=\"%s\"\n/>\n</MESSAGE_BODY>\n</%s>\n"
           ,pcVar3,10,param_5,pcVar3);
  iVar2 = FUN_00020830(param_2,param_7,param_8,param_9,param_10,param_11);
  if (iVar2 < 1) {
    return 0xffffffff;
  }
  DebugPrint(1,7,"[%s:%u]send IPC_MESSAGE_MODE_FACTORY response ok.\n\n",DAT_00022618,0xa1b);
  if (param_12 != 0) {
    DAT_000af2b0 = 0;
    system("rm -f /tmp/flag.mode.factory");
    goto LAB_0002263e;
  }
  DAT_000af2b0 = 1;
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
  iVar2 = FileExist("/opt/ch/flag.disable.defpwd");
  if (iVar2 != 0) {
    mysystem_with_param("killall -9 hik_server");
  }
  uVar6 = DAT_000adfa4 - 0x703;
  if (uVar6 < 0x1d) {
    uVar5 = 0x1880002f >> (uVar6 & 0xff);
  }
  else {
    uVar5 = 0;
  }
  uVar7 = (uint)(LZCOUNT(DAT_000adfa4 + -0x689) | LZCOUNT(DAT_000adfa4 + -0x622)) >> 5;
  if (uVar6 < 0x1d) {
    uVar5 = uVar5 & 1;
  }
  if (DAT_000adfa4 == 0x734) {
    uVar7 = 1;
  }
  if (DAT_000adfa4 == 0x802) {
    uVar7 = 1;
  }
  if ((uVar7 != 0 || DAT_000adfa4 - 0x68fU < 8) || uVar5 != 0) {
    system("touch /tmp/not.check.stream.exist");
    if (DAT_000adfa4 - 0x703U < 0x18) {
      uVar6 = 0x800023U >> (DAT_000adfa4 - 0x703U & 0xff) & 1;
    }
    else {
      uVar6 = 0;
    }
    if (DAT_000adfa4 == 0x802) {
      uVar6 = 1;
    }
    if (uVar6 != 0) {
      mysystem("touch /tmp/dualsensor.factory");
      if ((DAT_000adfa4 == 0x71a) && (DAT_000b2344 != 0)) {
        memset(local_1a8,0,0x90);
        P2pReadLoginStatus(local_1a8);
        if (local_1a8[4] != '\0') {
          mysystem("rm /tmp/p2p_server");
          mysystem("killall p2p_server");
        }
      }
      mysystem_with_param("killall -9 media_server");
    }
  }
  if ((((((((DAT_000b2324 != 0 || DAT_000b2328 != 0) || DAT_000b2330 != 0) || DAT_000b2334 != 0) ||
         DAT_000b2338 != 0) || DAT_000b233c != 0) || DAT_000b2340 != 0) || DAT_000b232c != 0) ||
      DAT_000b21ac != 0) {
    FUN_000221a8();
  }
  local_228[0] = '\0';
  local_228[1] = '\0';
  local_228[2] = '\0';
  local_228[3] = '\0';
  memset(local_228 + 4,0,0x7c);
  local_1a8[0] = '\0';
  local_1a8[1] = '\0';
  local_1a8[2] = '\0';
  local_1a8[3] = '\0';
  memset(local_1a8 + 4,0,0x7c);
  FUN_0001fc40(param_6,local_228,0x80,local_1a8,0x80);
  if (local_228[0] == '\0') {
LAB_00022660:
    if ((local_1a8[0] != '\0') && (iVar2 = strcmp(DAT_0002273c,local_1a8), iVar2 != 0)) {
LAB_0002260a:
      strcpy(DAT_00022620,local_1a8);
      DAT_000aee34 = 1;
      goto LAB_00022672;
    }
    if (DAT_000aee34 != 0) goto LAB_00022672;
  }
  else {
    iVar2 = strcmp(DAT_0002261c,local_228);
    cVar1 = local_1a8[0];
    if (iVar2 == 0) goto LAB_00022660;
    strcpy(DAT_0002261c,local_228);
    DAT_000aee34 = 1;
    if ((cVar1 != '\0') && (iVar2 = strcmp(DAT_00022620,local_1a8), iVar2 != 0)) goto LAB_0002260a;
LAB_00022672:
    if (DAT_000aef38 == 0) {
      DAT_000aee2c = DAT_000aef38;
      iVar2 = pthread_create(DAT_00022740,(pthread_attr_t *)0x0,(__start_routine *)&LAB_0001f468_1,
                             (void *)0x0);
      if (iVar2 != 0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        DebugPrint(8,7,"[%s:%u]Create factory_cfg_nework_thread failed, err=%s\n\n",DAT_00022744,
                   0xa8f,pcVar3);
        return 0xffffffff;
      }
      DebugPrint(8,7,"[%s:%u]start factory_cfg_nework_thread OK!!!\n\n",DAT_00022744,0xa93);
    }
  }
  NotifyFactoryMode();
LAB_0002263e:
  if (DAT_000b2724 == 1) {
    FUN_0001f718();
    return 0;
  }
  return 0;
}


