#include <stdio.h>

int main() {
  // declaration of variables and input
  int n, pos;
  scanf("%d ", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &pos);
  // deletion of element from the array
  for (int i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  n--;
  // traversing and printing the array
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}