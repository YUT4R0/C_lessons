#include <stdio.h>
int main()
{
  char str[8], *p;
  int i;
  printf("Digite uma palavra: ");
  gets(str);
  p = str;
  for (i = strlen(str) - 1; i >= 0; i--)
    printf("%c", *(p + i));
  return 0;
}