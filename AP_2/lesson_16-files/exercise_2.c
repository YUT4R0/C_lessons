#include <stdio.h>
// Faça um programa para ler os registros do arquivo
// criado na questão 2.
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
  FILE *file = fopen("records.txt", "r");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }
  struct Record rec;
  while (fscanf(file, "%d %s %s %c %f", &rec.id, rec.firstName, rec.lastName, &rec.gender, &rec.accountBalance) == 5)
  {
    printf("ID: %d\n", rec.id);
    printf("First Name: %s\n", rec.firstName);
    printf("Last Name: %s\n", rec.lastName);
    printf("Gender: %c\n", rec.gender);
    printf("Account Balance: %.2f\n", rec.accountBalance);
    printf("\n");
  }
  fclose(file);
  return 0;
}
