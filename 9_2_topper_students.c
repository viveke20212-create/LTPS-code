#include <stdio.h>

struct Student {
  char uid[12];
  char name[30];
  float marks;
};

int main() {
  struct Student student_list[5];
  for (int i = 0; i < 5; i++) {
    scanf("%s", student_list[i].uid);
    scanf("%s", student_list[i].name);
    scanf("%f", &student_list[i].marks);
  }
  int topper = 0;
  for (int i = 1; i < 5; i++) {
    if (student_list[i].marks > student_list[topper].marks) topper = i;
  }
  printf("Topper of the batch \n");
  printf("UID: %s \n", student_list[topper].uid);
  printf("Name: %s \n", student_list[topper].name);
  printf("Marks: %f \n", student_list[topper].marks);
}