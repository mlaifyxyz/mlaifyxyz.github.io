/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00039cc4 */
/* function FUN_00039cc4 @ 00039cc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00039cc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  char acStack_50 [44];
  
  memset(acStack_50,0,0x28);
  ShmRead(*(undefined4 *)(param_1 + 0x1c),acStack_50,0x28);
  pcVar8 = acStack_50;
  iVar4 = DAT_000b07e8;
  DebugPrint(8,7,"[%s:%u]username=%s, g_adminCnt=%d\n\n",_DAT_00039f08,0x79a,acStack_50,DAT_000b07e8
            );
  piVar9 = (int *)(DAT_000b9380 + 0x1b20);
  iVar6 = *piVar9;
  DAT_000b79c8 = piVar9;
  if (iVar6 < 1) {
LAB_00039d58:
    DebugPrint(8,7,"[%s:%u]ERROR_USERNAME_NOT_FOUND\n\n",_DAT_00039f08,0x7e2,pcVar8,iVar4);
    *(undefined4 *)(param_1 + 0x14) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  iVar10 = 0;
  iVar5 = DAT_000b9380 + 0x1b24;
  iVar7 = 0;
  while (iVar3 = strcasecmp((char *)(iVar5 + iVar10),acStack_50), iVar1 = DAT_000b07e8, iVar3 != 0)
  {
    iVar3 = iVar7 + 1;
    iVar10 = iVar10 + 0x78;
    bVar11 = SBORROW4(iVar3,10);
    iVar1 = iVar7 + -9;
    if (iVar3 != 10) {
      bVar11 = SBORROW4(iVar3,iVar6);
      iVar1 = iVar3 - iVar6;
    }
    iVar7 = iVar3;
    if (iVar1 < 0 == bVar11) goto LAB_00039d58;
  }
  iVar4 = strcasecmp((char *)(iVar10 + 0x54 + (int)piVar9),"Administrator");
  if (iVar1 < 2) {
    if ((iVar4 == 0) && (iVar4 = strcmp((char *)(iVar10 + 0x74 + (int)piVar9),"Enable"), iVar4 == 0)
       ) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xfffffff7;
      return 0;
    }
  }
  else if ((iVar4 == 0) &&
          (iVar4 = strcmp((char *)((int)piVar9 + iVar10 + 0x74),"Enable"), iVar4 == 0)) {
    DAT_000b07e8 = iVar1 + -1;
  }
  iVar6 = iVar6 + -1;
  if (iVar6 != iVar7) {
    if (iVar7 < iVar6) {
      iVar4 = iVar7 * 0x78 + 4;
      do {
        iVar7 = iVar7 + 1;
        strcpy((char *)((int)piVar9 + iVar4),(char *)((int)piVar9 + iVar4 + 0x78));
        strcpy((char *)(iVar4 + 0x28 + (int)DAT_000b79c8),(char *)(iVar4 + 0xa0 + (int)DAT_000b79c8)
              );
        strcpy((char *)(iVar4 + 0x50 + (int)DAT_000b79c8),(char *)(iVar4 + 200 + (int)DAT_000b79c8))
        ;
        strcpy((char *)((int)DAT_000b79c8 + iVar4 + 0x70),(char *)(iVar4 + 0xe8 + (int)DAT_000b79c8)
              );
        piVar9 = DAT_000b79c8;
        iVar4 = iVar4 + 0x78;
      } while (iVar7 < *DAT_000b79c8 + -1);
      iVar7 = *DAT_000b79c8 + -1;
    }
    else {
      iVar7 = iVar6;
    }
  }
  *piVar9 = iVar7;
  SetSystemConfig(DAT_000b9380);
  uVar2 = _DAT_00039f08;
  if (0 < DAT_000b864c) {
    pcVar8 = &DAT_000b79cc;
    iVar4 = 0;
    do {
      while( true ) {
        iVar6 = strcasecmp(pcVar8,acStack_50);
        iVar7 = iVar4 + 1;
        if (iVar6 != 0) break;
        DebugPrint(8,7,"[%s:%u]the one removed in session list, remove it.\n\n",uVar2,2000);
        pcVar8[0x98] = '\0';
        pcVar8[0x99] = '\0';
        pcVar8[0x9a] = '\0';
        pcVar8[0x9b] = '\0';
        pcVar8[0x9c] = '\0';
        pcVar8[0x9d] = '\0';
        pcVar8[0x9e] = '\0';
        pcVar8[0x9f] = '\0';
        FUN_0003778c();
        pcVar8 = pcVar8 + 0xa0;
        bVar11 = SBORROW4(iVar7,0x14);
        iVar6 = iVar4 + -0x13;
        if (iVar7 != 0x14) {
          bVar11 = SBORROW4(DAT_000b864c,iVar7);
          iVar6 = DAT_000b864c - iVar7;
        }
        iVar4 = iVar7;
        if ((iVar7 == 0x14 || DAT_000b864c == iVar7) || iVar6 < 0 != bVar11) goto LAB_00039ea2;
      }
      pcVar8 = pcVar8 + 0xa0;
      bVar11 = SBORROW4(iVar7,0x14);
      iVar6 = iVar4 + -0x13;
      if (iVar7 != 0x14) {
        bVar11 = SBORROW4(DAT_000b864c,iVar7);
        iVar6 = DAT_000b864c - iVar7;
      }
      iVar4 = iVar7;
    } while ((iVar7 != 0x14 && DAT_000b864c != iVar7) && iVar6 < 0 == bVar11);
  }
LAB_00039ea2:
  iVar4 = DAT_000b07e8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DebugPrint(8,7,"[%s:%u]adminCnt=%d\n\n",_DAT_00039f08,0x7dc,iVar4);
  return 0;
}


