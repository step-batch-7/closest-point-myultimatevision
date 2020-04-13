#include <math.h>
#include "point.h"

double find_distance_between(POINT point_a, POINT point_b)
{
  int dx, dy;
  dx = point_a.x - point_b.x;
  dy = point_a.y - point_b.y;
  return sqrt(pow(dx, 2) + pow(dy, 2));
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  double distance_from_current_food, distance_from_closest_food;
  int dx, dy;
  for (int i = 0; i < points_length; i++)
  {
    double distance_from_current_food = find_distance_between(current_location, food_points[i]);
    double distance_from_closest_food = find_distance_between(current_location, *closest_food_location);
    if (distance_from_current_food < distance_from_closest_food)
    {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}
