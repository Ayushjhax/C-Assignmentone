#include <stdio.h>
#include <math.h>

int main() {
  int x, y, x_c, y_c, r;
  float distance;

  printf("Enter the coordinates of the center of the circle: ");
  scanf("%d %d", &x_c, &y_c);

  printf("Enter the radius of the circle: ");
  scanf("%d", &r);

  printf("Enter the coordinates of the point to be checked: ");
  scanf("%d %d", &x, &y);

  distance = sqrt((x - x_c) * (x - x_c) + (y - y_c) * (y - y_c));

  if (distance <= r) {
    printf("The point lies within the circle.\n");
  } else {
    printf("The point does not lie within the circle.\n");
  }

  return 0;
}
