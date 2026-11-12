#include <stdio.h>
int main() {
  int a = 5, b = 10, temp;
  temp = a;
  a = b;
  b = temp;
  printf("values of a and b after swapping\n");
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
