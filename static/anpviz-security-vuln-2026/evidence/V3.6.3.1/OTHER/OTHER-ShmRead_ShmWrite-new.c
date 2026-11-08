/* ===== ShmRead @ 00047660 ===== */

void ShmRead(uint param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  
  if (((int)(param_1 | param_3) < 0) ||
     (*(int *)(DAT_000476fc + 0x47672) < (int)(param_1 + param_3))) {
    DebugPrint(8,7,DAT_0004770c + 0x476c8,DAT_00047708 + 0x476d6,0x194,DAT_00047704 + 0x476bc,
               param_1,param_3,*(int *)(DAT_000476fc + 0x47672));
    return;
  }
  if (0x4000 < (int)param_3) {
    DebugPrint(8,7,DAT_00047714 + 0x476f2,DAT_00047710 + 0x476f8,0x19b,DAT_000476fc + 0x47676,
               param_3,0x4000,param_1);
  }
  pvVar1 = shmat(*(int *)(DAT_00047700 + 0x476a2),(void *)0x0,0);
  memcpy(param_2,(void *)((int)pvVar1 + param_1),param_3);
  (*(code *)PTR_shmdt_000ccd60)(pvVar1);
  return;
}


/* ===== ShmWrite @ 00047718 ===== */

void ShmWrite(uint param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  
  if (((int)(param_1 | param_3) < 0) ||
     (*(int *)(DAT_000477b4 + 0x4772a) < (int)(param_1 + param_3))) {
    DebugPrint(8,7,DAT_000477c4 + 0x4777e,DAT_000477c0 + 0x47794,0x1b7,DAT_000477bc + 0x47772,
               param_1,param_3,*(int *)(DAT_000477b4 + 0x4772a));
    return;
  }
  if (0x4000 < (int)param_3) {
    DebugPrint(8,7,DAT_000477cc + 0x477a8,DAT_000477c8 + 0x477b6,0x1be,DAT_000477b4 + 0x4772e,
               param_3,0x4000,param_1);
  }
  pvVar1 = shmat(*(int *)(DAT_000477b8 + 0x47758),(void *)0x0,0);
  memcpy((void *)((int)pvVar1 + param_1),param_2,param_3);
  (*(code *)PTR_shmdt_000ccd60)(pvVar1);
  return;
}


