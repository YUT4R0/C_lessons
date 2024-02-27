#include <stdio.h>
#include <string.h>

char *halfstr(char *s)
{
  int len = strlen(s);
  int half = len / 2;
  s[half] = '\0';
  return 0;
}

int main()
{
  char s[101];
  printf("set a string (max 101): ");
  fgets(s, 101, stdin);

  printf("half of %s", s);
  *halfstr(s);
  printf("%s", s);
  return 0;
}
