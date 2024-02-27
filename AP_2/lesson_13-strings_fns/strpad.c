#include <stdio.h>
// Coloca um espaço em branco após cada um dos caracteres da string.
char *strpadFn(char *w)
{
  int i = strlen(w);
  w[2 * i] = w[i];
  for (i--; i >= 0; i--)
  {
    w[2 * i] = w[i];
    w[2 * i + 1] = ' ';
  }
  return w;
}

int main()
{
  char w[] = "pedro";
  printf("word: %s\n", w);
  printf("new word: %s\n", strpadFn(w));
  return 0;
}