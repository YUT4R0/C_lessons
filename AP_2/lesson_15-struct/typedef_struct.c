#include <stdio.h>

typedef struct
{
  char nome[40];
  float salario;
  int idade;
} TFuncionario;

int main()
{
  TFuncionario *vet;
  int tam, i;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tam);
  vet = (TFuncionario *)malloc(sizeof(TFuncionario) * tam);
  for (i = 0; i < tam; i++)
  {
    printf("\nDigite o nome: ");
    scanf("%s", vet[i].nome);
    printf("\nDigite o salario: ");
    scanf("%f", &vet[i].salario);
    printf("\nDigite a idade: ");
    scanf("%d", &vet[i].idade);
  }
  return 0;
}