#include <stdio.h>
#include "point.h"

void print_organism_and_food(POINT, POINT);

int main(void)
{
  POINT food_points[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  int points_length = 5;
  POINT current_location = {69, 7};
  POINT closest_food_location;
  get_closest_food(food_points, points_length, current_location, &closest_food_location);
  print_organism_and_food(current_location, closest_food_location);
  return 0;
}

void print_organism_and_food(POINT current_location, POINT closest_food_location)
{
  printf("Location of organism {%d %d}\n", current_location.x, current_location.y);
  printf("Location of closest food {%d %d}\n", closest_food_location.x, closest_food_location.y);
}
