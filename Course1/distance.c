#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define TIME_TO_MOVE 3;
#ifndef M_PI
  #define 3.1415;
#endif

int main(int argc, char** argv)
{
  typedef struct Vector Vector;
  struct Vector
  {
    float x;
    float y;
  };
  
  float pointOneX;
  float pointOneY;
  float pointTwoX;
  float pointTwoY;
  
  printf("Enter x for the first point: ");
  scanf("%f", &pointOneX);
  printf("Enter y for the first point: ");
  scanf("%f", &pointOneY);
  printf("Enter x for the second point: ");
  scanf("%f", &pointTwoX);
  printf("Enter y for the second point: ");
  scanf("%f", &pointTwoY);
  
  // calculate and print distance between two points
  float distance = sqrtf(powf(pointOneX - pointTwoX, 2) +
    powf(pointOneY - pointTwoY, 2));
  printf("\nDistance between the two points is: %.2f\n", distance);
  
  // calculate speed (using 3 seconds - TIME_TO_MOVE)
  float speed = distance / TIME_TO_MOVE;
  printf("Speed: %.2f\n", speed);
  
  // calculate direction
  float deltaX = pointTwoX - pointOneX;
  float deltaY = pointTwoY - pointOneY;
  float directionRadians = atan2f(deltaY, deltaX); //returns degrees in radians
  printf("Direction: %.2f radians\n", directionRadians);
  float direction = directionRadians * 180 / M_PI;
  printf("Direction: %.2f degrees\n", direction);
  
  
  // calculate and print a velocity vector
  Vector velocity;
  velocity.x = deltaX / TIME_TO_MOVE;
  velocity.y = deltaY / TIME_TO_MOVE;
  printf("Velocity vector: (%.2f, %.2f)\n", velocity.x, velocity.y);
  
  // calculate unit direction vector (without given time)
  Vector unitDirection;
  unitDirection.x = deltaX;
  unitDirection.y = deltaY;
  float length = sqrtf(powf(unitDirection.x, 2) +
                       powf(unitDirection.y, 2));
  unitDirection.x /= length;
  unitDirection.y /= length;
  // calculate and print velocity vector
  velocity.x = unitDirection.x * speed;
  velocity.y = unitDirection.y * speed;
  printf("Velocity vector: (%.2f, %.2f)\n", velocity.x, velocity.y);

  
  
  printf("\n");
  return (EXIT_SUCCESS);
}
