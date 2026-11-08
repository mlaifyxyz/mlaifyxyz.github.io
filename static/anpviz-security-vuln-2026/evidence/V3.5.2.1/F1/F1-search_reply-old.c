/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000202f0 */
/* function FUN_000202f0 @ 000202f0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4
FUN_000202f0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,
            undefined4 param_6,char *param_7,undefined4 param_8,uint param_9,undefined4 param_10,
            undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  char *param3;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  char *local_700;
  undefined4 local_6e4;
  undefined2 local_6e0;
  char acStack_6dc [32];
  char local_6bc [128];
  char local_63c [128];
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
  local_6bc[0] = '\0';
  local_6bc[1] = '\0';
  local_6bc[2] = '\0';
  local_6bc[3] = '\0';
  memset(local_6bc + 4,0,0x7c);
  iVar2 = FileExist("/opt/ch/af.flag");
  if ((iVar2 != 0) && (iVar2 = access("/tmp/version.flag",0), iVar2 == 0)) {
    read_file_to_buffer("/tmp/AF_version.txt",local_6bc,0x80);
  }
  if (((DAT_000a8ec0 - 0x716 < 0x1a) && ((~(0x3001011U >> (DAT_000a8ec0 - 0x716 & 0xff)) & 1) == 0))
     && (iVar2 = access("/tmp/mcu_ver.txt",0), iVar2 == 0)) {
    read_file_to_buffer("/tmp/mcu_ver.txt",local_6bc,0x80);
  }
  memset(DAT_000206c8,0,0x20);
  memset(DAT_000206cc,0,0x80);
  memset(DAT_000206d0,0,0x90);
  iVar2 = access("/mnt/nand/serverNo",0);
  if (iVar2 != -1) {
    read_file_to_string("/mnt/nand/serverNo",DAT_000206c8,0x20);
  }
  if (0 < *(int *)(DAT_000b3620 + 0x4eb0)) {
    iVar2 = access("/tmp/p2pid.txt",0);
    if (iVar2 != -1) {
      read_file_to_string("/tmp/p2pid.txt",DAT_00020c48,0x80);
    }
    P2pReadLoginStatus(DAT_00020c4c);
  }
  memcpy(&local_4dc,(void *)(DAT_000b3620 + 0x1b20),0x4b4);
  if ((DAT_000acd54 == 0) && (0 < local_4dc)) {
    puVar9 = local_4d8;
    iVar2 = 0;
    do {
      *puVar9 = 0;
      iVar2 = iVar2 + 1;
      puVar9[0x28] = 0;
      puVar9 = puVar9 + 0x78;
    } while (iVar2 < local_4dc);
  }
  if (DAT_000a9e60 != 0) {
    memset(&local_4dc,0,0x4b4);
    local_4dc = 1;
  }
  if (*param_3 == '\0') {
    local_700 = (char *)XMLGET_UserConfig(&local_4dc);
  }
  else {
    local_700 = (char *)FUN_0001ff88();
  }
  puVar11 = &DAT_00072a1c;
  param3 = (char *)XMLGET_MediaStreamConfig_ForSearch(DAT_000b3620 + 0x3644);
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
  if (DAT_000ac504 != 0) {
    puVar11 = (undefined4 *)&DAT_000731d8;
  }
  local_5ac = 0;
  uStack_5a8 = 0;
  iVar2 = Check_Link_Status(puVar11);
  DebugPrint(8,7,"[%s:%u]Check_Link_Status %s:%d, g_wifiExist=%d, remote %s:%d \n\n",DAT_000206d4,
             0x599,puVar11,iVar2,DAT_000ac294,acStack_6dc,param_8._2_2_ << 8 | param_8._2_2_ >> 8);
  local_63c[0] = '\0';
  local_63c[1] = '\0';
  local_63c[2] = '\0';
  local_63c[3] = '\0';
  local_63c[4] = '\0';
  local_63c[5] = '\0';
  local_63c[6] = '\0';
  local_63c[7] = '\0';
  sprintf(local_63c,"%d",uVar1);
  if (DAT_000ac294 == 0) {
    if (DAT_000ac334 != 0) {
      bVar12 = true;
LAB_00020776:
      if (iVar2 == 0) {
        bVar12 = false;
      }
      if (!bVar12) {
LAB_000204ec:
        if (DAT_000ac294 != 0) goto LAB_00020834;
      }
    }
LAB_000204f6:
    memcpy(DAT_000206d8,(void *)(DAT_000b3620 + 0x3e24),0x19c);
    local_6e4 = 0;
    local_6e0 = 0;
    net_get_hwaddr(puVar11,&local_6e4);
    format_mac_addr_from_digit_to_string(&local_6e4,6,DAT_000206d8,0x12);
    if (((*param_5 == 'E') && (param_5[1] == 'E')) && (DAT_000ac56c != 0)) {
      net_get_info("eth0:0",local_5bc);
      DAT_000a9fd4 = 0x45;
    }
    else {
      net_get_info(puVar11,local_5bc);
    }
    if ((local_5b4 != 0) || (*(char *)(DAT_000b3620 + 0x3e36) != '\0')) {
      uVar8 = DAT_000206dc;
      goto LAB_0002055c;
    }
LAB_00020828:
    bVar12 = false;
  }
  else {
    if (DAT_000ac334 != 0) {
      if (iVar2 == 0) goto LAB_000204ec;
      iVar6 = FUN_00020250(local_63c);
      if (DAT_000ac334 != 0) {
        bVar12 = iVar6 == 0;
        goto LAB_00020776;
      }
      goto LAB_000204f6;
    }
    if (iVar2 != 0) goto LAB_000204f6;
LAB_00020834:
    pcVar3 = (char *)net_get_wireless_name();
    uVar1 = (uint)((DAT_000a8ec0 & 0xfffffffd) == 0xb025);
    if (DAT_000a8ec0 - 0x194 < 0x1f) {
      uVar1 = 0x7f1f5621U >> (DAT_000a8ec0 - 0x194 & 0xff) & 1 | uVar1;
LAB_00020870:
      uVar10 = DAT_000a8ec0 - 0x724;
      bVar13 = 0xb < uVar10;
      bVar12 = uVar10 == 0xc;
      if (0xc < uVar10) {
        bVar13 = (DAT_000a8ec0 & 0xffffff7f) != 0x701;
        bVar12 = (DAT_000a8ec0 & 0xffffff7f) == 0x702;
      }
      uVar1 = (!bVar13 || bVar12) | uVar1;
      if (0x1f < DAT_000a8ec0 - 0x682) goto LAB_00020d3c;
      uVar1 = uVar1 | 0xc8000673U >> (DAT_000a8ec0 - 0x682 & 0xff) & 1;
    }
    else {
      uVar10 = (uint)(DAT_000a8ec0 == 0x1b5 || DAT_000a8ec0 == 0x205);
      if (DAT_000a8ec0 == 0xb211) {
        uVar10 = 1;
      }
      if (DAT_000a8ec0 == 0x488) {
        uVar10 = 1;
      }
      uVar1 = uVar1 | uVar10;
      if (0x1b < DAT_000a8ec0 - 0x707) goto LAB_00020870;
      uVar1 = 0xe76eff1U >> (DAT_000a8ec0 - 0x707 & 0xff) & 1 | uVar1;
LAB_00020d3c:
      if (DAT_000a8ec0 - 0x602 < 0x1d) {
        uVar1 = uVar1 | 0x17ffffb5U >> (DAT_000a8ec0 - 0x602 & 0xff) & 1;
      }
    }
    if ((DAT_000a8ec0 & 0xfffffff6) == 0x620) {
      uVar1 = 1;
    }
    if (DAT_000a8ec0 - 0x623 < 2) {
      uVar1 = 1;
    }
    if (DAT_000a8ec0 - 0x6a4 < 7) {
      uVar1 = 1;
    }
    if (DAT_000a8ec0 == 0x403) {
      uVar1 = 1;
    }
    if (DAT_000a8ec0 == 0x801) {
      uVar1 = 1;
    }
    if ((((uVar1 != 0) || (DAT_000ac294 != 0)) && (*(int *)(DAT_000b3620 + 0x4ec8) != 0)) &&
       (*(int *)(DAT_000b3620 + 0x3fc0) == 0)) {
      if ((DAT_000ac53c == 0) || (DAT_000bd1ec == 0)) {
        pcVar3 = (char *)net_get_wirelessap_name();
      }
      else {
        pcVar3 = (char *)net_get_wireless_name();
      }
    }
    DAT_000a9fe6 = is_dhcp(pcVar3);
    DAT_000a9fe8 = *(undefined2 *)(DAT_000b3620 + 0x3e38);
    local_6e4 = 0;
    local_6e0 = 0;
    net_get_hwaddr(pcVar3,&local_6e4);
    format_mac_addr_from_digit_to_string(&local_6e4,6,DAT_00020c40,0x12);
    if ((*param_5 == 'E') && (param_5[1] == 'E')) {
      pcVar4 = (char *)net_get_wireless_name();
      iVar2 = strcmp(pcVar3,pcVar4);
      if ((iVar2 != 0) || (DAT_000ac56c == 0)) goto LAB_00020956;
      iVar2 = net_get_info("wlan0:0",local_5bc);
      DAT_000a9fd4 = 0x45;
    }
    else {
LAB_00020956:
      iVar2 = net_get_info(pcVar3,local_5bc);
    }
    if (iVar2 != 0) goto LAB_00020828;
    uVar8 = DAT_00020c44;
LAB_0002055c:
    bVar12 = true;
    get_ip_str(local_5b4,uVar8,0x40);
    get_ip_str(local_5b0,DAT_000206e0,0x40);
    get_ip_str(local_5ac,DAT_000206e4,0x40);
    net_get_two_dns(DAT_000206e8 + -0x40,0x40);
  }
  pcVar3 = (char *)XMLGET_NetworkLANConfig(DAT_000206d8);
  *param_7 = '\0';
  if (DAT_000ac368 != 0) {
    Load_fh_info(local_5bc);
  }
  if (pcVar3 == (char *)0x0 || param3 == (char *)0x0) {
    sVar5 = strlen(param_7);
    FUN_000200a4("/tmp/search.txt",param_7,sVar5);
    if (local_700 != (char *)0x0) {
      free(local_700);
    }
LAB_000207a6:
    if (pcVar3 == (char *)0x0) goto LAB_000207aa;
  }
  else {
    if (DAT_000ac874 == 0) {
      if (DAT_000ac2ac == 0) {
        pcVar4 = (char *)FUN_0001f07c();
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
    sVar5 = strlen(param_7);
    if (DAT_000ac56c == 0) {
      pcVar4 = (char *)FUN_0001f008(local_63c,0x80,DAT_000b3620 + 0x5940);
      snprintf(param_7 + sVar5,0x800 - sVar5,
               "<DEVICE_TYPE DeviceType=\"%s-%s\" DeviceModule=\"%s\" OSD=\"%s\" ","NVS-IPCAM",
               param_4,DAT_00020c50,pcVar4);
    }
    else {
      pcVar4 = (char *)FUN_0001f008(local_63c,0x80,DAT_000b3620 + 0x5940);
      snprintf(param_7 + sVar5,0x800 - sVar5,
               "<DEVICE_TYPE DeviceType=\"%s-%s\" DeviceModule=\"%s\" OSD=\"%s\" ","NVS-IPCAM-2CHN",
               param_4,DAT_000206ec,pcVar4);
    }
    sVar5 = strlen(param_7);
    snprintf(param_7 + sVar5,0x800 - sVar5," />\n");
    sVar5 = strlen(param_7);
    pcVar4 = (char *)get_chip_uuid();
    snprintf(param_7 + sVar5,0x800 - sVar5,"<IPC_SERIALNUMBER UUID=\"%s\" SerialNumber=\"%s\" ",
             pcVar4,param_5);
    if (DAT_000be548 != '\0') {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5," OEM_SN=\"%s\" ",&DAT_000be548);
    }
    iVar2 = access("/tmp/flag.mode.factory",0);
    iVar6 = FileExist("/tmp/p2p_netcfgcode");
    uVar1 = (uint)(iVar2 == 0);
    if (iVar6 != 0) {
      read_file_to_buffer("/tmp/p2p_netcfgcode",DAT_00020e28,0x3f);
      string_trim_head(DAT_00020e28);
      string_trim_tail(DAT_00020e28);
    }
    iVar2 = FileExist("/opt/ch/onvif_expand");
    if (iVar2 == 0) {
      sVar5 = strlen(param_7);
      iVar6 = DAT_000a9fcc;
      iVar2 = DAT_000a9f44;
      if (DAT_000ac56c == 0) {
        iVar7 = FUN_00056490();
        snprintf(param_7 + sVar5,0x800 - sVar5,
                 " PLATFORMID=\"%s\" P2PTYPE=\"%d\" P2PID=\"%s\" P2PSTATUS=\"%d\" P2PNETCFGCODE=\"%s\" runtime=\"%d\" VERSION=\"%s\" FACTORYMODE=\"%d\" AF_VERSION=\"%s\"  />\n"
                 ,DAT_00020c54 + -0x2ec,iVar6,DAT_00020c54 + -0x2cc,iVar2,DAT_00020c54,iVar7,
                 DAT_00020c58,uVar1,local_6bc);
      }
      else {
        if (*param_5 == 'E') {
          uVar10 = (uint)(param_5[1] == 'E');
        }
        else {
          uVar10 = 0;
        }
        iVar7 = FUN_00056490();
        snprintf(param_7 + sVar5,0x800 - sVar5,
                 " PLATFORMID=\"%s\" P2PTYPE=\"%d\" P2PID=\"%s\" P2PSTATUS=\"%d\" P2PNETCFGCODE=\"%s\" runtime=\"%d\" VERSION=\"%s\" FACTORYMODE=\"%d\" AF_VERSION=\"%s\" ChannelNum=\"%d\" />\n"
                 ,DAT_00020c54 + -0x2ec,iVar6,DAT_00020c54 + -0x2cc,iVar2,DAT_00020c54,iVar7,
                 DAT_00020c58,uVar1,local_6bc,uVar10);
      }
    }
    else {
      sVar5 = strlen(param_7);
      iVar6 = DAT_000a9fcc;
      iVar2 = DAT_000a9f44;
      if (DAT_000ac334 == 0) {
        iVar7 = FUN_00056490();
        snprintf(param_7 + sVar5,0x800 - sVar5,
                 " PLATFORMID=\"%s\" P2PTYPE=\"%d\" P2PID=\"%s\" P2PSTATUS=\"%d\" P2PNETCFGCODE=\"%s\" runtime=\"%d\" VERSION=\"%s\" Name=\"NONE\" FACTORYMODE=\"%d\" AF_VERSION=\"%s\"  />\n"
                 ,DAT_00020c54 + -0x2ec,iVar6,DAT_00020c54 + -0x2cc,iVar2,DAT_00020c54,iVar7,
                 DAT_00020c58,uVar1,local_6bc);
      }
      else {
        iVar7 = FUN_00056490();
        snprintf(param_7 + sVar5,0x800 - sVar5,
                 " PLATFORMID=\"%s\" P2PTYPE=\"%d\" P2PID=\"%s\" P2PSTATUS=\"%d\" P2PNETCFGCODE=\"%s\" runtime=\"%d\" VERSION=\"%s\" Name=\"A_ONVIF_CAMERA\" FACTORYMODE=\"%d\" AF_VERSION=\"%s\"  />\n"
                 ,DAT_00020c54 + -0x2ec,iVar6,DAT_00020c54 + -0x2cc,iVar2,DAT_00020c54,iVar7,
                 DAT_00020c58,uVar1,local_6bc);
      }
    }
    sVar5 = strlen(param_7);
    pcVar4 = param_7 + sVar5;
    sVar5 = 0x800 - sVar5;
    if (DAT_000ac368 != 0) {
      snprintf(pcVar4,sVar5,
               "<FH_CONFIG><SYSTEM DEVICETYPE=\"%s\" EXTNUMBER=\"%s\" MAINNUMBER=\"%s\" EXTNAME=\"%s\" ADDRESSBOXIP=\"%s\" NOTES=\"%s\" MANAGECENTER=\"%s\" />\n</FH_CONFIG>\n"
               ,local_5bc,acStack_59c,acStack_57c,acStack_55c,acStack_53c,acStack_51c,acStack_4fc);
      sVar5 = strlen(param_7);
      pcVar4 = param_7 + sVar5;
      sVar5 = 0x800 - sVar5;
    }
    snprintf(pcVar4,sVar5,"%s\n",pcVar3);
    if (local_700 != (char *)0x0) {
      sVar5 = strlen(param_7);
      snprintf(param_7 + sVar5,0x800 - sVar5,"%s\n",local_700);
      sVar5 = strlen(param_7);
      if (DAT_000ac874 == 0) {
        if (DAT_000ac2ac == 0) {
          pcVar4 = (char *)FUN_0001f07c();
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
      FUN_000200a4("/tmp/search.txt",param_7,sVar5);
      free(local_700);
      goto LAB_000207a6;
    }
    sVar5 = strlen(param_7);
    if (DAT_000ac874 == 0) {
      if (DAT_000ac2ac == 0) {
        pcVar4 = (char *)FUN_0001f07c();
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
    FUN_000200a4("/tmp/search.txt",param_7,sVar5);
  }
  free(pcVar3);
LAB_000207aa:
  if (param3 != (char *)0x0) {
    free(param3);
  }
  if (*param_7 == '\0') {
    bVar12 = false;
  }
  if (bVar12) {
    iVar2 = FUN_00020140(param_2,param_7,param_8,param_9,param_10,param_11);
    uVar8 = 0xffffffff;
    if (0 < iVar2) {
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0;
}


