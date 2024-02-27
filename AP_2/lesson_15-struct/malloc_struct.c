#include <stdio.h>
#include <stdlib.h>
// • Para fazer a alocação dinâmica de um registro,
// primeiro declara-se o registro desejado. Essa
// declaração cria um novo tipo de variável;
// • Depois, declara-se uma variável ponteiro do tipo
// (registro) criado;
// • A seguir, é possível alocar um espaço de memória do
// tamanho do registro, que será endereçado (apontado)
// pela variável ponteiro, a qual foi declarada do tipo
// desse registro.
struct TFunc
{
  char nome[40];
  float salario;
  int idade;
};

int main()
{
  struct TFunc *PF;
  PF = (struct TFunc *)malloc(sizeof(struct TFunc));
  printf("\nDigite os dados do funcionario ");
  printf("\nNome: ");
  scanf("%s", PF->nome);
  printf("salario: ");
  scanf("%f", &PF->salario);
  printf("Idade: ");
  scanf("%d", &PF->idade);
  printf("\nConfira os dados digitados: ");
  printf("\n\nNome: %s", PF->nome);
  printf("\nsalario = %7.2f", PF->salario);
  printf("\nIdade = %d", PF->idade);
  return 0;
}