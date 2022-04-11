#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom();

int main(int argc, char** argv)
{
  srand(time(0));// initialize random number generator
  for(int i = 1; i <= 5; i++)
  {
    printf("Random nnumber %d: %d\n", i, getRandom());
  }
  return (EXIT_SUCCESS);
}

int getRandom()
{
  return rand();
}
