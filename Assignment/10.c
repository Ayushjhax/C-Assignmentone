#include <stdio.h>

int main() {
  int age, sum = 0, count = 0;
  float average;

  for (int i = 0; i < 5; i++) {
    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &age);

    if (age == 0) {
      i--;
      continue;
    }

    sum += age;
    count++;
  }

  if (count > 0) {
    average = sum / count;
    printf("The average age is %.2f\n", average);
  } else {
    printf("No valid ages entered.\n");
  }

  return 0;
}
