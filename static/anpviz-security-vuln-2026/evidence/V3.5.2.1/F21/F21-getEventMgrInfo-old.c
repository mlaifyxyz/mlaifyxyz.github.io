/* web_server (52eef11ca20cbd46a097e1a09acfc275088b450e7a019af9a750f99f0f613401), Ghidra 12.2 headless; requested 0004c1c4 */
/* function FUN_0004c1c4 @ 0004c1c4 */

undefined4 FUN_0004c1c4(char *param_1,char *param_2,undefined2 *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *__s;
  char acStack_120 [256];
  
  DebugPrint(8,7,"[%s:%u]EventMgrAddr:%s\n\n","getEventMgrInfo",699,param_1);
  pcVar1 = strstr(param_1,"http:");
  if (pcVar1 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]invalid addr: %s, http: not found!!!\n\n","getEventMgrInfo",0x2c0,param_1
              );
    return 0xffffffff;
  }
  strcpy(acStack_120,pcVar1 + 5);
  pcVar1 = acStack_120;
  DebugPrint(8,7,"[%s:%u]addr_buf = %s\n\n","getEventMgrInfo",0x2c6,acStack_120);
  pcVar2 = strchr(acStack_120,0x3a);
  if (pcVar2 == (char *)0x0) {
    *param_3 = 0x50;
    pcVar1 = strstr(acStack_120,"//");
    if (pcVar1 != (char *)0x0) {
      pcVar2 = strchr(pcVar1 + 2,0x2f);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        strcpy(param_2,pcVar1 + 2);
        DebugPrint(8,7,"[%s:%u]addr = %s\n\n","getEventMgrInfo",0x2fe,param_2);
        pcVar1 = strchr(pcVar2 + 1,0x2f);
        if (pcVar1 != (char *)0x0) {
          *pcVar1 = '\0';
        }
        strcpy(param_4,pcVar2 + 1);
        DebugPrint(8,7,"[%s:%u]path = %s\n\n","getEventMgrInfo",0x307,param_4);
        return 1;
      }
    }
  }
  else {
    pcVar3 = strchr(pcVar2 + 1,0x2f);
    if (pcVar3 == (char *)0x0) {
      DebugPrint(8,7,"[%s:%u]check port str failed!\n\n","getEventMgrInfo",0x2dc,pcVar1);
    }
    else {
      __s = pcVar3 + 1;
      *pcVar3 = '\0';
      iVar4 = atoi(pcVar2 + 1);
      *param_3 = (short)iVar4;
      pcVar1 = strchr(__s,0x2f);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
      strcpy(param_4,__s);
      DebugPrint(8,7,"[%s:%u]path str: %s\n\n","getEventMgrInfo",0x2d8,__s);
      pcVar1 = pcVar2;
      while (pcVar3 = pcVar1, acStack_120 <= pcVar3) {
        pcVar1 = pcVar3 + -1;
        if (*pcVar3 == '/') {
          *pcVar2 = '\0';
          strcpy(param_2,pcVar3 + 1);
          return 1;
        }
      }
    }
  }
  return 0xffffffff;
}


