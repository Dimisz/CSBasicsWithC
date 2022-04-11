#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom();
float averageScores(int firstScore, int secondScore);
float avgScoresInArray(int scores[], int count);

int main(int argc, char** argv)
{
  /*
  srand(time(0));// initialize random number generator
  for(int i = 1; i <= 5; i++)
  {
    printf("Random nnumber %d: %d\n", i, getRandom());
  }
   */
  
  // passing parameters
  int score1 = 100;
  int score2 = 99;
  int scores[] = {98, 99, 100};
  float averageScore = averageScores(score1, score2);
  printf("Average of %d and %d is %.2f\n", score1, score2, averageScore);
  
  printf("Average of scores in aarray: %.2f", avgScoresInArray(scores, sizeof(scores)/ sizeof(scores[0])));
  
  return (EXIT_SUCCESS);
}

int getRandom()
{
  return rand();
}


float averageScores(int firstScore, int secondScore)
{
  return (float)(firstScore + secondScore) / 2;
}

float avgScoresInArray(int scores[], int count)
{
  int sum = 0;
  for(int i = 0; i < count; i++)
  {
    sum += scores[i];
  }
  return (float)sum / count;
}


