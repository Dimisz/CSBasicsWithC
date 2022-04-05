#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  // prompt for and get score
  int score;

  do
  {
    printf("Enter test score (0-100):\n");
    scanf("%d", &score);
    
  }
  while(score < 0 || score > 100);
  printf("\nScore recorded!\n");
  // validate score
  /*
   printf("Enter test score (0-100):\n");
   scanf("%d", &score);
  while(score < 0 || score > 100)
  {
    // print and error message and get a new score
    printf("\n");
    printf("Score must be between 0 and 100.\n");
    printf("Enter test score (0-100):\n");
    scanf("%d", &score);
  }
  
  printf("\nScore recorded!\n");
  */
  
  
  return (EXIT_SUCCESS);
}
