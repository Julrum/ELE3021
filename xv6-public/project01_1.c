#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
  int ppid = getppid();
  int pid = getpid();
  printf(1, "My pid is %d\n", pid);
  printf(2, "My ppid is %d\n", ppid);
  exit();
}
