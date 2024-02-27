#include <stdio.h>
// Compara as strings alfabeticamente
int strcmpFn(const char *str1, const char *str2)
{
  // Loop through the strings until a difference is found or both strings end
  while (*str1 != '\0' || *str2 != '\0')
  {
    // If characters are different, return the difference
    if (*str1 != *str2)
      return *str1 - *str2;
    // Move to the next characters in both strings
    str1++;
    str2++;
  }
  // If both strings are identical, return 0
  return 0;
}

int main()
{
  const char str1[] = "pedro";
  const char str2[] = "pedrovisky";
  printf("word 1: %s\n", str1);
  printf("word 2: %s\n", str2);
  int result = strcmpFn(str1, str2);
  if (result == 0)
    printf("Strings are not equal");
  else if (result < 0)
    printf("String '%s' comes before '%s'\n", str1, str2);
  else
    printf("String '%s' comes after '%s'\n", str1, str2);
  return 0;
}