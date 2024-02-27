#include <stdio.h>
/*
Escreva um programa em C que solicite um determinado
número de segundos e, em seguida, indique quantas horas,
minutos e segundos esse valor representa.
*/
int main()
{
  int totalSec, hours, min, sec;
  printf("Enter the total number of sec: ");
  scanf("%d", &totalSec);
  hours = totalSec / 3600;      // 1 hour = 3600 sec
  min = (totalSec % 3600) / 60; // 1 minute = 60 sec
  sec = totalSec % 60;
  printf("The given number of sec (%d) represents:\n", totalSec);
  printf("Hours: %d\n", hours);
  printf("min: %d\n", min);
  printf("sec: %d\n", sec);
  return 0;
}
