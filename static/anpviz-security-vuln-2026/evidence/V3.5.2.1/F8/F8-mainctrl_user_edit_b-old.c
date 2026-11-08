/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000382dc */
/* function FUN_000382dc @ 000382dc */

undefined4 FUN_000382dc(int param_1)

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
  int local_a0;
  short local_9c;
  char local_9a;
  char acStack_98 [32];
  char acStack_78 [40];
  char acStack_50 [44];
  
  ShmRead(*(undefined4 *)(param_1 + 0x1c),acStack_78,0x28);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x28,acStack_50);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x50,acStack_98,0x20);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x70,&local_a0,8);
  piVar11 = &local_a0;
  pcVar6 = acStack_50;
  pcVar9 = acStack_78;
  pcVar10 = acStack_98;
  DebugPrint(1,7,"[%s:%u]%s,%s,%s,%s\n\n",DAT_0003865c,0x717,pcVar9,pcVar6,pcVar10,piVar11);
  piVar2 = DAT_000b1c78;
  iVar5 = *DAT_000b1c78;
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
               (local_a0 != 0x62616e45)) || ((local_9c != 0x656c || (local_9a != '\0')))))) {
            if (DAT_000aadbc < 2) {
              *(undefined4 *)(param_1 + 0x14) = 0xfffffff7;
              *(undefined4 *)(param_1 + 0x20) = 0;
              return 0;
            }
            DAT_000aadbc = DAT_000aadbc + -1;
          }
        }
        else {
          iVar5 = strcasecmp(acStack_98,"Administrator");
          if ((((iVar5 == 0) && (local_a0 == 0x62616e45)) && (local_9c == 0x656c)) &&
             (local_9a == '\0')) {
            DAT_000aadbc = DAT_000aadbc + 1;
          }
        }
        strcpy(__s1,acStack_78);
        strcpy((char *)((int)DAT_000b1c78 + iVar4 + 0x2c),acStack_50);
        strcpy((char *)((int)DAT_000b1c78 + iVar4 + 0x54),acStack_98);
        strcpy((char *)((int)DAT_000b1c78 + iVar4 + 0x74),(char *)&local_a0);
        SetSystemConfig(DAT_000b3620);
        uVar1 = DAT_0003865c;
        if (0 < DAT_000b28fc) {
          pcVar6 = &DAT_000b1c7c;
          iVar5 = 0;
          do {
            iVar7 = strcasecmp(pcVar6,acStack_78);
            if (iVar7 == 0) {
              iVar7 = iVar5;
              DebugPrint(8,7,"[%s:%u]found existed session, index=%d\n\n",uVar1,0x74e,iVar5);
              iVar4 = strcmp((char *)&local_a0,"Disable");
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
                FUN_00036188();
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
              bVar8 = SBORROW4(DAT_000b28fc,iVar4);
              iVar7 = DAT_000b28fc - iVar4;
            }
            iVar5 = iVar4;
          } while ((iVar4 != 0x14 && DAT_000b28fc != iVar4) && iVar7 < 0 == bVar8);
        }
        iVar5 = DAT_000aadbc;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",DAT_000386a0,0x767,iVar5);
        return 0;
      }
      iVar4 = iVar4 + 0x78;
    } while ((iVar7 != iVar5) && (iVar7 != 10));
    if (9 < iVar5) {
      DebugPrint(8,7,"[%s:%u]ERROR_TOO_MANY_USERS\n\n",DAT_0003865c,0x770,pcVar9,pcVar6,pcVar10,
                 piVar11);
      *(undefined4 *)(param_1 + 0x14) = 0xfffffff8;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0;
    }
  }
  strcpy((char *)(piVar2 + iVar7 * 0x1e + 1),acStack_78);
  strcpy((char *)(DAT_000b1c78 + iVar7 * 0x1e + 0xb),acStack_50);
  strcpy((char *)(DAT_000b1c78 + iVar7 * 0x1e + 0x15),acStack_98);
  strcpy((char *)(DAT_000b1c78 + iVar7 * 0x1e + 0x1d),(char *)&local_a0);
  *DAT_000b1c78 = *DAT_000b1c78 + 1;
  iVar5 = strcasecmp(acStack_98,"Administrator");
  if ((((iVar5 == 0) && (local_a0 == 0x62616e45)) && (local_9c == 0x656c)) && (local_9a == '\0')) {
    DAT_000aadbc = DAT_000aadbc + 1;
  }
  SetSystemConfig(DAT_000b3620);
  DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",DAT_0003865c,0x78b,DAT_000aadbc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}


