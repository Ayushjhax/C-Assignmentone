// 11. Find the smallest number in an array using pointers.
#include <stdio.h>

int main() {
  int arr[] = {10, 2, 5, 1, 9};
  int *p = arr;
  int smallest = *p;

  for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
    if (*p < smallest) {
      smallest = *p;
    }
    p++;
  }

  printf("The smallest number in the array is: %d\n", smallest);

  return 0;
}
