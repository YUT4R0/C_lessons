#include <stdio.h>
#include <limits.h>
// 4) Faça um algoritmo que leia um vetor de 12 elementos inteiros do tipo inteiro,
// mas só aceite números positivos e diferentes de zero. OBS: Nesse vetor não pode
// existir números repeateds, todos devem ser distintos um do outro. (1,0)
// a) Mostre os elementos do vetor
// b) Troque a posição do menor elemento com a posição do maior elementos
// c) Exiba o vetor após a troca dos elementos
int main()
{
  int vet[12], i, num, biggest = 0, smallest = INT_MAX, j, repeated = 0;
  for (i = 0; i < 12;)
  {
    printf("set int number (%d of 12): ", i + 1);
    scanf("%d", &num);
    for (j = 0; j < i; j++)
    {
      repeated = 0;
      if (vet[j] == num)
      {
        repeated = 1;
        printf("repeated number (%d), try another one\n", num);
        break;
      }
    }
    if (!repeated)
    {
      if (num > 0)
      {
        vet[i] = num;
        if (num >= biggest)
          biggest = num;
        if (num <= smallest)
          smallest = num;
        i++;
      }
      else
        printf("don't type negative or zero number pls\n");
    }
  }

  printf("vector numbers: \n");
  for (i = 0; i < 12; i++)
    printf("%d ", vet[i]);

  for (i = 0; i < 12; i++)
  {
    if (vet[i] == biggest)
      vet[i] = smallest;
    else if (vet[i] == smallest)
      vet[i] = biggest;
  }

  printf("\n vector after swapping the biggest and smallest numbers position: \n");
  for (i = 0; i < 12; i++)
    printf("%d ", vet[i]);
  return 0;
}