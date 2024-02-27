#include <stdio.h>
int main()
{
  int num, sum = 0;
  do
  {
    printf("Digite um numero (type 0 to stop): ");
    scanf("%d", &num);
    sum += num;
  } while (num != 0);
  printf("sum = %d", sum);
  return 0;
}