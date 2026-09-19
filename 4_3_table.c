/* Create a multiplication table
   for a user-input number. */

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number for table: ");
  scanf("%d ", &n);
  for (int i = 1; i <= 10; i++) printf("%d * %d = %d \n", n, i, n * i);
}