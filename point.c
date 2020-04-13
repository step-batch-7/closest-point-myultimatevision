#include <math.h>
#include "point.h"

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  double distance_from_current_food, distance_from_closest_food;
  int dx, dy;
  for (int i = 0; i < points_length; i++)
  {
    dx = current_location.x - food_points[i].x;
    dy = current_location.y - food_points[i].y;
    distance_from_current_food = sqrt(pow(dx, 2) + pow(dy, 2));

    dx = current_location.x - closest_food_location->x;
    dy = current_location.y - closest_food_location->y;
    distance_from_closest_food = sqrt(pow(dx, 2) + pow(dy, 2));

    if (distance_from_current_food < distance_from_closest_food)
    {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}
