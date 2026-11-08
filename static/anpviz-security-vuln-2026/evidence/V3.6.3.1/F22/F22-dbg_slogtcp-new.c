/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 00012f00 */
/* function FUN_00012f00 @ 00012f00 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00012f00(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ssize_t sVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  time_t tVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  __fd_mask *p_Var22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  byte *pbVar27;
  char *pcVar28;
  char *pcVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int local_bcc;
  char *local_bc8;
  int local_ba8;
  socklen_t local_b94;
  timeval local_b90;
  sockaddr local_b88;
  char acStack_b78 [40];
  char acStack_b50 [36];
  undefined4 uStack_b2c;
  fd_set local_b28;
  fd_set local_aa8;
  int local_a28;
  undefined1 auStack_a24 [28];
  undefined1 local_a08;
  byte abStack_828 [1024];
  char acStack_428 [1028];
  
  uVar33 = GetCurrentTimeStamp_u64();
  iVar3 = DAT_00026e00;
  if (DAT_00026e00 != 0) {
LAB_000130be:
    puVar26 = DAT_00013290;
    do {
      if (0 < (int)*puVar26) {
        close(*puVar26);
        *puVar26 = 0xffffffff;
      }
      puVar26 = puVar26 + 0x48;
    } while (puVar26 != (uint *)&DAT_000271bc);
    return;
  }
  local_bcc = DAT_00026e00;
  uVar15 = 1 << (param_1 & 0x1f);
  uVar20 = param_1 >> 5;
LAB_00012f50:
  puVar26 = DAT_00013290;
  puVar21 = &uStack_b2c;
  local_b90.tv_usec = iVar3;
  local_b90.tv_sec = 2;
  do {
    puVar21 = puVar21 + 1;
    *puVar21 = 0;
  } while (local_b28.fds_bits + 0x1f != puVar21);
  p_Var22 = local_b28.fds_bits + 0x1f;
  do {
    p_Var22 = p_Var22 + 1;
    *p_Var22 = 0;
  } while (local_aa8.fds_bits + 0x1f != p_Var22);
  local_b28.fds_bits[uVar20] = local_b28.fds_bits[uVar20] | uVar15;
  puVar16 = DAT_00013290;
  uVar5 = param_1;
  do {
    uVar23 = *puVar16;
    if (0 < (int)uVar23) {
      uVar14 = uVar23 >> 5;
      if ((int)uVar5 < (int)uVar23) {
        uVar5 = uVar23;
      }
      uVar24 = 1 << (uVar23 & 0x1f);
      uVar23 = local_aa8.fds_bits[uVar14];
      local_b28.fds_bits[uVar14] = local_b28.fds_bits[uVar14] | uVar24;
      local_aa8.fds_bits[uVar14] = uVar24 | uVar23;
    }
    puVar16 = puVar16 + 0x48;
  } while (puVar16 != (uint *)&DAT_000271bc);
  puVar16 = DAT_00013290;
  do {
    if (((0 < (int)*puVar16) && (puVar16[5] == 0)) &&
       (tVar13 = time((time_t *)0x0), (int)puVar16[6] <= tVar13)) {
      snprintf((char *)&local_a28,0x40,"authentication timeout(%ds), disconnected.\n",0x1e);
      uVar23 = *puVar16;
      if (0 < (int)uVar23) {
        FUN_000124e8(uVar23,&local_a28);
        uVar23 = *puVar16;
      }
      printf("debug_server_thread: auth timeout, close fd=%d\n",uVar23);
      uVar23 = *puVar16;
      uVar24 = uVar23 >> 5;
      uVar31 = 1 << (uVar23 & 0x1f);
      uVar14 = local_aa8.fds_bits[uVar24];
      local_b28.fds_bits[uVar24] = local_b28.fds_bits[uVar24] & ~uVar31;
      local_aa8.fds_bits[uVar24] = uVar14 & ~uVar31;
      close(uVar23);
      *puVar16 = 0xffffffff;
    }
    puVar16 = puVar16 + 0x48;
  } while (puVar16 != (uint *)&DAT_000271bc);
  if (local_bcc == 0) {
    puVar16 = DAT_00013298;
    do {
      if ((0 < (int)puVar16[-5]) && (*puVar16 == 1)) {
        local_bcc = 1;
        goto LAB_00012fe8;
      }
      puVar16 = puVar16 + 0x48;
    } while (puVar16 != puVar26 + 0xdd);
    uVar34 = GetCurrentTimeStamp_u64();
    uVar23 = (int)((ulonglong)uVar34 >> 0x20) - (int)((ulonglong)uVar33 >> 0x20);
    uVar14 = (uint)((uint)uVar34 < (uint)uVar33);
    bVar32 = uVar23 == uVar14;
    if (uVar23 == uVar14) {
      bVar32 = (uint)uVar34 - (uint)uVar33 < 60000;
    }
    if (!bVar32) {
      snprintf((char *)&local_a28,0x60,"no authenticated connection in %ds, service closed.\n",0x3c)
      ;
      printf("dbg_tcp_serve_loop: no authenticated connection in %ds, close service\n",0x3c);
      remove("/tmp/flag.open.slog.tcp");
      do {
        if (0 < (int)*puVar26) {
          FUN_000124e8(*puVar26,&local_a28);
          uVar15 = *puVar26;
          uVar5 = uVar15 >> 5;
          uVar20 = 1 << (uVar15 & 0x1f);
          local_b28.fds_bits[uVar5] = local_b28.fds_bits[uVar5] & ~uVar20;
          local_aa8.fds_bits[uVar5] = local_aa8.fds_bits[uVar5] & ~uVar20;
          close(uVar15);
          *puVar26 = 0xffffffff;
        }
        puVar26 = puVar26 + 0x48;
      } while (puVar26 != (uint *)&DAT_000271bc);
      goto LAB_000130be;
    }
  }
LAB_00012fe8:
  iVar4 = select(uVar5 + 1,&local_b28,&local_aa8,(fd_set *)0x0,&local_b90);
  if (iVar4 < 0) {
    piVar10 = __errno_location();
    if (*piVar10 == 4) {
      sleep(1);
      goto joined_r0x000132ca;
    }
    pcVar29 = strerror(*piVar10);
    printf("debug_server_thread: select failed, err=%s\n",pcVar29);
    goto LAB_000130be;
  }
  if (iVar4 != 0) {
    if ((uVar15 & local_b28.fds_bits[uVar20]) == 0) {
LAB_00013046:
      iVar4 = 0;
      local_bc8 = "debug_server_thread: send failed,err=%s\n";
      pcVar29 = DAT_00013294;
LAB_0001306c:
      uVar5 = *(uint *)(pcVar29 + -0x21);
      if (0 < (int)uVar5) {
        uVar14 = uVar5 >> 5;
        uVar23 = uVar5 & 0x1f;
        if ((local_b28.fds_bits[uVar14] >> uVar23) << 0x1f < 0) {
          sVar6 = recv(uVar5,abStack_828,0x400,0);
          if (sVar6 == 0) {
            puts("debug_server_thread: recv=0");
            close(*(int *)(pcVar29 + -0x21));
            pcVar29[-0xffffffff00000021] = -1;
            pcVar29[-0xffffffff00000020] = -1;
            pcVar29[-0xffffffff0000001f] = -1;
            pcVar29[-0xffffffff0000001e] = -1;
          }
          else if (sVar6 < 0) {
            piVar10 = __errno_location();
            iVar7 = *(int *)(pcVar29 + -0x21);
            iVar19 = *piVar10;
            pcVar28 = strerror(iVar19);
            printf("debug_server: socket %d recv failed,err=%d(%s)\n",iVar7,iVar19,pcVar28);
            if (*piVar10 != 4 && *piVar10 != 0xb) {
              pcVar11 = *(char **)(pcVar29 + -0x21);
              pcVar28 = "debug_server: socket %d closed\n";
              goto LAB_0001333e;
            }
          }
          else {
            if (*(int *)(pcVar29 + -0xd) != 0) {
              pbVar17 = abStack_828 + sVar6;
              local_a28 = iVar3;
              memset(auStack_a24,0,0x1fc);
              if (abStack_828 < pbVar17) {
                local_ba8 = 0;
                pbVar18 = abStack_828;
                do {
                  pbVar27 = pbVar18 + 1;
                  bVar2 = *pbVar18;
                  iVar7 = isprint((uint)bVar2);
                  if (iVar7 == 0) {
                    if ((char)local_a28 != '\0') {
                      printf("cmd: %s\n",(char *)&local_a28);
                      if ((char)local_a28 != '\0') {
                        FUN_00012eb0(&local_a28);
                      }
                      break;
                    }
                  }
                  else if (local_ba8 < 0x1ff) {
                    *(byte *)((int)&local_a28 + local_ba8) = bVar2;
                    local_ba8 = local_ba8 + 1;
                  }
                  pbVar18 = pbVar27;
                } while (pbVar17 != pbVar27);
              }
              uVar23 = *(uint *)(pcVar29 + -0x21) & 0x1f;
              uVar14 = *(uint *)(pcVar29 + -0x21) >> 5;
              goto LAB_00013086;
            }
            pbVar17 = abStack_828;
            do {
              pbVar18 = pbVar17 + 1;
              bVar2 = *pbVar17;
              iVar7 = *(int *)(pcVar29 + 0xfb);
              if (bVar2 == 0xd || bVar2 == 10) {
                if (0 < iVar7) {
                  *(undefined1 *)(iVar7 + iVar4 * 0x120 + 0x26e78) = 0;
                  iVar7 = strncmp(pcVar29 + -5,"AUTH|",5);
                  if (((iVar7 != 0) ||
                      (pbVar17 = (byte *)strchr(pcVar29,0x7c), pbVar17 == (byte *)0x0)) ||
                     (sVar8 = (int)pbVar17 - (int)pcVar29, 0x26 < sVar8 - 1)) goto LAB_0001348a;
                  pbVar18 = pbVar17 + 1;
                  memcpy(acStack_b78,pcVar29,sVar8);
                  acStack_b78[sVar8] = '\0';
                  sVar8 = strlen((char *)(pbVar17 + 1));
                  if (sVar8 != 0x20) goto LAB_0001348a;
                  pbVar27 = pbVar17 + 0x20;
                  goto LAB_000133f6;
                }
              }
              else {
                if (0xfe < iVar7) {
                  pcVar29[0xfb] = '\0';
                  pcVar29[0xfc] = '\0';
                  pcVar29[0xfd] = '\0';
                  pcVar29[0xfe] = '\0';
                  break;
                }
                *(int *)(pcVar29 + 0xfb) = iVar7 + 1;
                *(byte *)(iVar4 * 0x120 + iVar7 + 0x26e78) = bVar2;
              }
              pbVar17 = pbVar18;
            } while (abStack_828 + sVar6 != pbVar18);
          }
        }
        else {
LAB_00013086:
          if ((((local_aa8.fds_bits[uVar14] >> uVar23) << 0x1f < 0) &&
              (*(int *)(pcVar29 + -0xd) == 1)) &&
             (iVar7 = FUN_00012c58(iVar4,acStack_428), 0 < iVar7)) {
            sVar8 = strlen(acStack_428);
            sVar9 = send(*(int *)(pcVar29 + -0x21),acStack_428,sVar8,0);
            if (sVar8 != sVar9) {
              piVar10 = __errno_location();
              pcVar11 = strerror(*piVar10);
              pcVar28 = local_bc8;
LAB_0001333e:
              printf(pcVar28,pcVar11);
              close(*(int *)(pcVar29 + -0x21));
              pcVar29[-0xffffffff00000021] = -1;
              pcVar29[-0xffffffff00000020] = -1;
              pcVar29[-0xffffffff0000001f] = -1;
              pcVar29[-0xffffffff0000001e] = -1;
            }
          }
        }
      }
      goto LAB_0001309c;
    }
    local_b94 = 0x10;
    iVar4 = accept(param_1,&local_b88,&local_b94);
    if (-1 < iVar4) {
      if (DAT_00026e5c < 0) {
        iVar19 = 0;
        iVar7 = 4;
      }
      else if (DAT_00026f7c < 0) {
        iVar7 = 0x124;
        iVar19 = 1;
      }
      else {
        if (-1 < DAT_0002709c) {
          close(iVar4);
          goto LAB_00013046;
        }
        iVar7 = 0x244;
        iVar19 = 2;
      }
      (&DAT_00026e5c)[iVar19 * 0x48] = iVar4;
      *(undefined4 *)((int)&DAT_00026e5c + iVar7) = local_b88._0_4_;
      *(undefined4 *)((int)&DAT_00026e60 + iVar7) = local_b88.sa_data._2_4_;
      *(undefined4 *)((int)&DAT_00026e64 + iVar7) = local_b88.sa_data._6_4_;
      *(undefined4 *)((int)&DAT_00026e68 + iVar7) = local_b88.sa_data._10_4_;
      (&DAT_00026e70)[iVar19 * 0x48] = 0;
      (&DAT_00026f78)[iVar19 * 0x48] = 0;
      tVar13 = time((time_t *)0x0);
      *(time_t *)(iVar19 * 0x120 + 0x26e74) = tVar13 + 0x1e;
      printf("debug_server_thread: add one client, fd = %d \n",iVar4);
      goto LAB_00013046;
    }
    piVar10 = __errno_location();
    pcVar29 = strerror(*piVar10);
    printf("debug_server_thread: accept failed, err = %s\n",pcVar29);
  }
joined_r0x000132ca:
  if (DAT_00026e00 != 0) goto LAB_000130be;
  goto LAB_00012f50;
  while (pbVar27 != pbVar17) {
LAB_000133f6:
    pbVar17 = pbVar17 + 1;
    if ((9 < *pbVar17 - 0x30) && (5 < (*pbVar17 & 0xffffffdf) - 0x41)) goto LAB_0001348a;
  }
  snprintf(acStack_b50,0x28,"%s",(char *)pbVar18);
  iVar7 = GetShmConfig();
  if (iVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x135b8);
    (*pcVar1)();
  }
  if (0 < *(int *)(iVar7 + 0x1b20)) {
    pcVar28 = (char *)(iVar7 + 0x1b24);
    iVar19 = 0;
    do {
      iVar12 = strcasecmp(pcVar28,acStack_b78);
      if (((iVar12 == 0) && (iVar12 = strcasecmp(pcVar28 + 0x50,"Administrator"), iVar12 == 0)) &&
         (iVar12 = strcmp(pcVar28 + 0x70,"Enable"), iVar12 == 0)) {
        sVar8 = strlen(pcVar28 + 0x28);
        our_md5_encode(&local_a28,pcVar28 + 0x28,sVar8);
        local_a08 = 0;
        iVar12 = strcasecmp((char *)&local_a28,acStack_b50);
        if (iVar12 == 0) {
          pcVar29[0xfb] = '\0';
          pcVar29[0xfc] = '\0';
          pcVar29[0xfd] = '\0';
          pcVar29[0xfe] = '\0';
          pcVar29[-0xffffffff0000000d] = '\x01';
          pcVar29[-0xffffffff0000000c] = '\0';
          pcVar29[-0xffffffff0000000b] = '\0';
          pcVar29[-0xffffffff0000000a] = '\0';
          printf("debug_server_thread: client fd=%d auth ok\n",*(int *)(pcVar29 + -0x21));
          if (0 < *(int *)(pcVar29 + -0x21)) {
            FUN_000124e8(*(int *)(pcVar29 + -0x21),"AUTH OK\n");
          }
          goto LAB_0001309c;
        }
      }
      iVar25 = *(int *)(iVar7 + 0x1b20);
      iVar30 = iVar19 + 1;
      pcVar28 = pcVar28 + 0x78;
      bVar32 = SBORROW4(iVar30,10);
      iVar12 = iVar19 + -9;
      if (iVar30 != 10) {
        bVar32 = SBORROW4(iVar25,iVar30);
        iVar12 = iVar25 - iVar30;
      }
      iVar19 = iVar30;
    } while ((iVar30 != 10 && iVar25 != iVar30) && iVar12 < 0 == bVar32);
  }
LAB_0001348a:
  pcVar29[0xfb] = '\0';
  pcVar29[0xfc] = '\0';
  pcVar29[0xfd] = '\0';
  pcVar29[0xfe] = '\0';
LAB_0001309c:
  iVar4 = iVar4 + 1;
  pcVar29 = pcVar29 + 0x120;
  if (iVar4 == 3) goto code_r0x000130a6;
  goto LAB_0001306c;
code_r0x000130a6:
  usleep(10000);
  goto joined_r0x000132ca;
}


