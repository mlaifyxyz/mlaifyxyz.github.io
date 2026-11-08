/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00058fb0 */
/* function FUN_00058fb0 @ 00058fb0 */

void FUN_00058fb0(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined2 local_350;
  undefined1 local_34e;
  int local_348;
  short local_344;
  undefined1 auStack_328 [32];
  char acStack_308 [256];
  undefined1 auStack_208 [24];
  char acStack_1f0 [232];
  char acStack_108 [256];
  
  iVar2 = access("/opt/ch/flag.set.passwd",0);
  if (iVar2 == -1) {
    return;
  }
  GetSN(auStack_328);
  memset(acStack_308,0,0x100);
  memset(auStack_208,0,0x100);
  sprintf(acStack_308,"%s%s","ANJVISION",auStack_328);
  sVar1 = strlen(acStack_308);
  our_md5_encode(auStack_208,acStack_308,sVar1);
  if (DAT_000a8ec0 == 0x1106) {
    puVar3 = (undefined4 *)&UNK_00082bf8;
  }
  else {
    if (DAT_000a8ec0 != 0xb106 && (DAT_000a8ec0 != 0xb016 && DAT_000a8ec0 != 0xb007)) {
      strcpy((char *)&local_358,acStack_1f0);
      goto LAB_0004b540;
    }
    puVar3 = &DAT_00082c04;
  }
  local_358 = *puVar3;
  uStack_354 = puVar3[1];
  local_350 = CONCAT11(local_350._1_1_,(char)puVar3[2]);
LAB_0004b540:
  read_file_to_buffer("/etc/flag.customize",&local_348,0x20);
  string_trim_tail(&local_348);
  if (local_348 == 0x4b535f) {
    local_358 = DAT_00082c14;
    uStack_354 = DAT_00082c18;
    local_350 = CONCAT11(local_350._1_1_,(char)DAT_00082c1c);
  }
  else if ((local_348 == 0x5957435f) && (local_344 == 0x59)) {
    local_358 = DAT_00082c20;
    uStack_354 = DAT_00082c24;
    local_350 = (undefined2)DAT_00082c28;
    local_34e = (undefined1)((uint)DAT_00082c28 >> 0x10);
  }
  sprintf(acStack_108,"echo -e \"%s\n%s\" | passwd root",(char *)&local_358,(char *)&local_358);
  system(acStack_108);
  system(acStack_108);
  return;
}


