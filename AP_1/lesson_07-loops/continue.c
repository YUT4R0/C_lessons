#include <stdio.h>
// Comando continue: Passa para próxima iteração do laço.
int main()
{
  int i;
  for (i = 0; i < 10; i++)
  {
    if (i == 6)
      break;
    else
    {
      if (i % 2 == 1)
        continue;
      else
        printf("i = %d\n", i);
    }
  }
  printf("END OF THE LOOP\n");
  return 0;
}
