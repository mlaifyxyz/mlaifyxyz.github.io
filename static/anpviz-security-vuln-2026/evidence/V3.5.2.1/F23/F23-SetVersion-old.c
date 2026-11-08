/* dbg_server (3c9ef9d3079c780df658c2687a569e97ce294bcec4b2ac6a85fbab57be0f6079), Ghidra 12.2 headless; requested 00011c70 */
/* function cmd_SetVersion @ 00011c70 */

void cmd_SetVersion(char *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    param_1 = "/tmp/firmware_version";
    pcVar1 = "rm -f %s";
  }
  else {
    param_3 = "/tmp/firmware_version";
    pcVar1 = "echo %s > %s";
  }
  (*(code *)PTR_mysystem_with_param_00025110)(pcVar1,param_1,param_3);
  return;
}


