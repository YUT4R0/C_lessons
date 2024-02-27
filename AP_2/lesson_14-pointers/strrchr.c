#include <stdio.h>
// Implemente a função char *strrchr(char *s, char ch), que
// retorne o endereço da última ocorrência de ch em s; caso não
// exista, retorna NULL. (Note que é o endereço, e não o indice).
int strrchr(char *s, char ch)
{
  int last_i = -1, i = 0;
  while (*s != '\0')
  {
    if (*s == ch)
      last_i = i;
    s++;
    i++;
  }
  return last_i;
}

int main()
{
  char str[] = "hello world", ch = 'l';
  int last_index = strrchr(str, ch);
  if (last_index != -1)
    printf("Last occurrence of '%c' found at index: %d\n", ch, last_index);
  else
    printf("'%c' not found in the string.\n", ch);
  return 0;
}
