/*
        Develop a program to print
        all even and odd numbers
        within a given range.
*/

#include <stdio.h>

int main() {
  int start, end;
  scanf("%d %d", &start, &end);
  printf("All the even numbers in range: ");
  for (int i = start; i <= end; i++) {
    if (i % 2 == 0) printf("%d ", i);
  }
  printf("All the odd numbers in range: ");
  for (int i = start; i <= end; i++) {
    if (i % 2 == 1) printf("%d ", i);
  }
}