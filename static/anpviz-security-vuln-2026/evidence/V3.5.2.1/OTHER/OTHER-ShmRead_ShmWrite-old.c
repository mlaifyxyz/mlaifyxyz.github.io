/* ===== ShmRead @ 00045184 ===== */

void ShmRead(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = shmat(*(int *)(DAT_000451b0 + 0x45194),(void *)0x0,0);
  memcpy(param_2,(void *)((int)pvVar1 + param_1),param_3);
  (*(code *)PTR_shmdt_000c5d34)(pvVar1);
  return;
}


/* ===== ShmWrite @ 000451b4 ===== */

void ShmWrite(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = shmat(*(int *)(DAT_000451e0 + 0x451bc),(void *)0x0,0);
  memcpy((void *)((int)pvVar1 + param_1),param_2,param_3);
  (*(code *)PTR_shmdt_000c5d34)(pvVar1);
  return;
}


