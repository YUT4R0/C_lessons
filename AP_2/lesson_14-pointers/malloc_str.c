#include <stdio.h>
// • Para fazer alocação dinâmica de memória, deve-se fazer uso de
// 3 recursos:
// 1. Ponteiro para o tipo escolhido;
// 2. Função de alocação de memória;
// 3. Função para retornar o tamanho de um tipo.
int main()
{
  char s[100], *ptr;
  printf("Qual a sua string: \n");
  gets(s);
  ptr = (char *)malloc(strlen(s) + 1);
  if (ptr == NULL)
    puts("Problemas na alocacao de memoria");
  else
  {
    strcpy(ptr, s);
    printf("String original = %s \n", s);
    printf("String Copia = %s \n", ptr);
    free(ptr);
  }
  return 0;
}