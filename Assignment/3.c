#include <stdio.h>

int main() {
  int x, y;

  printf("Enter the coordinates of the point: ");
  scanf("%d %d", &x, &y);

  if (x == 0 && y == 0) {
    printf("The point lies on the origin.\n");
  } else if (x == 0) {
    printf("The point lies on the x-axis.\n");
  } else if (y == 0) {
    printf("The point lies on the y-axis.\n");
  } else {
    printf("The point does not lie on the x-axis, y-axis or on the origin.\n");
  }

  return 0;
}
