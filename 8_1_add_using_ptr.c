#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int *ptr1 = &a, *ptr2 = &b;
  int sum = *ptr1 + *ptr2;
  printf("%d is sum", sum);
  return 0;
}