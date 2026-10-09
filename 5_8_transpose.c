#include <stdio.h>

int main() {
  int r, c, i, j;

  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  int a[r][c];

  printf("Enter matrix elements:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) scanf("%d", &a[i][j]);

  printf("Transpose of matrix:\n");
  for (j = 0; j < c; j++) {
    for (i = 0; i < r; i++) printf("%d ", a[i][j]);
    printf("\n");
  }

  return 0;
}