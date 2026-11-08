/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00060194 */
/* function FUN_00060194 @ 00060194 */

undefined4 FUN_00060194(void)

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
    DAT_000ae060 = 1;
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


