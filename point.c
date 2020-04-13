#include <math.h>
#include "point.h"

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  double distanceFromCurrentFood, distanceFromClosestFood;
  int dx, dy;
  for (int i = 0; i < points_length; i++)
  {
    dx = current_location.x - food_points[i].x;
    dy = current_location.y - food_points[i].y;
    distanceFromCurrentFood = sqrt(pow(dx, 2) + pow(dy, 2));

    dx = current_location.x - closest_food_location->x;
    dy = current_location.y - closest_food_location->y;
    distanceFromClosestFood = sqrt(pow(dx, 2) + pow(dy, 2));

    if (distanceFromCurrentFood < distanceFromClosestFood)
    {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}
