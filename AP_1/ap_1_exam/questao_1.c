#include <stdio.h>
// 1) Faça um algoritmo que leia um vetor de 10 elementos do tipo inteiro, mas só
// aceite números pares e positivos nesse vetor. E no final mostre a soma dos dois
// maiores elementos. (0,5)
int main()
{
  int vector[10];
  int i, n, sum = 0;
  printf("set 10 numbers evens and non-zero positives:\n");
  for (i = 0; i < 10; i++)
  {
    do
    {
      printf("item %d: ", i + 1);
      scanf("%d", &n);
      // verifies if n is non-zero positive and even
      if (n % 2 == 0 && n > 0)
      {
        vector[i] = n;
        break; // exits loop if n is valid
      }
      else
        printf("invalid number (you typed %d)! Try again.\n", n);
    } while (1);
  }
  // sets and sums the two biggest numbers
  int biggest = vector[0], biggest2 = vector[1];
  for (i = 2; i < 10; i++)
  {
    if (vector[i] > biggest)
    {
      biggest2 = biggest;
      biggest = vector[i];
    }
    else if (vector[i] > biggest2)
    {
      biggest2 = vector[i];
    }
  }
  sum = biggest + biggest2;
  printf("sum of the 2 biggest numbers: %d\n", sum);
  return 0;
}