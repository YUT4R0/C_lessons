#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *invertstr(char *s)
{
  size_t i, len = strlen(s);
  char *inverted = malloc((len + 1) * sizeof(char));

  for (i = 0; i < len; i++)
    inverted[i] = s[len - 1 - i];

  inverted[len] = '\0';
  return inverted;
}

int main()
{
  char original[50];
  printf("set a string: ");
  scanf("%s", original);
  char *inverted = invertstr(original);
  printf("Original: %s\n", original);
  printf("Invertida: %s\n", inverted);

  free(inverted);

  return 0;
}