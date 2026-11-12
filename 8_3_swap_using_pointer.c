#include <stdio.h>

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("before swap: %d %d\n", a, b);
  swap(&a, &b);
  printf("after swap: %d %d", a, b);
}