#include <stdio.h>
// Implemente uma função que devolve o último índice em que encontrou o
// caractere na string.
// Ex: funcao(“alface”, ‘a’) → retorna 3
// Ex: funcao(“alface”, ’g’) → retorna -1
int lastIndexOf(const char *str, char ch)
{
  int i, lastIndex = -1;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
      lastIndex = i;
  }
  return lastIndex;
}

int main()
{
  const char *str = "lettuce";
  char ch = 't';
  int lastIndex;
  lastIndex = lastIndexOf(str, ch);
  printf("Last index of '%c' in '%s': %d\n", ch, str, lastIndex);
  ch = 'g';
  lastIndex = lastIndexOf(str, ch);
  printf("Last index of '%c' in '%s': %d\n", ch, str, lastIndex);
  return 0;
}
