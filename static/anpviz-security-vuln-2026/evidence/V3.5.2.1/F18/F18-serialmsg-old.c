/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 0005bdd0 */
/* function FUN_0005bdd0 @ 0005bdd0 */

undefined4 FUN_0005bdd0(void)

{
  int iVar1;
  undefined4 local_c8;
  undefined1 auStack_c4 [60];
  undefined4 local_88;
  undefined1 auStack_84 [124];
  
  local_88 = 0;
  memset(auStack_84,0,0x7c);
  local_c8 = 0;
  memset(auStack_c4,0,0x3c);
  iVar1 = GetSN(&local_c8);
  if (iVar1 == 0) {
    sprintf((char *)&local_88,"echo %s > /tmp/serialmsg",(char *)&local_c8);
    mysystem(&local_88);
    mysystem("/opt/ch/ZXST_plug -debug=true -vendor=satvision &");
    mysystem("touch /tmp/IPEYE_UP");
    DAT_000a8f7c = 1;
    iVar1 = FileExist("/tmp/restart_ZXST_plug");
  }
  else {
    iVar1 = FileExist("/tmp/restart_ZXST_plug");
  }
  if (iVar1 == 0) {
    return 0;
  }
  mysystem("rm /tmp/restart_ZXST_plug");
  return 0;
}


