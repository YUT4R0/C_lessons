#include <stdio.h>
#include <stdlib.h>

char *strcpyFn(char *dest, const char *src)
{
  char *ptr = dest;
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  // Add null terminator to the end of the destination string
  *dest = '\0';
  // Return the starting address of the destination string
  return ptr;
}

int main()
{
  char disc1[] = "PCA", disc2[] = "IPC";
  printf("previous state \n");
  printf("name 1: %s | name 2: %s\n", disc1, disc2);
  strcpy(disc1, disc2);
  printf("current state \n");
  printf("name 1: %s | name 2: %s", disc1, disc2);

  strcpyFn(disc1, disc2);
  printf("\nusing strcpy logic\n");
  printf("name 1: %s | name 2: %s", disc1, disc2);
  return 0;
}