/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 000398fc */
/* function FUN_000398fc @ 000398fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000398fc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *__s1;
  int iVar7;
  bool bVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  int iStack_a0;
  short sStack_9c;
  char cStack_9a;
  char acStack_98 [32];
  char acStack_78 [40];
  char acStack_50 [44];
  
  ShmRead(*(undefined4 *)(param_1 + 0x1c),acStack_78,0x28);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x28,acStack_50);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x50,acStack_98,0x20);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x70,&iStack_a0,8);
  piVar11 = &iStack_a0;
  pcVar6 = acStack_50;
  pcVar9 = acStack_78;
  pcVar10 = acStack_98;
  DebugPrint(1,7,"[%s:%u]%s,%s,%s,%s\n\n",_DAT_00039c7c,0x717,pcVar9,pcVar6,pcVar10,piVar11);
  piVar2 = DAT_000b79c8;
  iVar5 = *DAT_000b79c8;
  if (iVar5 < 1) {
    iVar7 = 0;
  }
  else {
    iVar4 = 0;
    iVar7 = 0;
    do {
      __s1 = (char *)((int)piVar2 + iVar4 + 4);
      iVar7 = iVar7 + 1;
      iVar3 = strcasecmp(__s1,acStack_78);
      if (iVar3 == 0) {
        iVar5 = strcasecmp((char *)((int)piVar2 + iVar4 + 0x54),"Administrator");
        if (iVar5 == 0) {
          iVar5 = strcmp((char *)((int)piVar2 + iVar4 + 0x74),"Enable");
          if ((iVar5 == 0) &&
             (((iVar5 = strcasecmp(acStack_98,"Administrator"), iVar5 != 0 ||
               (iStack_a0 != 0x62616e45)) || ((sStack_9c != 0x656c || (cStack_9a != '\0')))))) {
            if (DAT_000b07e8 < 2) {
              *(undefined4 *)(param_1 + 0x14) = 0xfffffff7;
              *(undefined4 *)(param_1 + 0x20) = 0;
              return 0;
            }
            DAT_000b07e8 = DAT_000b07e8 + -1;
          }
        }
        else {
          iVar5 = strcasecmp(acStack_98,"Administrator");
          if ((((iVar5 == 0) && (iStack_a0 == 0x62616e45)) && (sStack_9c == 0x656c)) &&
             (cStack_9a == '\0')) {
            DAT_000b07e8 = DAT_000b07e8 + 1;
          }
        }
        strcpy(__s1,acStack_78);
        strcpy((char *)((int)DAT_000b79c8 + iVar4 + 0x2c),acStack_50);
        strcpy((char *)((int)DAT_000b79c8 + iVar4 + 0x54),acStack_98);
        strcpy((char *)((int)DAT_000b79c8 + iVar4 + 0x74),(char *)&iStack_a0);
        SetSystemConfig(DAT_000b9380);
        uVar1 = _DAT_00039c7c;
        if (0 < DAT_000b864c) {
          pcVar6 = &DAT_000b79cc;
          iVar5 = 0;
          do {
            iVar7 = strcasecmp(pcVar6,acStack_78);
            if (iVar7 == 0) {
              iVar7 = iVar5;
              DebugPrint(8,7,"[%s:%u]found existed session, index=%d\n\n",uVar1,0x74e,iVar5);
              iVar4 = strcmp((char *)&iStack_a0,"Disable");
              if (iVar4 == 0) {
                DebugPrint(8,7,"[%s:%u]the disabled one in session list, remove it.\n\n",uVar1,0x752
                           ,iVar7);
                pcVar6[0x98] = '\0';
                pcVar6[0x99] = '\0';
                pcVar6[0x9a] = '\0';
                pcVar6[0x9b] = '\0';
                pcVar6[0x9c] = '\0';
                pcVar6[0x9d] = '\0';
                pcVar6[0x9e] = '\0';
                pcVar6[0x9f] = '\0';
                FUN_0003778c();
              }
              else {
                DebugPrint(8,7,"[%s:%u]update user,pass to: [%s/%s]\n\n",uVar1,0x75b,acStack_78,
                           acStack_50);
                strcpy(pcVar6,acStack_78);
                strcpy(pcVar6 + 0x28,acStack_50);
                strcpy(pcVar6 + 0x50,acStack_98);
              }
            }
            iVar4 = iVar5 + 1;
            pcVar6 = pcVar6 + 0xa0;
            bVar8 = SBORROW4(iVar4,0x14);
            iVar7 = iVar5 + -0x13;
            if (iVar4 != 0x14) {
              bVar8 = SBORROW4(DAT_000b864c,iVar4);
              iVar7 = DAT_000b864c - iVar4;
            }
            iVar5 = iVar4;
          } while ((iVar4 != 0x14 && DAT_000b864c != iVar4) && iVar7 < 0 == bVar8);
        }
        iVar5 = DAT_000b07e8;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",_DAT_00039cc0,0x767,iVar5);
        return 0;
      }
      iVar4 = iVar4 + 0x78;
    } while ((iVar7 != iVar5) && (iVar7 != 10));
    if (9 < iVar5) {
      DebugPrint(8,7,"[%s:%u]ERROR_TOO_MANY_USERS\n\n",_DAT_00039c7c,0x770,pcVar9,pcVar6,pcVar10,
                 piVar11);
      *(undefined4 *)(param_1 + 0x14) = 0xfffffff8;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0;
    }
  }
  strcpy((char *)(piVar2 + iVar7 * 0x1e + 1),acStack_78);
  strcpy((char *)(DAT_000b79c8 + iVar7 * 0x1e + 0xb),acStack_50);
  strcpy((char *)(DAT_000b79c8 + iVar7 * 0x1e + 0x15),acStack_98);
  strcpy((char *)(DAT_000b79c8 + iVar7 * 0x1e + 0x1d),(char *)&iStack_a0);
  *DAT_000b79c8 = *DAT_000b79c8 + 1;
  iVar5 = strcasecmp(acStack_98,"Administrator");
  if ((((iVar5 == 0) && (iStack_a0 == 0x62616e45)) && (sStack_9c == 0x656c)) && (cStack_9a == '\0'))
  {
    DAT_000b07e8 = DAT_000b07e8 + 1;
  }
  SetSystemConfig(DAT_000b9380);
  DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",_DAT_00039c7c,0x78b,DAT_000b07e8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}


