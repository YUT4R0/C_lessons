#include <stdio.h>
// Criar uma função para receber três valores reais passados por
// parâmetro, multiplicar e mostrar o resultado.
void multiplyAndShow(float a, float b, float c)
{
  float result = a * b * c;
  printf("Result of multiplication: %.2f\n", result);
}

int main()
{
  float num1, num2, num3;
  printf("Enter real value N-1: ");
  scanf("%f", &num1);
  printf("Enter real value N-2: ");
  scanf("%f", &num2);
  printf("Enter real value N-3: ");
  scanf("%f", &num3);
  multiplyAndShow(num1, num2, num3);
  return 0;
}
