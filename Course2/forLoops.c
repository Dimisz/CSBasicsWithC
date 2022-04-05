#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  
  int upperBound;
  printf("Enter the upper bound:\n");
  scanf("%d", &upperBound);
  printf("\n");
  for(int i = 0; i <= upperBound; i++)
  {
    printf("The square of %d is %d\n", i, i*i);
  }
  
  return (EXIT_SUCCESS);
}
