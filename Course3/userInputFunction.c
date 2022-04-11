#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound);
float averageScoreArray(int scores[], int count);



int main(int argc, char** argv)
{
  // get number of scores to enter
  int n = getValidInteger("How many scores do you want to enter (1 to 10)?\n", "Number of scores must be between 1 and 10!", 1, 10);
  printf("n is %d\n", n);
  
  int scores[n];
  // int* scores = malloc(n * sizeof(int));
  for(int i = 0; i < n; i++)
  {
    scores[i] = getValidInteger("Enter score (0 to 100): ",
                                "Score must be between 0 and 100!",
                                0, 100);
  }
  
  // print average
  printf("Average score: %.2f\n", averageScoreArray(scores, n));
  return (EXIT_SUCCESS);
}



int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound)
{
  int input;
  
  // prompt for and get input
  printf("%s", promptString);
  scanf("%d", &input);
  
  // validate input
  while(input < lowerBound || input > upperBound)
  {
    printf("\n");
    printf("%s", errorString);
    printf("\n");
    printf("%s", promptString);
    scanf("%d", &input);
  }
  
  
  return input;
}


float averageScoreArray(int scores[], int count)
{
  int sum = 0;
  for(int i = 0; i < count; i++)
  {
    sum += scores[i];
  }
  return (float)sum / count;
}
