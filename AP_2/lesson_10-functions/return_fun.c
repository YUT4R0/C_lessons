#include <stdio.h>

int minutos()
{
  int hora, min;
  printf("horas: ");
  scanf("%d", &hora);
  printf("minutos: ");
  scanf("%d", &min);
  return (hora * 60 + min);
}

int main()
{
  int mins1, mins2, res;
  printf("Digite a primeira hora:\n");
  mins1 = minutos();
  printf("\nDigite a segunda hora:\n");
  mins2 = minutos();
  res = mins2 - mins1;
  printf("a diferenca e de %d minutos", res);
  return 0;
}