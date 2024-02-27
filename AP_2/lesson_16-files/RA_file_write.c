#include <stdio.h>
// Arquivo de acesso aleatório
// • Criando um arquivo – fwrite()
// - Pode escrever qualquer tipo dado e não apenas
// caracteres ou cadeia de caracteres.
// size_t fwrite(void *mem, size_t qtd_bytes, size_t
// cont, file *arq)
// mem Representa a variável que armazena o conteúdo para ser gravado no arquivo.
// qtd_bytes Representa a variável que armazena o conteúdo para ser garvado
// cont Representa o número de espaços de memória do tamanho especificado por
// qtd_bytes que serão escritos no arquivo.
// arq É o endereço do arquivo onde as informações serão escritas.
// • Criando um arquivo – fread()
// - Pode ler qualquer tipo dado e não apenas caracteres ou
// cadeia de caracteres.
// void fread(void *buffer, int numero_de_bytes, int
// count, FILE *fp);
// • Criando um arquivo – rewind()
// - Posiciona o cursor (indicador da posição atual) de volta ao
// início do arquivo.
// void rewind(FILE *arq);
// • Criando um arquivo – fseek()
// - Posiciona o cursor (ponteiro) em um endereço específico,
// tornando possível leituras e escritas aleatórias.
// int *fseek(FILE *arq, long qtd_bytes, int
// posicao);
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
  file = fopen("fileuivoTeste.dat", "w");
  if (file == NULL)
  {
    fprintf(stderr, "\nError opend file\n");
    exit(1);
  }
  printf("Digite o numero da conta");
  scanf("%d", &dados.id);
  while (dados.id != 0)
  {
    printf("Digite nome, sobrenome e saldo");
    scanf("%s%s%f", &dados.nome, &dados.sobrenome, &dados.saldo);
    fwrite(&dados, sizeof(struct person), 1, file);
    printf("Digite o numero da conta");
    scanf("%d", &dados.id);
  }
  fclose(file);
  return 0;
}