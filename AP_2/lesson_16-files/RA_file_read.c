#include <stdio.h>

struct person
{
  int id;
  char nome[20];
  char sobrenome[20];
  float saldo;
};

int main()
{
  FILE *file;
  struct person dados;
  file = fopen("fileivoTeste.dat", "r");
  if (file == NULL)
  {
    fprintf(stderr, "\n Erro na abertura do arquivo\n");
    exit(1);
  }
  while (fread(&dados, sizeof(struct person), 1, file))
  {
    printf("id = %d\nname = %s %s\nsaldo = %.2f\n", dados.id, dados.nome, dados.sobrenome, dados.saldo);
  }
  fclose(file);
  return 0;
}