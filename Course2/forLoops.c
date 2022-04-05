#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  /*
  int upperBound;
  printf("Enter the upper bound:\n");
  scanf("%d", &upperBound);
  printf("\n");
  for(int i = 0; i <= upperBound; i++)
  {
    printf("The square of %d is %d\n", i, i*i);
  }
  */
  
  // print a multiplication table using nested for loops
  printf("\nPrinting a multiplication table...\n");
  for(int i = 1; i < 10; i++)
  {
    printf("%d\t", i);
    for(int j = 1; j < 10; j++)
    {
      printf("%2d  ", i*j);
    }
    printf("\n");
  }
  return (EXIT_SUCCESS);
}
