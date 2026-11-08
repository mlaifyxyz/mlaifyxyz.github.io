/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 00055764 */
/* function FUN_00055764 @ 00055764 */

undefined4 FUN_00055764(undefined4 param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *__src;
  char *pcVar10;
  char *__src_00;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_3ac;
  int local_3a4;
  char *local_388 [8];
  char *local_368 [5];
  char *pcStack_354;
  char acStack_350 [100];
  char acStack_2ec [350];
  char acStack_18e [354];
  
  iVar15 = 0;
  iVar2 = FUN_0001910c();
  __src = "stpcpy" + iVar2 + 5;
  iVar9 = *param_2;
  pcVar10 = __src;
  while( true ) {
    pcVar3 = strstr(pcVar10,"onvif://www.onvif.org");
    pcVar10 = pcVar10 + 100;
    if (pcVar3 == (char *)0x0) break;
    iVar15 = iVar15 + 1;
  }
  pcVar10 = "MsgGetVideoCaptureConfig" + iVar2 + 0xb;
  iVar12 = 0;
  pcVar3 = pcVar10;
  while( true ) {
    local_368[0] = strstr(pcVar3,"onvif://www.onvif.org");
    pcVar3 = pcVar3 + 100;
    if (local_368[0] == (char *)0x0) break;
    iVar12 = iVar12 + 1;
  }
  local_368[1] = local_368[0];
  local_368[2] = local_368[0];
  local_368[3] = local_368[0];
  local_368[4] = local_368[0];
  pcStack_354 = local_368[0];
  local_388[4] = local_368[0];
  local_388[5] = local_368[0];
  local_388[6] = local_368[0];
  local_388[7] = local_368[0];
  local_388[1] = local_368[0];
  local_388[2] = local_368[0];
  local_388[0] = (char *)0x0;
  local_388[3] = local_388[0];
  if (0 < iVar9) {
    iVar13 = 0;
    iVar14 = 0;
    local_3ac = 0;
    local_3a4 = 0;
    do {
      iVar11 = iVar13 * 4;
      pcVar3 = (char *)FUN_0004d914(*(undefined4 *)(param_2[1] + iVar13 * 4));
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "MsgGetVideoCoverAlarm" + iVar2 + 0xc;
        if ("MsgGetVideoCoverAlarm"[iVar2 + 0xc] != '\0') {
          pcVar5 = *(char **)(param_2[1] + iVar11);
          bVar1 = false;
          iVar11 = 0;
          do {
            iVar4 = strcmp(pcVar3,pcVar5);
            if (iVar4 == 0) {
              bVar1 = true;
              local_368[iVar11] = (char *)0x1;
            }
            pcVar3 = pcVar3 + 100;
            iVar11 = iVar11 + 1;
          } while (*pcVar3 != '\0');
          if (bVar1) {
            DebugPrint(8,7,"[%s:%u]remove  user scope (idx:%d, scope:%s)\n\n","__tds__RemoveScopes",
                       0x1c53,iVar11,pcVar5);
          }
        }
      }
      else {
        strcpy(acStack_350,pcVar3);
        free(pcVar3);
        iVar4 = strcmp(acStack_350,"type");
        if (iVar4 == 0) {
          local_3a4 = 0;
          pcVar3 = __src;
          while (pcVar5 = strstr(pcVar3,"onvif://www.onvif.org"), pcVar5 != (char *)0x0) {
            pcVar5 = *(char **)(param_2[1] + iVar11);
            iVar4 = strcmp(pcVar3,pcVar5);
            if (iVar4 == 0) {
              local_388[local_3a4 + 3] = (char *)0x1;
              DebugPrint(8,7,"[%s:%u]remove  type scope (idx:%d, scope:%s)\n\n",
                         "__tds__RemoveScopes",0x1c62,local_3a4,pcVar5);
              strcpy(acStack_2ec + local_3ac * 100,*(char **)(param_2[1] + iVar11));
              break;
            }
            local_3a4 = local_3a4 + 1;
            pcVar3 = pcVar3 + 100;
          }
          if (iVar15 <= local_3a4) {
            FUN_0004982c(param_1,"ter:InvalidArgs","ter:ScopeNotExist");
            return 0xc;
          }
          local_3ac = local_3ac + 1;
        }
        else {
          iVar4 = strcmp(acStack_350,"name");
          if (((iVar4 == 0) || (iVar4 = strcmp(acStack_350,"hardware"), iVar4 == 0)) ||
             (iVar4 = strcmp(acStack_350,"location"), iVar4 != 0)) {
            FUN_0004982c(param_1,"ter:OperationProhibited","ter:InvalidArgs");
            return 0xc;
          }
          iVar4 = 0;
          pcVar3 = pcVar10;
          while (pcVar5 = strstr(pcVar3,"onvif://www.onvif.org"), pcVar5 != (char *)0x0) {
            pcVar5 = *(char **)(param_2[1] + iVar11);
            iVar8 = strcmp(pcVar3,pcVar5);
            if (iVar8 == 0) {
              local_388[iVar4] = (char *)0x1;
              DebugPrint(8,7,"[%s:%u]remove loc scope (idx:%d, scope:%s)\n\n","__tds__RemoveScopes",
                         0x1c86,local_3a4,pcVar5);
              strcpy(acStack_18e + iVar14 * 100,*(char **)(param_2[1] + iVar11));
              break;
            }
            iVar4 = iVar4 + 1;
            pcVar3 = pcVar3 + 100;
          }
          if (iVar12 <= iVar4) {
            FUN_0004982c(param_1,"ter:InvalidArgs","ter:ScopesNotExist");
            return 0xc;
          }
          iVar14 = iVar14 + 1;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar9 != iVar13);
  }
  pcVar3 = local_388[3];
  pcVar5 = local_388[0];
  iVar15 = 0;
  __src_00 = "MsgGetVideoCoverAlarm" + iVar2 + 0xc;
  pcVar6 = local_368[0];
  while( true ) {
    if (pcVar6 == (char *)0x1) {
      memset(__src_00,0,100);
    }
    else if ((*__src_00 != '\0' && iVar15 != 0) && (__src_00[-100] == '\0')) {
      strcpy(__src_00 + -100,__src_00);
      memset(__src_00,0,100);
    }
    if (iVar15 == 5) break;
    __src_00 = __src_00 + 100;
    iVar15 = iVar15 + 1;
    pcVar6 = local_368[iVar15];
  }
  iVar2 = 0;
  while( true ) {
    if (pcVar3 == (char *)0x1) {
      memset(__src,0,100);
    }
    else if ((*__src != '\0' && iVar2 != 0) && (__src[-100] == '\0')) {
      strcpy(__src + -100,__src);
      memset(__src,0,100);
    }
    if (iVar2 + 1 == 5) break;
    __src = __src + 100;
    pcVar3 = local_388[iVar2 + 4];
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  while( true ) {
    if (pcVar5 == (char *)0x1) {
      memset(pcVar10,0,100);
    }
    else if ((*pcVar10 != '\0' && iVar2 != 0) && (pcVar10[-100] == '\0')) {
      strcpy(pcVar10 + -100,pcVar10);
      memset(pcVar10,0,100);
    }
    if (iVar2 + 1 == 3) break;
    pcVar10 = pcVar10 + 100;
    pcVar5 = local_388[iVar2 + 1];
    iVar2 = iVar2 + 1;
  }
  *param_3 = iVar9;
  iVar2 = FUN_000205e8(param_1,400);
  param_3[1] = iVar2;
  if (0 < iVar9) {
    iVar15 = 0;
    while( true ) {
      uVar7 = FUN_000205e8(param_1,100);
      *(undefined4 *)(iVar2 + iVar15 * 4) = uVar7;
      iVar2 = iVar15 * 4;
      iVar12 = iVar15 * 4;
      iVar15 = iVar15 + 1;
      strcpy(*(char **)(param_3[1] + iVar2),*(char **)(param_2[1] + iVar12));
      if (iVar9 == iVar15) break;
      iVar2 = param_3[1];
    }
  }
  FUN_0001c794();
  return 0;
}


