#include <stdio.h>
int main() {
  int a = 10;
  float b = 5.5;
  void* ptr;
  ptr = &a;
  printf("Integer value = %d\n", *(int*)ptr);  // Cast to int
  ptr = &b;
  printf("Float value = %.2f\n", *(float*)ptr);  // Cast to float
  return 0;
}
