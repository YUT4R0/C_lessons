#include <stdio.h>

int powerFn(int b, int p)
{
  if (p == 0)
    return 1;
  else
  {
    if (p < 0)
      return b * powerFn(b, p + 1);
    else
      return b * powerFn(b, p - 1);
  }
}

int main()
{
  int b, p;
  printf("set the base number: ");
  scanf("%d", &b);
  printf("set the power number: ");
  scanf("%d", &p);
  printf("%d^%d = ", b, p);
  if (p < 0)
    printf("1/");
  printf("%d", powerFn(b, p));
}