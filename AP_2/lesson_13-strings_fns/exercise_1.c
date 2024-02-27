#include <stdio.h>
// Implemente uma função que devolve o número de caracteres alfabéticos
// (A,a,B,b,C,c,...,Z,z). Deve considerar tanto letras maiúsculas quanto minusculas.
int lenalf(char *w)
{
  int i, count = 0;
  for (i = 0; i < strlen(w); i++)
  {
    if (toupper(w[i]) >= 'A' && toupper(w[i]) <= 'Z')
      count++;
  }
  return count;
}

int main()
{
  char w[20];
  printf("set some word (max 20): ");
  scanf("%s", w);
  printf("number of chars: %d\n", lenalf(w));
  return 0;
}