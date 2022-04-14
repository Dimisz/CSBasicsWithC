#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  
  // declare variable and display info
  int score = 500;
  printf("Score value:     %d\n", score);
  printf("Score address:   %p\n", &score);
  printf("Size of score:   %lu\n\n", sizeof(score));
  
  // declare pointer and display information
  int* pScore = &score;
  printf("Score pointer value:   %p\n", pScore);
  printf("Score value:           %d\n", *pScore);
  
  
  
  return (EXIT_SUCCESS);
}
