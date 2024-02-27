#include <stdio.h>

int main()
{
  float num1, num2;
  char op;
  printf("set num 1: ");
  scanf("%f", &num1);
  printf("set operation: ");
  scanf(" %c", &op);
  printf("set num 2: ");
  scanf("%f", &num2);
  switch (op)
  {
  case '+':
    printf("= %.2f\n", num1 + num2);
    break;
  case '-':
    printf("= %.2f\n", num1 - num2);
    break;
  case '*':
    printf("= %.2f\n", num1 * num2);
    break;
  case '/':
    if (num2 != 0)
      printf("= %.2f\n", num1 / num2);
    else
      printf("Division by zero is not allowed.\n");
    break;
  default:
    printf("Invalid operation (%c)", op);
  }
  return 0;
}