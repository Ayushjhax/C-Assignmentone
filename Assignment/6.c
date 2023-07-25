#include <stdio.h>

int main() {
  int n, fact = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (n > 0) {
    fact *= n;
    n--;
  }

  printf("The factorial of %d is %d.\n", n, fact);

  return 0;
}
