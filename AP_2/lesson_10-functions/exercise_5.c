#include <stdio.h>
// Faça um procedimento que recebe 2 valores inteiros por
// parâmetro e retorna-os ordenados em ordem crescente.
void sortAscending(int a, int b)
{
  if (a >= b)
    printf("%d %d", b, a);
  else
    printf("%d %d", a, b);
}

int main()
{
  int num1, num2;
  printf("Enter first int value: ");
  scanf("%d", &num1);
  printf("Enter second int value: ");
  scanf("%d", &num2);
  sortAscending(num1, num2);
  return 0;
}
