#include <stdio.h>
/*
Tipos de Dados

        Tipo      BIT BYTE
Literal char       8  1
Inteiro int       32  4
Inteiro short int 16  2
Inteiro long int  64  8
Real    float     32  4
Real    double    64  8
*/

int main()
{
  printf("===> byte size of each data type <===\n");
  printf("char size -> %d bytes;\n", sizeof(char));
  printf("int size -> %d bytes;\n", sizeof(int));
  printf("short int size -> %d bytes;\n", sizeof(short int));
  printf("long int size -> %d bytes;\n", sizeof(long int));
  printf("float size -> %d bytes;\n", sizeof(float));
  printf("double size -> %d bytes;\n", sizeof(double));
  return 0;
}