Function recovery_initializer @ 0001ea80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 recovery_initializer(void)

{
  int iVar1;
  size_t sVar2;
  uint __fd;
  ssize_t sVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  pthread_t __th;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  socklen_t sStack_12a8;
  undefined4 uStack_12a4;
  timeval tStack_12a0;
  sockaddr sStack_1298;
  char acStack_1288 [32];
  char acStack_1268 [60];
  undefined4 uStack_122c;
  fd_set fStack_1228;
  char acStack_11a8 [128];
  undefined4 uStack_1128;
  undefined1 auStack_1124 [252];
  char acStack_1028 [2048];
  undefined1 auStack_828 [6];
  char acStack_822 [2046];
  
  prctl(0xf,DAT_0001ed88);
  DAT_00089cb0 = 0;
  DAT_00089cb4 = 0;
  DAT_00089cb8 = 0;
  DAT_00089cbc = 0;
  DAT_00089cc0 = 0;
  DAT_00089cc4 = 0;
  DAT_00089cc8 = 0;
  DAT_00089ccc = 0;
  iVar1 = GetSN(acStack_1268);
  if (iVar1 < 0) {
    DAT_0008ccb4 = 0;
    __th = pthread_self();
    pthread_detach(__th);
    return 0;
  }
  DebugPrint(1,7,"[%s:%u]sn=[%s]\n\n",DAT_0001ed88,0xad9,acStack_1268);
  sVar2 = strlen(acStack_1268);
  puVar10 = &DAT_00089c4c;
  write_buffer_to_file("/tmp/sn.txt",acStack_1268,sVar2);
  GetDeviceTypeStr(&DAT_00089c4c);
  acStack_1028[0] = '\0';
  iVar1 = access("/mnt/nand/security.flag",0);
  if ((iVar1 == -1) && (iVar1 = access("/opt/ch/security.flag",0), iVar1 == -1)) {
    DAT_0008997c = (char *)0x0;
    DAT_00089980 = 0;
  }
  else {
    DAT_0008997c = (char *)0x1;
    memset(&uStack_1128,0,0x40);
    memset(auStack_828,0,0x40);
    sprintf((char *)&uStack_1128,"%s%s",acStack_1268,"www.anjvision.com");
    sVar2 = strlen((char *)&uStack_1128);
    our_md5_encode(auStack_828,&uStack_1128,sVar2);
    strcpy(DAT_0001ed8c,acStack_822);
    DAT_0008998a = 0;
  }
  pcVar7 = DAT_0008997c;
  DebugPrint(8,7,"[%s:%u]enter main loop, g_verify_passwd = %d, device_module = %s...\n\n",
             DAT_0001ed88,0xaf6,DAT_0008997c,&DAT_00089c4c);
  do {
    while( true ) {
      if (DAT_0008ccb0 != 0) goto LAB_0001ed48;
      SLEEP_SECOND(1);
      __fd = broadcastserver_ex(0xbb9,1);
      if (-1 < (int)__fd) break;
      puVar6 = (uint *)__errno_location();
      pcVar7 = (char *)*puVar6;
      DebugPrint(8,7,"[%s:%u]create socket failed, errno=%d\n\n",DAT_0001f14c,0xafe,pcVar7);
    }
    DebugPrint(1,7,"[%s:%u]enter send and recv loop...\n\n",DAT_0001ed88,0xb02,pcVar7,puVar10);
    uVar11 = __fd >> 5;
    uVar8 = 1 << (__fd & 0x1f);
LAB_0001ebf8:
    do {
      while( true ) {
        do {
          while( true ) {
            if (DAT_0008ccb0 != 0) goto LAB_0001ed20;
            if (*(int *)(DAT_000907b8 + 0x35dc) != 0) break;
            usleep(100000);
          }
          tStack_12a0.tv_usec = DAT_0008ccb0;
          puVar9 = &uStack_122c;
          tStack_12a0.tv_sec = 1;
          do {
            puVar9 = puVar9 + 1;
            *puVar9 = 0;
          } while (puVar9 != fStack_1228.fds_bits + 0x1f);
          fStack_1228.fds_bits[uVar11] = fStack_1228.fds_bits[uVar11] | uVar8;
          iVar1 = select(__fd + 1,&fStack_1228,(fd_set *)0x0,(fd_set *)0x0,&tStack_12a0);
          if (iVar1 < 0) {
            puVar6 = (uint *)__errno_location();
            pcVar7 = (char *)*puVar6;
            DebugPrint(8,7,"[%s:%u]select failed, error=%d\n\n",DAT_0001f14c,0xb2c,pcVar7);
            mysystem_with_param("ifconfig %s up",&DAT_0005a9cc);
            goto LAB_0001ed20;
          }
        } while ((iVar1 == 0) || ((uVar8 & fStack_1228.fds_bits[uVar11]) == 0));
        sStack_12a8 = 0x10;
        sVar3 = recvfrom(__fd,acStack_1028,0x800,0,&sStack_1298,&sStack_12a8);
        if (sVar3 < 1) {
          puVar6 = (uint *)__errno_location();
          pcVar7 = (char *)*puVar6;
          DebugPrint(8,7,"[%s:%u]recvfrom failed, error=%d\n\n",DAT_0001f14c,0xb3e,pcVar7);
          goto LAB_0001ed20;
        }
        acStack_1028[sVar3] = '\0';
        uStack_1128 = 0;
        memset(auStack_1124,0,0xfc);
        uStack_12a4 = 0;
        iVar1 = FUN_0001b734(acStack_1028,&uStack_1128,&uStack_12a4);
        uVar12 = (uint)sStack_1298.sa_data._2_4_ >> 0x10 & 0xff;
        pcVar7 = (char *)((uint)sStack_1298.sa_data._2_4_ >> 0x18);
        sprintf(acStack_1288,"%d.%d.%d.%d",sStack_1298.sa_data._2_4_ & 0xff,
                (uint)sStack_1298.sa_data._2_4_ >> 8 & 0xff,uVar12);
        if (iVar1 != -100) break;
        iVar1 = GetCurrentTimeStamp();
        if (2000 < (uint)(iVar1 - DAT_00089cd0)) {
          DAT_00089cd0 = iVar1;
          sprintf(acStack_11a8,"Unauthorized modification from %s",acStack_1288,&DAT_00089868,uVar12
                 );
          FUN_0002f96c(acStack_11a8);
        }
        IsLimitIp(sStack_1298.sa_data._2_4_);
      }
      iVar4 = IsLimitIp(sStack_1298.sa_data._2_4_);
      if (iVar4 < 1) {
        if (iVar1 == 1) goto LAB_0001ecf0;
        if (iVar1 == 2) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001d35c(2,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_);
        }
        else if (iVar1 == 5) {
          pcVar7 = acStack_1028;
          puVar10 = auStack_828;
          iVar1 = FUN_0001db30(5,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_);
        }
        else if (iVar1 == 7) {
          pcVar5 = strstr(acStack_1028,"randStr");
          if (pcVar5 != (char *)0x0) {
            DebugPrint(8,7,"[%s:%u]discard topsee reboot cmd\n\n",DAT_0001f14c,0xbc1,pcVar7);
            goto LAB_0001ebf8;
          }
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001dee0(7,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_);
        }
        else if (iVar1 == 9) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e0b8(9,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else if (iVar1 == 0xb) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e608(0xb,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else if (iVar1 == 0xd) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e4ec(0xd,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else if (iVar1 == 0xf) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e3b4(0xf,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else if (iVar1 == 0x11) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e8f0(0x11,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else if (iVar1 == 0x170a) {
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e998(0x170a,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
        else {
          if (iVar1 != 0x13) goto LAB_0001ebf8;
          puVar10 = auStack_828;
          pcVar7 = acStack_1028;
          iVar1 = FUN_0001e77c(0x13,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                               sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_
                               ,sStack_1298.sa_data._10_4_,uStack_12a4);
        }
      }
      else {
        if (iVar1 != 1) goto LAB_0001ebf8;
LAB_0001ecf0:
        pcVar7 = acStack_1028;
        puVar10 = auStack_828;
        iVar1 = FUN_0001c938(1,__fd,&uStack_1128,&DAT_0009b8a4,acStack_1268,pcVar7,puVar10,
                             sStack_1298._0_4_,sStack_1298.sa_data._2_4_,sStack_1298.sa_data._6_4_,
                             sStack_1298.sa_data._10_4_);
      }
    } while (-1 < iVar1);
LAB_0001ed20:
    DebugPrint(1,7,"[%s:%u]exit send and recv loop\n\n",DAT_0001ed88,0xc01,pcVar7);
    close(__fd);
  } while (DAT_0008ccb0 < 1);
LAB_0001ed48:
  DAT_0008ccb4 = 0;
  DebugPrint(8,7,"[%s:%u]exit main loop\n\n",DAT_0001ed88,0xc0f,pcVar7,puVar10);
  return 0;
}


