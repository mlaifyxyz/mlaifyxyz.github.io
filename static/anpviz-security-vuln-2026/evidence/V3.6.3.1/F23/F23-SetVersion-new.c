/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 000128cc */
/* function cmd_SetVersion @ 000128cc */

int cmd_SetVersion(char *param_1,size_t param_2,size_t param_3)

{
  int iVar1;
  undefined4 *unaff_r4;
  undefined8 uVar2;
  undefined4 uStack_250;
  sockaddr sStack_24c;
  char acStack_23c [256];
  undefined4 uStack_13c;
  time_t tStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char acStack_128 [224];
  char acStack_48 [36];
  undefined4 uStack_c;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 == '\0') {
    fwrite("/tmp/firmware_version",param_2,param_3,(FILE *)0x0);
    fwrite("debug enter loop\r\n",1,0x12,(FILE *)*unaff_r4);
    iVar1 = FUN_00013be4();
    return iVar1;
  }
  uVar2 = func_0x00012560();
  uStack_c = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    iVar1 = snprintf(acStack_48,0x40,"%s\n",param_1);
    if (0 < iVar1) {
      iVar1 = write_buffer_to_file("/tmp/firmware_version",acStack_48);
    }
    return iVar1;
  }
  vsnprintf(acStack_23c,0xff,"SetVersion: invalid version string rejected\n",&uStack_c);
  uStack_13c = 0x77777000;
  tStack_138 = time((time_t *)0x0);
  uStack_130 = 0;
  uStack_12c = 7;
  uStack_134 = 0x12;
  strncpy(acStack_128,acStack_23c,0xff);
  if (DAT_00026194 == -1) {
    sStack_24c.sa_data[2] = '\0';
    sStack_24c.sa_data[3] = '\0';
    sStack_24c.sa_data[4] = '\0';
    sStack_24c.sa_data[5] = '\0';
    sStack_24c.sa_data[6] = '\0';
    sStack_24c.sa_data[7] = '\0';
    sStack_24c.sa_data[8] = '\0';
    sStack_24c.sa_data[9] = '\0';
    sStack_24c.sa_data[10] = '\0';
    sStack_24c.sa_data[0xb] = '\0';
    sStack_24c.sa_data[0xc] = '\0';
    sStack_24c.sa_data[0xd] = '\0';
    sStack_24c.sa_family = 2;
    sStack_24c.sa_data[0] = '\0';
    sStack_24c.sa_data[1] = '\0';
    DAT_00026194 = socket(2,2,0);
    if (DAT_00026194 == -1) {
      puts("Create Udp Send Socket error.");
      return -1;
    }
    iVar1 = bind(DAT_00026194,&sStack_24c,0x10);
    if (iVar1 != 0) {
      puts("BIND local address error.");
      return -1;
    }
    uStack_250 = 0x2800;
    iVar1 = setsockopt(DAT_00026194,1,7,&uStack_250,4);
    if (iVar1 < 0) {
      puts("set send buffer error");
      return -1;
    }
  }
  sStack_24c.sa_data[2] = '\0';
  sStack_24c.sa_data[3] = '\0';
  sStack_24c.sa_data[4] = '\0';
  sStack_24c.sa_data[5] = '\0';
  sStack_24c.sa_data[6] = '\0';
  sStack_24c.sa_data[7] = '\0';
  sStack_24c.sa_data[8] = '\0';
  sStack_24c.sa_data[9] = '\0';
  sStack_24c.sa_data[10] = '\0';
  sStack_24c.sa_data[0xb] = '\0';
  sStack_24c.sa_data[0xc] = '\0';
  sStack_24c.sa_data[0xd] = '\0';
  sStack_24c.sa_family = 2;
  sStack_24c.sa_data[0] = '\0';
  sStack_24c.sa_data[1] = '\0';
  sStack_24c.sa_data._2_4_ = inet_addr("127.0.0.1");
  sStack_24c.sa_data[0] = '\'';
  sStack_24c.sa_data[1] = '\x0f';
  sendto(DAT_00026194,&uStack_13c,0x114,0,&sStack_24c,0x10);
  return 0;
}


