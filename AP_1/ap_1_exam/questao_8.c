#include <stdio.h>
// 8) Faça um algoritmo que aceite vetor A com quantidade de elementos pares e
// maiores que 3, ou seja, os veotres podem ser de 4, 6,8,10, 12 (...) posições. (1,0)
// a) Mostre os elementos do vetor.
// b) Coloque os elementos do vetor em uma matriz B, onde ficam 2 elementos por
// linha nessa matriz de forma ordenada.
void showArr(int arr[], int size)
{
  printf("arr A: ");
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void fillMatrix(int arr[], int size, int matrix[][2])
{
  int matrix_i = 0;
  for (int i = 0; i < size; i++)
  {
    matrix[matrix_i][i % 2] = arr[i];
    if (i % 2 == 1)
      matrix_i++;
  }
}

void showMatrix(int matrix[][2], int rows)
{
  printf("matrix B:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < 2; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
}

int main()
{
  int size = 6;
  int arr[] = {4, 6, 8, 12, 16, 22};

  if (size % 2 == 0 && size > 3)
  {
    int matrixRows = size / 2, matrizB[matrixRows][2];
    showArr(arr, size);
    fillMatrix(arr, size, matrizB);
    showMatrix(matrizB, matrixRows);
  }
  else
    printf("arr smaller than 3.\n");
  return 0;
}