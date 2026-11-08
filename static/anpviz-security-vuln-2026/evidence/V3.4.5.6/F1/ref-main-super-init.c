Function FUN_000222e0 @ 000222e0, containing 000223c4

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000222e0(void)

{
  int iVar1;
  size_t sVar2;
  uint __fd;
  uint *puVar3;
  ssize_t sVar4;
  int iVar5;
  char *pcVar6;
  pthread_t __th;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  uint uVar12;
  socklen_t local_12b0;
  undefined4 local_12ac;
  timeval local_12a8;
  sockaddr local_12a0;
  char acStack_1290 [32];
  char acStack_1270 [60];
  undefined4 uStack_1234;
  fd_set local_1230;
  char acStack_11b0 [128];
  undefined4 uStack_1130;
  undefined1 auStack_112c [252];
  char local_1030 [2048];
  undefined1 auStack_830 [6];
  char acStack_82a [2046];
  
  prctl(0xf,DAT_00022610);
  memset(&DAT_000a71a4,0,0x20);
  iVar1 = GetSN(acStack_1270);
  if (iVar1 < 0) {
    DAT_000ab080 = 0;
    __th = pthread_self();
    pthread_detach(__th);
  }
  else {
    puVar11 = &DAT_000a7140;
    strcpy(&DAT_000a71c4,acStack_1270);
    DebugPrint(1,7,"[%s:%u]sn=[%s]\n\n",DAT_00022610,0xb8a,acStack_1270);
    sVar2 = strlen(acStack_1270);
    write_buffer_to_file("/tmp/sn.txt",acStack_1270,sVar2);
    GetDeviceTypeStr(&DAT_000a7140);
    local_1030[0] = '\0';
    iVar1 = access("/mnt/nand/security.flag",0);
    if ((iVar1 == -1) && (iVar1 = access("/opt/ch/security.flag",0), iVar1 == -1)) {
      DAT_000a6e30 = (char *)0x0;
      DAT_000a6e34 = 0;
    }
    else {
      DAT_000a6e30 = (char *)0x1;
      memset(&uStack_1130,0,0x40);
      memset(auStack_830,0,0x40);
      sprintf((char *)&uStack_1130,"%s%s",acStack_1270,"www.anjvision.com");
      sVar2 = strlen((char *)&uStack_1130);
      our_md5_encode(auStack_830,&uStack_1130,sVar2);
      strcpy(DAT_00022614,acStack_82a);
      DAT_000a6e3e = 0;
    }
    pcVar7 = DAT_000a6e30;
    DebugPrint(8,7,"[%s:%u]enter main loop, g_verify_passwd = %d, device_module = %s...\n\n",
               DAT_00022610,0xba7,DAT_000a6e30,&DAT_000a7140);
    if (DAT_000ab07c == 0) {
      do {
        while( true ) {
          SLEEP_SECOND(1);
          __fd = broadcastserver_ex(0xbb9,1);
          if ((int)__fd < 0) break;
          DebugPrint(1,7,"[%s:%u]enter send and recv loop...\n\n",DAT_00022610,0xbb3,pcVar7,puVar11)
          ;
          if (DAT_000ab07c == 0) {
            uVar9 = 1 << (__fd & 0x1f);
            uVar12 = __fd >> 5;
            do {
              if (*(int *)(DAT_000b0170 + 0x3634) == 0) {
                usleep(100000);
              }
              else {
                puVar10 = &uStack_1234;
                local_12a8.tv_usec = 0;
                local_12a8.tv_sec = 1;
                do {
                  puVar10 = puVar10 + 1;
                  *puVar10 = 0;
                } while (local_1230.fds_bits + 0x1f != puVar10);
                local_1230.fds_bits[uVar12] = local_1230.fds_bits[uVar12] | uVar9;
                iVar1 = select(__fd + 1,&local_1230,(fd_set *)0x0,(fd_set *)0x0,&local_12a8);
                if (iVar1 < 0) {
                  puVar3 = (uint *)__errno_location();
                  pcVar7 = (char *)*puVar3;
                  DebugPrint(8,7,"[%s:%u]select failed, error=%d\n\n",DAT_0002299c,0xbdd,pcVar7);
                  mysystem_with_param("ifconfig %s up",&DAT_00070e24);
                  break;
                }
                if ((iVar1 == 0) || ((uVar9 & local_1230.fds_bits[uVar12]) == 0)) goto LAB_000225c6;
                local_12b0 = 0x10;
                sVar4 = recvfrom(__fd,local_1030,0x800,0,&local_12a0,&local_12b0);
                if (sVar4 < 1) {
                  puVar3 = (uint *)__errno_location();
                  pcVar7 = (char *)*puVar3;
                  DebugPrint(8,7,"[%s:%u]recvfrom failed, error=%d\n\n",DAT_0002299c,0xbef,pcVar7);
                  break;
                }
                uStack_1130 = 0;
                local_1030[sVar4] = '\0';
                memset(auStack_112c,0,0xfc);
                local_12ac = 0;
                iVar1 = FUN_0001eccc(local_1030,&uStack_1130,&local_12ac);
                uVar8 = (uint)local_12a0.sa_data._2_4_ >> 0x10 & 0xff;
                pcVar7 = (char *)((uint)local_12a0.sa_data._2_4_ >> 0x18);
                sprintf(acStack_1290,"%d.%d.%d.%d",local_12a0.sa_data._2_4_ & 0xff,
                        (uint)local_12a0.sa_data._2_4_ >> 8 & 0xff,uVar8);
                if (iVar1 == -100) {
                  iVar5 = GetCurrentTimeStamp();
                  if (2000 < (uint)(iVar5 - DAT_000a7204)) {
                    DAT_000a7204 = iVar5;
                    sprintf(acStack_11b0,"Unauthorized modification from %s",acStack_1290,iVar5,
                            uVar8);
                    FUN_00034074(acStack_11b0);
                  }
                  iVar5 = IsLimitIp(local_12a0.sa_data._2_4_);
                  if (0 < iVar5) goto LAB_000225c6;
LAB_000225c0:
                  if (iVar1 != 0x13) goto LAB_000225c6;
                  puVar11 = auStack_830;
                  pcVar7 = local_1030;
                  iVar1 = FUN_00021fd0(0x13,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                       puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                       local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,local_12ac
                                      );
                }
                else {
                  iVar5 = IsLimitIp(local_12a0.sa_data._2_4_);
                  if (iVar5 < 1) {
                    if (iVar1 == 1) goto LAB_00022598;
                    if (iVar1 != 2) {
                      if (iVar1 == 5) {
                        puVar11 = auStack_830;
                        pcVar7 = local_1030;
                        iVar1 = FUN_000210c4(5,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                             puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                             local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                        goto joined_r0x00022980;
                      }
                      if (iVar1 == 7) {
                        pcVar6 = strstr(local_1030,"randStr");
                        if (pcVar6 != (char *)0x0) {
                          DebugPrint(8,7,"[%s:%u]discard topsee reboot cmd\n\n",DAT_0002299c,0xc72,
                                     pcVar7);
                          goto LAB_000225c6;
                        }
                        puVar11 = auStack_830;
                        pcVar7 = local_1030;
                        iVar1 = FUN_00021524(7,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                             puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                             local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                        goto joined_r0x000227ee;
                      }
                      if (iVar1 == 9) {
                        puVar11 = auStack_830;
                        pcVar7 = local_1030;
                        iVar1 = FUN_0002171c(9,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                             puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                             local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,
                                             local_12ac);
                        goto joined_r0x00022980;
                      }
                      if (iVar1 == 0xb) {
                        puVar11 = auStack_830;
                        pcVar7 = local_1030;
                        iVar1 = FUN_00021e34(0xb,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7
                                             ,puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                             local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,
                                             local_12ac);
                        goto joined_r0x00022980;
                      }
                      if (iVar1 == 0xd) {
                        puVar11 = auStack_830;
                        pcVar7 = local_1030;
                        iVar1 = FUN_00021cfc(0xd,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7
                                             ,puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                             local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,
                                             local_12ac);
                        goto joined_r0x00022980;
                      }
                      if (iVar1 != 0xf) {
                        if (iVar1 == 0x11) {
                          puVar11 = auStack_830;
                          pcVar7 = local_1030;
                          iVar1 = FUN_0002215c(0x11,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,
                                               pcVar7,puVar11,local_12a0._0_4_,
                                               local_12a0.sa_data._2_4_,local_12a0.sa_data._6_4_,
                                               local_12a0.sa_data._10_4_,local_12ac);
                          goto joined_r0x000227ee;
                        }
                        goto LAB_000225b8;
                      }
                      puVar11 = auStack_830;
                      pcVar7 = local_1030;
                      iVar1 = FUN_00021ba4(0xf,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                           puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                           local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,
                                           local_12ac);
joined_r0x000227ee:
                      if (-1 < iVar1) goto LAB_000225c6;
                      break;
                    }
                    puVar11 = auStack_830;
                    pcVar7 = local_1030;
                    iVar1 = FUN_00020940(2,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                         puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                         local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                  }
                  else {
                    if (iVar1 != 1) goto LAB_000225c6;
LAB_00022598:
                    if ((DAT_000a9324 == 0) || (DAT_000a9124 == 1)) {
                      puVar11 = auStack_830;
                      pcVar7 = local_1030;
                      iVar1 = FUN_0001fdfc(1,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,pcVar7,
                                           puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                           local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_);
                    }
                    else {
LAB_000225b8:
                      if (iVar1 != 0x170a) goto LAB_000225c0;
                      puVar11 = auStack_830;
                      pcVar7 = local_1030;
                      iVar1 = FUN_000221fc(0x170a,__fd,&uStack_1130,&DAT_000bb0d8,acStack_1270,
                                           pcVar7,puVar11,local_12a0._0_4_,local_12a0.sa_data._2_4_,
                                           local_12a0.sa_data._6_4_,local_12a0.sa_data._10_4_,
                                           local_12ac);
                    }
                  }
                }
joined_r0x00022980:
                if (iVar1 < 0) break;
              }
LAB_000225c6:
            } while (DAT_000ab07c == 0);
          }
          DebugPrint(1,7,"[%s:%u]exit send and recv loop\n\n",DAT_00022610,0xcb2,pcVar7);
          close(__fd);
          if ((0 < DAT_000ab07c) || (DAT_000ab07c != 0)) goto LAB_00022446;
        }
        puVar3 = (uint *)__errno_location();
        pcVar7 = (char *)*puVar3;
        DebugPrint(8,7,"[%s:%u]create socket failed, errno=%d\n\n",DAT_00022610,0xbaf,pcVar7);
      } while (DAT_000ab07c == 0);
    }
LAB_00022446:
    DAT_000ab080 = 0;
    DebugPrint(8,7,"[%s:%u]exit main loop\n\n",DAT_00022610,0xcc0,pcVar7,puVar11);
  }
  return 0;
}


