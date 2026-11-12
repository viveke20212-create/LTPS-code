#include <stdio.h>
struct SData {
  int i;
  double f;
  char str[20];
};

union UData {
  int i;
  double f;
  char str[20];
};

int main() {
  struct SData s;
  union UData u;
  printf("Size of struct = %lu bytes\n", sizeof(s));
  printf("Size of union = %lu bytes\n", sizeof(u));
  return 0;
}