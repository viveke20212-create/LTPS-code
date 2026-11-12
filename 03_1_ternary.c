#include <stdio.h>
int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int greater = (a > b) ? a : b;
  printf("Greater number is: %d\n", greater);
  return 0;
}