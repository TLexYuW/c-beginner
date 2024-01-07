#include <stdio.h>

void f(int *j)
{
  int k = (*j) + 1;
  j = &k;
}

int main()
{
  int i = 20;
  int *p = &i;
  f(p);
  printf("i = %d\n", i);
  printf("j = %d\n", *p);

  printf("i(ptr) = %p\n", &i);
  printf("j(ptr) = %p\n", p);

  return 0;
}