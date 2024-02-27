#include <stdio.h>
int main()
{
  int i, num, sum = 0;
  for (i = 0; i < 5; i++)
  {
    printf("set num N-%d: ", i + 1);
    scanf("%d", &num);
    sum += num;
  }
  printf("sum = %d", sum);
  return 0;
}