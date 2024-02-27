#include <stdio.h>
// Faça um programa para ler um valor de uma compra. Caso a
// compra seja superior a R$100,00, o cliente terá 10% de
// desconto, caso seja inferior a R$100,00, o cliente terá apenas
// 4% de desconto. No final mostra o valor com desconto.
int main()
{
  float purchaseValue, discount, discountedValue;
  printf("Enter the value of the purchase: R$");
  scanf("%f", &purchaseValue);
  if (purchaseValue > 100.00)
    discount = 0.10;
  else
    discount = 0.04;
  // Calculate the discounted value
  discountedValue = purchaseValue - (purchaseValue * discount);
  printf("Value with discount: R$%.2f\n", discountedValue);
  return 0;
}
