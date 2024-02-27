#include <stdio.h>
/*
Escreva um programa em C que peça ao usuário dois
números inteiros e apresente o resultado da realização das
operações aritméticas tradicionais.
*/
int main()
{
  int num1, num2;
  printf("Enter the first integer: ");
  scanf("%d", &num1);
  printf("Enter the second integer: ");
  scanf("%d", &num2);
  printf("Sum: %d + %d = %d\n", num1, num2, num1 + num2);
  printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
  printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
  // Check if the second number is not zero to avoid division by zero
  if (num2 != 0)
    printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
  else
    printf("Division by zero is not possible.\n");
  return 0;
}
