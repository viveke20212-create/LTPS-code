/* Task 4 practical 1 Write a program to
   display natural numbers
   up to n using loops. */

#include <stdio.h>

int main() {
  int n;
  // printf("Enter the value of n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) printf("%d \n", i);
  return 0;
}