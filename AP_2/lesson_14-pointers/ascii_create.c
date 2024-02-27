#include <stdio.h>
#include <stdlib.h>
// 1. Implemente a função Ascii_create, que devolve uma string, com
// n caracteres, criada dinamicamente. A string é iniciada com os
// caracteres Ascii a partir do parâmetro Inic.
// Ex:
// Ascii_create(3, ‘A’) → “ABC”
// Ascii_create(5, ‘p’) → “pqrst”
// Ascii_create(0, ‘A’) → “”
char *Ascii_create(int n, char start)
{
  // Allocate memory for the string (including space for null terminator)
  char *str = (char *)malloc((n + 1) * sizeof(char));
  if (str == NULL)
  {
    printf("Memory allocation failed.\n");
    exit(1);
  }
  // Construct the string starting from the start character
  for (int i = 0; i < n; i++)
    str[i] = start + i; // Assign characters in ascending order
  str[n] = '\0';
  return str;
}

int main()
{
  printf("%s\n", Ascii_create(3, 'A')); // Output: ABC
  printf("%s\n", Ascii_create(5, 'p')); // Output: pqrst
  printf("%s\n", Ascii_create(0, 'A')); // Output: (empty string)
  return 0;
}
