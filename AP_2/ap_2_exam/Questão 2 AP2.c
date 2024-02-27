#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repeatstr(char *string, int rep)
{
  int i, len = strlen(string);
  int result_len = (len + 1) * rep; // Considerando espa�os entre as c�pias e o caractere nulo final
  char *result = (char *)malloc(result_len);

  if (result == NULL)
  {
    fprintf(stderr, "Erro ao alocar mem�ria.\n");
    exit(EXIT_FAILURE);
  }

  // Preencher a nova string com c�pias da string original, separadas por espa�o
  for (i = 0; i < rep; i++)
  {
    strcat(result, string);
    if (i < rep - 1)
      strcat(result, " ");
  }
  return result;
}

int main()
{
  char input_string[100];
  int repetitions;

  printf("set a string: ");
  fgets(input_string, sizeof(input_string), stdin);

  // removes the new line char based on string size
  input_string[strcspn(input_string, "\n")] = '\0';
  printf("set the number of repetitions: ");
  scanf("%d", &repetitions);

  char *result = repeatstr(input_string, repetitions);

  // Imprimir o resultado
  printf("result: %s\n", result);

  // clean malloc
  free(result);

  return 0;
}
