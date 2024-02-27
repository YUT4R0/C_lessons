#include <stdio.h>
#include <string.h>
// Uma empresa contratou 6 funcionários temporários.
// Faça um algoritmo que mostre nome, telefone e
// venda realizada de cada funcionário. E no final
// mostre o nome de todos os funcionários que
// venderam mais de R$100,00, e o nome e telefone
// do funcionário que realizou a maior venda.
#define MAX_EMPLOYEES 6
struct Employee
{
  char name[50];
  char telephone[15];
  float sale;
};

int main()
{
  struct Employee employees[MAX_EMPLOYEES];
  int i;
  printf("Enter information for %d employees: ", MAX_EMPLOYEES);
  for (i = 0; i < MAX_EMPLOYEES; i++)
  {
    printf("\nEmployee %d:\n", i + 1);
    printf("Name: ");
    fgets(employees[i].name, sizeof(employees[i].name), stdin);
    employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline character
    printf("Telephone: ");
    fgets(employees[i].telephone, sizeof(employees[i].telephone), stdin);
    employees[i].telephone[strcspn(employees[i].telephone, "\n")] = '\0'; // Remove newline character
    printf("Sale made (R$): ");
    scanf("%f", &employees[i].sale);
    getchar(); // Consume newline character left by scanf
  }
  // Display employees who sold more than R$100.00
  printf("\nEmployees who sold more than R$100.00:\n");
  for (i = 0; i < MAX_EMPLOYEES; i++)
  {
    if (employees[i].sale > 100.00)
      printf("%s\n", employees[i].name);
  }
  // Find employee with the biggest sale
  int maxIndex = 0;
  for (i = 1; i < MAX_EMPLOYEES; i++)
  {
    if (employees[i].sale > employees[maxIndex].sale)
      maxIndex = i;
  }
  // Display employee with the biggest sale
  printf("\nEmployee with the biggest sale:\n");
  printf("Name: %s\n", employees[maxIndex].name);
  printf("Telephone: %s\n", employees[maxIndex].telephone);
  printf("Sale made (R$): %.2f\n", employees[maxIndex].sale);
  return 0;
}
