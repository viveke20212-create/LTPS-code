#include <stdio.h>
int main() {
  int n, i;
  float price, total = 0, discount = 0;
  printf("Enter number of items: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter price of item %d: ", i + 1);
    scanf("%f", &price);
    total += price;
  }
  if (total >= 1000)
    discount = total * 0.10;
  else if (total >= 500)
    discount = total * 0.05;
  printf("Total Bill: %.2f\n", total);
  printf("Discount: %.2f\n", discount);
  printf("Final Payable Amount: %.2f\n", total - discount);
  return 0;
}