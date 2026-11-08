/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 000209e0 */
/* function FUN_000209e0 @ 000209e0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4
FUN_000209e0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,
            undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,undefined4 param_10,
            undefined4 param_11)

{
  int param4;
  uint uVar1;
  int iVar2;
  char *param3;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  int param8;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  char *local_6f8;
  char acStack_6dc [32];
  char local_6bc [64];
  char local_67c [4];
  undefined2 local_678 [30];
  char local_63c [4];
  undefined4 auStack_638 [31];
  char local_5bc [8];
  int local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 uStack_5a8;
  char acStack_59c [32];
  char acStack_57c [32];
  char acStack_55c [32];
  char acStack_53c [32];
  char acStack_51c [32];
  char acStack_4fc [32];
  int local_4dc;
  undefined1 local_4d8 [1204];
  
  uVar1 = param_9 >> 0x10 & 0xff;
  sprintf(acStack_6dc,"%d.%d.%d.%d",param_9 & 0xff,param_9 >> 8 & 0xff,uVar1,param_9 >> 0x18);
  GetCurrentTimeStamp();
  FUN_0005bb0c(&DAT_000c43cc);
  memset(DAT_00020d64,0,0x20);
  memset(DAT_00020d68,0,0x80);
  memset(DAT_00020d6c,0,0x90);
  iVar2 = access("/mnt/nand/serverNo",0);
  if (iVar2 != -1) {
    read_file_to_string("/mnt/nand/serverNo",DAT_00020d64,0x20);
  }
  if (0 < *(int *)(DAT_000b9380 + 0x4eb0)) {
    iVar2 = access("/tmp/p2pid.txt",0);
    if (iVar2 != -1) {
      read_file_to_string("/tmp/p2pid.txt",DAT_00021440,0x80);
    }
    P2pReadLoginStatus(DAT_00021444);
  }
  memcpy(&local_4dc,(void *)(DAT_000b9380 + 0x1b20),0x4b4);
  if ((DAT_000b2bf0 == 0) && (0 < local_4dc)) {
    puVar8 = local_4d8;
    iVar2 = 0;
    do {
      *puVar8 = 0;
      iVar2 = iVar2 + 1;
      puVar8[0x28] = 0;
      puVar8 = puVar8 + 0x78;
    } while (iVar2 < local_4dc);
  }
  if (DAT_000aef40 != 0) {
    memset(&local_4dc,0,0x4b4);
    local_4dc = 1;
  }
  if (*param_3 == '\0') {
    local_6f8 = (char *)XMLGET_UserConfig(&local_4dc);
  }
  else {
    local_6f8 = (char *)FUN_0002064c();
  }
  puVar10 = &DAT_00076908;
  param3 = (char *)XMLGET_MediaStreamConfig_ForSearch(DAT_000b9380 + 0x3644);
  local_5bc[0] = '\0';
  local_5bc[1] = '\0';
  local_5bc[2] = '\0';
  local_5bc[3] = '\0';
  local_5bc[4] = '\0';
  local_5bc[5] = '\0';
  local_5bc[6] = '\0';
  local_5bc[7] = '\0';
  local_5b4 = 0;
  local_5b0 = 0;
  if (DAT_000b2384 != 0) {
    puVar10 = (undefined4 *)&DAT_000770e8;
  }
  local_5ac = 0;
  uStack_5a8 = 0;
  iVar2 = Check_Link_Status(puVar10);
  DebugPrint(8,7,"[%s:%u]Check_Link_Status %s:%d, g_wifiExist=%d, remote %s:%d \n\n",DAT_00020d70,
             0x5f7,puVar10,iVar2,DAT_000b21ac,acStack_6dc,param_8._2_2_ << 8 | param_8._2_2_ >> 8);
  local_63c[0] = '\0';
  local_63c[1] = '\0';
  local_63c[2] = '\0';
  local_63c[3] = '\0';
  auStack_638[0] = 0;
  sprintf(local_63c,"%d",uVar1);
  if (DAT_000b21ac == 0) {
    if (DAT_000b21a0 != 0) {
      bVar11 = true;
LAB_00020f70:
      if (iVar2 == 0) {
        bVar11 = false;
      }
      if (!bVar11) {
LAB_00020b92:
        if (DAT_000b21ac != 0) goto LAB_0002100a;
      }
    }
LAB_00020b9c:
    memcpy(DAT_00020d74,(void *)(DAT_000b9380 + 0x3e24),0x19c);
    local_67c[0] = '\0';
    local_67c[1] = '\0';
    local_67c[2] = '\0';
    local_67c[3] = '\0';
    local_678[0] = 0;
    net_get_hwaddr(puVar10,local_67c);
    format_mac_addr_from_digit_to_string(local_67c,6,DAT_00020d74,0x12);
    if (((*param_5 == 'E') && (param_5[1] == 'E')) && (DAT_000b23f0 != 0)) {
      net_get_info("eth0:0",local_5bc);
      DAT_000af0b4 = 0x45;
    }
    else {
      net_get_info(puVar10,local_5bc);
    }
    if ((local_5b4 != 0) || (*(char *)(DAT_000b9380 + 0x3e36) != '\0')) {
      uVar7 = DAT_00020d78;
      goto LAB_00020c02;
    }
LAB_00020ffe:
    bVar11 = false;
  }
  else {
    if (DAT_000b21a0 != 0) {
      if (iVar2 == 0) goto LAB_00020b92;
      iVar6 = FUN_00020940(local_63c);
      if (DAT_000b21a0 != 0) {
        bVar11 = iVar6 == 0;
        goto LAB_00020f70;
      }
      goto LAB_00020b9c;
    }
    if (iVar2 != 0) goto LAB_00020b9c;
LAB_0002100a:
    pcVar3 = (char *)net_get_wireless_name();
    uVar1 = (uint)((DAT_000adfa4 & 0xfffffffd) == 0xb025);
    if (DAT_000adfa4 - 0x194 < 0x1f) {
      uVar1 = uVar1 | 0x7f1f5621U >> (DAT_000adfa4 - 0x194 & 0xff) & 1;
LAB_00021044:
      uVar9 = DAT_000adfa4 & 0xffffff7f;
      bVar12 = uVar9 != 0x701;
      bVar11 = uVar9 - 0x701 == 1;
      if (1 < uVar9 - 0x701) {
        bVar12 = 0xc < DAT_000adfa4 - 0x724;
        bVar11 = DAT_000adfa4 - 0x724 == 0xd;
      }
      uVar1 = (!bVar12 || bVar11) | uVar1;
      if (0x1e < DAT_000adfa4 - 0x682) goto LAB_00021384;
      uVar1 = uVar1 | 0x40000cf3U >> (DAT_000adfa4 - 0x682 & 0xff) & 1;
    }
    else {
      uVar9 = (uint)(DAT_000adfa4 == 0x205 || DAT_000adfa4 == 0x1b5);
      if (DAT_000adfa4 == 0xb211) {
        uVar9 = 1;
      }
      if (DAT_000adfa4 == 0x488) {
        uVar9 = 1;
      }
      uVar1 = uVar1 | uVar9;
      if (0x1b < DAT_000adfa4 - 0x707) goto LAB_00021044;
      uVar1 = 0xe76eff1U >> (DAT_000adfa4 - 0x707 & 0xff) & 1 | uVar1;
      uVar9 = DAT_000adfa4;
LAB_00021384:
      if (DAT_000adfa4 - 0x602 < 0x1d) {
        uVar1 = uVar1 | 0x17ffffb5U >> (DAT_000adfa4 - 0x602 & 0xff) & 1;
      }
    }
    if ((DAT_000adfa4 & 0xfffffff6) == 0x620) {
      uVar1 = 1;
    }
    if (uVar9 - 0x623 < 2) {
      uVar1 = 1;
    }
    if (DAT_000adfa4 == 0x733) {
      uVar1 = 1;
    }
    if (DAT_000adfa4 - 0x6a7 < 8) {
      uVar1 = 1;
    }
    if (DAT_000adfa4 == 0x403) {
      uVar1 = 1;
    }
    if (DAT_000adfa4 == 0x801) {
      uVar1 = 1;
    }
    if (((uVar1 != 0) || (DAT_000b21ac != 0)) &&
       ((*(int *)(DAT_000b9380 + 0x4ec8) != 0 && (*(int *)(DAT_000b9380 + 0x3fc0) == 0)))) {
      if ((DAT_000b23bc == 0) || (DAT_000c2fcc == 0)) {
        pcVar3 = (char *)net_get_wirelessap_name();
      }
      else {
        pcVar3 = (char *)net_get_wireless_name();
      }
    }
    DAT_000af0c6 = is_dhcp(pcVar3);
    DAT_000af0c8 = *(undefined2 *)(DAT_000b9380 + 0x3e38);
    local_67c[0] = '\0';
    local_67c[1] = '\0';
    local_67c[2] = '\0';
    local_67c[3] = '\0';
    local_678[0] = 0;
    net_get_hwaddr(pcVar3,local_67c);
    format_mac_addr_from_digit_to_string(local_67c,6,DAT_00021154,0x12);
    if ((*param_5 == 'E') && (param_5[1] == 'E')) {
      pcVar4 = (char *)net_get_wireless_name();
      iVar2 = strcmp(pcVar3,pcVar4);
      if ((iVar2 != 0) || (DAT_000b23f0 == 0)) goto LAB_00021138;
      iVar2 = net_get_info("wlan0:0",local_5bc);
      DAT_000af0b4 = 0x45;
    }
    else {
LAB_00021138:
      iVar2 = net_get_info(pcVar3,local_5bc);
    }
    if (iVar2 != 0) goto LAB_00020ffe;
    uVar7 = DAT_00021158;
LAB_00020c02:
    bVar11 = true;
    get_ip_str(local_5b4,uVar7,0x40);
    get_ip_str(local_5b0,DAT_00020d7c,0x40);
    get_ip_str(local_5ac,DAT_00020d80,0x40);
    net_get_two_dns(DAT_00020d84 + -0x40,0x40);
  }
  pcVar3 = (char *)XMLGET_NetworkLANConfig(DAT_00020d74);
  *param_7 = '\0';
  memset(local_5bc,0,0xe0);
  if (DAT_000b21e0 != 0) {
    Load_fh_info(local_5bc);
  }
  if (pcVar3 == (char *)0x0 || param3 == (char *)0x0) {
    sVar5 = strlen(param_7);
    FUN_00020768("/tmp/search.txt",param_7,sVar5);
    if (local_6f8 != (char *)0x0) {
      free(local_6f8);
    }
LAB_00020f2e:
    if (pcVar3 == (char *)0x0) goto LAB_00020f32;
  }
  else {
    if (DAT_000b2708 == 0) {
      if (DAT_000b2344 == 0) {
        pcVar4 = (char *)FUN_0001f6ec();
      }
      else {
        pcVar4 = "XML_WTD";
      }
    }
    else {
      pcVar4 = "XML_ANJVISION";
    }
    snprintf(param_7,0x800,
             "<?xml version=\"1.0\" encoding=\"GB2312\" ?>\n<%s>\n<MESSAGE_HEADER Msg_type=\"SYSTEM_SEARCHIPC_MESSAGE\" Msg_code=\"%d\" Msg_flag=\"0\" />\n<MESSAGE_BODY>\n"
             ,pcVar4,3);
    if (*param_3 != '\0') {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5,"<VENDOR_PARAM VendorId=\"%s\"/>\n",param_3);
    }
    local_63c[0] = '\0';
    local_63c[1] = '\0';
    local_63c[2] = '\0';
    local_63c[3] = '\0';
    memset(auStack_638,0,0x7c);
    iVar2 = DAT_000b9380 + 0x5944;
    if (DAT_000b23f0 == 0) {
      sVar5 = strlen(param_7);
      pcVar4 = (char *)FUN_0001f678(local_63c,0x80,iVar2);
      snprintf(param_7 + sVar5,0x800 - sVar5,
               "<DEVICE_TYPE DeviceType=\"%s-%s\" DeviceModule=\"%s\" OSD=\"%s\" ","NVS-IPCAM",
               param_4,DAT_00021448,pcVar4);
    }
    else {
      sVar5 = strlen(param_7);
      pcVar4 = (char *)FUN_0001f678(local_63c,0x80,iVar2);
      snprintf(param_7 + sVar5,0x800 - sVar5,
               "<DEVICE_TYPE DeviceType=\"%s-%s\" DeviceModule=\"%s\" OSD=\"%s\" ","NVS-IPCAM-2CHN",
               param_4,DAT_00020d88,pcVar4);
    }
    sVar5 = strlen(param_7);
    snprintf(param_7 + sVar5,0x800 - sVar5," />\n");
    sVar5 = strlen(param_7);
    pcVar4 = (char *)get_chip_uuid();
    snprintf(param_7 + sVar5,0x800 - sVar5,"<IPC_SERIALNUMBER UUID=\"%s\" SerialNumber=\"%s\" ",
             pcVar4,param_5);
    if (DAT_000c4328 != '\0') {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5," OEM_SN=\"%s\" ",&DAT_000c4328);
    }
    iVar2 = access("/tmp/flag.mode.factory",0);
    iVar6 = FileExist("/tmp/p2p_netcfgcode");
    if (iVar6 != 0) {
      read_file_to_buffer("/tmp/p2p_netcfgcode",DAT_0002144c,0x3f);
      string_trim_head(DAT_0002144c);
      string_trim_tail(DAT_0002144c);
    }
    local_6bc[0] = '\0';
    local_6bc[1] = '\0';
    local_6bc[2] = '\0';
    local_6bc[3] = '\0';
    memset(local_6bc + 4,0,0x3c);
    local_67c[0] = '\0';
    local_67c[1] = '\0';
    local_67c[2] = '\0';
    local_67c[3] = '\0';
    memset(local_678,0,0x3c);
    if (*(char *)(DAT_000b9380 + 0x3785) != '\0') {
      if (*(char *)(DAT_000b9380 + 0x3787) == '\0') {
        snprintf(local_6bc,0x40," Name=\"%s\"","A_ONVIF_CAMERA");
      }
      else {
        snprintf(local_6bc,0x40," Name=\"%s\"","NONE");
      }
    }
    if (DAT_000b23f0 != 0) {
      if (*param_5 == 'E') {
        uVar1 = (uint)(param_5[1] == 'E');
      }
      else {
        uVar1 = 0;
      }
      snprintf(local_67c,0x40," ChannelNum=\"%d\" ",uVar1);
    }
    sVar5 = strlen(param_7);
    param4 = DAT_000af0ac;
    iVar6 = DAT_000af024;
    param8 = FUN_0005a654();
    snprintf(param_7 + sVar5,0x800 - sVar5,
             " PLATFORMID=\"%s\" P2PTYPE=\"%d\" P2PID=\"%s\" P2PSTATUS=\"%d\" P2PNETCFGCODE=\"%s\" runtime=\"%d\" VERSION=\"%s\"%s FACTORYMODE=\"%d\" AF_VERSION=\"%s\" MODULE4G_VERSION=\"%s\"  %s/>\n"
             ,DAT_0002115c + -0x2ec,param4,DAT_0002115c + -0x2cc,iVar6,DAT_0002115c,param8,
             DAT_00021150 + -0x100,local_6bc,(uint)(iVar2 == 0),DAT_00021150 + -0x80,DAT_00021150,
             local_67c);
    if (DAT_000b21e0 != 0) {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5,
               "<FH_CONFIG><SYSTEM DEVICETYPE=\"%s\" EXTNUMBER=\"%s\" MAINNUMBER=\"%s\" EXTNAME=\"%s\" ADDRESSBOXIP=\"%s\" NOTES=\"%s\" MANAGECENTER=\"%s\" />\n</FH_CONFIG>\n"
               ,local_5bc,acStack_59c,acStack_57c,acStack_55c,acStack_53c,acStack_51c,acStack_4fc);
    }
    sVar5 = strlen(param_7);
    snprintf(param_7 + sVar5,0x800 - sVar5,"%s\n",pcVar3);
    if (local_6f8 != (char *)0x0) {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5,"%s\n",local_6f8);
      sVar5 = strlen(param_7);
      if (DAT_000b2708 == 0) {
        if (DAT_000b2344 == 0) {
          pcVar4 = (char *)FUN_0001f6ec();
        }
        else {
          pcVar4 = "XML_WTD";
        }
      }
      else {
        pcVar4 = "XML_ANJVISION";
      }
      snprintf(param_7 + sVar5,0x800 - sVar5,"%s\n</MESSAGE_BODY>\n</%s>\n",param3,pcVar4);
      sVar5 = strlen(param_7);
      FUN_00020768("/tmp/search.txt",param_7,sVar5);
      free(local_6f8);
      goto LAB_00020f2e;
    }
    sVar5 = strlen(param_7);
    if (DAT_000b2708 == 0) {
      if (DAT_000b2344 == 0) {
        pcVar4 = (char *)FUN_0001f6ec();
      }
      else {
        pcVar4 = "XML_WTD";
      }
    }
    else {
      pcVar4 = "XML_ANJVISION";
    }
    snprintf(param_7 + sVar5,0x800 - sVar5,"%s\n</MESSAGE_BODY>\n</%s>\n",param3,pcVar4);
    sVar5 = strlen(param_7);
    FUN_00020768("/tmp/search.txt",param_7,sVar5);
  }
  free(pcVar3);
LAB_00020f32:
  if (param3 != (char *)0x0) {
    free(param3);
  }
  if (*param_7 == '\0') {
    bVar11 = false;
  }
  if (bVar11) {
    iVar2 = FUN_00020830(param_2,param_7,param_8,param_9,param_10,param_11);
    uVar7 = 0xffffffff;
    if (0 < iVar2) {
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0;
}


