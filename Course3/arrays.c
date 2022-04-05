#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int scores[5];
//  scores[0] = 100;
//  scores[1] = 95;
  for(int i = 0; i < 5; i++)
  {
    // prompt for and get valid test scores
    printf("Enter score %d (0-100):\n", i+1);
    scanf("%d", &scores[i]);
    
    while(scores[i] < 0 || scores[i] > 100)
    {
      printf("\nScore mmust be between 0 and 100\n");
      printf("Enter score %d (0-100):\n", i+1);
      scanf("%d", &scores[i]);
    }
  }
  
  printf("\nYou've entered the following scores:\n");
  for(int i = 0; i < 5; i++)
  {
    printf("Score %d: %d.\n", i+1, scores[i]);
  }
  
  return (EXIT_SUCCESS);
}
