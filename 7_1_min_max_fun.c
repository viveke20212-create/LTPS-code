#include <stdio.h>

int min(int arr[], int n) {
  int ans = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] < ans) ans = arr[i];
  }
  return ans;
}

int max(int arr[], int n) {
  int ans = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > ans) ans = arr[i];
  }
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d ", &arr[i]);
  }
  int min_val = min(arr, n);
  int max_val = max(arr, n);
  printf("%d is the min value \n", min_val);
  printf("%d is the max value \n", max_val);
}
