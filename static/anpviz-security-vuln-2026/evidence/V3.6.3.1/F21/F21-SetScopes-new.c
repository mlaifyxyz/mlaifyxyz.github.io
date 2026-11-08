/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00054f9c */
/* function FUN_00054f9c @ 00054f9c */

int FUN_00054f9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1918 [6404];
  
  DebugPrint(8,7,DAT_00055024,DAT_00055028,0x57f,DAT_00055020);
  iVar1 = FUN_0001d4ba(param_3,DAT_0005502c);
  if (iVar1 == 0) {
    __assert(DAT_00055038,DAT_00055034,0x582);
  }
  memset(auStack_1918,0,0x1900);
  iVar1 = FUN_00030014(iVar1,auStack_1918);
  if (iVar1 == 0) {
    iVar1 = FUN_000256dc(auStack_1918);
  }
  iVar1 = FUN_0005498c(param_1,param_2,iVar1,DAT_0005503c,0,0,param_4);
  if (iVar1 == 0) {
    FUN_0002df54();
  }
  return iVar1;
}


/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00030014 */
/* function FUN_00030014 @ 00030014 */

undefined4 FUN_00030014(undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar6;
  int *piVar5;
  size_t __n;
  void *pvVar7;
  int local_a0;
  undefined1 auStack_9c [128];
  
  iVar3 = FUN_0001d4ba(param_1,DAT_000300bc);
  uVar2 = DAT_000300bc;
  pvVar7 = (void *)((int)param_2 + 0x1900);
  while (((iVar3 != 0 && (*(int *)(iVar3 + 0xc) != 0)) &&
         (local_a0 = FUN_0001d478(*(undefined4 *)(iVar3 + 4),uVar2), local_a0 == 0))) {
    if (param_2 == pvVar7) {
      return 0xffffffe4;
    }
    memset(auStack_9c,0,0x7c);
    strncpy((char *)&local_a0,*(char **)(iVar3 + 0xc),0x7f);
    sVar4 = strlen((char *)&local_a0);
    FUN_0001dca4(&local_a0,&local_a0,sVar4);
    sVar4 = 0;
    piVar6 = &local_a0;
    __n = 0;
    while( true ) {
      piVar5 = (int *)((int)piVar6 + 1);
      iVar1 = *piVar6;
      if ((char)iVar1 == '\0') break;
      sVar4 = sVar4 + 1;
      piVar6 = piVar5;
      if ((char)iVar1 == '/') {
        __n = sVar4;
      }
    }
    sVar4 = strlen(auStack_9c + (__n - 4));
    FUN_0001dc14((int)param_2 + __n,sVar4,auStack_9c + (__n - 4),0x80 - __n);
    if (__n != 0) {
      memcpy(param_2,&local_a0,__n);
    }
    iVar3 = *(int *)(iVar3 + 0x28);
    param_2 = (void *)((int)param_2 + 0x80);
  }
  return 0;
}


/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000256dc */
/* function FUN_000256dc @ 000256dc */

undefined4 FUN_000256dc(int param_1)

{
  char *__s2;
  char *__s2_00;
  size_t __n;
  size_t sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *__s1;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  int aiStack_a0 [31];
  
  memset(aiStack_a0,0,0x78);
  __s2_00 = DAT_0002594c;
  __s2 = DAT_00025948;
  iVar6 = 0;
  piVar4 = aiStack_a0;
  do {
    iVar6 = iVar6 + 1;
    *piVar4 = -1;
    piVar4 = piVar4 + 1;
  } while (iVar6 != 0x1e);
  iVar6 = 0;
  iVar11 = 0;
  iVar12 = 0;
  iVar7 = 0;
  local_d4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  do {
    if (*(char *)(param_1 + iVar7 * 0x80) == '\0') break;
    __s1 = (char *)(param_1 + iVar7 * 0x80);
    iVar3 = strncmp(__s1,DAT_00025930,0x1e);
    if (iVar3 == 0) {
      if (iVar12 == 1) {
        iVar12 = 2;
        goto LAB_000257e4;
      }
      iVar12 = 1;
    }
    else {
      iVar3 = strncmp(__s1,DAT_0002593c,0x1d);
      if (iVar3 == 0) {
        if (local_d8 == 1) {
          local_d8 = 2;
          goto LAB_000257e4;
        }
        local_d8 = 1;
      }
      else {
        iVar3 = strncmp(__s1,DAT_00025940,0x22);
        if (iVar3 == 0) {
          if (iVar11 == 1) {
            iVar11 = 2;
            goto LAB_000257e4;
          }
          iVar11 = 1;
        }
        else {
          iVar3 = strncmp(__s1,__s2,0x1e);
          if (iVar3 == 0) {
            local_e0 = local_e0 + 1;
          }
          else {
            iVar3 = strncmp(__s1,__s2_00,0x1a);
            if (iVar3 == 0) {
              local_dc = local_dc + 1;
            }
            else {
              iVar3 = strncmp(__s1,DAT_00025944,0x1a);
              if (iVar3 == 0) {
                local_d4 = local_d4 + 1;
              }
              else {
                iVar6 = iVar6 + 1;
              }
            }
          }
        }
      }
    }
    if ((((3 < local_e0) || (5 < local_dc)) || (local_d4 == 2)) || (6 < iVar6)) {
LAB_000257e4:
      DebugPrint(8,7,DAT_00025934,DAT_00025938,0x660,iVar7,__s1,iVar12,local_d8,iVar11,local_e0,
                 local_dc,local_d4,iVar6);
      return 0xffffffe4;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x32);
  iVar10 = 0;
  iVar7 = DAT_0002592c;
  iVar3 = 0;
  do {
    iVar9 = iVar3;
    if (*(char *)(iVar7 + 0xadc) != '\0') {
      iVar8 = 0;
      do {
        if (*(char *)(param_1 + iVar8) == '\0') break;
        __n = strlen((char *)(iVar7 + 0xadc));
        sVar1 = strlen((char *)(param_1 + iVar8));
        if ((__n == sVar1) &&
           (iVar2 = strncmp((char *)(iVar7 + 0xadc),(char *)(param_1 + iVar8),__n), iVar2 == 0))
        goto LAB_000258b0;
        iVar8 = iVar8 + 0x80;
      } while (iVar8 != 0x1900);
      iVar8 = FUN_0004a0c8(iVar7 + 0xad8,iVar12,local_d8,iVar11,local_e0,local_dc,local_d4,iVar6);
      if (iVar8 == 0) {
        iVar9 = iVar3 + 1;
        aiStack_a0[iVar3] = iVar10;
      }
      else {
        if (iVar8 == -1) {
          return 0xffffffe1;
        }
        if (iVar8 == -2) {
          return 0xffffffe3;
        }
      }
    }
LAB_000258b0:
    iVar8 = DAT_0002592c;
    iVar10 = iVar10 + 1;
    iVar7 = iVar7 + 0x84;
    iVar3 = iVar9;
  } while (iVar10 != 0x32);
  iVar6 = 0;
  local_d0 = aiStack_a0;
  do {
    if (*local_d0 == -1) break;
    iVar6 = iVar6 + 1;
    memset((void *)(*local_d0 * 0x84 + iVar8 + 0xadc),0,0x80);
    local_d0 = local_d0 + 1;
  } while (iVar6 != 0x1e);
  iVar6 = 0;
  do {
    if (*(char *)(param_1 + iVar6) == '\0') {
      return 0;
    }
    piVar4 = (int *)FUN_0004a180((char *)(param_1 + iVar6));
    if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
      puVar5 = (undefined4 *)FUN_0004a1bc();
      if (puVar5 == (undefined4 *)0x0) {
        return 0xffffffe4;
      }
      *puVar5 = 1;
      strcpy((char *)(puVar5 + 1),(char *)(param_1 + iVar6));
    }
    iVar6 = iVar6 + 0x80;
  } while (iVar6 != 0x1900);
  return 0;
}


