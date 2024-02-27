#include <stdio.h>
// Faça um programa para gravar um registro em um
// arquivo.
// Numero identificador / Nome / Sobrenome /
// Sexo / SaldoConta
struct Record
{
  int id;
  char firstName[50];
  char lastName[50];
  char gender;
  float accountBalance;
};

int main()
{
  struct Record rec = {123456, "John", "Doe", 'M', 500.50};
  FILE *file = fopen("records.txt", "w");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }
  fprintf(file, "%d %s %s %c %.2f\n", rec.id, rec.firstName, rec.lastName, rec.gender, rec.accountBalance);
  fclose(file);
  printf("Record written to file successfully.\n");
  return 0;
}
