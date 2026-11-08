/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 00012060 */
/* function cmd_telnet @ 00012060 */

void cmd_telnet(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = check_process_finish(&UNK_00013eb8);
  if ((int)uVar1 < 1) {
    return;
  }
  (*(code *)PTR_mysystem_000260d8)("telnetd &",(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
  return;
}


