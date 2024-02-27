#include <stdio.h>
// Ponteiros são mecanismo flexível de manipulação de dados.
// • Um ponteiro proporciona um modo de acesso às variáveis sem
// referenciá-las diretamente.
// • O mecanismo usado para isto é o endereço da variável, sendo
// o ponteiro a representação simbólica de um endereço.
// • Ponteiros são normalmente utilizados no tratamento e
// manipulação de vetores e strings.
// • O objetivo do ponteiro é armazenar o endereço de outra
// variável, que é um número.
//    int x = 5;
//    int *pointer;
//    pointer = &x;
int main()
{
  int x, y, *px, *py;
  x = 100;
  px = &x;
  py = px;
  y = *py;
  printf("x = %d, &px = %d y = %d, &py = %d", x, y, &px, &py);
}