/* Write a C program to print a right-angled
   triangle pattern using for loop
        *
        **
        ***
        ****
*/

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}