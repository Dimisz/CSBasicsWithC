#include <stdio.h>
#include <stdlib.h>

#include <math.h>
int main(int argc, char** argv)
{
  int scores[4];
  int size = sizeof(scores)/sizeof(scores[0]);
  
  // read in scores
  for(int i = 0; i < size; i++)
  {
    // prompt for and get valid test scores
    printf("Enter score %d (0-100): ", i+1);
    scanf("%d", &scores[i]);
    while(scores[i] < 0 || scores[i] > 100)
    {
      printf("Invalid value. Scores should be between 0 and 100 (inclusive)\n");
      printf("Enter score %d (0-100): ", i+1);
      scanf("%d", &scores[i]);
    }
  }
  
  // calculate mean
  int sum = 0;
  for(int i = 0; i < size; i++)
  {
    sum += scores[i];
  }
  float mean = (float)sum/size;
  
  // calculate standard deviation
  float sum_of_squared_differences = 0;
  for(int i = 0; i < size; i++)
  {
    sum_of_squared_differences += powf(scores[i] - mean, 2);
  }
  float stdev = sqrtf(sum_of_squared_differences / (size - 1));
  
  // print test scores
  printf("\n");
  for(int i = 0; i < size; i++)
  {
    printf("Score %d: %d\n", i + 1, scores[i]);
  }
  printf("\n");
  printf("Mean: %.2f\n", mean);
  printf("Standard Deviation: %.2f\n", stdev);
  
  
  return (EXIT_SUCCESS);
}
