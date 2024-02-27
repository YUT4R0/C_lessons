#include <stdio.h>
// Devolve o número de ocorrências do caractere em uma cadeia de string.
int strcountc(char *word, char c)
{
  int i, count = 0;
  for (i = 0; word[i] != '\0'; i++)
  {
    if (word[i] == c)
      count++;
  }
  return count;
}

int main()
{
  char occurrence, word[50];
  printf("set the word you want: ");
  scanf("%s", &word);
  printf("set the word you want: ");
  scanf(" %c", &occurrence);
  printf("word: %s\n", word);
  printf("quantity of '%c': %d", occurrence, strcountc(word, occurrence));
  return 0;
}