#include <stdio.h>
// Devolve o índice da primeira ocorrência do caractere na string.
int indchr(char *word, char c)
{
  int i;
  for (i = 0; word[i] != '\0'; i++)
  {
    if (word[i] == c)
      return i;
  }
  return -1;
}

int main()
{
  char word[50] = "3 copos 2 garotas e 1 cameraman";
  printf("word: %s\n", word);
  printf("index of c: %d", indchr(word, 'c'));
  return 0;
}