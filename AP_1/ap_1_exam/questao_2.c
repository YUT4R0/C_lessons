#include <stdio.h>
// 2) Faça um algoritmo que leia um vetor de 12 elementos inteiros do tipo inteiro,
// mas só aceite números positivos e diferentes de zero. (1,0)
// a) Mostre os elementos do vetor.
// b) Troque o primeiro valor ímpar encontrado pelo último elemento.
// c) Exiba o vetor após a troca dos elementos.
int main()
{
  int vector[12], i, first_odd = -1, temp;
  printf("set 12 integer numbers positives and non-zero:\n");
  for (i = 0; i < 12; i++)
  {
    do
    {
      printf("item %d: ", i + 1);
      scanf("%d", &vector[i]);
      // verifies if number is non-zero positive and even
      if (vector[i] > 0)
        break; // exits loop if number is valid
      else
        printf("invalid number (%d)! try again.\n", vector[i]);
    } while (1);
  }
  // A) show vector elements
  printf("\nvector items:\n");
  for (i = 0; i < 12; i++)
    printf("%d ", vector[i]);
  // B) swap the first odd value found with the last item
  for (i = 0; i < 12; i++)
  {
    if (vector[i] % 2 != 0)
    {
      first_odd = i;
      break;
    }
  }
  if (first_odd != -1 && first_odd != 11)
  {
    temp = vector[first_odd];
    vector[first_odd] = vector[11];
    vector[11] = temp;
  }
  // C) shows vector after swapping elements
  printf("\nswapped vector:\n");
  for (i = 0; i < 12; i++)
    printf("%d ", vector[i]);
  return 0;
}
