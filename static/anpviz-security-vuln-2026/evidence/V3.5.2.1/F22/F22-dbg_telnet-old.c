/* dbg_server (3c9ef9d3079c780df658c2687a569e97ce294bcec4b2ac6a85fbab57be0f6079), Ghidra 12.2 headless; requested 00011be8 */
/* function cmd_telnet @ 00011be8 */

void cmd_telnet(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = check_process_finish(&UNK_00013640);
  if ((int)uVar1 < 1) {
    return;
  }
  (*(code *)PTR_mysystem_000250c4)("telnetd &",(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
  return;
}


