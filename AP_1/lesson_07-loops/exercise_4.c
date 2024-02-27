#include <stdio.h>
// Escreva um programa que solicite ao usuário um número e escreva
// simultaneamente a sequência crescente e decrescente entre 1 e esse
// número:
// Exemplo: Introduzir um no: 5
// 1 5
// 2 4
// 3 3
// 4 2
// 5 1
int main()
{
  int i, num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Increasing  Decreasing\n");
  for (i = 0; i <= num; i++)
    printf("%d           %d\n", i, num - i);
  return 0;
}
