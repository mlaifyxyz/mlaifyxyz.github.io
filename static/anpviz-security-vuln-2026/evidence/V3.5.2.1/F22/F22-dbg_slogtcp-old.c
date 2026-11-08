/* dbg_server (3c9ef9d3079c780df658c2687a569e97ce294bcec4b2ac6a85fbab57be0f6079), Ghidra 12.2 headless; requested 00012980 */
/* function FUN_00012980 @ 00012980 */

undefined4 FUN_00012980(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ssize_t sVar4;
  int iVar5;
  size_t __n;
  size_t sVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  __fd_mask *p_Var14;
  uint *puVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar22;
  byte *pbVar21;
  uint __fd;
  uint uVar23;
  uint *local_ba4;
  char *local_b90;
  undefined4 local_b80;
  socklen_t local_b7c;
  undefined4 local_b78;
  undefined4 local_b74;
  undefined4 uStack_b70;
  undefined4 local_b6c;
  int local_b68;
  socklen_t sStack_b64;
  timeval local_b60;
  sockaddr local_b58;
  sockaddr local_b48;
  fd_set local_b38;
  fd_set local_ab8;
  uint local_a38;
  undefined1 auStack_a34 [508];
  byte abStack_838 [1024];
  char acStack_438 [1028];
  
  if (DAT_00025dd8 != 0) {
    return 0;
  }
  __fd = 0xffffffff;
  do {
    while ((iVar2 = access("/tmp/flag.open.slog.tcp",0), iVar2 == -1 &&
           (iVar2 = access("/mnt/nand/flag.open.slog.tcp",0), iVar2 == -1))) {
      usleep(1000000);
      if (DAT_00025dd8 != 0) {
        if ((int)__fd < 1) {
          return 0;
        }
LAB_00012e70:
        close(__fd);
        return 0;
      }
    }
    __fd = socket(2,1,0);
    if (__fd == 0xffffffff) {
      puts("debug_server_thread: create sockfd failed!");
      sleep(1);
    }
    else {
      local_b58.sa_family = 2;
      local_b58.sa_data[0] = '\'';
      local_b58.sa_data[1] = '\x0f';
      local_b80 = 1;
      local_b58.sa_data[2] = '\0';
      local_b58.sa_data[3] = '\0';
      local_b58.sa_data[4] = '\0';
      local_b58.sa_data[5] = '\0';
      local_b58.sa_data[6] = '\0';
      local_b58.sa_data[7] = '\0';
      local_b58.sa_data[8] = '\0';
      local_b58.sa_data[9] = '\0';
      local_b58.sa_data[10] = '\0';
      local_b58.sa_data[0xb] = '\0';
      local_b58.sa_data[0xc] = '\0';
      local_b58.sa_data[0xd] = '\0';
      iVar2 = setsockopt(__fd,1,2,&local_b80,4);
      if (iVar2 != -1) {
        local_b78 = 1;
        local_b74 = 10;
        uStack_b70 = 10;
        local_b6c = 3;
        iVar2 = setsockopt(__fd,1,9,&local_b78,4);
        if (iVar2 != -1) {
          iVar2 = getsockopt(__fd,1,9,&local_b68,&sStack_b64);
          if (iVar2 == -1) {
            puts("Error when getting socket option.");
          }
          printf("SO_KEEPALIVE=%d\n",local_b68);
          iVar2 = setsockopt(__fd,6,4,&local_b74,4);
          if (iVar2 == -1) {
            piVar7 = __errno_location();
            pcVar8 = strerror(*piVar7);
            pcVar9 = "debug_server_thread: setsockopt SO_KEEPIDLE failed, error=%s\n";
          }
          else {
            iVar2 = setsockopt(__fd,6,5,&uStack_b70,4);
            if (iVar2 == -1) {
              piVar7 = __errno_location();
              pcVar8 = strerror(*piVar7);
              pcVar9 = "debug_server_thread: setsockopt SO_KEEPINTVL failed, error=%s\n";
            }
            else {
              iVar2 = setsockopt(__fd,6,6,&local_b6c,4);
              if (iVar2 == -1) {
                piVar7 = __errno_location();
                pcVar8 = strerror(*piVar7);
                pcVar9 = "debug_server_thread: setsockopt SO_KEEPCNT failed, error=%s\n";
              }
              else {
                iVar2 = bind(__fd,&local_b58,0x10);
                if (iVar2 == -1) {
                  piVar7 = __errno_location();
                  pcVar8 = strerror(*piVar7);
                  pcVar9 = "debug_server_thread: socket bind failed, error=%s\n";
                }
                else {
                  puts("debug_server_thread: bind success!");
                  iVar2 = listen(__fd,3);
                  if (iVar2 != -1) {
                    DAT_00025e34 = -1;
                    DAT_00025e48 = -1;
                    DAT_00025e5c = -1;
                    puts("debug_server_thread: listening...");
                    puVar19 = DAT_00012d88;
                    uVar18 = DAT_00025dd8;
                    if (DAT_00025dd8 == 0) {
                      uVar11 = 1 << (__fd & 0x1f);
                      uVar13 = __fd >> 5;
                      local_ba4 = DAT_00012d88;
                      do {
                        while( true ) {
                          puVar20 = DAT_00012d8c;
                          pcVar9 = local_b48.sa_data + 10;
                          local_b60.tv_sec = 2;
                          do {
                            pcVar9 = pcVar9 + 4;
                            pcVar9[0] = '\0';
                            pcVar9[1] = '\0';
                            pcVar9[2] = '\0';
                            pcVar9[3] = '\0';
                          } while ((__fd_mask *)pcVar9 != local_b38.fds_bits + 0x1f);
                          p_Var14 = local_b38.fds_bits + 0x1f;
                          do {
                            p_Var14 = p_Var14 + 1;
                            *p_Var14 = 0;
                          } while (p_Var14 != local_ab8.fds_bits + 0x1f);
                          local_b38.fds_bits[uVar13] = local_b38.fds_bits[uVar13] | uVar11;
                          uVar3 = __fd;
                          puVar15 = DAT_00012d8c;
                          do {
                            uVar23 = *puVar15;
                            puVar15 = puVar15 + 5;
                            uVar10 = uVar23 >> 5;
                            uVar12 = 1 << (uVar23 & 0x1f);
                            if (0 < (int)uVar23) {
                              if ((int)uVar3 < (int)uVar23) {
                                uVar3 = uVar23;
                              }
                              uVar23 = local_ab8.fds_bits[uVar10];
                              local_b38.fds_bits[uVar10] = local_b38.fds_bits[uVar10] | uVar12;
                              local_ab8.fds_bits[uVar10] = uVar12 | uVar23;
                            }
                          } while (puVar19 != puVar15);
                          local_b60.tv_usec = uVar18;
                          iVar2 = select(uVar3 + 1,&local_b38,&local_ab8,(fd_set *)0x0,&local_b60);
                          if (-1 < iVar2) break;
                          piVar7 = __errno_location();
                          if (*piVar7 != 4) {
                            pcVar9 = strerror(*piVar7);
                            printf("debug_server_thread: select failed, err=%s\n",pcVar9);
                            goto LAB_00012d04;
                          }
                          sleep(1);
joined_r0x00012c46:
                          if (DAT_00025dd8 != 0) goto LAB_00012d04;
                        }
                        if (iVar2 == 0) goto joined_r0x00012c46;
                        if ((uVar11 & local_b38.fds_bits[uVar13]) == 0) {
LAB_00012bda:
                          iVar2 = 0;
                          local_b90 = "debug_server_thread: send failed,err=%s\n";
                          do {
                            uVar3 = *puVar20;
                            if (0 < (int)uVar3) {
                              if ((local_b38.fds_bits[uVar3 >> 5] >> (uVar3 & 0x1f)) << 0x1f < 0) {
                                sVar4 = recv(uVar3,abStack_838,0x400,0);
                                if (sVar4 == 0) {
                                  puts("debug_server_thread: recv=0");
                                  close(*puVar20);
                                  *puVar20 = 0xffffffff;
                                }
                                else {
                                  if (-1 < sVar4) {
                                    pbVar17 = abStack_838 + sVar4;
                                    local_a38 = uVar18;
                                    memset(auStack_a34,0,0x1fc);
                                    if (abStack_838 < pbVar17) {
                                      iVar16 = 0;
                                      pbVar22 = abStack_838;
                                      do {
                                        pbVar21 = pbVar22 + 1;
                                        bVar1 = *pbVar22;
                                        iVar5 = isprint((uint)bVar1);
                                        if (iVar5 == 0) {
                                          if ((char)local_a38 != '\0') {
                                            printf("cmd: %s\n",(char *)&local_a38);
                                            if ((local_a38 & 0xff) != 0) {
                                              FUN_00012930(&local_a38);
                                              uVar3 = *puVar20;
                                              goto LAB_00012e00;
                                            }
                                            break;
                                          }
                                        }
                                        else if (iVar16 < 0x1ff) {
                                          *(byte *)((int)(&local_ab8)[1].fds_bits + iVar16) = bVar1;
                                          iVar16 = iVar16 + 1;
                                        }
                                        pbVar22 = pbVar21;
                                      } while (pbVar17 != pbVar21);
                                    }
                                    uVar3 = *puVar20;
LAB_00012e00:
                                    iVar16 = local_ab8.fds_bits[uVar3 >> 5] >> (uVar3 & 0x1f);
                                    goto joined_r0x00012e08;
                                  }
                                  piVar7 = __errno_location();
                                  uVar3 = *puVar20;
                                  iVar16 = *piVar7;
                                  pcVar9 = strerror(iVar16);
                                  printf("debug_server: socket %d recv failed,err=%d(%s)\n",uVar3,
                                         iVar16,pcVar9);
                                  if (*piVar7 == 4 || *piVar7 == 0xb) goto LAB_00012c26;
                                  pcVar8 = (char *)*puVar20;
                                  pcVar9 = "debug_server: socket %d closed\n";
LAB_00012e48:
                                  printf(pcVar9,pcVar8);
                                  close(*puVar20);
                                  *puVar20 = 0xffffffff;
                                }
                              }
                              else {
                                iVar16 = local_ab8.fds_bits[uVar3 >> 5] >> (uVar3 & 0x1f);
joined_r0x00012e08:
                                if ((iVar16 << 0x1f < 0) &&
                                   (iVar16 = FUN_00012720(iVar2,acStack_438), 0 < iVar16)) {
                                  __n = strlen(acStack_438);
                                  sVar6 = send(*puVar20,acStack_438,__n,0);
                                  if (__n != sVar6) {
                                    piVar7 = __errno_location();
                                    pcVar8 = strerror(*piVar7);
                                    pcVar9 = local_b90;
                                    goto LAB_00012e48;
                                  }
                                }
                              }
                            }
LAB_00012c26:
                            iVar2 = iVar2 + 1;
                            puVar20 = puVar20 + 5;
                          } while (iVar2 != 3);
                          usleep(10000);
                          goto joined_r0x00012c46;
                        }
                        local_b7c = 0x10;
                        iVar2 = accept(__fd,&local_b48,&local_b7c);
                        if (-1 < iVar2) {
                          if (DAT_00025e34 < 0) {
                            iVar5 = 0;
                            iVar16 = 4;
                          }
                          else if (DAT_00025e48 < 0) {
                            iVar16 = 0x18;
                            iVar5 = 1;
                          }
                          else {
                            if (-1 < DAT_00025e5c) {
                              close(iVar2);
                              goto LAB_00012bda;
                            }
                            iVar16 = 0x2c;
                            iVar5 = 2;
                          }
                          (&DAT_00025e34)[iVar5 * 5] = iVar2;
                          *(undefined4 *)((int)&DAT_00025e34 + iVar16) = local_b48._0_4_;
                          *(undefined4 *)((int)&DAT_00025e38 + iVar16) = local_b48.sa_data._2_4_;
                          *(undefined4 *)((int)&DAT_00025e3c + iVar16) = local_b48.sa_data._6_4_;
                          *(undefined4 *)((int)&DAT_00025e40 + iVar16) = local_b48.sa_data._10_4_;
                          printf("debug_server_thread: add one client, fd = %d \n",iVar2);
                          goto LAB_00012bda;
                        }
                        piVar7 = __errno_location();
                        pcVar9 = strerror(*piVar7);
                        printf("debug_server_thread: accept failed, err = %s\n",pcVar9);
                      } while (DAT_00025dd8 == 0);
                    }
                    else {
                      local_ba4 = DAT_00012fb8;
                    }
LAB_00012d04:
                    puVar19 = DAT_00012d8c;
                    do {
                      if (0 < (int)*puVar19) {
                        close(*puVar19);
                        *puVar19 = 0xffffffff;
                      }
                      puVar19 = puVar19 + 5;
                    } while (local_ba4 != puVar19);
                    close(__fd);
                    puts("debug_server_thread: loop break, start loop again.");
                    sleep(1);
                    __fd = 0xffffffff;
                    goto LAB_00012cb8;
                  }
                  piVar7 = __errno_location();
                  pcVar8 = strerror(*piVar7);
                  pcVar9 = "debug_server_thread: socket listen failed, error=%s\n";
                }
              }
            }
          }
          printf(pcVar9,pcVar8);
          close(__fd);
          sleep(1);
          goto LAB_00012cb8;
        }
      }
      piVar7 = __errno_location();
      pcVar9 = strerror(*piVar7);
      printf("debug_server_thread: setsockopt SO_REUSEADDR failed, error=%s\n",pcVar9);
      close(__fd);
      sleep(1);
    }
LAB_00012cb8:
  } while (DAT_00025dd8 == 0);
  if ((int)__fd < 1) {
    return 0;
  }
  goto LAB_00012e70;
}


