#include <stdio.h>
// Apaga todas as ocorrências do caractere ch na string s.
char *strdelcFn(char *w, char c)
{
  int i, j;
  for (i = 0, j = 0; w[i] != '\0'; i++)
  {
    if (w[i] != c)
      w[j++] = w[i];
  }
  w[j] = '\0';
  return w;
}

int main()
{
  char w[] = "kerjenelson";
  printf("word: %s\n", w);
  printf("new word: %s\n", strdelcFn(w, 'e'));
  return 0;
}