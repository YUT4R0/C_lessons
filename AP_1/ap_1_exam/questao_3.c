#include <stdio.h>
// 3) Faça um algoritmo para aceitar somente que seja preenchido uma matriz
// quadrada (matriz com o mesmo número de linhas e colunas). Ex: matriz 2x2, 3x3,
// 4x4,5x5. Após a criação da matriz, deve-se armazenar os elementos da última linha
// dessa matriz em um vetor. (1,0)
int main()
{
  int i, j, size;
  do
  {
    printf("set the matrix size (m x n): ");
    scanf("%d", &size);
  } while (size <= 0);
  // matrix build up
  int M[size][size], last_row[size];
  for (i = 1; i <= size; i++)
  {
    for (j = 1; j <= size; j++)
    {
      printf("set number [%d][%d] for M[%d][%d]: ", i, j, size, size);
      scanf("%d", &M[i][j]);
    }
  }
  // stores last matrix row
  for (j = 1; j <= size; j++)
    last_row[j] = M[size][j];
  // outputs last row
  printf("last row (of %d): ", size);
  for (j = 1; j <= size; j++)
    printf("%d ", last_row[j]);
  return 0;
}