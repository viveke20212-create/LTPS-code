/* You are given an array reverse it
   by swapping first and last element,
   second and second last element, so and
   so on using the same swap logic used
   in the previous question */
#include <stdio.h>

void swap(int* ptr1, int* ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int i = 0, j = n - 1;
  while (i < j) {
    swap(&arr[i], &arr[j]);
    i++, j--;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}