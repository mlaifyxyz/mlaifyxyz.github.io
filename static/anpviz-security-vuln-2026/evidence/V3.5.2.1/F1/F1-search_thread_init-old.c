/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000227d4 */
/* function FUN_000227d4 @ 000227d4 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000227d4(void)

{
  int iVar1;
  size_t sVar2;
  uint __fd;
  uint *puVar3;
  ssize_t sVar4;
  int iVar5;
  char *pcVar6;
  pthread_t __th;
  char *param5;
  uint uVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  uint uVar10;
  socklen_t local_12b0;
  int local_12ac;
  timeval local_12a8;
  sockaddr local_12a0;
  char acStack_1290 [32];
  char acStack_1270 [60];
  undefined4 uStack_1234;
  fd_set local_1230;
  char acStack_11b0 [128];
  undefined4 uStack_1130;
  char acStack_112c [252];
  char local_1030 [2048];
  undefined1 auStack_830 [6];
  char acStack_82a [2046];
  
  prctl(0xf,DAT_00022970);
  memset(&DAT_000aa1d4,0,0x20);
  iVar1 = GetSN(acStack_1270);
  if (iVar1 < 0) {
    DAT_000ae2b0 = 0;
    __th = pthread_self();
    pthread_detach(__th);
  }
  else {
    puVar9 = &DAT_000aa170;
    strcpy(&DAT_000aa1f4,acStack_1270);
    DebugPrint(1,7,"[%s:%u]sn=[%s]\n\n",DAT_00022970,0xb9a,acStack_1270);
    sVar2 = strlen(acStack_1270);
    write_buffer_to_file("/tmp/sn.txt",acStack_1270,sVar2);
    GetDeviceTypeStr(&DAT_000aa170);
    local_1030[0] = '\0';
    iVar1 = access("/mnt/nand/security.flag",0);
    if ((iVar1 == -1) && (iVar1 = access("/opt/ch/security.flag",0), iVar1 == -1)) {
      DAT_000a9e60 = (char *)0x0;
      DAT_000a9e64 = 0;
    }
    else {
      DAT_000a9e60 = (char *)0x1;
      memset(&uStack_1130,0,0x40);
      memset(auStack_830,0,0x40);
      sprintf((char *)&uStack_1130,"%s%s",acStack_1270,"www.anjvision.com");
      sVar2 = strlen((char *)&uStack_1130);
      our_md5_encode(auStack_830,&uStack_1130,sVar2);
      strcpy(DAT_00022974,acStack_82a);
      DAT_000a9e6e = 0;
    }
    param5 = DAT_000a9e60;
    DebugPrint(8,7,"[%s:%u]enter main loop, g_verify_passwd = %d, device_module = %s...\n\n",
               DAT_00022970,2999,DAT_000a9e60,&DAT_000aa170);
    if (DAT_000ae2ac == 0) {
      do {
        while( true ) {
          SLEEP_SECOND(1);
          __fd = broadcastserver_ex(0xbb9,1);
          if ((int)__fd < 0) break;
          DebugPrint(1,7,"[%s:%u]enter send and recv loop...\n\n",DAT_00022ca4,0xbc3,param5,puVar9);
          if (DAT_000ae2ac == 0) {
            uVar7 = 1 << (__fd & 0x1f);
            uVar10 = __fd >> 5;
            do {
              if (*(int *)(DAT_000b3620 + 0x3654) == 0) {
                usleep(100000);
              }
              else {
                puVar8 = &uStack_1234;
                local_12a8.tv_usec = 0;
                local_12a8.tv_sec = 1;
                do {
                  puVar8 = puVar8 + 1;
                  *puVar8 = 0;
                } while (local_1230.fds_bits + 0x1f != puVar8);
                local_1230.fds_bits[uVar10] = local_1230.fds_bits[uVar10] | uVar7;
                iVar1 = select(__fd + 1,&local_1230,(fd_set *)0x0,(fd_set *)0x0,&local_12a8);
                if (iVar1 < 0) {
                  puVar3 = (uint *)__errno_location();
                  param5 = (char *)*puVar3;
                  DebugPrint(8,7,"[%s:%u]select failed, error=%d\n\n",DAT_00022f2c,0xbed,param5);
                  mysystem_with_param("ifconfig %s up",&DAT_00072a1c);
                  break;
                }
                if ((iVar1 != 0) && ((uVar7 & local_1230.fds_bits[uVar10]) != 0)) {
                  local_12b0 = 0x10;
                  sVar4 = recvfrom(__fd,local_1030,0x800,0,&local_12a0,&local_12b0);
                  if (sVar4 < 1) {
                    puVar3 = (uint *)__errno_location();
                    param5 = (char *)*puVar3;
                    DebugPrint(8,7,"[%s:%u]recvfrom failed, error=%d\n\n",DAT_00022f2c,0xbff,param5)
                    ;
                    break;
                  }
                  uStack_1130 = 0;
                  local_1030[sVar4] = '\0';
                  memset(acStack_112c,0,0xfc);
                  local_12ac = 0;
                  iVar1 = FUN_0001f1bc(local_1030,&uStack_1130,&local_12ac);
                  if (iVar1 == 1) {
                    if (local_12ac == 1) {
                      DAT_000ac538 = 0;
                    }
                    param5 = (char *)(uint)(byte)local_12a0.sa_data[5];
                    sprintf(acStack_1290,"%d.%d.%d.%d",(uint)(byte)local_12a0.sa_data[2],
                            (uint)(byte)local_12a0.sa_data[3],(uint)(byte)local_12a0.sa_data[4],
                            (int)param5);
                    IsLimitIp(local_12a0.sa_data._2_4_);
                    if ((DAT_000ac538 == 0) || (DAT_000ac334 == 1)) {
                      puVar9 = auStack_830;
                      param5 = local_1030;
                      iVar1 = FUN_000202f0(1,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,param5,
                                           puVar9,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                           local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                      goto joined_r0x00022bd0;
                    }
                  }
                  else {
                    param5 = (char *)(uint)(byte)local_12a0.sa_data[5];
                    sprintf(acStack_1290,"%d.%d.%d.%d",(uint)(byte)local_12a0.sa_data[2],
                            (uint)(byte)local_12a0.sa_data[3],(uint)(byte)local_12a0.sa_data[4],
                            (int)param5);
                    if ((iVar1 == -100) &&
                       (iVar5 = GetCurrentTimeStamp(), 2000 < (uint)(iVar5 - DAT_000aa234))) {
                      DAT_000aa234 = iVar5;
                      sprintf(acStack_11b0,"Unauthorized modification from %s",acStack_1290);
                      FUN_000346f0(acStack_11b0);
                      iVar5 = IsLimitIp(local_12a0.sa_data._2_4_);
                      if (iVar5 < 1) {
LAB_00022c26:
                        if (iVar1 == 0x13) {
                          puVar9 = auStack_830;
                          param5 = local_1030;
                          iVar1 = FUN_000224c4(0x13,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,
                                               param5,puVar9,local_12a0._0_4_,
                                               local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_,
                                               local_12a0.sa_data._10_4_,local_12ac);
                          goto joined_r0x00022d10;
                        }
                      }
                    }
                    else {
                      iVar5 = IsLimitIp(local_12a0.sa_data._2_4_);
                      if (iVar5 < 1) {
                        if (iVar1 == 2) {
                          puVar9 = auStack_830;
                          param5 = local_1030;
                          iVar1 = FUN_00020e2c(2,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,param5
                                               ,puVar9,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                               local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                        }
                        else {
                          if (iVar1 == 5) {
                            puVar9 = auStack_830;
                            param5 = local_1030;
                            iVar1 = FUN_000215ac(5,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,
                                                 param5,puVar9,local_12a0._0_4_,
                                                 local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_,
                                                 local_12a0.sa_data._10_4_);
joined_r0x00022d10:
                            if (-1 < iVar1) goto joined_r0x00022dcc;
                            break;
                          }
                          if (iVar1 == 7) {
                            pcVar6 = strstr(local_1030,"randStr");
                            if (pcVar6 != (char *)0x0) {
                              DebugPrint(8,7,"[%s:%u]discard topsee reboot cmd\n\n",DAT_00022ca4,
                                         0xc8a);
                              goto joined_r0x00022dcc;
                            }
                            puVar9 = auStack_830;
                            param5 = local_1030;
                            iVar1 = FUN_00021a18(7,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,
                                                 param5,puVar9,local_12a0._0_4_,
                                                 local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_,
                                                 local_12a0.sa_data._10_4_);
                          }
                          else {
                            if (iVar1 == 9) {
                              puVar9 = auStack_830;
                              param5 = local_1030;
                              iVar1 = FUN_00021c10(9,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,
                                                   param5,puVar9,local_12a0._0_4_,
                                                   local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_
                                                   ,local_12a0.sa_data._10_4_,local_12ac);
                              goto joined_r0x00022d10;
                            }
                            if (iVar1 == 0xb) {
                              puVar9 = auStack_830;
                              param5 = local_1030;
                              iVar1 = FUN_00022328(0xb,__fd,&uStack_1130,&DAT_000be5a8,acStack_1270,
                                                   param5,puVar9,local_12a0._0_4_,
                                                   local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_
                                                   ,local_12a0.sa_data._10_4_,local_12ac);
                            }
                            else {
                              if (iVar1 == 0xd) {
                                puVar9 = auStack_830;
                                param5 = local_1030;
                                iVar1 = FUN_000221f0(0xd,__fd,&uStack_1130,&DAT_000be5a8,
                                                     acStack_1270,param5,puVar9,local_12a0._0_4_,
                                                     local_12a0.sa_data._2_4_,
                                                     local_12a0.sa_data._6_4_,
                                                     local_12a0.sa_data._10_4_,local_12ac);
                                goto joined_r0x00022d10;
                              }
                              if (iVar1 == 0xf) {
                                puVar9 = auStack_830;
                                param5 = local_1030;
                                iVar1 = FUN_00022098(0xf,__fd,&uStack_1130,&DAT_000be5a8,
                                                     acStack_1270,param5,puVar9,local_12a0._0_4_,
                                                     local_12a0.sa_data._2_4_,
                                                     local_12a0.sa_data._6_4_,
                                                     local_12a0.sa_data._10_4_,local_12ac);
                              }
                              else if (iVar1 == 0x11) {
                                puVar9 = auStack_830;
                                param5 = local_1030;
                                iVar1 = FUN_00022650(0x11,__fd,&uStack_1130,&DAT_000be5a8,
                                                     acStack_1270,param5,puVar9,local_12a0._0_4_,
                                                     local_12a0.sa_data._2_4_,
                                                     local_12a0.sa_data._6_4_,
                                                     local_12a0.sa_data._10_4_,local_12ac);
                              }
                              else {
                                if (iVar1 != 0x170a) goto LAB_00022c26;
                                puVar9 = auStack_830;
                                param5 = local_1030;
                                iVar1 = FUN_000226f0(0x170a,__fd,&uStack_1130,&DAT_000be5a8,
                                                     acStack_1270,param5,puVar9,local_12a0._0_4_,
                                                     local_12a0.sa_data._2_4_,
                                                     local_12a0.sa_data._6_4_,
                                                     local_12a0.sa_data._10_4_,local_12ac);
                              }
                            }
                          }
                        }
joined_r0x00022bd0:
                        if (iVar1 < 0) break;
                      }
                    }
                  }
                }
              }
joined_r0x00022dcc:
            } while (DAT_000ae2ac == 0);
          }
          DebugPrint(1,7,"[%s:%u]exit send and recv loop\n\n",DAT_00022ca4,0xcca,param5);
          close(__fd);
          if ((0 < DAT_000ae2ac) || (DAT_000ae2ac != 0)) goto LAB_0002293a;
        }
        puVar3 = (uint *)__errno_location();
        param5 = (char *)*puVar3;
        DebugPrint(8,7,"[%s:%u]create socket failed, errno=%d\n\n",DAT_00022970,0xbbf,param5);
      } while (DAT_000ae2ac == 0);
    }
LAB_0002293a:
    DAT_000ae2b0 = 0;
    DebugPrint(8,7,"[%s:%u]exit main loop\n\n",DAT_00022970,0xcd8,param5,puVar9);
  }
  return 0;
}


