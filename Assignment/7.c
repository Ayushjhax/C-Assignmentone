#include <stdio.h>

int main() {
  int n, sum, digit;

  for (int i = 1; i <= 10000; i++) {
    sum = 0;
    n = i;
    while (n > 0) {
      digit = n % 10;
      sum += digit * digit * digit;
      n /= 10;
    }

    if (sum == i) {
      printf("%d is an Armstrong number.\n", i);
    }
  }

  return 0;
}
