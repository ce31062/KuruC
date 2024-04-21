#include <stdio.h>

int countfunc(void);

int main(void)
{
  int count;

  countfunc();
  countfunc();
  countfunc();
  return 0;
}
int countfunc(void)
{
  static int count;
  count++;
  printf("%d\n", count);
  return count;
}
