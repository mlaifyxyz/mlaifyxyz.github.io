/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00022db4 */
/* function FUN_00022db4 @ 00022db4 */

undefined4 FUN_00022db4(undefined4 param_1)

{
  int iVar1;
  char *__s2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  uint in_stack_00000010;
  char acStack_128 [32];
  char acStack_108 [256];
  
  sprintf(acStack_128,"%d.%d.%d.%d",in_stack_00000010 & 0xff,in_stack_00000010 >> 8 & 0xff,
          in_stack_00000010 >> 0x10 & 0xff,in_stack_00000010 >> 0x18);
  iVar1 = FUN_0001fd2c(in_stack_00000004,acStack_108,0x100);
  if (iVar1 == 0) {
    __s2 = (char *)get_chip_uuid();
    iVar1 = strcasecmp(acStack_108,__s2);
    if (iVar1 == 0) {
      DebugPrint(1,7,"[%s:%u]got %d IPC_MESSAGE_CLEAR_SOFT_SN from %s: %d. msg=%s\n\n",DAT_00022e98,
                 0xbbe,param_1,acStack_128,
                 in_stack_0000000c._2_2_ << 8 | in_stack_0000000c._2_2_ >> 8,in_stack_00000004);
      DebugPrint(8,7,"[%s:%u]CameraID %s, clear SN\n",DAT_00022e98,0xbbf,acStack_108);
      mysystem_with_param("/opt/ch/ssn --erasesn");
      mysystem_with_param("reboot -f");
      mysystem_with_param("reboot -f");
      mysystem_with_param("reboot -f");
      mysystem_with_param("reboot -f");
      mysystem_with_param("reboot -f");
      return 0;
    }
  }
  return 0;
}


