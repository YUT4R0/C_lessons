#include <stdio.h>
// Faça um programa para ler 6 números e exibir a soma dos números,
// o maior e o menor número lido do usuário.
int main()
{
  int i, n, number, sum = 0, largest, smallest;
  printf("Enter the number of numbers: ");
  scanf("%d", &n);
  printf("set the number N-1: ");
  scanf("%d", &number);
  largest = smallest = number;
  sum += number;
  for (i = 2; i <= n; i++)
  {
    printf("set the number N-%d: ", i);
    scanf("%d", &number);
    sum += number;
    if (number > largest)
      largest = number;
    if (number < smallest)
      smallest = number;
  }
  printf("Sum of the numbers: %d\n", sum);
  printf("Largest number: %d\n", largest);
  printf("Smallest number: %d\n", smallest);
  return 0;
}
