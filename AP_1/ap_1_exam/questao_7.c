#include <stdio.h>
// 7) Faça um algoritmo para ler uma matriz A 3x3. Após a criação da matriz, deve-se
// colocar os elementos dessa matriz em uma outra matriz B 3x3, mas de forma
// ordenada por linha. (1,0)
// bubble sorts matrix rows items
void sortRow(int row[], int size)
{
  int i, j, temp;
  // subtracting last item of size cuz it must be the biggest
  for (i = 0; i < size - 1; i++)
  {
    // reduces the number of comparation for each loop iteration
    for (j = 0; j < size - i - 1; j++)
    {
      // compares current item with next item
      if (row[j] > row[j + 1])
      {
        // change items if they are out of order
        temp = row[j];
        row[j] = row[j + 1];
        row[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int i, j, A[3][3], B[3][3];
  // matrix A build up
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("set number [%d][%d] of [2][2]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  // copying and sorting each row from A to B
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      B[i][j] = A[i][j];
    // making bubble sort for each row
    sortRow(B[i], 3);
  }
  // outputs matrix A
  printf("\nmatrix A:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d ", A[i][j]);
    printf("\n");
  }
  // outputs matrix B
  printf("\nmatrix B:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d ", B[i][j]);
    printf("\n");
  }
}
