#include <stdio.h>

int main()
{
  float r, perimeter, d_perimeter;
  float Pi = 3.1415927, area;
  double d_Pi = 3.1415927, d_area;
  printf("set the radius: ");
  scanf("%f", &r);
  area = Pi * r * r;
  perimeter = 2 * Pi * r;
  d_area = d_Pi * r * r;
  d_perimeter = 2 * d_Pi * r;
  printf("Using float type:\n");
  printf("  Area = %f\n  Perimetro = %f\n", area, perimeter);
  printf("Using double type:\n");
  printf("  Area = %f\n  Perimetro = %f\n", d_area, d_perimeter);
  return 0;
}