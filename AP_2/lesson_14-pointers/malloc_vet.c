#include <stdio.h>
// • Para fazer alocação de um vetor dinamicamente, declare
// um ponteiro do tipo que se quer criar o vetor;
// • No comando de alocação de memória multiplique a
// quantidade de posições do vetor pelo tamanho do tipo;
// • Exemplo: para alocar um vetor de inteiros com 50
// posições, primeiro é feita a declaração do ponteiro tipo
// inteiro. Na alocação do ponteiro, multiplica-se o tamanho
// de inteiro por 50.
int main()
{
  int *p, size, i;
  printf("set vet size: ");
  scanf("%d", &size);
  p = (int *)malloc(sizeof(int) * size);
  if (p == NULL)
    printf("Vetor não alocado");
  else
  {
    printf("informe os valores do vetor:\n");
    for (i = 0; i < size; i++)
      scanf("%i", &p[i]);
  }
  return 0;
}