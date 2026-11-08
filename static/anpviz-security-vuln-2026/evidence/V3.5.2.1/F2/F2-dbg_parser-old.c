/* dbg_server (3c9ef9d3079c780df658c2687a569e97ce294bcec4b2ac6a85fbab57be0f6079), Ghidra 12.2 headless; requested 0001276c */
/* function FUN_0001276c @ 0001276c */

undefined4 FUN_0001276c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  code *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char local_5e0 [4];
  char *local_5dc;
  char local_5d8 [64];
  char *local_598;
  undefined1 auStack_594 [252];
  char local_498 [512];
  char acStack_298 [64];
  char acStack_258 [64];
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [64];
  undefined1 auStack_198 [64];
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [64];
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if ((*param_1 != '\0') && (iVar1 = strFindNoSpace(), iVar1 != -1)) {
    pcVar7 = param_1 + iVar1;
    sVar2 = strlen(pcVar7);
    sVar3 = strFindSpace(pcVar7);
    if (sVar3 != 0xffffffff) {
      sVar2 = sVar3;
    }
    if ((int)sVar2 < 0x40) {
      strncpy(local_5d8,pcVar7,sVar2);
      local_5d8[sVar2] = '\0';
      local_498[0] = '\0';
      local_498[1] = '\0';
      local_498[2] = '\0';
      local_498[3] = '\0';
      memset(local_498 + 4,0,0x1fc);
      strncpy(local_498,param_1 + sVar2 + iVar1,0x1ff);
      memset(acStack_298,0,0x280);
      local_5dc = (char *)0x0;
      local_5e0[0] = ',';
      local_5e0[1] = '\0';
      local_5e0[2] = '\0';
      local_5e0[3] = '\0';
      local_598 = strtok_r(local_498,local_5e0,&local_5dc);
      if (local_598 == (char *)0x0) {
        memset(auStack_594,0,0xfc);
        sVar2 = strlen((char *)&local_598);
        strcpy((char *)((int)&local_598 + sVar2),local_5d8);
      }
      else {
        pcVar7 = acStack_298;
        iVar1 = 0;
        do {
          iVar8 = iVar1;
          strncpy(pcVar7,local_598,0x3f);
          string_trim_head(pcVar7);
          string_trim_tail(pcVar7);
          local_598 = strtok_r((char *)0x0,local_5e0,&local_5dc);
          pcVar7 = pcVar7 + 0x40;
          iVar1 = iVar8 + 1;
        } while (local_598 != (char *)0x0);
        memset(auStack_594,0,0xfc);
        strcpy((char *)&local_598,local_5d8);
        pcVar7 = acStack_298;
        do {
          sVar2 = strlen((char *)&local_598);
          pcVar6 = pcVar7 + 0x40;
          sprintf((char *)((int)&local_598 + sVar2)," %s",pcVar7);
          pcVar7 = pcVar6;
        } while (pcVar6 != acStack_258 + iVar8 * 0x40);
      }
      sVar2 = strlen((char *)&local_598);
      *(undefined2 *)((int)&local_598 + sVar2) = s_LEVELS__00013a08._8_2_;
      FUN_000121bc("%s\n",&local_598);
      if ((local_5d8[0] == '\0') ||
         (pcVar4 = (code *)FUN_00012550(local_5d8), pcVar4 == (code *)0x0)) {
        FUN_000121bc("Cannot found func [%s]\n",local_5d8);
        return 0xffffffff;
      }
      uVar5 = (*pcVar4)(acStack_298,acStack_258,auStack_218,auStack_1d8,auStack_198,auStack_158,
                        auStack_118,auStack_d8,auStack_98,auStack_58);
      FUN_000121bc("return=0x%08x\n",uVar5);
      return 0;
    }
    FUN_000121bc("Err:symbol too long, max is 64,current is %d\n",sVar2);
  }
  return 0xffffffff;
}


