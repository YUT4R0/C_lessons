#include <stdio.h>
#include <ctype.h>
// Implemente a função char *First Vogal(char *s),
// retorna o endereço em que ocorre a primeira vogal na string s.
// Caso não exista, retorna NULL.
int FirstVowel(char *s)
{
  int i = 0;
  while (*s != '\0')
  {
    char ch = toupper(*s);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      return i;
    s++;
    i++;
  }
  return -1;
}

int main()
{
  char str[] = "hello world";
  int first_vowel_i = FirstVowel(str);
  if (first_vowel_i != -1)
    printf("First vowel found at i: %d\n", first_vowel_i);
  else
    printf("No vowel found in the string.\n");
  return 0;
}
