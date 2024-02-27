#include <stdio.h>
// Devolve o número de dígitos na string s.
int strcountd(char *word)
{
  int i, count = 0;
  for (i = 0; word[i] != '\0'; i++)
  {
    if (isdigit(word[i]))
      count++;
  }
  return count;
}

int main()
{
  char word[50] = "3 copos 2 garotas e 1 cameraman";
  printf("word: %s\n", word);
  printf("quantity of digits: %d", strcountd(word));
  return 0;
}