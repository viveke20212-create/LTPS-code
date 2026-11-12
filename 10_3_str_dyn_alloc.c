#include <stdio.h>
#include <stdlib.h>
int main() {
  char* str;
  int size;
  printf("Enter the length of the string: ");
  scanf("%d", &size);
  // Allocate memory for the string (+1 for null terminator)
  str = (char*)malloc((size + 1) * sizeof(char));
  if (str == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  // Clear input buffer before taking string input
  getchar();
  printf("Enter the string: ");
  fgets(str, size + 1, stdin);
  printf("You entered: %s", str);
  free(str);  // Free the allocated memory
  return 0;
}
