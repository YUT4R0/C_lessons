#include <stdio.h>
// Devolve o número de caracteres existente na string.
int strlenFn(char *str)
{
  int len = 0;
  while (str[len] != '\0')
    len++;
  return len;
}
// Pode utilizar para verificar se uma string é vazia.
int isNull(char *str)
{
  return (str[0] == '\0');
}

int main()
{
  char nm[20], str_example[] = "";
  printf("Digite um nome: ");
  scanf("%s", nm);
  printf("Quantidade de caracteres (strlen) = %d\n", strlen(nm));
  printf("Quantidade de caracteres (logica) = %d\n", strlenFn(nm));
  if (isNull(str_example))
    printf("str_example is null");
  else
    printf("has sring");
}