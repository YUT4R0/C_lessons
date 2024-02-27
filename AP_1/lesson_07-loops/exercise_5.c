#include <stdio.h>
// Escreva um programa que solicite ao usuário um número. Em seguida
// escreva todos os números inteiros a partir desse número, exceto os
// múltiplos de 3. Quando encontrar o primeiro múltiplo de 10 a execução
// termina.
// Exemplo: Introduzir um no: 13
// 13
// 14
// 16
// 17
// 19
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  do
  {
    if (num % 3 != 0)
      printf("%d\n", num);
    num++;
  } while (num % 10 != 0);
  return 0;
}
