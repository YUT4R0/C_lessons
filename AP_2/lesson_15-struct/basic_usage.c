#include <stdio.h>
// São estruturas de dados compostas heterogêneas, ou
// seja, não são de um mesmo tipo.
// • Esta estrutura de dados possibilita que várias informações
// diferentes possam ser agregadas, possibilitando várias
// combinações e resultando em novos tipos de dados.
// Estrutura Geral
// struct <nome identificador>
// {
// <lista dos tipos e seus membros>
// };
// struct <nome identificador> <variavel>
struct ficha_conta
{
  int num;
  float saldocc;
  float saldocp;
  char nome[35];
};

int main()
{
  struct ficha_conta conta[10];
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("Informe numero da conta: ");
    scanf("%d", &conta[i].num);
    printf("Valor conta corrente: ");
    scanf("%f", &conta[i].saldocc);
    printf("Valor conta poupanca: ");
    scanf("%f", &conta[i].saldocp);
    printf("Nome do usuario: ");
    scanf("%s", conta[i].nome);
  }
  return 0;
}