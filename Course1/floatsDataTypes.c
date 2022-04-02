#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  // collected data
  int hoursDriven = 5;
  int milesDriven = 262;
  
  // calculate and print miles per hour
  float mph = (float)milesDriven / hoursDriven;
  printf("MPH: %.1f\n", mph);
  
  return (EXIT_SUCCESS);
}
