#include <stdio.h>
// Inverte a string s e devolve-a invertida.
char *strrev(char *w)
{
  int i, j;
  char temp;
  for (i = 0, j = strlen(w) - 1; i < j; i++, j--)
  {
    temp = w[i];
    w[i] = w[j];
    w[j] = temp;
  }
  return w;
}

int main()
{
  char w[] = "pedro";
  printf("word: %s\n", w);
  printf("reversed word: %s\n", strrev(w));
  return 0;
}