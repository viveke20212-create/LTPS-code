#include <stdio.h>

int main() {
  int n, largest, sec_largest;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      sec_largest = largest;
      largest = arr[i];
    } else if (arr[i] > sec_largest)
      sec_largest = arr[i];
  }
  printf("%d is the second largest element \n", sec_largest);
  printf("%d is the largest element \n", largest);
  return 0;
}