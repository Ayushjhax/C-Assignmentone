
#include <stdio.h>

int main() {
  int a, b, choice;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("The sum is %d\n", a + b);
      break;
    case 2:
      printf("The difference is %d\n", a - b);
      break;
    case 3:
      printf("The product is %d\n", a * b);
      break;
    case 4:
      if (b != 0) {
        printf("The quotient is %d\n", a / b);
      } else {
        printf("Division by zero is not possible.\n");
      }
      break;
    default:
      printf("Invalid choice.\n");
  }

  return 0;
}
