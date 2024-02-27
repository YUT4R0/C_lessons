#include <stdio.h>

int somanum(int n)
{
  int soma = 0, i;
  for (i = 1; i <= n; i++)
    soma += i;
  return (soma);
}

int main()
{
  int num;
  while (1)
  {
    printf("\nDigite um valor: ");
    scanf("%d", &num);
    if (num > 0)
    {
      printf("Valor = %d", somanum(num));
      break;
    }
    else
      printf("Digite um valor positivo");
  }
  return 0;
}