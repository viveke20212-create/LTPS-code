#include <stdio.h>

void swap(int* a, int* b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Values before swapping: a = %d and b = %d \n", a, b);
  swap(&a, &b);
  printf("Values after swapping: a = %d and b = %d \n", a, b);
}