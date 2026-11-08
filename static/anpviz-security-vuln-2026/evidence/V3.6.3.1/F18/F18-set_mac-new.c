/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 0006ccac */
/* function FUN_0006ccac @ 0006ccac */

undefined4 FUN_0006ccac(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char acStack_68 [32];
  char local_48 [64];
  
  DebugPrint(8,7,"[%s:%u]set mac: %s\n",DAT_0006cd80,0x1afc,param_1);
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  else {
    iVar1 = is_mac_addr_valid(param_1);
    if (iVar1 != 0) {
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      memset(local_48 + 4,0,0x3c);
      snprintf(local_48,0x40,"%s",param_1);
      FUN_00066720(local_48);
      mysystem_with_param("/opt/ch/ssn --ubootargs2 ethaddr \"%s\"",local_48);
      if (DAT_000b209c != 0) {
        snprintf(acStack_68,0x20,"%s\n",local_48);
        sVar2 = strlen(acStack_68);
        write_buffer_to_file("/data/mac",acStack_68,sVar2);
      }
      FUN_00068290(&DAT_00076908,local_48);
      return 0;
    }
  }
  DebugPrint(4,7,"[%s:%u]ConfigLanMacAddress: invalid mac \'%s\', rejected\n",DAT_0006cd80,0x1b03,
             param_1);
  return 0xffffffff;
}


