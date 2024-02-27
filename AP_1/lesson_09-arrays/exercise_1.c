#include <stdio.h>
// Faça um algoritmo que crie um vetor de "n" elementos inteiros e mostre
// a quantidade de números pares e a soma de todos os elementos do
// vetor.
int main()
{
  int i, l, evenCount = 0, sum = 0;
  printf("set array lenght: ");
  scanf("%d", &l);
  int V[l];
  for (i = 0; i < l; i++)
  {
    printf("set int element %d of %d: ", i + 1, l);
    scanf("%d", &V[i]);
  }
  for (i = 0; i < l; i++)
  {
    if (V[i] % 2 == 0)
      evenCount++;
    sum += V[i];
  }
  printf("Number of even numbers: %d\n", evenCount);
  printf("Sum of all elements: %d\n", sum);
  return 0;
}
