#include <stdio.h>
#include <stdbool.h>
// 5) Faça um algoritmo para aceitar somente que seja preenchido uma matriz
// quadrada (matriz com o mesmo número de linhas e colunas). Ex: matriz 2x2, 3x3,
// 4x4,5x5. Após a criação da matriz, deve-se armazenar os elementos da diagonal
// principal dessa matriz em um vetor. (1,0)
int main()
{
  int size, i, j;
  printf("set matrix size: ");
  scanf("%d", &size);
  int matriz[size][size];
  int diagonal[size];
  printf("set matrix elements %dx%d:\n", size, size);
  size += 1;
  for (i = 1; i < size; i++)
  {
    for (j = 1; j < size; j++)
    {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 1; i < size; i++)
    diagonal[i] = matriz[i][i];
  printf("\nmain diagonal elements:\n");
  for (i = 1; i < size; i++)
    printf("%d ", diagonal[i]);
  return 0;
}