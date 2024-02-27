#include <stdio.h>

int main()
{
  int a = 0, b = 0;
  printf("Post-unary opperator:\n");
  printf("print(value): %d\n", a);
  printf("print(value++): %d\n", a++);
  printf("print(value): %d\n", a);
  printf("print(value--): %d\n", a--);
  printf("print(value): %d\n", a);
  printf("Pre-unary opperator:\n");
  printf("print(value): %d\n", b);
  printf("print(++value): %d\n", ++b);
  printf("print(value): %d\n", b);
  printf("print(--value): %d\n", --b);
  printf("print(value): %d\n", b);
  return 0;
}