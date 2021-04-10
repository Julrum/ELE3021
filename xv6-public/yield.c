#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"

void sys_yield(void)
{
	return yield();
}
