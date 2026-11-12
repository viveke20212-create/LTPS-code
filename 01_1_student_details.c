#include <stdio.h>
int main() {
  char name[30];
  int age;
  printf("Enter name: ");
  scanf("%s", name);
  printf("Enter age: ");
  scanf("%d", &age);
  printf("Name: %s, Age: %d\n", name, age);
  return 0;
}