#include <stdio.h>
int main() {
  float phy, chem, bio, math, comp, total, percentage;
  printf(
      "Enter marks for Physics, Chemistry, Biology, Mathematics and "
      "Computer: ");
  scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);
  total = phy + chem + bio + math + comp;
  percentage = (total / 500) * 100;
  printf("Percentage: %.2f%%\n", percentage);
  if (percentage >= 90)
    printf("Grade A\n");
  else if (percentage >= 80)
    printf("Grade B\n");
  else if (percentage >= 70)
    printf("Grade C\n");
  else if (percentage >= 60)
    printf("Grade D\n");
  else if (percentage >= 40)
    printf("Grade E\n");
  else
    printf("Grade F\n");
  return 0;
}