/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 000680a4 */
/* function FUN_000680a4 @ 000680a4 */

undefined4 FUN_000680a4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  size_t sVar6;
  uint uVar7;
  uint param3;
  char *pcVar8;
  int param8;
  int iVar9;
  uint param5;
  char *pcVar10;
  uint param4;
  char *pcVar11;
  uint local_de0;
  undefined1 auStack_ddc [252];
  uint local_ce0;
  undefined1 auStack_cdc [252];
  undefined1 auStack_be0 [4];
  int local_bdc;
  char local_8e4 [944];
  char acStack_534 [40];
  char acStack_50c [40];
  int local_4e4 [21];
  char acStack_490 [1124];
  
  param8 = 0;
  iVar1 = FUN_0001910c();
  uVar2 = get_my_ipaddr();
  local_8e4[0] = '\0';
  local_8e4[1] = '\0';
  local_8e4[2] = '\0';
  local_8e4[3] = '\0';
  memset(local_8e4 + 4,0,0x3fc);
  DebugPrint(8,7,"[%s:%u]ProfileToken:%s\n\n","__trt__GetStreamUri",0x52f2,param_2[1]);
  iVar9 = *(int *)(iVar1 + 4);
  if (iVar9 != 0) {
    pcVar11 = (char *)param_2[1];
    pcVar8 = (char *)(iVar1 + 0x1920);
    do {
      iVar3 = strcmp(pcVar11,pcVar8);
      if (iVar3 == 0) {
        local_de0 = 0;
        memset(auStack_ddc,0,0xfc);
        local_ce0 = 0;
        memset(auStack_cdc,0,0xfc);
        iVar9 = MsgGetMediaStreamConfig(auStack_be0);
        if ((((iVar9 != 0) || (local_bdc == 0)) || (iVar9 = MsgGetUserConfig(local_4e4), iVar9 != 0)
            ) || (local_4e4[0] < 1)) goto LAB_00068156;
        pcVar8 = acStack_490;
        iVar9 = 0;
        goto LAB_000682d6;
      }
      param8 = param8 + 1;
      pcVar8 = pcVar8 + 0x2e50;
    } while (param8 != iVar9);
  }
  FUN_0004982c(param_1,"ter:InvalidArgVal","ter:NoProfile");
  return 0xc;
  while (iVar9 != local_4e4[0]) {
LAB_000682d6:
    iVar3 = strcmp(pcVar8,"Administrator");
    pcVar10 = pcVar8 + (-0x54 - (int)local_4e4);
    iVar9 = iVar9 + 1;
    pcVar11 = pcVar8 + 0x20;
    pcVar8 = pcVar8 + 0x78;
    if ((iVar3 == 0) && (iVar3 = strcmp(pcVar11,"Enable"), iVar3 == 0)) {
      strcpy((char *)&local_de0,pcVar10 + (int)(local_4e4 + 1));
      pcVar10 = pcVar10 + (int)(local_4e4 + 0xb);
      sVar6 = strlen(pcVar10);
      our_md5_encode(&local_ce0,pcVar10,sVar6);
      DebugPrint(8,7,"[%s:%u]%s:%s:%s\n\n","__trt__GetStreamUri",0x5316,&local_de0,pcVar10,
                 &local_ce0);
      break;
    }
  }
LAB_00068156:
  uVar7 = local_de0 & 0xff;
  param3 = uVar2 & 0xff;
  param4 = (uVar2 & 0xffff) >> 8;
  param5 = (uVar2 & 0xffffff) >> 0x10;
  uVar2 = uVar2 >> 0x18;
  if (g_stereo == 0) {
    if ((uVar7 == 0) || ((local_ce0 & 0xff) == 0)) {
      iVar1 = FUN_0001743c();
      sprintf(local_8e4,"rtsp://%d.%d.%d.%d:%d/stream%d",param3,param4,param5,uVar2,iVar1,param8);
    }
    else {
      iVar1 = FUN_0001743c();
      snprintf(local_8e4,0x400,"rtsp://%d.%d.%d.%d:%d/stream%d?username=%s&password=%s",param3,
               param4,param5,uVar2,iVar1,param8,(char *)&local_de0,(char *)&local_ce0);
    }
    goto LAB_000681de;
  }
  if (*(int *)("g_Yen_Ys_old" + iVar1 + 0xb) == 0) {
    if (1 < param8) {
      param8 = param8 + -2;
      if (uVar7 != 0) goto LAB_0006826c;
      goto LAB_00068274;
    }
LAB_0006818a:
    if ((uVar7 == 0) || ((char)local_ce0 == '\0')) {
      sprintf(local_8e4,"rtsp://%d.%d.%d.%d/ch02/stream%d",param3,param4,param5,uVar2,param8);
      goto LAB_000681de;
    }
    pcVar8 = "rtsp://%d.%d.%d.%d/ch02/stream%d?username=%s&password=%s";
  }
  else {
    if (param8 < 3) goto LAB_0006818a;
    param8 = param8 + -3;
    if (uVar7 == 0) {
LAB_00068274:
      sprintf(local_8e4,"rtsp://%d.%d.%d.%d/ch01/stream%d",param3,param4,param5,uVar2,param8);
      goto LAB_000681de;
    }
LAB_0006826c:
    if ((char)local_ce0 == '\0') goto LAB_00068274;
    pcVar8 = "rtsp://%d.%d.%d.%d/ch01/stream%d?username=%s&password=%s";
  }
  snprintf(local_8e4,0x400,pcVar8,param3,param4,param5,uVar2,param8,&local_de0,&local_ce0);
LAB_000681de:
  DebugPrint(8,7,"[%s:%u]rtsp url: %s \n\n","__trt__GetStreamUri",0x535d,local_8e4);
  if (((int *)*param_2 == (int *)0x0) || (*(int *)*param_2 != 1)) {
    puVar4 = (undefined4 *)FUN_000205e8(param_1,0x28);
    *param_3 = (int)puVar4;
    uVar5 = FUN_000205e8(param_1,0x400);
    *puVar4 = uVar5;
    strcpy(*(char **)*param_3,local_8e4);
    uVar5 = 0;
    *(undefined4 *)(*param_3 + 4) = 0;
    *(undefined4 *)(*param_3 + 8) = 0;
    iVar1 = *param_3;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  else {
    FUN_0004982c(param_1,"ter:InvalidArgVal","ter:InvalidStreamSetup");
    uVar5 = 0xc;
  }
  return uVar5;
}


