#include <stdio.h>

int main() {
  int number, binary, octal, hexadecimal;

  printf("Enter an integer: ");
  scanf("%d", &number);

  binary = 0;
  octal = 0;
  hexadecimal = 0;

  int i = 1;
  while (number > 0) {
    binary += (number % 2) * i;
    i *= 10;

    octal += (number % 8) * i;
    i *= 10;

    hexadecimal += (number % 16) * i;
    i *= 10;

    number /= 16;
  }

  printf("The binary equivalent is %d.\n", binary);
  printf("The octal equivalent is %d.\n", octal);
  printf("The hexadecimal equivalent is %x.\n", hexadecimal);

  return 0;
}
