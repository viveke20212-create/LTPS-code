#include <stdio.h>

int main() {
  char str[100];
  int i = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  while (str[i] != '\0') {
    i++;
  }

  printf("Length of string = %d\n", i);

  return 0;
}