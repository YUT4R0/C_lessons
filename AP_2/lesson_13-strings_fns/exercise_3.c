#include <stdio.h>
// Faça uma função que leia uma palavra. Só deve chamar a função quando o
// tamanho da palavra for ímpar. Depois troque a letra do meio da palavra pela
// letra ‘X’. (1,5)
// Ex: palavra = ‘Maylin’. Não aceita e continua perguntando até que o tamanho da
// palavra seja ímpar.
// palavra = ‘Osvaldo’. Algoritmo aceita e troca a palavra para OsvXldo.
void replaceMiddleWithX(char *word)
{
  int len = strlen(word), middleIndex = len / 2;
  if (len % 2 != 0)
    word[middleIndex] = 'X';
}

int main()
{
  char word[100];
  int len;
  do
  {
    printf("Enter a word (must have an odd len): ");
    scanf("%s", word);
    len = strlen(word);
    if (len % 2 == 0)
      printf("Word len must be odd. Please enter again.\n");
  } while (len % 2 == 0);
  replaceMiddleWithX(word);
  printf("Modified word: %s\n", word);
  return 0;
}
