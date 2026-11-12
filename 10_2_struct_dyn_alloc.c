#include <stdio.h>
#include <stdlib.h>
struct Student {
  int rollNo;
  float marks;
};
int main() {
  int n = 5;
  struct Student* students =
      (struct Student*)malloc(n * sizeof(struct Student));
  if (students == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }
  printf("Enter roll number and marks for 5 students:\n");
  for (int i = 0; i < n; i++) {
    printf("Student %d:\n", i + 1);
    scanf("%d %f", &students[i].rollNo, &students[i].marks);
  }
  printf("\nStudent Details:\n");
  for (int i = 0; i < n; i++) {
    printf("Roll No: %d, Marks: %.2f\n", students[i].rollNo, students[i].marks);
  }
  free(students);
  return 0;
}
