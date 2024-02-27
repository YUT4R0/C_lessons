#include <stdio.h>
// Construa um programa que leia três números e imprima na
// ordem decrescente.
int main()
{
  int num1, num2, num3;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Enter the third number: ");
  scanf("%d", &num3);
  // finding max number
  int max = num1;
  if (num2 > max)
    max = num2;
  if (num3 > max)
    max = num3;
  // Find the minimum number
  int min = num1;
  if (num2 < min)
    min = num2;
  if (num3 < min)
    min = num3;
  // Calculate the middle number
  int mid;
  if (num1 != max && num1 != min)
    mid = num1;
  else if (num2 != max && num2 != min)
    mid = num2;
  else
    mid = num3;
  printf("The numbers in descending order are: %d, %d, %d\n", max, mid, min);
  return 0;
}
