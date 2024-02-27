#include <stdio.h>
// Escreva um programa que calcule a média dos números digitados
// pelo usuário, se eles forem pares. Termine a leitura se o usuário
// digitar zero (0).
int main()
{
  int num, even = 0, sum = 0;
  float average;
  do
  {
    printf("set the number N-%d (type 0 to stop): ", even);
    scanf("%d", &num);
    if (num % 2 == 0)
    {
      sum += num;
      even++;
    }
  } while (num != 0);
  if (even > 0)
  {
    average = sum / even;
    printf("average of even numbers entered: %.2f\n", average);
  }
  else
    printf("No even numbers were given.");
  return 0;
}
