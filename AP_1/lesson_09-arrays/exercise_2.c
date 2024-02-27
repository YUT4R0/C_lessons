// Construa um algoritmo que carregue o vetor de "n" posições e verifique o
// maior e o menor número do vetor
#include <stdio.h>

int main()
{
  int i, l, largest, smallest;
  printf("set array lenght: ");
  scanf("%d", &l);
  int arr[l];
  for (i = 0; i < l; i++)
  {
    printf("Set int element %d of %d: ", i + 1, l);
    scanf("%d", &arr[i]);
  }
  largest = smallest = arr[0];
  for (i = 1; i < l; i++)
  {
    if (arr[i] > largest)
      largest = arr[i];
    if (arr[i] < smallest)
      smallest = arr[i];
  }
  printf("Largest number: %d\n", largest);
  printf("Smallest number: %d\n", smallest);
  return 0;
}
