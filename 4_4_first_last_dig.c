#include <stdio.h>

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int last_dig = n % 10;
  while (n >= 10) n /= 10;
  printf("%d is the first digit \n", n);
  printf("%d is the last digit", last_dig);
}