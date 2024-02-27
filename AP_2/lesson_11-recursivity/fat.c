#include <stdio.h>

int factorial(int n)
{
  if (n == 0)
    return 1;
  else
  {
    if (n == 1)
      printf("%d = ", n);
    else
      printf("%d*", n);
    return n * factorial(n - 1);
  }
}

int main()
{
  int n;
  printf("set the factorial number: ");
  scanf("%d", &n);
  printf("%d! = ", n);
  printf("%d", factorial(n));
}