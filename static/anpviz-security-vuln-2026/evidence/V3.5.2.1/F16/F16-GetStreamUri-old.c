/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 0006cb04 */
/* function FUN_0006cb04 @ 0006cb04 */

undefined4 FUN_0006cb04(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  int param8;
  int iVar7;
  uint param5;
  char *pcVar8;
  uint param4;
  char *pcVar9;
  uint param3;
  uint local_dd8;
  undefined1 auStack_dd4 [252];
  uint local_cd8;
  undefined1 auStack_cd4 [252];
  undefined1 auStack_bd8 [4];
  int local_bd4;
  char local_8dc [944];
  char acStack_52c [40];
  char acStack_504 [40];
  int local_4dc [21];
  char acStack_488 [1124];
  
  iVar1 = FUN_0001910c();
  param8 = 0;
  uVar2 = get_my_ipaddr();
  local_8dc[0] = '\0';
  local_8dc[1] = '\0';
  local_8dc[2] = '\0';
  local_8dc[3] = '\0';
  memset(local_8dc + 4,0,0x3fc);
  DebugPrint(8,7,"[%s:%u]ProfileToken:%s\n\n","__trt2__GetStreamUri",0x5ec7,
             *(undefined4 *)(param_2 + 4));
  iVar7 = *(int *)(iVar1 + 4);
  if (iVar7 != 0) {
    pcVar9 = *(char **)(param_2 + 4);
    pcVar4 = (char *)(iVar1 + 0x1920);
    do {
      iVar3 = strcmp(pcVar9,pcVar4);
      if (iVar3 == 0) {
        local_dd8 = 0;
        memset(auStack_dd4,0,0xfc);
        local_cd8 = 0;
        memset(auStack_cd4,0,0xfc);
        iVar7 = MsgGetMediaStreamConfig(auStack_bd8);
        if ((((iVar7 != 0) || (local_bd4 == 0)) || (iVar7 = MsgGetUserConfig(local_4dc), iVar7 != 0)
            ) || (local_4dc[0] < 1)) goto LAB_0006cbb4;
        pcVar4 = acStack_488;
        iVar7 = 0;
        goto LAB_0006ccf6;
      }
      param8 = param8 + 1;
      pcVar4 = pcVar4 + 0x2e50;
    } while (param8 != iVar7);
  }
  FUN_0004982c(param_1,"ter:InvalidArgVal","ter:NoProfile");
  return 0xc;
  while (iVar7 != local_4dc[0]) {
LAB_0006ccf6:
    iVar3 = strcmp(pcVar4,"Administrator");
    pcVar8 = pcVar4 + (-0x54 - (int)local_4dc);
    iVar7 = iVar7 + 1;
    pcVar9 = pcVar4 + 0x20;
    pcVar4 = pcVar4 + 0x78;
    if ((iVar3 == 0) && (iVar3 = strcmp(pcVar9,"Enable"), iVar3 == 0)) {
      strcpy((char *)&local_dd8,pcVar8 + (int)(local_4dc + 1));
      pcVar8 = pcVar8 + (int)(local_4dc + 0xb);
      sVar5 = strlen(pcVar8);
      our_md5_encode(&local_cd8,pcVar8,sVar5);
      DebugPrint(8,7,"[%s:%u]%s:%s:%s\n\n","__trt2__GetStreamUri",0x5eeb,&local_dd8,pcVar8,
                 &local_cd8);
      break;
    }
  }
LAB_0006cbb4:
  param3 = uVar2 & 0xff;
  param4 = (uVar2 & 0xffff) >> 8;
  param5 = (uVar2 & 0xffffff) >> 0x10;
  uVar6 = local_dd8 & 0xff;
  uVar2 = uVar2 >> 0x18;
  if (g_stereo == 0) {
    if ((uVar6 == 0) || ((local_cd8 & 0xff) == 0)) {
      iVar1 = FUN_0001743c();
      sprintf(local_8dc,"rtsp://%d.%d.%d.%d:%d/stream%d",param3,param4,param5,uVar2,iVar1,param8);
    }
    else {
      iVar1 = FUN_0001743c();
      snprintf(local_8dc,0x400,"rtsp://%d.%d.%d.%d:%d/stream%d?username=%s&password=%s",param3,
               param4,param5,uVar2,iVar1,param8,(char *)&local_dd8,(char *)&local_cd8);
    }
    goto LAB_0006cc3c;
  }
  if (*(int *)("g_Yen_Ys_old" + iVar1 + 0xb) == 0) {
    if (1 < param8) {
      param8 = param8 + -2;
      if (uVar6 != 0) goto LAB_0006cc88;
      goto LAB_0006cc90;
    }
LAB_0006cbe4:
    if ((uVar6 == 0) || ((char)local_cd8 == '\0')) {
      sprintf(local_8dc,"rtsp://%d.%d.%d.%d/ch02/stream%d",param3,param4,param5,uVar2,param8);
      goto LAB_0006cc3c;
    }
    pcVar4 = "rtsp://%d.%d.%d.%d/ch02/stream%d?username=%s&password=%s";
  }
  else {
    if (param8 < 3) goto LAB_0006cbe4;
    param8 = param8 + -3;
    if (uVar6 == 0) {
LAB_0006cc90:
      sprintf(local_8dc,"rtsp://%d.%d.%d.%d/ch01/stream%d",param3,param4,param5,uVar2,param8);
      goto LAB_0006cc3c;
    }
LAB_0006cc88:
    if ((char)local_cd8 == '\0') goto LAB_0006cc90;
    pcVar4 = "rtsp://%d.%d.%d.%d/ch01/stream%d?username=%s&password=%s";
  }
  snprintf(local_8dc,0x400,pcVar4,param3,param4,param5,uVar2,param8,&local_dd8,&local_cd8);
LAB_0006cc3c:
  DebugPrint(8,7,"[%s:%u]rtsp url: %s \n\n","__trt2__GetStreamUri",0x5f32,local_8dc);
  pcVar4 = (char *)FUN_000205e8(param_1,0x400);
  *param_3 = pcVar4;
  strcpy(pcVar4,local_8dc);
  return 0;
}


