#include <stdio.h>
// Construa um procedimento para ler um vetor de 10
// posições e mostra a soma dos números nele armazenados.
void readAndShowSum()
{
  int i, vector[10], sum = 0;

  printf("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++)
  {
    printf("element N-%d: ", i + 1);
    scanf("%d", &vector[i]);
  }
  for (i = 0; i < 10; i++)
    sum += vector[i];
  printf("Sum of the numbers: %d\n", sum);
}

int main()
{
  readAndShowSum();
  return 0;
}
