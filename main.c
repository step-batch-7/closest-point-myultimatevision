#include <stdio.h>
#include "point.h"

#define POINT struct Point

int main(void)
{
  POINT food_points[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  int points_length = 5;
  POINT current_location = {69, 7};
  POINT closest_food_location = {18, 76};
  get_closest_food(food_points, points_length, current_location, &closest_food_location);
  printf("%d %d\n", closest_food_location.x, closest_food_location.y);
  return 0;
}