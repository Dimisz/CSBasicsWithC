#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
  float x;
  // prompt for annd get float from user
  printf("Enter floating-point number: ");
  scanf("%f", &x);
  printf("\n");
  
  // calculate and print floor
  //printf("Floor: %d\n", (int)x);
  printf("Floor using maath.h: %d\n", (int)floorf(x));
  
  // calculate and print ceiling
  //printf("Ceiling: %d\n", (int)x);
  printf("Ceiling using maath.h: %d\n", (int)ceilf(x));
  return (EXIT_SUCCESS);
}
