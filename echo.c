#include "types.h"
#include "stat.h"
#include "user.h"
#include "x86.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  int a = 2;
  
  printf(1, "Value of a: %d\n", a);
  // cas(volatile int *addr, int expected, int newval)
  cas(&a, 1, 3);
  printf(1, "Value of a: %d\n", a);
  cas(&a, 2, 4);
  printf(1, "Value of a: %d\n", a);
  cas(&a, 2, 5);
  printf(1, "Value of a: %d\n", a);
  exit();
}
