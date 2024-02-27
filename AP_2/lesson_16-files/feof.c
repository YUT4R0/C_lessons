#include <stdio.h>
// • Criando um arquivo – feof()
// - Determina se o final do arquivo foi encontrado. Quando
// o resultado for 0 significa que o fim do arquivo ainda não
// foi atingido. Qualquer outro valor significa que o fim do
// arquivo foi encontrado.
// int feof (file *arq)
int main()
{
  FILE *ptrarq;
  char palavra[20];
  ptrarq = fopen("arqtxt01.xls", "r");
  int cont = 0;
  while (!feof(ptrarq))
  {
    fgets(palavra, 20, ptrarq);
    if (!feof(ptrarq))
    {
      printf("%s", palavra);
      cont += 1;
    }
  }
  printf("soma = %d", cont);
  fclose(ptrarq);
  return 0;
}