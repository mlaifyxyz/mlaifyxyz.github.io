/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 00012ca4 */
/* function FUN_00012ca4 @ 00012ca4 */

undefined4 FUN_00012ca4(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char local_5e8 [4];
  char *local_5e4;
  char local_5e0 [64];
  char *local_5a0;
  undefined1 auStack_59c [252];
  char local_4a0 [512];
  char acStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [68];
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if ((*param_1 != '\0') && (iVar1 = strFindNoSpace(), iVar1 != -1)) {
    pcVar9 = param_1 + iVar1;
    sVar2 = strlen(pcVar9);
    sVar3 = strFindSpace(pcVar9);
    if (sVar3 != 0xffffffff) {
      sVar2 = sVar3;
    }
    if ((int)sVar2 < 0x40) {
      strncpy(local_5e0,pcVar9,sVar2);
      local_5e0[sVar2] = '\0';
      local_4a0[0] = '\0';
      local_4a0[1] = '\0';
      local_4a0[2] = '\0';
      local_4a0[3] = '\0';
      memset(local_4a0 + 4,0,0x1fc);
      strncpy(local_4a0,param_1 + sVar2 + iVar1,0x1ff);
      memset(acStack_2a0,0,0x280);
      local_5e4 = (char *)0x0;
      local_5e8[0] = ',';
      local_5e8[1] = '\0';
      local_5e8[2] = '\0';
      local_5e8[3] = '\0';
      local_5a0 = strtok_r(local_4a0,local_5e8,&local_5e4);
      pcVar9 = acStack_2a0;
      iVar1 = 0;
      if (local_5a0 == (char *)0x0) {
        memset(auStack_59c,0,0xfc);
        iVar4 = snprintf((char *)&local_5a0,0x100,"%s",local_5e0);
        sVar2 = 0x100 - iVar4;
      }
      else {
        do {
          strncpy(pcVar9,local_5a0,0x3f);
          string_trim_head(pcVar9);
          string_trim_tail(pcVar9);
          local_5a0 = strtok_r((char *)0x0,local_5e8,&local_5e4);
          iVar1 = iVar1 + 1;
          pcVar9 = pcVar9 + 0x40;
          if (local_5a0 == (char *)0x0) goto LAB_00012d78;
        } while (iVar1 != 10);
        FUN_00012630("Err:too many params, max is 10, cmd truncated\n");
LAB_00012d78:
        iVar8 = 0;
        local_5a0 = (char *)0x0;
        memset(auStack_59c,0,0xfc);
        iVar4 = snprintf((char *)&local_5a0,0x100,"%s",local_5e0);
        do {
          iVar5 = iVar8 * 0x40;
          iVar8 = iVar8 + 1;
          iVar5 = snprintf((char *)((int)&local_5a0 + iVar4),0x100 - iVar4," %s",acStack_2a0 + iVar5
                          );
          if (-1 < iVar5) {
            iVar4 = iVar4 + iVar5;
          }
          if (0xff < iVar4) {
            iVar4 = 0xff;
            FUN_00012630("Err:cmd too long, max is %d, truncated\n",0xff);
            sVar2 = 1;
            goto LAB_00012ddc;
          }
        } while (iVar8 < iVar1);
        sVar2 = 0x100 - iVar4;
      }
LAB_00012ddc:
      snprintf((char *)((int)&local_5a0 + iVar4),sVar2,"\n");
      FUN_00012630("%s\n",&local_5a0);
      if ((local_5e0[0] == '\0') ||
         (pcVar6 = (code *)FUN_00012a88(local_5e0), pcVar6 == (code *)0x0)) {
        FUN_00012630("Cannot found func [%s]\n",local_5e0);
        return 0xffffffff;
      }
      uVar7 = (*pcVar6)(acStack_2a0,auStack_260,auStack_220,auStack_1e0,auStack_1a0,auStack_160,
                        auStack_120,auStack_e0,auStack_a0,auStack_60);
      FUN_00012630("return=0x%08x\n",uVar7);
      return 0;
    }
    FUN_00012630("Err:symbol too long, max is 64,current is %d\n",sVar2);
  }
  return 0xffffffff;
}


