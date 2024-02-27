#include <stdio.h>
// 6) Faça um algoritmo que leia um vetor de 7 elementos do tipo inteiro, mas só
// aceite números primos nesse vetor. E no final mostre a soma dos dois maiores
// elementos. (0,5)
int isPrime(int num)
{
  int i;
  if (num <= 1)
    return 0;
  for (i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int i, arr[7], primeArr[7], sum = 0;
  for (i = 0; i < 7;)
  {
    printf("type 7 primes numbers (%d of 7): ", i + 1);
    scanf("%d", &arr[i]);
    if (isPrime(arr[i]))
    {
      primeArr[i] = arr[i];
      i++;
    }
    else
      printf("invalid number (%d), try again.\n", arr[i]);
  }
  int temp, biggest_1 = primeArr[0], biggest_2 = primeArr[1];
  if (biggest_2 > biggest_1)
  {
    temp = biggest_1;
    biggest_1 = biggest_2;
    biggest_2 = temp;
  }
  for (i = 2; i < 7; i++)
  {
    if (primeArr[i] > biggest_1)
    {
      biggest_2 = biggest_1;
      biggest_1 = primeArr[i];
    }
    else if (primeArr[i] > biggest_2)
      biggest_2 = primeArr[i];
  }
  sum = biggest_1 + biggest_2;
  printf("sum of the two biggests elements: %d \n", sum);
  return 0;
}