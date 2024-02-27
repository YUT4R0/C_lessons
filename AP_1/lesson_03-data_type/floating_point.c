#include <stdio.h>
/*
123.46E78 = 123.46 * 10^78
*/
int main()
{
  float kilos = 1.0E3;
  double grams = 1.0E6;
  float tons;
  printf("set amount of tons: ");
  scanf("%f", &tons);
  printf("Normal output | Using Floating point\n");
  printf("N of kilos = %f = %E \n", tons * kilos, tons * kilos);
  printf("N of grams = %f = %E \n", tons * grams, tons * grams);
  return 0;
}