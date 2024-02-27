#include <stdio.h>
// Escreva um programa em C que solicite um determinado
// número real e mostre qual a sua parte inteira e a sua parte
// fracionária.
int main()
{
  double realNumber, fractionalPart;
  int integerPart;
  printf("Enter a real number: ");
  scanf("%lf", &realNumber);
  // Extract the integer part
  integerPart = (int)realNumber;
  // Calculate the fractional part
  fractionalPart = realNumber - integerPart;
  printf("integer part of %lf: %d\n", realNumber, integerPart);
  printf("fractional part of %lf: %lf\n", realNumber, fractionalPart);
  return 0;
}
