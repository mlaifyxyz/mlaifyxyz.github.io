/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00029778 */
/* function FUN_00029778 @ 00029778 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00029778(char *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  char ******ppppppcVar7;
  size_t sVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  FILE *pFVar13;
  void *pvVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  char *******pppppppcVar18;
  byte *pbVar20;
  byte *pbVar19;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar22;
  int *piVar21;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  char *******pppppppcVar26;
  undefined4 *puVar27;
  char *__s1;
  byte *__s;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  char *******pppppppcVar32;
  char *local_9ec;
  char *local_9e8;
  int local_9e4;
  int local_9e0;
  uint local_9dc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 local_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  char *local_9a4;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined4 local_994;
  undefined1 auStack_990 [60];
  undefined4 local_954;
  undefined1 auStack_950 [60];
  char acStack_914 [64];
  char acStack_8d4 [64];
  int aiStack_894 [4];
  int aiStack_884 [28];
  int local_814 [50];
  char *******local_74c;
  char ******appppppcStack_748 [63];
  char local_64c [4];
  char acStack_648 [4];
  char acStack_644 [4];
  undefined3 uStack_640;
  char cStack_63d;
  int local_63c;
  char *******local_638;
  char *******local_634;
  char *******local_630;
  char local_62c [4];
  char acStack_628 [4];
  char acStack_624 [4];
  char acStack_620 [4];
  char acStack_61c [4];
  undefined2 uStack_618;
  undefined1 local_616;
  char *******local_52c;
  char *******local_528;
  char acStack_524 [256];
  char *******local_424;
  
  FUN_0002974c();
  KillProcessForFirmware(1,param_4);
  if ((DAT_000adfa4 - 0x716U < 0x1a) &&
     ((int)((0x3001011U >> (DAT_000adfa4 - 0x716U & 0xff)) << 0x1f) < 0)) {
    mysystem("cp /bin/busybox /tmp/busybox && chmod +x /tmp/busybox");
    mysystem("cp /bin/reboot /tmp/reboot && chmod +x /tmp/reboot");
    mysystem("sed -i \'s|/bin/|/tmp/|g\' /tmp/reboot");
  }
  iVar6 = strncmp(param_1,"/mnt/mmc0",9);
  if ((iVar6 == 0) || (iVar6 = strncmp(param_1,"/mnt/mmc1",9), iVar6 == 0)) {
    memset(local_64c,0,0x100);
    sprintf(local_64c,"%s/not_del_firmware_file.flag","/mnt/mmc0");
    iVar6 = access(local_64c,0);
    memset(local_64c,0,0x100);
    sprintf(local_64c,"%s/not_del_firmware_file.flag","/mnt/mmc1");
    local_9dc = access(local_64c,0);
    if (local_9dc != 0) {
      local_9dc = (uint)(iVar6 != 0);
    }
  }
  else {
    local_9dc = 1;
  }
  uVar10 = param_4;
  DebugPrint(8,7,
             "[%s:%u]prepare for firmware update, filename=%s, buf=%#x, len=%d, cmd_src = %d...\n\n"
             ,DAT_00029a58,0x109f,param_1,param_2,param_3,param_4);
  uVar30 = 10;
  uVar31 = 6;
  uVar29 = 3;
  DebugPrint(8,7,"[%s:%u]WEB_PROCESS_KEY = %d, TPSSERVER_PROCESS_KEY =%d, AUX_PROCESS_KEY = %d\n\n",
             DAT_00029a58,0x10a1,3,10,6);
  if (DAT_000adfa4 == 0x1106) {
    gpio_write(9,2,0);
  }
  local_9b8 = 0;
  uStack_9b4 = 0;
  local_9b0 = 0;
  uStack_9ac = 0;
  local_9a8 = 0;
  local_994 = 0;
  memset(auStack_990,0,0x3c);
  local_9a0 = 0;
  uStack_99c = 0;
  local_9a4 = (char *)0x0;
  if (param_2 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]FirmwareUpdate use mmap mode\n\n",DAT_0002ad5c,0x113d,uVar29,uVar30,
               uVar31,uVar10);
    killprocess("media_server");
    if ((DAT_000adfa4 - 0x716U < 0x1a) &&
       ((int)((0x3001011U >> (DAT_000adfa4 - 0x716U & 0xff)) << 0x1f) < 0)) {
      memset(acStack_648,0,0x60);
      local_64c[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0];
      local_64c[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[1];
      local_64c[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[2];
      local_64c[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[3];
      acStack_648[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[4];
      acStack_648[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[5];
      acStack_648[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[6];
      acStack_648[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[7];
      acStack_644[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[8];
      acStack_644[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[9];
      acStack_644[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[10];
      acStack_644[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0xb];
      uStack_640._0_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0xc];
      uStack_640._1_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0xd];
      uStack_640._2_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0xe];
      cStack_63d = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0xf];
      local_63c._0_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x10];
      local_63c._1_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x11];
      local_63c._2_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x12];
      local_63c._3_1_ = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x13];
      local_638 = (char *******)s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70._20_4_;
      local_634 = (char *******)s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70._24_4_;
      local_630 = (char *******)s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70._28_4_;
      local_62c[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x20];
      local_62c[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x21];
      local_62c[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x22];
      local_62c[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x23];
      acStack_628[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x24];
      acStack_628[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x25];
      acStack_628[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x26];
      acStack_628[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x27];
      acStack_624[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x28];
      acStack_624[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x29];
      acStack_624[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2a];
      acStack_624[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2b];
      acStack_620[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2c];
      acStack_620[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2d];
      acStack_620[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2e];
      acStack_620[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x2f];
      acStack_61c[0] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x30];
      acStack_61c[1] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x31];
      acStack_61c[2] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x32];
      acStack_61c[3] = s_echo__e__n___xFC_x01_xAE_x02_x02_0007bb70[0x33];
      uStack_618 = (undefined2)ram0x0007bba4;
      local_616 = (undefined1)((uint)ram0x0007bba4 >> 0x10);
      printf("cmd:%s\n",local_64c);
      mysystem(local_64c);
      usleep(10000);
      mysystem(local_64c);
    }
    MI_SYS_Init(0);
    uVar10 = alignBy(param_3,0x100000);
    local_64c[0] = s_mma_heap_name0_0007bbb0[0];
    local_64c[1] = s_mma_heap_name0_0007bbb0[1];
    local_64c[2] = s_mma_heap_name0_0007bbb0[2];
    local_64c[3] = s_mma_heap_name0_0007bbb0[3];
    acStack_648[0] = s_mma_heap_name0_0007bbb0[4];
    acStack_648[1] = s_mma_heap_name0_0007bbb0[5];
    acStack_648[2] = s_mma_heap_name0_0007bbb0[6];
    acStack_648[3] = s_mma_heap_name0_0007bbb0[7];
    acStack_644[0] = s_mma_heap_name0_0007bbb0[8];
    acStack_644[1] = s_mma_heap_name0_0007bbb0[9];
    acStack_644[2] = s_mma_heap_name0_0007bbb0[10];
    acStack_644[3] = s_mma_heap_name0_0007bbb0[0xb];
    uStack_640 = (undefined3)ram0x0007bbbc;
    iVar6 = MI_SYS_MMA_Alloc(0,local_64c,uVar10,&local_9a0);
    if (iVar6 != 0) {
      DebugPrint(8,7,"[%s:%u]Cannot alloc mmz.\n\n",DAT_0002b470,0x1158);
      return 0xffffffff;
    }
    iVar6 = MI_SYS_Mmap(local_9a0,uStack_99c,uVar10,&local_9a4,1);
    if ((iVar6 != 0) || (local_9a4 == (char *)0x0)) {
      DebugPrint(8,7,"[%s:%u]phys_addr = %#x, MI_SYS_Mmap failed\n\n",DAT_0002b380,0x1160,uVar29,
                 local_9a0,uStack_99c);
      MI_SYS_MMA_Free(0,extraout_r1,local_9a0,uStack_99c);
      return 0xffffffff;
    }
    iVar6 = MI_SYS_FlushInvCache(local_9a4,uVar10);
    if (iVar6 != 0) {
      DebugPrint(8,7,"[%s:%u]phys_addr = %#x, MI_SYS_FlushInvCache failed\n\n",DAT_0002b470,0x1169,
                 uVar29,local_9a0,uStack_99c);
      MI_SYS_Munmap(local_9a4,uVar10);
      MI_SYS_MMA_Free(0,extraout_r1_00,local_9a0,uStack_99c);
      return 0xffffffff;
    }
    pFVar13 = fopen64(param_1,"r+b");
    pcVar9 = local_9a4;
    iVar6 = 0;
    while (sVar8 = fread(pcVar9 + iVar6,1,0x100000,pFVar13), sVar8 != 0) {
      iVar6 = iVar6 + sVar8;
    }
    DebugPrint(8,7,"[%s:%u]%s read finished, data len is %d !!!\n",DAT_0002ad5c,0x1188,param_1,iVar6
              );
    fclose(pFVar13);
    local_9e8 = local_9a4;
    if (local_9dc != 0) {
      mysystem_with_param("rm -rf %s",param_1);
    }
    local_9ec = (char *)0x0;
    *param_1 = '\0';
LAB_0002989e:
    iVar6 = CheckFirmwareBuf(local_9e8,param_3,&local_9b8,&uStack_9b4,&local_9b0,&uStack_9ac,
                             &local_9a8,local_64c);
    if (iVar6 != 0) {
      uVar10 = 0x1239;
      pcVar9 = "[%s:%u]check firmware buf %#x:%d fail\n\n";
LAB_0002b230:
      DebugPrint(8,7,pcVar9,DAT_0002b380,uVar10,local_9e8,param_3);
      return 0xffffffff;
    }
    bVar28 = true;
    DebugPrint(8,7,"[%s:%u]check firmware buf %#x:%d OK\n\n",DAT_00029a58,0x123e,local_9e8,param_3);
  }
  else {
    local_9ec = param_1;
    local_9e8 = param_2;
    if (*param_1 == '\0') goto LAB_0002989e;
    memset(&local_994,0,0x40);
    sprintf(local_64c,"md5sum %s",param_1);
    pFVar13 = popen(local_64c,"r");
    if (pFVar13 == (FILE *)0x0) {
LAB_0002aee6:
      DebugPrint(8,7,"[%s:%u]!!!Warm: Get firmware md5 value fail.\n\n",DAT_0002b01c,0x121d);
    }
    else {
      fgets((char *)&local_994,0x21,pFVar13);
      iVar6 = pclose(pFVar13);
      if (iVar6 != 0) goto LAB_0002aee6;
    }
    DebugPrint(8,7,"[%s:%u]Get firmware md5 value:%s.\n\n",DAT_0002ad5c,0x121f,&local_994);
    param_3 = local_64c;
    iVar6 = CheckFirmwareFile(param_1,&local_9b8,&uStack_9b4,&local_9b0,&uStack_9ac,&local_9a8,
                              local_64c);
    if (iVar6 != 0) {
      piVar15 = __errno_location();
      param_3 = strerror(*piVar15);
      pcVar9 = "[%s:%u]check firmware %s fail(%s)\n\n";
      uVar10 = 0x1225;
      local_9e8 = param_1;
      goto LAB_0002b230;
    }
    pcVar9 = strstr(param_1,".tmp");
    bVar28 = pcVar9 != (char *)0x0;
  }
  DAT_000af55c = 1;
  DebugPrint(1,7,"[%s:%u]Input fs Info: %s\n",DAT_00029a5c,0xfc5,acStack_524,param_3);
  ppppppcVar7 = (char ******)strtok(acStack_524,"_");
  if (ppppppcVar7 != (char ******)0x0) {
    iVar6 = 0;
    pppppppcVar11 = (char *******)&local_74c;
    do {
      iVar17 = iVar6;
      *pppppppcVar11 = ppppppcVar7;
      ppppppcVar7 = (char ******)strtok((char *)0x0,"_");
      iVar16 = __ctype_b;
      iVar6 = iVar17 + 1;
      pppppppcVar11 = pppppppcVar11 + 1;
    } while (ppppppcVar7 != (char ******)0x0 && iVar6 < 0x10);
    pppppppcVar11 = appppppcStack_748;
    pppppppcVar32 = (char *******)&local_74c;
    do {
      pppppppcVar12 = pppppppcVar11;
      ppppppcVar7 = *pppppppcVar32;
      if ((ppppppcVar7 != (char ******)0x0) && (*(char *)ppppppcVar7 == 'V')) {
        __s = (byte *)((int)ppppppcVar7 + 1);
        sVar8 = strlen((char *)__s);
        if ((sVar8 != 0) && (pcVar9 = strchr((char *)__s,0x2e), pcVar9 != (char *)0x0)) {
          pbVar20 = __s;
          do {
            pbVar19 = pbVar20 + 1;
            if (((uint)(*pbVar20 != 0x2e) & (*(ushort *)(iVar16 + (uint)*pbVar20 * 2) ^ 8) >> 3) !=
                0) goto LAB_000299e2;
            pbVar20 = pbVar19;
          } while ((int)(pbVar19 + ~(uint)ppppppcVar7) < (int)sVar8);
          if ((*(char *)((int)ppppppcVar7 + 1) != '.') &&
             (*(char *)((int)ppppppcVar7 + sVar8) != '.')) {
            if (sVar8 == 1) {
LAB_00029a60:
              DebugPrint(1,7,"[%s:%u]Parse get version: %s\n",DAT_00029db4,0xfdd,ppppppcVar7);
              sscanf((char *)__s,"%d.%d.%d.%d",aiStack_894,aiStack_894 + 1,aiStack_894 + 2,
                     aiStack_894 + 3);
              sscanf(DAT_00029db8,"%d.%d.%d.%d",local_814,local_814 + 1,local_814 + 2,local_814 + 3)
              ;
              piVar15 = local_814;
              piVar21 = aiStack_894;
              goto LAB_00029ab4;
            }
            pbVar20 = __s;
            do {
              pbVar19 = pbVar20;
              if (pbVar19 == (byte *)((int)ppppppcVar7 + (sVar8 - 1))) goto LAB_00029a60;
              pbVar20 = pbVar19 + 1;
            } while ((*pbVar20 != 0x2e) || (pbVar19[2] != 0x2e));
          }
        }
      }
LAB_000299e2:
      if (appppppcStack_748 + iVar17 == pppppppcVar12) break;
      pppppppcVar11 = pppppppcVar12 + 1;
      pppppppcVar32 = pppppppcVar12;
    } while( true );
  }
  goto LAB_00029acc;
LAB_0002a8c2:
  puVar27 = (undefined4 *)puVar27[10];
  goto joined_r0x0002a86e;
  while( true ) {
    if (*piVar21 < *piVar15) goto LAB_00029acc;
    piVar15 = piVar15 + 1;
    piVar21 = piVar22;
    if (aiStack_884 == piVar22) break;
LAB_00029ab4:
    piVar22 = piVar21 + 1;
    if (*piVar15 < *piVar21) break;
  }
  DAT_000af55c = 0;
LAB_00029acc:
  CMEM_delete_shm();
  if (local_9e8 == (char *)0x0) {
    iVar6 = KillProcessForFirmware(bVar28,param_4);
    if (iVar6 < 0) {
      return 0xffffffff;
    }
    local_9e4 = 1;
    local_9e0 = 0;
  }
  else {
    local_9e4 = 0;
    local_9e0 = 1;
  }
  if (DAT_000adfa4 == 4) {
    FUN_00069054();
    uVar10 = net_get_wireless_name();
    mysystem_with_param("ifconfig %s down",uVar10);
    mysystem("rmmod  mt7601Usta");
  }
  DAT_000b186c = 1;
  usleep(100000);
  if (DAT_000adfa4 == 0xb007) {
    io_output_flicker2(0xe,0xf,0,1000);
  }
  else if (DAT_000adfa4 == 0xb016) {
    io_output_flicker2(0x13,0x12,0,1000);
  }
  else if (DAT_000adfa4 == 0xb01c || DAT_000adfa4 == 0xb104) {
    io_output_flicker2(100,0x40,0,1000);
  }
  else if (DAT_000adfa4 == 0xb106) {
    io_output_flicker2(0x61,0x60,0,1000);
  }
  uVar10 = get_system_freemem();
  DebugPrint(8,7,"[%s:%u]freemem before umount is %d kB\n\n",DAT_00029dbc,0x12c3,uVar10);
  if ((local_9ec != (char *)0x0) && (pcVar9 = strstr(local_9ec,"/mnt/"), pcVar9 != (char *)0x0)) {
    DebugPrint(8,7,"[%s:%u]firmware in /mnt, no umount\n\n",DAT_00029dbc,0x12c7,uVar10);
    mysystem("echo 3 > /proc/sys/vm/drop_caches");
  }
  DAT_000b2c0c = 1;
  WatchDogSetTimeout(600);
  iVar6 = FlashIsSpiNandFlash();
  if (iVar6 == 0) {
    pppppppcVar11 = (char *******)get_system_totalmem();
    iVar6 = get_system_freemem();
    pppppppcVar32 = (char *******)0x1;
    bVar28 = true;
    DebugPrint(8,7,
               "[%s:%u]freemem after umount is %d kB. total memory %d kB, bUpdateByBuffer=%d\n\n",
               DAT_00029dbc,0x12f3,iVar6,pppppppcVar11,1);
  }
  else {
    pppppppcVar12 = (char *******)get_system_totalmem();
    iVar16 = get_system_freemem();
    pppppppcVar32 = (char *******)0x0;
    iVar6 = iVar16;
    pppppppcVar11 = pppppppcVar12;
    DebugPrint(8,7,
               "[%s:%u]freemem after umount is %d kB. total memory %d kB, bUpdateByBuffer=%d\n\n",
               DAT_0002a158,0x12f3,iVar16,pppppppcVar12,0);
    if (iVar16 < 0x2000 && 0xa000 < (int)pppppppcVar12) {
      DebugPrint(8,7,
                 "[%s:%u]free mem is less than 8M, it\'s not safe for updating, try again...\n\n",
                 DAT_0002b380,0x12fa,iVar6,pppppppcVar11,pppppppcVar32);
LAB_0002a2a2:
      remove("/tmp/kernel.image");
      remove("/tmp/filesystem.image");
      remove("/tmp/uboot.image");
      remove("/tmp/config.7z");
      remove("/tmp/oem.update");
      remove("/data/bresee_lib");
      delay_reboot(3);
      return 0xffffffff;
    }
    if (DAT_000adfa4 == 4) {
      if (iVar16 < 0x1400) {
        DebugPrint(8,7,
                   "[%s:%u]free mem is less than 5M, it\'s not safe for updating, try again...\n\n",
                   DAT_0002a338,0x1305,iVar6,pppppppcVar11,pppppppcVar32);
        goto LAB_0002a2a2;
      }
    }
    else {
      pcVar9 = (char *)((uint)local_528 & ~((int)local_528 >> 0x20));
      if ((int)local_528 < 0) {
        pcVar9 = (char *)((int)local_528 + 0x3ff);
      }
      if (iVar16 < (int)pcVar9 >> 10) {
        DebugPrint(8,7,
                   "[%s:%u]free mem %d KB is less than %d KB, it\'s not safe for updating, try again...\n\n"
                   ,DAT_0002b470,0x1312,iVar16,(int)pcVar9 >> 10,pppppppcVar32);
        goto LAB_0002a2a2;
      }
    }
    bVar28 = false;
  }
  DebugPrint(8,7,"[%s:%u]start updating firmware...\n\n",DAT_00029dbc,0x131c,iVar6,pppppppcVar11,
             pppppppcVar32);
  DebugPrint(8,7,"[%s:%u]begin to seperate file...\n\n",DAT_00029dbc,0x131d);
  pppppppcVar12 = (char *******)get_system_freemem();
  DebugPrint(8,7,"[%s:%u]freemem before upgrading is %d kB\n\n",DAT_00029dbc,0x133c,pppppppcVar12);
  if (local_63c << 0x19 < 0) {
    DebugPrint(8,7,"[%s:%u]clear all custon and restore to factory\n\n",DAT_0002a338,0x1340,
               pppppppcVar12);
    mysystem_with_param("rm -fr %s/%s","/mnt/nand","cust");
    mysystem_with_param("rm -fr %s/%s","/mnt/nand","config.xml");
  }
  uVar23 = DAT_000adfa4 - 0x405;
  if (local_63c << 0x1b < 0) {
    pcVar9 = "/data/bresee_lib";
    if (1 < uVar23) {
      pcVar9 = "/tmp/oem.update";
    }
    if (local_9e4 == 0) {
      if ((local_9e0 != 0) &&
         (iVar6 = GetFileFromBufEx(local_9e8,local_64c,0x10,pcVar9), iVar6 != 0)) {
        uVar10 = 0x135d;
        goto LAB_0002ad00;
      }
    }
    else {
      iVar6 = GetFileFromFirmwareEx(local_9ec,local_64c,0x10,pcVar9);
      if (iVar6 != 0) {
        uVar10 = 0x1354;
        goto LAB_0002ad00;
      }
    }
    if (DAT_000b209c == 0) {
      if (DAT_000adfa4 - 0x405U < 2) {
        pcVar9 = "/data/bresee_lib";
      }
      else {
        pcVar9 = "/tmp/oem.update";
      }
      sprintf((char *)&local_74c,"/opt/ch/7zDec x %s -o%s/&& sync",pcVar9,"/tmp/oem");
    }
    else {
      mysystem_with_param(
                         "rm -fr /linkvisual/run/edge_manager/algomodule_install/faceRecognize/model/"
                         );
      sprintf((char *)&local_74c,"tar -zxvf %s -C /data/ && sync","/tmp/oem.update");
    }
    pppppppcVar12 = (char *******)&local_74c;
    DebugPrint(8,7,"[%s:%u]%s\n\n",DAT_00029dbc,0x1370,&local_74c);
    mysystem(&local_74c);
    sprintf((char *)&local_74c,"chmod +x %s/*","/tmp/oem/app");
    mysystem(&local_74c);
    local_814[0] = 0;
    memset(local_814 + 1,0,0x3c);
    read_file_to_string("/etc/flag.customize",local_814,0x40);
    pcVar9 = strstr((char *)local_814,"_CWYY");
    if (pcVar9 != (char *)0x0) {
      mysystem_with_param("mkdir %s","/tmp/oem2");
      mysystem("killall skyapp");
      mysystem("killall skfactory");
      mysystem("killall netevent");
    }
    MsgLogEvent(3,"Update OEM file.");
    uVar23 = DAT_000adfa4 - 0x405;
  }
  if (uVar23 < 2) {
    pcVar9 = "/data/bresee_lib";
  }
  else {
    pcVar9 = "/tmp/oem.update";
  }
  remove(pcVar9);
  if (local_63c << 0x1d < 0) {
    if (local_9e4 == 0) {
      if ((local_9e0 != 0) &&
         (iVar6 = GetFileFromBufEx(local_9e8,local_64c,4,"/tmp/uboot.image"), iVar6 != 0)) {
        uVar10 = 0x13b6;
        pcVar9 = "/tmp/uboot.image";
        goto LAB_0002acc4;
      }
    }
    else {
      iVar6 = GetFileFromFirmwareEx(local_9ec,local_64c,4,"/tmp/uboot.image");
      if (iVar6 != 0) {
        uVar10 = 0x13ad;
        pcVar9 = "/tmp/uboot.image";
        goto LAB_0002acc4;
      }
    }
    DebugPrint(8,7,"[%s:%u]seperate uboot file ok!\n\n",DAT_00029dbc,0x13bb);
    mysystem_with_param("/opt/ch/ssn --uboot %s","/tmp/uboot.image");
    MsgLogEvent(3,"Update uboot.");
  }
  remove("/tmp/uboot.image");
  if (local_63c << 0x1c < 0) {
    if (local_9e4 == 0) {
      if ((local_9e0 != 0) &&
         (iVar6 = GetFileFromBufEx(local_9e8,local_64c,8,"/tmp/config.7z"), iVar6 != 0)) {
        uVar10 = 0x13ee;
        pcVar9 = "/tmp/config.7z";
        goto LAB_0002ad00;
      }
    }
    else {
      iVar6 = GetFileFromFirmwareEx(local_9ec,local_64c,8,"/tmp/config.7z");
      if (iVar6 != 0) {
        uVar10 = 0x13e5;
        pcVar9 = "/tmp/config.7z";
        goto LAB_0002ad00;
      }
    }
    DebugPrint(8,7,"[%s:%u]seperate TGZ file ok!\n\n",DAT_0002a158,0x13f3);
    local_954 = 0;
    memset(auStack_950,0,0x3c);
    read_file_to_string("/etc/filesys.ver",&local_954,0x40);
    pcVar9 = strstr((char *)&local_954,"_ESA");
    if (pcVar9 == (char *)0x0) {
      pppppppcVar18 = calloc(0x120,1);
      pcVar9 = malloc(0x120);
      if (pppppppcVar18 != (char *******)0x0) {
        GetOemInfo(pppppppcVar18);
      }
      sprintf((char *)&local_74c,"/opt/ch/7zDec x %s -o%s/&& sync","/tmp/config.7z","/mnt/nand");
      puts((char *)&local_74c);
      mysystem(&local_74c);
      sprintf((char *)aiStack_894,"%s/%s/%s","/mnt/nand","cust","config.default.xml");
      iVar6 = FileExist(aiStack_894);
      if (((iVar6 != 0) && (iVar6 = FUN_000261c8(aiStack_894), iVar6 != 0)) &&
         (pvVar14 = malloc(0x9a98), pvVar14 != (void *)0x0)) {
        ParseConfigXML(aiStack_894,pvVar14);
        SaveDZoomMultipleSetting((int)*(undefined8 *)((int)pvVar14 + 0x1a90));
        free(pvVar14);
      }
      if (pcVar9 != (char *)0x0) {
        memset(pcVar9,0,0x120);
        GetOemInfo(pcVar9);
        if (pppppppcVar18 != (char *******)0x0) {
          if (pcVar9[0x60] == '\0') {
            bVar2 = false;
            if (*(char *)(pppppppcVar18 + 0x18) != '\0') {
              pppppppcVar26 = pppppppcVar18 + 0x18;
              pppppppcVar12 = pppppppcVar26;
              DebugPrint(8,7,"[%s:%u]Restore old oem SN: %s\n",DAT_0002b380,0x142f,pppppppcVar26);
              strcpy(pcVar9 + 0x60,(char *)pppppppcVar26);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
          }
          if ((pcVar9[0xa0] == '\0') && (*(char *)(pppppppcVar18 + 0x28) != '\0')) {
            pppppppcVar26 = pppppppcVar18 + 0x28;
            pppppppcVar12 = pppppppcVar26;
            DebugPrint(8,7,"[%s:%u]Restore old oem EthMac: %s\n",DAT_0002b380,0x1435,pppppppcVar26);
            strcpy(pcVar9 + 0xa0,(char *)pppppppcVar26);
            bVar2 = true;
          }
          if ((*pcVar9 == '\0') && (*(char *)pppppppcVar18 != '\0')) {
            pppppppcVar12 = pppppppcVar18;
            DebugPrint(8,7,"[%s:%u]Restore old oem DeviceType: %s\n",DAT_0002b380,0x143b,
                       pppppppcVar18);
            strcpy(pcVar9,(char *)pppppppcVar18);
            bVar2 = true;
          }
          if ((pcVar9[0xe0] == '\0') && (*(char *)(pppppppcVar18 + 0x38) != '\0')) {
            pppppppcVar26 = pppppppcVar18 + 0x38;
            pppppppcVar12 = pppppppcVar26;
            DebugPrint(8,7,"[%s:%u]Restore old oem MBL: %s\n",DAT_0002b01c,0x1441,pppppppcVar26);
            strcpy(pcVar9 + 0xe0,(char *)pppppppcVar26);
            if ((pcVar9[0x100] == '\0') && (*(char *)(pppppppcVar18 + 0x40) != '\0'))
            goto LAB_0002ad98;
LAB_0002adc0:
            SaveOemInfo(pcVar9);
          }
          else {
            if ((pcVar9[0x100] == '\0') && (*(char *)(pppppppcVar18 + 0x40) != '\0')) {
LAB_0002ad98:
              pppppppcVar26 = pppppppcVar18 + 0x40;
              pppppppcVar12 = pppppppcVar26;
              DebugPrint(8,7,"[%s:%u]Restore old language: %s\n",DAT_0002b01c,0x1447,pppppppcVar26);
              strcpy(pcVar9 + 0x100,(char *)pppppppcVar26);
              goto LAB_0002adc0;
            }
            if (bVar2) goto LAB_0002adc0;
          }
          iVar6 = DAT_000b9380;
          if (pcVar9[0xa0] != '\0') {
            strcpy((char *)(DAT_000b9380 + 0x3e24),pcVar9 + 0xa0);
            SetConfigToXML_force(iVar6);
          }
          free(pcVar9);
          free(pppppppcVar18);
        }
      }
      sprintf(acStack_914,"%s/%s/%s","/mnt/nand","cust","currentconfig.xml");
      pvVar14 = (void *)GetConfigXml(acStack_914);
      if (pvVar14 == (void *)0x0) {
        DebugPrint(8,7,"[%s:%u]can not read oem specific config file\r\n\n",DAT_0002b474,0xe19);
      }
      else {
        iVar6 = ixmlParseBuffer();
        free(pvVar14);
        if (iVar6 == 0) {
          DebugPrint(8,7,"[%s:%u]ixmlParseBuffer error\r\n\n",DAT_0002b474,0xe23);
        }
        else {
          piVar15 = (int *)ixmlDocument_getElementsByTagName(iVar6,"CUR_CONFIG");
          if (piVar15 == (int *)0x0) {
            DebugPrint(8,7,"[%s:%u]xmlDocument_getElementsByTagName(OEM_CONFIG) return NULL!\n\n",
                       DAT_0002b474,0xeea);
            ixmlDocument_free(iVar6);
          }
          else {
            puVar24 = *(undefined4 **)(*piVar15 + 0x20);
            if (puVar24 == (undefined4 *)0x0) {
              ixmlNodeList_free();
              ixmlDocument_free(iVar6);
            }
            else {
              bVar3 = false;
              bVar4 = false;
              bVar2 = false;
              do {
                while( true ) {
                  pcVar9 = (char *)*puVar24;
                  iVar16 = strcmp(pcVar9,"CLEAR_ALL_CUST");
                  if (iVar16 == 0) break;
LAB_0002a4de:
                  iVar16 = strcmp(pcVar9,"NETWORK");
                  if (iVar16 == 0) {
                    puVar27 = (undefined4 *)puVar24[0xb];
joined_r0x0002a86e:
                    if (puVar27 != (undefined4 *)0x0) {
LAB_0002a8c8:
                      do {
                        pcVar9 = (char *)*puVar27;
                        iVar16 = strcmp(pcVar9,"MAC");
                        if (iVar16 == 0) {
                          strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                          iVar16 = is_mac_addr_valid(acStack_8d4);
                          if (iVar16 != 0) {
                            bVar4 = true;
                            strcpy((char *)(DAT_000b9380 + 0x3e24),acStack_8d4);
                          }
                          pcVar9 = (char *)*puVar27;
                          iVar16 = strcmp(pcVar9,"IPADDR");
                          if (iVar16 != 0) goto LAB_0002a8a4;
LAB_0002a8f8:
                          bVar4 = true;
                          strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                          strcpy((char *)(DAT_000b9380 + 0x3e3a),acStack_8d4);
                          pcVar9 = (char *)*puVar27;
                          iVar16 = strcmp(pcVar9,"MASK");
                          if (iVar16 != 0) goto LAB_0002a8b0;
LAB_0002a922:
                          bVar4 = true;
                          strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                          strcpy((char *)(DAT_000b9380 + 0x3e7a),acStack_8d4);
                          iVar16 = strcmp((char *)*puVar27,"GATEWAY");
                        }
                        else {
                          iVar16 = strcmp(pcVar9,"IPADDR");
                          if (iVar16 == 0) goto LAB_0002a8f8;
LAB_0002a8a4:
                          iVar16 = strcmp(pcVar9,"MASK");
                          if (iVar16 == 0) goto LAB_0002a922;
LAB_0002a8b0:
                          iVar16 = strcmp(pcVar9,"GATEWAY");
                        }
                        if (iVar16 != 0) goto LAB_0002a8c2;
                        bVar4 = true;
                        strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                        strcpy((char *)(DAT_000b9380 + 0x3eba),acStack_8d4);
                        puVar27 = (undefined4 *)puVar27[10];
                        if (puVar27 == (undefined4 *)0x0) break;
                      } while( true );
                    }
                    goto LAB_0002a97a;
                  }
                  iVar16 = strcmp(pcVar9,"SYSTEM");
                  if (iVar16 != 0) goto LAB_0002a506;
LAB_0002a99e:
                  puVar27 = (undefined4 *)puVar24[0xb];
                  iVar16 = DAT_000b9380;
                  if (puVar27 != (undefined4 *)0x0) {
LAB_0002a5aa:
                    iVar16 = DAT_000b9380;
                    pcVar9 = (char *)(DAT_000b9380 + 0x2104);
                    do {
                      while( true ) {
                        __s1 = (char *)*puVar27;
                        iVar17 = strcmp(__s1,"LANGUAGE");
                        if (iVar17 != 0) break;
                        bVar2 = true;
                        strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                        strcpy(pcVar9,acStack_8d4);
                        iVar17 = strcmp((char *)*puVar27,"PASSWORD");
                        if (iVar17 != 0) goto LAB_0002a5ca;
LAB_0002a600:
                        bVar2 = true;
                        strncpy(acStack_8d4,(char *)puVar27[1],0x3f);
                        strcpy((char *)(iVar16 + 0x1b4c),acStack_8d4);
                        puVar27 = (undefined4 *)puVar27[10];
                        if (puVar27 == (undefined4 *)0x0) goto LAB_0002a620;
                      }
                      iVar17 = strcmp(__s1,"PASSWORD");
                      if (iVar17 == 0) goto LAB_0002a600;
LAB_0002a5ca:
                      puVar27 = (undefined4 *)puVar27[10];
                    } while (puVar27 != (undefined4 *)0x0);
LAB_0002a620:
                  }
LAB_0002a626:
                  SetSystemConfig(iVar16);
                  iVar16 = strcmp((char *)*puVar24,"VIDEO");
                  if (iVar16 != 0) goto LAB_0002a51a;
LAB_0002a644:
                  puVar27 = (undefined4 *)puVar24[0xb];
                  iVar16 = DAT_000b9380;
                  if (puVar27 != (undefined4 *)0x0) {
                    do {
                      pcVar9 = (char *)*puVar27;
                      iVar17 = strcmp(pcVar9,"FRENQUENCE");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(char *)(iVar16 + 0x56bc) = (char)iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"BRIGHT");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(int *)(iVar16 + 0x56ac) = iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"CONTRANST");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(int *)(iVar16 + 0x56b0) = iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"SHARP");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(int *)(iVar16 + 0x56b8) = iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"SATURATION");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(int *)(iVar16 + 0x56b4) = iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"OSDENABLE");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(int *)(iVar16 + 0x5908) = iVar17;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"OSDPOSITION");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        uVar23 = atoi((char *)puVar27[1]);
                        *(uint *)(iVar16 + 0x5910) = (uVar23 & 0xffff) >> 0xc;
                        *(uint *)(iVar16 + 0x5914) = (uVar23 & 0xfff) >> 8;
                        *(uint *)(iVar16 + 0x593c) = (uVar23 & 0xff) >> 4;
                        *(uint *)(iVar16 + 0x5940) = uVar23 & 0xf;
                        pcVar9 = (char *)*puVar27;
                      }
                      iVar17 = strcmp(pcVar9,"OSDTITLE");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        strncpy((char *)local_814,(char *)puVar27[1],199);
                        str_gb2312_2_utf8(local_814,iVar16 + 0x5944,0);
                        pcVar9 = (char *)*puVar27;
                        iVar16 = DAT_000b9380;
                      }
                      iVar17 = strcmp(pcVar9,"OSDSTYLE");
                      if (iVar17 == 0) {
                        bVar3 = true;
                        iVar17 = atoi((char *)puVar27[1]);
                        *(short *)(iVar16 + 0x5a14) = (short)iVar17;
                      }
                      puVar27 = (undefined4 *)puVar27[10];
                    } while (puVar27 != (undefined4 *)0x0);
                  }
                  SetMediaConfig(iVar16 + 0x56ac);
                  puVar24 = (undefined4 *)puVar24[10];
                  if (puVar24 == (undefined4 *)0x0) goto LAB_0002a81c;
                }
                puVar27 = (undefined4 *)puVar24[0xb];
                puVar25 = puVar27;
                if (puVar27 == (undefined4 *)0x0) {
                  iVar16 = strcmp(pcVar9,"NETWORK");
                  if (iVar16 == 0) {
LAB_0002a97a:
                    SetNetworkConfig(DAT_000b9380 + 0x3e24);
                    pcVar9 = (char *)*puVar24;
                    iVar16 = strcmp(pcVar9,"SYSTEM");
                    if (iVar16 == 0) goto LAB_0002a99e;
                  }
                  else {
                    iVar16 = strcmp(pcVar9,"SYSTEM");
                    if (iVar16 == 0) {
                      iVar16 = DAT_000b9380;
                      goto LAB_0002a626;
                    }
                  }
                }
                else {
                  do {
                    iVar16 = strcmp((char *)*puVar25,"DATA");
                    if (iVar16 == 0) {
                      iVar16 = atoi((char *)puVar25[1]);
                      if (0 < iVar16) {
                        mysystem_with_param("rm -fr %s/%s","/mnt/nand","cust");
                        mysystem_with_param("rm -fr %s/%s","/mnt/nand","fakevideo.xml");
                        mysystem_with_param("rm -fr %s/%s","/mnt/nand","factory.default.cfg");
                        iVar16 = DAT_000b9380;
                        uVar5 = DAT_0007c2ec;
                        uVar30 = DAT_0007c2e8;
                        uVar29 = DAT_0007c2e4;
                        uVar10 = DAT_0007c2e0;
                        bVar4 = true;
                        *(undefined4 *)(DAT_000b9380 + 0x3e24) = DAT_0007c2dc;
                        *(undefined4 *)(iVar16 + 0x3e28) = uVar10;
                        *(undefined2 *)(iVar16 + 0x3e34) = uVar5;
                        *(undefined4 *)(iVar16 + 0x3e2c) = uVar29;
                        *(undefined4 *)(iVar16 + 0x3e30) = uVar30;
                        pcVar9 = (char *)*puVar24;
                        goto LAB_0002a4de;
                      }
                      break;
                    }
                    puVar1 = puVar25 + 10;
                    puVar25 = (undefined4 *)*puVar1;
                  } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
                  iVar16 = strcmp(pcVar9,"NETWORK");
                  if (iVar16 == 0) goto LAB_0002a8c8;
                  iVar16 = strcmp(pcVar9,"SYSTEM");
                  if (iVar16 == 0) goto LAB_0002a5aa;
                }
LAB_0002a506:
                iVar16 = strcmp(pcVar9,"VIDEO");
                if (iVar16 == 0) goto LAB_0002a644;
LAB_0002a51a:
                puVar24 = (undefined4 *)puVar24[10];
              } while (puVar24 != (undefined4 *)0x0);
LAB_0002a81c:
              ixmlNodeList_free(piVar15);
              ixmlDocument_free(iVar6);
              if (bVar2) {
                SetSystemConfig(DAT_000b9380);
              }
              if (bVar3) {
                SetMediaConfig(DAT_000b9380 + 0x56ac);
              }
              if (bVar4) {
                SetNetworkConfig(DAT_000b9380 + 0x3e24);
              }
            }
          }
        }
      }
    }
    else {
      sprintf((char *)&local_74c,"/opt/ch/7zDec x %s -o%s/&& sync","/tmp/config.7z","/tmp/oem/app");
      mysystem(&local_74c);
    }
    MsgLogEvent(3,"Update tgz file.");
  }
  remove("/tmp/config.7z");
  if (!bVar28) {
    if (local_63c << 0x1f < 0) {
      if (local_9e4 == 0) {
        if ((local_9e0 != 0) &&
           (iVar6 = GetFileFromBufEx(local_9e8,local_64c,local_9e0,"/tmp/kernel.image"), iVar6 != 0)
           ) {
          uVar10 = 0x1482;
          pcVar9 = "/tmp/kernel.image";
          goto LAB_0002acc4;
        }
      }
      else {
        iVar6 = GetFileFromFirmwareEx(local_9ec,local_64c,local_9e4,"/tmp/kernel.image");
        if (iVar6 != 0) {
          uVar10 = 0x1479;
          pcVar9 = "/tmp/kernel.image";
LAB_0002acc4:
          DebugPrint(8,7,"[%s:%u]Get firmware file %s failed\n\n",DAT_0002ad5c,uVar10,pcVar9);
          return 0xffffffff;
        }
      }
      DebugPrint(8,7,"[%s:%u]seperate kernel file ok!\n\n",DAT_0002a158,0x1487);
      uVar10 = GET_KERNEL_MTD_DEV();
      DebugPrint(8,7,"[%s:%u]ready to flash kernal to nand %s\n",DAT_0002a158,0x148a,uVar10);
      uVar10 = GET_KERNEL_MTD_DEV();
      iVar6 = FlashNand("/tmp/kernel.image",uVar10,0);
      pcVar9 = (char *)GET_KERNEL_MTD_DEV_BK();
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        FlashNand("/tmp/kernel.image",pcVar9,0);
      }
      if (iVar6 != 0) {
        DebugPrint(8,7,"[%s:%u] flash kernel fail, rebooting...\n\n",DAT_0002b380,0x1497);
        remove("/tmp/kernel.image");
        remove("/tmp/filesystem.image");
        remove("/tmp/uboot.image");
        remove("/tmp/config.7z");
        remove("/tmp/oem.update");
        remove("/data/bresee_lib");
        WatchDogForceReset(0x3c);
        DebugPrint(8,7,"[%s:%u]call delay reboot...\n\n",DAT_0002b380,0x149b);
        delay_reboot(1);
        return 0xffffffff;
      }
      MsgLogEvent(3,"Update kernel.");
    }
    remove("/tmp/kernel.image");
    uVar10 = get_system_freemem();
    DebugPrint(8,7,"[%s:%u]freemem after upgrading kernel: %d kB\n\n",DAT_0002a158,0x14af,uVar10);
    pppppppcVar12 = (char *******)get_system_freemem();
    DebugPrint(8,7,"[%s:%u]freemem before upgrading fs: %d kB\n\n",DAT_0002a158,0x14b3,pppppppcVar12
              );
    if (local_63c << 0x1e < 0) {
      if (local_9e4 == 0) {
        if ((local_9e0 != 0) &&
           (iVar6 = GetFileFromBufEx(local_9e8,local_64c,2,"/tmp/filesystem.image"), iVar6 != 0)) {
          uVar10 = 0x14c7;
          pcVar9 = "/tmp/filesystem.image";
          goto LAB_0002ad00;
        }
      }
      else {
        iVar6 = GetFileFromFirmwareEx(local_9ec,local_64c,2,"/tmp/filesystem.image");
        if (iVar6 != 0) {
          uVar10 = 0x14be;
          pcVar9 = "/tmp/filesystem.image";
LAB_0002ad00:
          DebugPrint(8,7,"[%s:%u]Get firmware file %s failed\n\n",DAT_0002ad5c,uVar10,pcVar9);
          return 0xffffffff;
        }
      }
      DebugPrint(8,7,"[%s:%u]seperate file rootfs file ok!\n\n",DAT_0002a158,0x14cb,pppppppcVar12);
      if (local_9dc != 0) {
        remove(local_9ec);
      }
      uVar10 = get_system_freemem();
      DebugPrint(8,7,"[%s:%u]freemem after sperate fs: %d kB\n\n",DAT_0002a158,0x14d2,uVar10);
      pppppppcVar12 = (char *******)GET_FILESYS_MTD_DEV();
      DebugPrint(8,7,"[%s:%u]ready to flash rootfs to nand %s\n",DAT_0002a158,0x14e2,pppppppcVar12);
      uVar10 = GET_FILESYS_MTD_DEV();
      iVar6 = FlashNand("/tmp/filesystem.image",uVar10,0);
      if (iVar6 != 0) {
        return 0xffffffff;
      }
      MsgLogEvent(3,"Update file mysystem.");
    }
    goto LAB_00029ff4;
  }
  if (local_63c << 0x1f < 0) {
    pppppppcVar12 = local_638;
    pppppppcVar11 = local_634;
    pppppppcVar32 = local_630;
    DebugPrint(8,7,"[%s:%u]kernel_start %d kernel_size %d crc %#x\n\n",DAT_0002ad60,0xf3b,local_638,
               local_634,local_630);
    if (local_9e4 != 0) {
      DebugPrint(8,7,"[%s:%u]Check kernal CRC value\n\n",DAT_0002b37c,0xf3e,pppppppcVar12,
                 pppppppcVar11,pppppppcVar32);
      local_74c = (char *******)0x0;
      iVar6 = GetFileCrc1(local_9ec,local_638,local_634,&local_74c);
      pppppppcVar12 = local_74c;
      pppppppcVar11 = local_630;
      DebugPrint(8,7,"[%s:%u]kernal CRC:%u target:%u\n\n",DAT_0002b37c,0xf42,local_74c,local_630);
      if ((iVar6 == 0) && (local_630 == local_74c)) {
        DebugPrint(8,7,"[%s:%u]Write kernal\n\n",DAT_0002b37c,0xf45,pppppppcVar12,pppppppcVar11,
                   pppppppcVar32);
        pppppppcVar26 = local_634;
        pppppppcVar18 = local_638;
        uVar10 = GET_KERNEL_MTD_DEV();
        FlashMTD_byFileOffset(local_9ec,pppppppcVar18,pppppppcVar26,uVar10);
      }
      if (-1 < local_63c << 0x1e) goto LAB_00029ff4;
      pppppppcVar12 = local_52c;
      pppppppcVar11 = local_528;
      pppppppcVar32 = local_424;
      DebugPrint(8,7,"[%s:%u]kernel_start %d kernel_size %d crc %#x\n\n",DAT_0002b37c,0xf59,
                 local_52c,local_528,local_424);
LAB_0002b0b8:
      DebugPrint(8,7,"[%s:%u]Check rootfs CRC value\n\n",DAT_0002b37c,0xf5c,pppppppcVar12,
                 pppppppcVar11,pppppppcVar32);
      local_74c = (char *******)0x0;
      iVar6 = GetFileCrc1(local_9ec,local_52c,local_528,&local_74c);
      pppppppcVar12 = local_74c;
      pppppppcVar11 = local_424;
      DebugPrint(8,7,"[%s:%u]rootfs CRC:%u target:%u\n\n",DAT_0002b37c,0xf60,local_74c,local_424);
      if ((iVar6 == 0) && (local_424 == local_74c)) {
        DebugPrint(8,7,"[%s:%u]Write rootfs\n\n",DAT_0002b37c,0xf64,pppppppcVar12,pppppppcVar11);
        uVar10 = GET_FILESYS_MTD_DEV();
        FlashMTD_byFileOffset(local_9ec,local_52c,local_528,uVar10);
      }
      goto LAB_00029ff4;
    }
    if (local_9e0 == 0) goto LAB_0002a1bc;
    pppppppcVar18 = (char *******)GetCrcValue1(local_9e8,local_638,local_634);
    pppppppcVar12 = pppppppcVar18;
    pppppppcVar11 = local_630;
    DebugPrint(8,7,"[%s:%u]kernal CRC:%u target:%u\n\n",DAT_0002b020,0xf4d,pppppppcVar18,local_630,
               pppppppcVar32);
    if (pppppppcVar18 == local_630) {
      DebugPrint(8,7,"[%s:%u]Write kernal\n\n",DAT_0002b37c,0xf51,pppppppcVar12,pppppppcVar11,
                 pppppppcVar32);
      pppppppcVar26 = local_634;
      pppppppcVar18 = local_638;
      uVar10 = GET_KERNEL_MTD_DEV();
      FlashMTD_byBufferOffset(local_9e8,pppppppcVar18,pppppppcVar26,uVar10);
    }
    if (-1 < local_63c << 0x1e) goto LAB_00029ff4;
    pppppppcVar32 = local_424;
    DebugPrint(8,7,"[%s:%u]kernel_start %d kernel_size %d crc %#x\n\n",DAT_0002b020,0xf59,local_52c,
               local_528,local_424);
  }
  else {
LAB_0002a1bc:
    if (-1 < local_63c << 0x1e) goto LAB_00029ff4;
    pppppppcVar12 = local_52c;
    pppppppcVar11 = local_528;
    pppppppcVar32 = local_424;
    DebugPrint(8,7,"[%s:%u]kernel_start %d kernel_size %d crc %#x\n\n",DAT_0002a33c,0xf59,local_52c,
               local_528,local_424);
    if (local_9e4 != 0) goto LAB_0002b0b8;
    if (local_9e0 == 0) goto LAB_00029ff4;
  }
  pppppppcVar18 = (char *******)GetCrcValue1(local_9e8,local_52c,local_528);
  pppppppcVar12 = pppppppcVar18;
  pppppppcVar11 = local_424;
  DebugPrint(8,7,"[%s:%u]rootfs CRC:%u target:%u\n\n",DAT_0002b020,0xf6b,pppppppcVar18,local_424,
             pppppppcVar32);
  if (pppppppcVar18 == local_424) {
    DebugPrint(8,7,"[%s:%u]Write rootfs\n\n",DAT_0002b020,0xf6f,pppppppcVar12,pppppppcVar11,
               pppppppcVar32);
    uVar10 = GET_FILESYS_MTD_DEV();
    FlashMTD_byBufferOffset(local_9e8,local_52c,local_528,uVar10);
  }
LAB_00029ff4:
  WatchDogForceReset(10);
  DebugPrint(8,7,"[%s:%u]finish updating firmware...\n\n",DAT_0002a158,0x1503,pppppppcVar12,
             pppppppcVar11,pppppppcVar32);
  remove("/tmp/kernel.image");
  remove("/tmp/filesystem.image");
  remove("/tmp/uboot.image");
  remove("/tmp/config.7z");
  remove("/tmp/oem.update");
  remove("/data/bresee_lib");
  if (local_9dc != 0) {
    remove(local_9ec);
  }
  pFVar13 = fopen64("/mnt/nand/rom_md5.txt","w");
  if (pFVar13 == (FILE *)0x0) {
    DebugPrint(8,7,"[%s:%u]!!Error: open rom md5 file failed.\n\n",DAT_0002a338,0x151c);
  }
  else {
    sVar8 = strlen((char *)&local_994);
    fwrite(&local_994,1,sVar8,pFVar13);
    fclose(pFVar13);
  }
  mysystem_with_param("touch %s","/mnt/nand/flag.ota.updated");
  mysystem(&DAT_00076f90);
  if (local_63c << 0x1c < 0) {
    DebugPrint(8,7,"[%s:%u]restore to customize configuration\n\n",DAT_0002a338,0x1537);
    FUN_000200b8(0);
  }
  DebugPrint(8,7,"[%s:%u]call delay reboot...\n\n",DAT_0002a158,0x153c);
  delay_reboot(3);
  return 0;
}


