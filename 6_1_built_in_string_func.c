
#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "Hello";
  char str2[50] = "World";
  char str3[50];

  printf("Original string: %s\n", str1);

  printf("Length: %lu\n", strlen(str1));

  strcpy(str3, str1);
  printf("Copied string: %s\n", str3);

  strcat(str1, str2);
  printf("Concatenated string: %s\n", str1);

  printf("Comparison: %d\n", strcmp(str2, str3));

  // strrev() is compiler-specific
  // printf("Reversed string: %s\n", strrev(str3));

  return 0;
}
