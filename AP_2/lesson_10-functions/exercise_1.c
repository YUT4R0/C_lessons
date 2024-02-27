#include <stdio.h>
// Faça um programa que tenha uma função para receber por parâmetro o
// tamanho do vetor, em seguida realiza as seguintes operações:
// a) Aceitar somente números ímpares e positivo.
// b) A função deve retornar a soma do maior e do menor elemento do
// vetor.
int createVector(int size)
{
  int i, vector[size], largest, smallest, sum;
  printf("Enter %d odd and positive numbers:\n", size);
  for (i = 0; i < size; i++)
  {
    printf("number %d of %d: ", i + 1, size);
    scanf("%d", &vector[i]);
    // Validate if the number is odd and positive
    if (vector[i] % 2 == 0 || vector[i] <= 0)
    {
      printf("Invalid input! Please enter an odd and positive number.\n");
      i--; // Decrement 'i' to input the number again
    }
  }
  largest = smallest = vector[0];
  for (i = 1; i < size; i++)
  {
    if (vector[i] > largest)
      largest = vector[i];
    if (vector[i] < smallest)
      smallest = vector[i];
  }
  sum = largest + smallest;
  return sum;
}

int main()
{
  int size, result;
  printf("Enter the size of the vector: ");
  scanf("%d", &size);
  result = createVector(size);
  printf("Sum of the largest and smallest elements: %d\n", result);
  return 0;
}