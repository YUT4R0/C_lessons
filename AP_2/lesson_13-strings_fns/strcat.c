#include <stdio.h>
// Concatena as strings. Coloca uma string imediatamente após o
// final da outra string.
char *strcatFn(char *dest, const char *src)
{
  char *ptr = dest;
  // Move the pointer to the end of the destination string
  while (*dest != '\0')
  {
    dest++;
  }
  // Copy characters from source to destination until null terminator is encountered
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  // Add null terminator to the end of the concatenated string
  *dest = '\0';
  // Return the starting address of the concatenated string
  return ptr;
}

int main()
{
  char disc1[] = "PCA", disc2[] = "IPC";
  printf("previous state \n");
  printf("name 1: %s | name 2: %s\n", disc1, disc2);
  strcat(disc1, disc2);
  printf("current state\n");
  printf("name 1: %s | name 2: %s", disc1, disc2);
  strcatFn(disc1, disc2);
  printf("\nusing strcat logic\n");
  printf("name 1: %s | name 2: %s", disc1, disc2);
  return 0;
}