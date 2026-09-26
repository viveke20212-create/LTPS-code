#include <stdio.h>

int revFact(int n) {
  if (n == 0) return 1;
  return n * revFact(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d is the factorial", revFact(n));
}