#include <stdio.h>
// Verifica se a string é palíndromo.
int strpal(char *w)
{
  int i, j;
  for (i = 0, j = strlen(w) - 1; i < j; i++, j--)
  {
    if (w[i] != w[j])
      return 0;
  }
  return 1;
}

int main()
{
  char w[] = "osso";
  printf("word: %s\n", w);
  printf("is palindrome: %d\n", strpal(w));
  return 0;
}