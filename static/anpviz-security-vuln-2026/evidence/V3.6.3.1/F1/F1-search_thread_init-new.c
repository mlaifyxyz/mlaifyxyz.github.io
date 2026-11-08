/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00022e9c */
/* function FUN_00022e9c @ 00022e9c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00022e9c(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  uint *puVar6;
  ssize_t sVar7;
  int iVar8;
  char *pcVar9;
  pthread_t __th;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  socklen_t local_12b4;
  int local_12b0;
  timeval local_12ac;
  sockaddr local_12a4;
  undefined4 local_1294;
  undefined4 local_1290;
  undefined4 local_128c;
  undefined4 local_1288;
  undefined4 local_1284;
  undefined4 local_1280;
  undefined4 local_127c;
  undefined4 local_1278;
  undefined1 local_1274;
  char acStack_1270 [60];
  undefined4 uStack_1234;
  fd_set local_1230;
  byte local_11b0;
  byte local_11af [22];
  undefined1 local_1199;
  undefined4 uStack_1130;
  char acStack_112c [252];
  char local_1030 [2048];
  char acStack_830 [2052];
  
  prctl(0xf,DAT_000230d4);
  memset(&DAT_000af2b4,0,0x20);
  iVar3 = GetSN(acStack_1270);
  if (iVar3 < 0) {
    DAT_000b4150 = 0;
    __th = pthread_self();
    pthread_detach(__th);
    return 0;
  }
  pcVar14 = &DAT_000af250;
  strcpy(&DAT_000af2d4,acStack_1270);
  DebugPrint(1,7,"[%s:%u]sn=[%s]\n\n",DAT_000230d4,0xbf8,acStack_1270);
  sVar4 = strlen(acStack_1270);
  write_buffer_to_file("/tmp/sn.txt",acStack_1270,sVar4);
  GetDeviceTypeStr(&DAT_000af250);
  local_1030[0] = '\0';
  iVar3 = access("/mnt/nand/security.flag",0);
  if ((iVar3 == -1) && (iVar3 = access("/opt/ch/security.flag",0), iVar3 == -1)) {
    if ((int)DAT_000aef40 < 1) goto LAB_00023030;
  }
  else {
    DAT_000aef40 = (char *)0x1;
  }
  pcVar5 = (char *)get_chip_uuid();
  local_11b0 = 0x53;
  pbVar2 = &local_11b0;
  pbVar1 = DAT_000230d8;
  while (pbVar2 != local_11af + 0x15) {
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
    *pbVar2 = *pbVar1 ^ 0x3c;
  }
  local_1199 = 0;
  memset(&uStack_1130,0,0x100);
  snprintf((char *)&uStack_1130,0x100,"%s%s%s",acStack_1270,pcVar5,(char *)&local_11b0);
  sVar4 = strlen((char *)&uStack_1130);
  our_md5_encode(&local_1294,&uStack_1130,sVar4);
  local_1274 = 0;
  snprintf(acStack_830,0x100,"%s%s",&local_1294,pcVar5);
  sVar4 = strlen(acStack_830);
  our_md5_encode(&local_1230,acStack_830,sVar4);
  uVar11 = (uint)local_1230.fds_bits[7]._3_1_;
  local_1230.fds_bits[8]._0_1_ = 0;
  if (uVar11 < 0x61) {
    iVar3 = uVar11 - 0x30;
  }
  else {
    iVar3 = uVar11 - 0x57;
  }
  strncpy(DAT_000230dc,(char *)((int)local_1230.fds_bits + iVar3 % 0x14),0xc);
  pcVar5 = DAT_000230dc;
  iVar3 = 0;
  DAT_000aef50 = 0;
  do {
    if (-1 < iVar3 << 0x1f) {
      bVar10 = pcVar5[iVar3];
      uVar11 = (uint)bVar10;
      if (uVar11 - 0x61 < 0x1a) {
        bVar10 = bVar10 - 0x20;
      }
      if (uVar11 - 0x61 < 0x1a) {
        pcVar5[iVar3] = bVar10;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xc);
LAB_00023030:
  pcVar5 = DAT_000aef40;
  DebugPrint(8,7,"[%s:%u]enter main loop, g_verify_passwd = %d, device_module = %s...\n\n",
             DAT_000230d4,0xc0f,DAT_000aef40,&DAT_000af250);
  if (DAT_000b414c == 0) {
    do {
      while( true ) {
        SLEEP_SECOND(1);
        uVar11 = broadcastserver_ex(0xbb9,1);
        if ((int)uVar11 < 0) break;
        DebugPrint(1,7,"[%s:%u]enter send and recv loop...\n\n",DAT_00023418,0xc1b,pcVar5,pcVar14);
        if (DAT_000b414c == 0) {
          uVar12 = 1 << (uVar11 & 0x1f);
          uVar15 = uVar11 >> 5;
          do {
            if (*(int *)(DAT_000b9380 + 0x3654) == 0) {
              usleep(100000);
            }
            else {
              puVar13 = &uStack_1234;
              local_12ac.tv_usec = 0;
              local_12ac.tv_sec = 1;
              do {
                puVar13 = puVar13 + 1;
                *puVar13 = 0;
              } while (local_1230.fds_bits + 0x1f != puVar13);
              local_1230.fds_bits[uVar15] = local_1230.fds_bits[uVar15] | uVar12;
              iVar3 = select(uVar11 + 1,&local_1230,(fd_set *)0x0,(fd_set *)0x0,&local_12ac);
              if (iVar3 < 0) {
                puVar6 = (uint *)__errno_location();
                pcVar5 = (char *)*puVar6;
                DebugPrint(8,7,"[%s:%u]select failed, error=%d\n\n",DAT_00023680,0xc45,pcVar5);
                mysystem_with_param("ifconfig %s up",&DAT_00076908);
                break;
              }
              if ((iVar3 != 0) && ((uVar12 & local_1230.fds_bits[uVar15]) != 0)) {
                local_12b4 = 0x10;
                sVar7 = recvfrom(uVar11,local_1030,0x800,0,&local_12a4,&local_12b4);
                if (sVar7 < 1) {
                  puVar6 = (uint *)__errno_location();
                  pcVar5 = (char *)*puVar6;
                  DebugPrint(8,7,"[%s:%u]recvfrom failed, error=%d\n\n",DAT_00023680,0xc57,pcVar5);
                  break;
                }
                local_1030[sVar7] = '\0';
                uStack_1130 = 0;
                memset(acStack_112c,0,0xfc);
                local_12b0 = 0;
                iVar3 = FUN_0001f82c(local_1030,&uStack_1130,&local_12b0);
                if (iVar3 == 1) {
                  if (local_12b0 == 1) {
                    DAT_000b23b8 = 0;
                  }
                  pcVar5 = (char *)(uint)(byte)local_12a4.sa_data[5];
                  local_1294 = 0;
                  local_1290 = 0;
                  local_128c = 0;
                  local_1288 = 0;
                  local_1284 = 0;
                  local_1280 = 0;
                  local_127c = 0;
                  local_1278 = 0;
                  sprintf((char *)&local_1294,"%d.%d.%d.%d",(uint)(byte)local_12a4.sa_data[2],
                          (uint)(byte)local_12a4.sa_data[3],(uint)(byte)local_12a4.sa_data[4],
                          (int)pcVar5);
                  IsLimitIp(local_12a4.sa_data._2_4_);
                  if ((DAT_000b23b8 == 0) || (DAT_000b21a0 == 1)) {
                    if ((DAT_000b2688 != 1) ||
                       (iVar3 = access("/tmp/flag.ip_speaker_probe_limit",0), iVar3 != 0)) {
                      pcVar14 = acStack_830;
                      pcVar5 = local_1030;
                      iVar3 = FUN_000209e0(1,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,pcVar5,
                                           pcVar14,local_12a4._0_4_,local_12a4.sa_data._2_4_,
                                           local_12a4.sa_data._6_4_,local_12a4.sa_data._10_4_);
                      goto joined_r0x0002360a;
                    }
                    DebugPrint(8,7,"[%s:%u]ip speaker filter search!\n\n",DAT_00023680,0xcb7);
                  }
                }
                else {
                  pcVar5 = (char *)(uint)(byte)local_12a4.sa_data[5];
                  local_1294 = 0;
                  local_1290 = 0;
                  local_128c = 0;
                  local_1288 = 0;
                  local_1284 = 0;
                  local_1280 = 0;
                  local_127c = 0;
                  local_1278 = 0;
                  sprintf((char *)&local_1294,"%d.%d.%d.%d",(uint)(byte)local_12a4.sa_data[2],
                          (uint)(byte)local_12a4.sa_data[3],(uint)(byte)local_12a4.sa_data[4],
                          (int)pcVar5);
                  if ((iVar3 == -100) &&
                     (iVar8 = GetCurrentTimeStamp(), 2000 < (uint)(iVar8 - DAT_000af314))) {
                    DAT_000af314 = iVar8;
                    sprintf((char *)&local_11b0,"Unauthorized modification from %s",
                            (char *)&local_1294);
                    FUN_000371ec(&local_11b0);
                    iVar8 = IsLimitIp(local_12a4.sa_data._2_4_);
                    if (iVar8 < 1) {
LAB_000233ae:
                      if (iVar3 == 0x13) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022b80(0x13,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                        goto joined_r0x0002360a;
                      }
                    }
                  }
                  else {
                    iVar8 = IsLimitIp(local_12a4.sa_data._2_4_);
                    if (iVar8 < 1) {
                      if (iVar3 == 2) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00021450(2,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,pcVar5
                                             ,pcVar14,local_12a4._0_4_,local_12a4.sa_data._2_4_,
                                             local_12a4.sa_data._6_4_,local_12a4.sa_data._10_4_);
                      }
                      else if (iVar3 == 5) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00021bdc(5,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,pcVar5
                                             ,pcVar14,local_12a4._0_4_,local_12a4.sa_data._2_4_,
                                             local_12a4.sa_data._6_4_,local_12a4.sa_data._10_4_);
                      }
                      else if (iVar3 == 7) {
                        pcVar9 = strstr(local_1030,"randStr");
                        if (pcVar9 != (char *)0x0) {
                          DebugPrint(8,7,"[%s:%u]discard topsee reboot cmd\n\n",DAT_00023418,0xce7);
                          goto LAB_0002328a;
                        }
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022048(7,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,pcVar5
                                             ,pcVar14,local_12a4._0_4_,local_12a4.sa_data._2_4_,
                                             local_12a4.sa_data._6_4_,local_12a4.sa_data._10_4_);
                      }
                      else if (iVar3 == 9) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022244(9,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,pcVar5
                                             ,pcVar14,local_12a4._0_4_,local_12a4.sa_data._2_4_,
                                             local_12a4.sa_data._6_4_,local_12a4.sa_data._10_4_,
                                             local_12b0);
                      }
                      else if (iVar3 == 0xb) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_000229e0(0xb,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                      }
                      else if (iVar3 == 0xd) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_000228a4(0xd,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                      }
                      else if (iVar3 == 0xf) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022748(0xf,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                      }
                      else if (iVar3 == 0x11) {
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022d10(0x11,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                      }
                      else {
                        if (iVar3 != 0x170a) goto LAB_000233ae;
                        pcVar14 = acStack_830;
                        pcVar5 = local_1030;
                        iVar3 = FUN_00022db4(0x170a,uVar11,&uStack_1130,&DAT_000c4388,acStack_1270,
                                             pcVar5,pcVar14,local_12a4._0_4_,
                                             local_12a4.sa_data._2_4_,local_12a4.sa_data._6_4_,
                                             local_12a4.sa_data._10_4_,local_12b0);
                      }
joined_r0x0002360a:
                      if (iVar3 < 0) break;
                    }
                  }
                }
              }
            }
LAB_0002328a:
          } while (DAT_000b414c == 0);
        }
        DebugPrint(1,7,"[%s:%u]exit send and recv loop\n\n",DAT_00023418,0xd27,pcVar5);
        close(uVar11);
        if ((0 < DAT_000b414c) || (DAT_000b414c != 0)) goto LAB_0002309e;
      }
      puVar6 = (uint *)__errno_location();
      pcVar5 = (char *)*puVar6;
      DebugPrint(8,7,"[%s:%u]create socket failed, errno=%d\n\n",DAT_000230d4,0xc17,pcVar5);
    } while (DAT_000b414c == 0);
  }
LAB_0002309e:
  DAT_000b4150 = 0;
  DebugPrint(8,7,"[%s:%u]exit main loop\n\n",DAT_000230d4,0xd35,pcVar5,pcVar14);
  return 0;
}


