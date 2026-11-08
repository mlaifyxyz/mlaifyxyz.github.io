/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 000135bc */
/* function FUN_000135bc @ 000135bc */

undefined4 FUN_000135bc(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int __fd;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  socklen_t sStack_3c;
  sockaddr local_38;
  
  if (DAT_00026e00 == 0) {
    __fd = -1;
    do {
      while ((iVar1 = access("/tmp/flag.open.slog.tcp",0), iVar1 == -1 &&
             (iVar1 = access("/mnt/nand/flag.open.slog.tcp",0), iVar1 == -1))) {
        usleep(1000000);
        if (DAT_00026e00 != 0) goto LAB_00013750;
      }
      __fd = socket(2,1,0);
      if (__fd == -1) {
        puts("debug_server_thread: create sockfd failed!");
        sleep(1);
      }
      else {
        local_38.sa_family = 2;
        local_38.sa_data[0] = '\'';
        local_38.sa_data[1] = '\x0f';
        local_54 = 1;
        local_38.sa_data[10] = '\0';
        local_38.sa_data[0xb] = '\0';
        local_38.sa_data[0xc] = '\0';
        local_38.sa_data[0xd] = '\0';
        local_38.sa_data[2] = '\0';
        local_38.sa_data[3] = '\0';
        local_38.sa_data[4] = '\0';
        local_38.sa_data[5] = '\0';
        local_38.sa_data[6] = '\0';
        local_38.sa_data[7] = '\0';
        local_38.sa_data[8] = '\0';
        local_38.sa_data[9] = '\0';
        iVar1 = setsockopt(__fd,1,2,&local_54,4);
        if (iVar1 != -1) {
          local_50 = 1;
          local_4c = 10;
          uStack_48 = 10;
          local_44 = 3;
          iVar1 = setsockopt(__fd,1,9,&local_50,4);
          if (iVar1 != -1) {
            iVar1 = getsockopt(__fd,1,9,&local_40,&sStack_3c);
            if (iVar1 == -1) {
              puts("Error when getting socket option.");
            }
            printf("SO_KEEPALIVE=%d\n",local_40);
            iVar1 = setsockopt(__fd,6,4,&local_4c,4);
            if (iVar1 == -1) {
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              pcVar4 = "debug_server_thread: setsockopt SO_KEEPIDLE failed, error=%s\n";
            }
            else {
              iVar1 = setsockopt(__fd,6,5,&uStack_48,4);
              if (iVar1 == -1) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                pcVar4 = "debug_server_thread: setsockopt SO_KEEPINTVL failed, error=%s\n";
              }
              else {
                iVar1 = setsockopt(__fd,6,6,&local_44,4);
                if (iVar1 == -1) {
                  piVar2 = __errno_location();
                  pcVar3 = strerror(*piVar2);
                  pcVar4 = "debug_server_thread: setsockopt SO_KEEPCNT failed, error=%s\n";
                }
                else {
                  iVar1 = bind(__fd,&local_38,0x10);
                  if (iVar1 == -1) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    pcVar4 = "debug_server_thread: socket bind failed, error=%s\n";
                  }
                  else {
                    puts("debug_server_thread: bind success!");
                    iVar1 = listen(__fd,3);
                    if (iVar1 != -1) {
                      DAT_00026e5c = 0xffffffff;
                      DAT_00026f7c = 0xffffffff;
                      DAT_0002709c = 0xffffffff;
                      puts("debug_server_thread: listening...");
                      FUN_00012f00(__fd);
                      close(__fd);
                      __fd = -1;
                      puts("debug_server_thread: loop break, start loop again.");
                      sleep(1);
                      goto LAB_00013714;
                    }
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    pcVar4 = "debug_server_thread: socket listen failed, error=%s\n";
                  }
                }
              }
            }
            printf(pcVar4,pcVar3);
            close(__fd);
            sleep(1);
            goto LAB_00013714;
          }
        }
        piVar2 = __errno_location();
        pcVar4 = strerror(*piVar2);
        printf("debug_server_thread: setsockopt SO_REUSEADDR failed, error=%s\n",pcVar4);
        close(__fd);
        sleep(1);
      }
LAB_00013714:
    } while (DAT_00026e00 == 0);
LAB_00013750:
    if (0 < __fd) {
      close(__fd);
      return 0;
    }
  }
  return 0;
}


