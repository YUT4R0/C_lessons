#include <stdio.h>
// • É um conjunto de registros (ou seja, é uma estrutura de
// dados), na qual cada registro ocupa uma posição fixa
// dentro da estrutura, não possuindo portanto, tamanho
// preestabelecido.
// • Os registro são formados por unidades de informação
// denominados campos.
// Arquivo Sequencial
// • Manipulando arquivo – FILE
// - Se caracteriza por ser uma estrutura formada por elementos do
// mesmo tipo dispostos de forma sequencial, tendo como objetivo
// fazer a comunicação entre a memória principal (RAM) e memória
// secundária (meios magnéticos), por meio do programa e do
// sistema operacional.
// FILE <*variavel ponteiro>
// FILE *ptrarq;
// Arquivo Sequencial
// • Manipulando arquivo – fopen
// - Todo arquivo deve ser aberto para que as informações contidas
// possam ser recuperadas
// *fopen(nome_do_arquivo, mode de abertura)
// r abre um arquivo para leitura.
// r+ abre um arquivo para atualização(leitura ou gravação)
// w cria um arquivo para gravação. Se o arquivo já existir, elimina
// o conteúdo atual.
// w+ cria um arquivo para atualização. Se o arquivo já existir,
// elimina o conteúdo atual.
// a anexa; abre ou cria um arquivo para gravação no final do
// arquivo.
// a+ anexa; abre ou cria um arquivo para atualização; a gravação é
// feita no final do arquivo.
// Manipulando arquivo – fclose
// - Após o uso do arquivo, é necessário que ele seja fechado,
// pois o seu conteúdo poderá estar exposto a agentes externos
// que podem danificar sua integridade.
// • Manipulando arquivo – fgets()
// - Essa função ler uma cadeia de caracteres
// armazenada em um arquivo.
// • Manipulando arquivo – fputs()
// - Essa função escreve uma cadeia de caracteres em
// um arquivo.
// char *fputs(char *cadeia, FILE *arq);
int main()
{
  FILE *file_ptr;
  char word[20];
  file_ptr = fopen("filetxt001.xxx", "a");
  printf("escreva algo: ");
  fgets(word, 20, stdin);
  fputs(word, file_ptr);
  fgets(word, 20, file_ptr);
  printf("%s", word);
  fclose(file_ptr);
  return 0;
}