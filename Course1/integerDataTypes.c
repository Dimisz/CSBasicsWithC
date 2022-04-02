#include <stdio.h>
#include <stdlib.h>

#define MINUTES_PER_HOUR 60;

int main(int argc, char** argv)
{
  int totalMinutes = 113;
  // calculate and print hours
  int hours = totalMinutes / MINUTES_PER_HOUR;
  int remainingMinutes = totalMinutes % MINUTES_PER_HOUR;
  printf("Hours: %d\nMinutes: %d",hours, remainingMinutes);
  
  
  return (EXIT_SUCCESS);
}
