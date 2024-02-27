// Construa um algoritmo que carregue dois vetores de "n" elementos cada.
// Mostre o vetor resultante da intercalação desses dois vetores.
#include <stdio.h>

int main()
{
  int i, n;
  printf("set array lenght: ");
  scanf("%d", &n);
  int A[n], B[n], interleavedVector[2 * n];
  for (i = 0; i < n; i++)
  {
    printf("set int element %d of %d for A: ", i + 1, n);
    scanf("%d", &A[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("set int element %d of %d for B: ", i + 1, n);
    scanf("%d", &B[i]);
  }
  // Interleave the elements from both vectors into the resulting vector
  int j = 0;
  for (i = 0; i < n; i++)
  {
    interleavedVector[j++] = A[i];
    interleavedVector[j++] = B[i];
  }
  // Display the resulting vector
  printf("Interleaved vector:\n");
  for (i = 0; i < 2 * n; i++)
    printf("%d ", interleavedVector[i]);
  printf("\n");
  return 0;
}
