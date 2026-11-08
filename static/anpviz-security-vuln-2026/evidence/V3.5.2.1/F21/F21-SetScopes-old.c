/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 00054f18 */
/* function FUN_00054f18 @ 00054f18 */

undefined4 FUN_00054f18(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_15b8;
  int local_15b4;
  byte local_15a8;
  byte local_15a7;
  byte local_15a6;
  byte local_15a5;
  byte local_15a4;
  byte local_15a3;
  char acStack_15a0 [300];
  char acStack_1474 [500];
  char acStack_1280 [600];
  char acStack_1028 [1024];
  char acStack_c28 [1024];
  char acStack_828 [2052];
  
  iVar1 = FUN_0001910c();
  FUN_0001b100(&local_15a8);
  sprintf(acStack_1028,"1419d68a-1dd2-11b2-a105-%02X%02X%02X%02X%02X%02X",(uint)local_15a8,
          (uint)local_15a7,(uint)local_15a6,(uint)local_15a5,(uint)local_15a4,(uint)local_15a3);
  snprintf(acStack_828,0x800,"onvif://www.onvif.org/hardware/%s",acStack_1028);
  snprintf(acStack_c28,0x400,"onvif://www.onvif.org/name/%s",(char *)(iVar1 + 0x13fa));
  memset(acStack_1474,0,500);
  memset(acStack_15a0,0,300);
  memset(acStack_1280,0,600);
  iVar4 = *param_2;
  if (iVar4 < 1) {
    DebugPrint(8,7,"[%s:%u]user def scope cnt :%d\n\n","__tds__SetScopes",0x1b1a,0);
    memcpy("MsgGetVideoCoverAlarm" + iVar1 + 0xc,acStack_1280,600);
    DebugPrint(8,7,"[%s:%u]location scope cnt :%d\n\n","__tds__SetScopes",0x1b22,0);
    memcpy("MsgGetVideoCaptureConfig" + iVar1 + 0xb,acStack_15a0,300);
    DebugPrint(8,7,"[%s:%u]type scope cnt :%d\n\n","__tds__SetScopes",0x1b2a,0);
  }
  else {
    iVar7 = param_2[1];
    iVar5 = 0;
    iVar8 = 0;
    local_15b4 = 0;
    local_15b8 = 0;
LAB_0005500e:
    do {
      DebugPrint(8,7,"[%s:%u]scope :%s\n\n","__tds__SetScopes",0x1ace,
                 *(undefined4 *)(iVar7 + iVar5 * 4));
      iVar7 = param_2[1];
      pcVar9 = *(char **)(iVar7 + iVar5 * 4);
      iVar2 = strncmp(pcVar9,"onvif://www.onvif.org/location",0x1e);
      if (iVar2 == 0) {
        if (2 < iVar8) goto LAB_0005520c;
        strcpy(acStack_15a0 + iVar8 * 100,pcVar9);
        iVar8 = iVar8 + 1;
      }
      else {
        iVar2 = strncmp(pcVar9,"onvif://www.onvif.org/type",0x1a);
        if (iVar2 == 0) {
          if (4 < local_15b8) {
LAB_0005520c:
            FUN_000498c0(param_1,"ter:Action","ter:TooManyScopes");
            return 0xc;
          }
          strcpy(acStack_1474 + local_15b8 * 100,pcVar9);
          local_15b8 = local_15b8 + 1;
          iVar5 = iVar5 + 1;
          if (iVar4 == iVar5) break;
          goto LAB_0005500e;
        }
        iVar2 = strncmp(pcVar9,"onvif://www.onvif.org/name",0x1a);
        if (iVar2 == 0) {
          uVar3 = 0x1afe;
LAB_00055232:
          DebugPrint(8,7,"[%s:%u]scope overwrite\n\n","__tds__SetScopes",uVar3);
          FUN_0004982c(param_1,"ter:OperationProhibited","ter:ScopeOverwrite");
          return 0xc;
        }
        iVar2 = strncmp(pcVar9,"onvif://www.onvif.org/Hardware",0x1e);
        if (iVar2 == 0) {
          uVar3 = 0x1b05;
          goto LAB_00055232;
        }
        if (5 < local_15b4) goto LAB_0005520c;
        strcpy(acStack_1280 + local_15b4 * 100,pcVar9);
        local_15b4 = local_15b4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
    DebugPrint(8,7,"[%s:%u]user def scope cnt :%d\n\n","__tds__SetScopes",0x1b1a,local_15b4);
    if (local_15b4 != 0) {
      pcVar9 = acStack_1280;
      do {
        pcVar6 = pcVar9 + 100;
        DebugPrint(8,7,"[%s:%u]add user def scope (%s)\n\n","__tds__SetScopes",0x1b1d,pcVar9);
        pcVar9 = pcVar6;
      } while (acStack_1280 + local_15b4 * 100 != pcVar6);
    }
    memcpy("MsgGetVideoCoverAlarm" + iVar1 + 0xc,acStack_1280,600);
    DebugPrint(8,7,"[%s:%u]location scope cnt :%d\n\n","__tds__SetScopes",0x1b22,iVar8);
    if (iVar8 != 0) {
      pcVar9 = acStack_15a0;
      do {
        pcVar6 = pcVar9 + 100;
        DebugPrint(8,7,"[%s:%u]add loc scope (%s)\n\n","__tds__SetScopes",0x1b25,pcVar9);
        pcVar9 = pcVar6;
      } while (pcVar6 != acStack_15a0 + iVar8 * 100);
    }
    memcpy("MsgGetVideoCaptureConfig" + iVar1 + 0xb,acStack_15a0,300);
    DebugPrint(8,7,"[%s:%u]type scope cnt :%d\n\n","__tds__SetScopes",0x1b2a,local_15b8);
    if (local_15b8 != 0) {
      pcVar9 = acStack_1474;
      do {
        pcVar6 = pcVar9 + 100;
        DebugPrint(8,7,"[%s:%u]add type scope (%s)\n\n","__tds__SetScopes",0x1b2d,pcVar9);
        pcVar9 = pcVar6;
      } while (acStack_1474 + local_15b8 * 100 != pcVar6);
    }
  }
  memcpy("stpcpy" + iVar1 + 5,acStack_1474,500);
  return 0;
}


