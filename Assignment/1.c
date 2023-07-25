#include <stdio.h>

int main() {
  int x1, y1, x2, y2, x3, y3;
  float slope1, slope2;

  printf("Enter the coordinates of point 1: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter the coordinates of point 2: ");
  scanf("%d %d", &x2, &y2);

  printf("Enter the coordinates of point 3: ");
  scanf("%d %d", &x3, &y3);

  slope1 = (y2 - y1) / (x2 - x1);
  slope2 = (y3 - y2) / (x3 - x2);

  if (slope1 == slope2) {
    printf("The three points are collinear.\n");
  } else {
    printf("The three points are not collinear.\n");
  }

  return 0;
}
