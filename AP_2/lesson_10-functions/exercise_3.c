#include <stdio.h>
// Faça uma função que receba 3 valores e retorna o número médio (nem o maior e nem o menor valor).
float calculateAverage(float a, float b, float c)
{
  float largest, smallest, sum, average;
  largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
  sum = a + b + c;
  average = (sum - largest - smallest) / 1.0; // Ensure floating-point division
  return average;
}

int main()
{
  float num1, num2, num3, average;
  printf("set number N-1: ");
  scanf("%f", &num1);
  printf("set number N-2: ");
  scanf("%f", &num2);
  printf("set number N-3: ");
  scanf("%f", &num3);
  average = calculateAverage(num1, num2, num3);
  printf("Average of the three values (excluding the largest and smallest): %.2f\n", average);
  return 0;
}
