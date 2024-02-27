#include <stdio.h>

int fibo(int n)
{
  if (n <= 1)
    return n;
  else
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int i, size;
  printf("set the size of fibonacci sequence: ");
  scanf("%d", &size);
  printf("fibonacci sequence with size: %d\n", size);
  for (i = 0; i < size; i++)
    printf("%d ", fibo(i));
  return 0;
}