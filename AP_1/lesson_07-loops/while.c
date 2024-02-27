#include <stdio.h>
int main()
{
  int num, sum = 0;
  while (num <= 100)
  {
    printf("set a num (num above 100 stops loop): ");
    scanf("%d", &num);
    sum += num;
  }
  printf("sum = %d", sum);
  return 0;
}