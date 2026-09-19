/* Write a C program to print a right-angled
   triangle pattern using for loop
    1
    2 3
    4 5 6
    7 8 9 10

*/

#include <stdio.h>

int main() {
  int n, count = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", count++);
    }
    printf("\n");
  }
  return 0;
}