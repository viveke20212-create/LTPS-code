#include <stdio.h>

int main() {
  int r, c, i, j;

  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  int a[r][c], b[r][c];

  printf("Enter first matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) scanf("%d", &a[i][j]);

  printf("Enter second matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) scanf("%d", &b[i][j]);

  printf("Sum of matrices:\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) printf("%d ", a[i][j] + b[i][j]);
    printf("\n");
  }

  return 0;
}