/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00037fc8 */
/* function FUN_00037fc8 @ 00037fc8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00037fc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *__s1;
  int iVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  undefined1 *puVar15;
  int local_a8;
  short local_a4;
  char local_a2;
  undefined1 auStack_a0 [8];
  char acStack_98 [32];
  char acStack_78 [40];
  char acStack_50 [44];
  
  ShmRead(*(undefined4 *)(param_1 + 0x1c),acStack_78,0x28);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x28,acStack_50);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x50,acStack_98,0x20);
  ShmRead(*(int *)(param_1 + 0x1c) + 0x70,&local_a8,8);
  piVar14 = &local_a8;
  puVar15 = auStack_a0;
  pcVar9 = acStack_50;
  pcVar12 = acStack_78;
  pcVar13 = acStack_98;
  iVar3 = DAT_000aadbc;
  DebugPrint(8,7,"[%s:%u]%s,%s,%s,%s,%s,adminCnt=%d\n\n",DAT_000382d8,0x67f,pcVar12,pcVar9,pcVar13,
             piVar14,puVar15,DAT_000aadbc);
  piVar4 = (int *)(DAT_000b3620 + 0x1b20);
  iVar8 = *piVar4;
  DAT_000b1c78 = piVar4;
  if (0 < iVar8) {
    iVar10 = 0;
    iVar7 = DAT_000b3620 + 0x1b24;
    iVar5 = 0;
    do {
      __s1 = (char *)(iVar7 + iVar10);
      iVar2 = strcasecmp(__s1,acStack_78);
      if (iVar2 == 0) {
        iVar3 = strcasecmp((char *)((int)piVar4 + iVar10 + 0x54),"Administrator");
        iVar8 = strcasecmp(acStack_98,"Administrator");
        if (iVar3 == 0) {
          pcVar9 = (char *)((int)piVar4 + iVar10 + 0x74);
          iVar3 = strcmp(pcVar9,"Enable");
          if (iVar3 == 0) {
            if ((((iVar8 == 0) && (local_a8 == 0x62616e45)) && (local_a4 == 0x656c)) &&
               (local_a2 == '\0')) goto LAB_00038128;
            if (DAT_000aadbc < 2) {
              *(undefined4 *)(param_1 + 0x14) = 0xfffffff7;
              *(undefined4 *)(param_1 + 0x20) = 0;
              return 0;
            }
            DAT_000aadbc = DAT_000aadbc + -1;
            iVar3 = strcmp(pcVar9,"Enable");
            if (iVar3 == 0) goto LAB_00038128;
            iVar8 = strcasecmp(acStack_98,"Administrator");
          }
        }
        if (((iVar8 == 0) && (local_a8 == 0x62616e45)) &&
           ((local_a4 == 0x656c && (local_a2 == '\0')))) {
          DAT_000aadbc = DAT_000aadbc + 1;
        }
LAB_00038128:
        strcpy(__s1,acStack_78);
        strcpy((char *)((int)piVar4 + iVar10 + 0x2c),acStack_50);
        strcpy((char *)((int)DAT_000b1c78 + iVar10 + 0x54),acStack_98);
        strcpy((char *)((int)DAT_000b1c78 + iVar10 + 0x74),(char *)&local_a8);
        SetSystemConfig(DAT_000b3620);
        uVar1 = DAT_000382d8;
        if (0 < DAT_000b28fc) {
          pcVar9 = &DAT_000b1c7c;
          iVar3 = 0;
          do {
            iVar8 = strcasecmp(pcVar9,acStack_78);
            if (iVar8 == 0) {
              iVar8 = iVar5;
              DebugPrint(8,7,"[%s:%u]find one existed session, index=%d\n\n",uVar1,0x6e0,iVar5);
              iVar7 = strcmp((char *)&local_a8,"Disable");
              if (iVar7 == 0) {
                DebugPrint(8,7,"[%s:%u]the disabled one in session list, remove it.\n\n",uVar1,0x6e4
                           ,iVar8);
                pcVar9[0x98] = '\0';
                pcVar9[0x99] = '\0';
                pcVar9[0x9a] = '\0';
                pcVar9[0x9b] = '\0';
                pcVar9[0x9c] = '\0';
                pcVar9[0x9d] = '\0';
                pcVar9[0x9e] = '\0';
                pcVar9[0x9f] = '\0';
                FUN_00036188();
              }
              else {
                DebugPrint(8,7,"[%s:%u]update user,pass to: [%s/%s]\n\n",uVar1,0x6ed,acStack_78,
                           acStack_50);
                strcpy(pcVar9,acStack_78);
                strcpy(pcVar9 + 0x28,acStack_50);
                strcpy(pcVar9 + 0x50,acStack_98);
              }
            }
            iVar7 = iVar3 + 1;
            pcVar9 = pcVar9 + 0xa0;
            bVar11 = SBORROW4(iVar7,0x14);
            iVar8 = iVar3 + -0x13;
            if (iVar7 != 0x14) {
              bVar11 = SBORROW4(DAT_000b28fc,iVar7);
              iVar8 = DAT_000b28fc - iVar7;
            }
            iVar3 = iVar7;
          } while ((iVar7 != 0x14 && DAT_000b28fc != iVar7) && iVar8 < 0 == bVar11);
        }
        iVar3 = DAT_000aadbc;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",DAT_000382d8,0x6f9,iVar3);
        return 0;
      }
      iVar6 = iVar5 + 1;
      iVar10 = iVar10 + 0x78;
      bVar11 = SBORROW4(iVar6,10);
      iVar2 = iVar5 + -9;
      if (iVar6 != 10) {
        bVar11 = SBORROW4(iVar6,iVar8);
        iVar2 = iVar6 - iVar8;
      }
      iVar5 = iVar6;
    } while (iVar2 < 0 != bVar11);
  }
  DebugPrint(8,7,"[%s:%u]ERROR_USERNAME_NOT_FOUND\n\n",DAT_000382d8,0x6ff,pcVar12,pcVar9,pcVar13,
             piVar14,puVar15,iVar3);
  *(undefined4 *)(param_1 + 0x14) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}


