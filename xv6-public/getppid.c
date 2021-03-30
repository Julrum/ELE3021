#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"

int getppid (void)
{
  int ppid = myproc()->parent->pid;
  return ppid;
}

int sys_getppid(void)
{
  return getppid();
}
