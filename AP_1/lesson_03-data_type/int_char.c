#include <stdio.h>

int main()
{
  char ch;
  int n = 1000;
  printf("Set some char: ");
  scanf("%c", &ch);
  printf("Set some number: ");
  scanf("%d", &n);
  printf("===> For char: <===\n");
  printf("char value = %c\nint ASCII value = %d", ch, ch);
  printf("\n===> For number: <===\n");
  printf("number value = %d\nASCII representation = %c", n, n);
  return 0;
}