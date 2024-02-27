#include <stdio.h>
// Implemente uma função que recebe uma string, colocando a letra ‘J’ onde
// aparece caracteres repetidos.
// Ex: pitaia, deve retornar → pJtJJJ
void replaceRepeatsWithJ(char *str)
{
  int i, j, len = strlen(str);
  for (i = 0; i < len - 1; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      // Convert the character to lowercase
      char currentChar = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
      for (j = i + 1; j < len; j++)
      {
        char nextChar = (str[j] >= 'A' && str[j] <= 'Z') ? str[j] + 32 : str[j];
        // If the characters are the same and not already replaced with 'J'
        if (currentChar == nextChar && str[j] != 'J')
          str[j] = 'J';
      }
    }
  }
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  replaceRepeatsWithJ(str);
  printf("Modified string: %s\n", str);
  return 0;
}
