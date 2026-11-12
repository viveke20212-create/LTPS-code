#include <stdio.h>
#include <string.h>

union Data {
  int i;
  float f;
  char str[20];
};
int main() {
  union Data d;
  d.i = 10;
  printf("After assigning int: i = %d\n", d.i);
  d.f = 20.5;
  printf("After assigning float: f = %.2f\n", d.f);
  printf("Reading int after float: i = %d (garbage)\n", d.i);
  strcpy(d.str, "Hello");
  printf("After assigning string: str = %s\n", d.str);
  printf("Reading float after string: f = %.2f (garbage)\n", d.f);
  return 0;
}
