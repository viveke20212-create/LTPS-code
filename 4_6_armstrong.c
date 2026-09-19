/* Develop a program to verify
   if a number is an Armstrong
   number. */
#include <math.h>
#include <stdio.h>

int main() {
  int n, temp, dig_count = 0, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  temp = n;
  while (temp > 0) {
    dig_count++;
    temp /= 10;
  }
  temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    temp /= 10;
    sum += pow(digit, dig_count);
  }
  if (sum == n)
    printf("%d is armstrong number", n);
  else
    printf("%d is not an armstrong number", n);
}