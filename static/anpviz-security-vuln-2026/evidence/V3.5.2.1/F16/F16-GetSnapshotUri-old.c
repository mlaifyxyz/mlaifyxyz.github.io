/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 0006cf34 */
/* function FUN_0006cf34 @ 0006cf34 */

undefined4 FUN_0006cf34(short *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int local_6fc;
  undefined4 local_6e4;
  uint3 local_6e0;
  undefined1 local_6dd;
  char local_6dc [256];
  char local_5dc [176];
  char acStack_52c [40];
  char acStack_504 [40];
  int local_4dc [21];
  char acStack_488 [1124];
  
  iVar1 = FUN_0001910c();
  uVar2 = get_my_ipaddr();
  *(undefined **)(param_1 + 0x30) = &DAT_001a2fdc;
  local_6dc[0] = '\0';
  local_6dc[1] = '\0';
  local_6dc[2] = '\0';
  local_6dc[3] = '\0';
  memset(local_6dc + 4,0,0xfc);
  local_5dc[0] = '\0';
  local_5dc[1] = '\0';
  local_5dc[2] = '\0';
  local_5dc[3] = '\0';
  memset(local_5dc + 4,0,0xfc);
  local_6dd = 0;
  local_6e4 = *DAT_0006d204;
  local_6e0 = (uint3)(byte)DAT_0006d204[1];
  local_6fc = FUN_00017380();
  if ((*param_1 == 1) && (g_https_support != 0)) {
    local_6fc = 0x1bb;
    local_6e4 = DAT_001b0630;
    local_6e0 = CONCAT12(local_6e0._2_1_,(short)DAT_001b0634);
  }
  if ((g_onvif_auth_enable != 0 || is_Y_Version != 0) || g_snapshot_req != 0) {
    iVar3 = MsgGetUserConfig(local_4dc);
    if ((iVar3 == 0) && (0 < local_4dc[0])) {
      iVar3 = -(int)local_4dc;
      iVar8 = 0;
      pcVar5 = acStack_488;
      do {
        iVar4 = strcmp(pcVar5,"Administrator");
        iVar8 = iVar8 + 1;
        if ((iVar4 == 0) && (iVar4 = strcmp(pcVar5 + 0x20,"Enable"), iVar4 == 0)) {
          pcVar11 = (char *)((int)local_4dc + (int)(pcVar5 + iVar3 + -0x28));
          strcpy(local_6dc,pcVar5 + iVar3 + -0x50 + (int)local_4dc);
          sVar7 = strlen(pcVar11);
          our_md5_encode(local_5dc,pcVar11,sVar7);
          DebugPrint(8,7,"[%s:%u]MsgGetUserConfig username=%s, password=%s, md5 password=%s\n\n",
                     "__trt2__GetSnapshotUri",0x5f92,local_6dc,pcVar11,local_5dc);
          break;
        }
        pcVar5 = pcVar5 + 0x78;
      } while (iVar8 != local_4dc[0]);
    }
  }
  if (*param_2 == 0) {
    uVar10 = (uVar2 & 0xffff) >> 8;
    uVar9 = (uVar2 & 0xffffff) >> 0x10;
    if ((local_6dc[0] == '\0') || (local_5dc[0] == '\0')) {
      sprintf((char *)local_4dc,"%s://%d.%d.%d.%d:%d/cgi-bin/snapshot.cgi",(char *)&local_6e4,
              uVar2 & 0xff,uVar10,uVar9,uVar2 >> 0x18,local_6fc);
    }
    else {
      sprintf((char *)local_4dc,"%s://%d.%d.%d.%d:%d/cgi-bin/snapshot.cgi&username=%s&password=%s",
              (char *)&local_6e4,uVar2 & 0xff,uVar10,uVar9,uVar2 >> 0x18,local_6fc,local_6dc,
              local_5dc);
    }
LAB_0006d0ca:
    pcVar5 = (char *)FUN_000205e8(param_1,0x400);
    *param_3 = pcVar5;
    strcpy(pcVar5,(char *)local_4dc);
    uVar6 = 0;
  }
  else {
    DebugPrint(8,7,"[%s:%u]trt__GetSnapshotUri profile: %s\n\n","__trt2__GetSnapshotUri",0x5fa9,
               *param_2);
    iVar3 = *(int *)(iVar1 + 4);
    if (iVar3 != 0) {
      iVar8 = 0;
      pcVar11 = (char *)*param_2;
      pcVar5 = (char *)(iVar1 + 0x1920);
      do {
        iVar1 = strcmp(pcVar11,pcVar5);
        if (iVar1 == 0) {
          if (iVar8 == 0) {
            iVar1 = 1;
          }
          else {
            iVar1 = 2;
          }
          if (g_snap_order != 0) {
            iVar1 = iVar1 + -1;
          }
          uVar9 = (uVar2 & 0xffff) >> 8;
          uVar10 = (uVar2 & 0xffffff) >> 0x10;
          if ((local_6dc[0] == '\0') || (local_5dc[0] == '\0')) {
            sprintf((char *)local_4dc,"%s://%d.%d.%d.%d:%d/cgi-bin/snapshot.cgi?stream=%d",
                    (char *)&local_6e4,uVar2 & 0xff,uVar9,uVar10,uVar2 >> 0x18,local_6fc,iVar1);
          }
          else {
            sprintf((char *)local_4dc,
                    "%s://%d.%d.%d.%d:%d/cgi-bin/snapshot.cgi?stream=%d&username=%s&password=%s",
                    (char *)&local_6e4,uVar2 & 0xff,uVar9,uVar10,uVar2 >> 0x18,local_6fc,iVar1,
                    local_6dc,local_5dc);
          }
          goto LAB_0006d0ca;
        }
        iVar8 = iVar8 + 1;
        pcVar5 = pcVar5 + 0x2e50;
      } while (iVar8 != iVar3);
    }
    FUN_0004982c(param_1,"ter:InvalidArgVal","ter:NoProfile");
    uVar6 = 0xc;
  }
  return uVar6;
}


