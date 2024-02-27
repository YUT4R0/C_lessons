#include <stdio.h>
// Construa um algoritmo que carregue uma matriz 5x4 de inteiros, calcule
// e mostre: quantidade de números negativos, quantidade de números
// positivos e a soma de todos os números positivos.
int main()
{
  int i, j, row_l, col_l, negativeCount = 0, positiveCount = 0, positiveSum = 0;
  printf("set row lenght: ");
  scanf("%d", &row_l);
  printf("set col lenght: ");
  scanf("%d", &col_l);
  int matrix[row_l][col_l];
  for (i = 0; i < row_l; i++)
  {
    for (j = 0; j < col_l; j++)
    {
      printf("set item [%d][%d] of [%d][%d]: ", i, j, row_l, col_l);
      scanf("%d", &matrix[i][j]);
    }
  }
  for (i = 0; i < row_l; i++)
  {
    for (j = 0; j < col_l; j++)
    {
      if (matrix[i][j] >= 0)
      {
        positiveCount++;
        positiveSum += matrix[i][j];
      }
      else
        negativeCount++;
    }
  }
  printf("Number of negative numbers: %d\n", negativeCount);
  printf("Number of positive numbers: %d\n", positiveCount);
  printf("Sum of all positive numbers: %d\n", positiveSum);
  return 0;
}