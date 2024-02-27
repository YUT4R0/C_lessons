#include <stdio.h>
// Comando break: Utilizada para terminar um laço.
int main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    printf("i = %d: ", i);
    if (i == 5)
      break;
    else
      printf("2*%d = %d\n", i, 2 * i);
  }
  printf("END OF THE LOOP\n");
  return 0;
}