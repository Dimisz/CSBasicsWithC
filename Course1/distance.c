#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
  
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
  
  printf("\n");
  return (EXIT_SUCCESS);
}
