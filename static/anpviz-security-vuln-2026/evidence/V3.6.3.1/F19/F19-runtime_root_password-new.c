/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 0005d280 */
/* function FUN_0005d280 @ 0005d280 */

void FUN_0005d280(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_r3;
  int local_170;
  short local_16c;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined1 local_146;
  char acStack_110 [260];
  
  iVar2 = access("/opt/ch/flag.set.passwd",0);
  if (iVar2 == -1) {
    return;
  }
  read_file_to_buffer("/etc/flag.customize",&local_170,0x20,in_r3);
  string_trim_tail(&local_170);
  if (local_170 == 0x4b535f) {
    puVar3 = &DAT_0008818c;
  }
  else {
    if ((local_170 == 0x5957435f) && (local_16c == 0x59)) {
      local_150 = DAT_00088198;
      uStack_14c = DAT_0008819c;
      local_148 = (undefined2)DAT_000881a0;
      local_146 = (undefined1)((uint)DAT_000881a0 >> 0x10);
      goto LAB_0004f8e2;
    }
    if (DAT_000adfa4 == 0x1106) {
      puVar3 = &DAT_000881a4;
    }
    else {
      if (DAT_000adfa4 != 0xb106 && (DAT_000adfa4 != 0xb016 && DAT_000adfa4 != 0xb007)) {
        GetSN(acStack_110);
        uVar1 = get_uuid();
        sn_password(acStack_110,uVar1,&local_150);
        puts((char *)&local_150);
        goto LAB_0004f8e2;
      }
      puVar3 = &DAT_000881b0;
    }
  }
  local_150 = *puVar3;
  uStack_14c = puVar3[1];
  local_148 = CONCAT11(local_148._1_1_,(char)puVar3[2]);
LAB_0004f8e2:
  sprintf(acStack_110,"echo -e \"%s\n%s\" | passwd root",(char *)&local_150,(char *)&local_150);
  system(acStack_110);
  system(acStack_110);
  return;
}


