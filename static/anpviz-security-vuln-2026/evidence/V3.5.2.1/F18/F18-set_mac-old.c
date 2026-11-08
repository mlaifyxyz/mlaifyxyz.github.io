/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00068eb8 */
/* function FUN_00068eb8 @ 00068eb8 */

undefined4 FUN_00068eb8(char *param_1)

{
  char acStack_48 [64];
  
  DebugPrint(8,7,"[%s:%u]set mac: %s\n",DAT_00068f30,0x1ae9,param_1);
  snprintf(acStack_48,0x40,"%s",param_1);
  FUN_00062a68(acStack_48);
  mysystem_with_param("/opt/ch/ssn --ubootargs2 ethaddr \"%s\"",acStack_48);
  if (DAT_000ac298 != 0) {
    mysystem_with_param("echo %s > /data/mac",param_1);
  }
  FUN_000645d8(&DAT_00072a1c,param_1);
  return 0;
}


