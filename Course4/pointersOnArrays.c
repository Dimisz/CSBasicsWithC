#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){
  
  // create and display array contents without pointers
  int scores[4] = {100, 90, 90, 80};
  int size = sizeof(scores)/sizeof(scores[0]);
  
  for(int i = 0; i < size; i++){
    printf("Score %d: %d\n", i, scores[i]);
  }
  
  // display array contents using a pointer
  printf("\n");
//  int* pScores = &scores[0];
  int* pScores = scores;
  for(int i = 0; i < size; i++){
    
//    printf("Element address: %p\n", pScores);
//    printf("Score %d: %d\n", i+1, *pScores);
//    pScores++;
// after the last iteration goes to location outside array
// better practice below
    printf("Element address: %p\n", pScores + i);
    printf("Score %d: %d\n", i + 1, *(pScores + i));
    
  }
  
  
  // create and display array of floats with pointers
  double doubleScores[4] = {200.0, 190.0, 190.0, 180.0};
  int doubleSize = sizeof(doubleScores)/sizeof(doubleScores[0]);
  
  printf("\n");
  double* pDoubleScores = &doubleScores[0];
  
  for(int i = 0; i < doubleSize; i++){
//    printf("Element address: %p\n", pDoubleScores);
//    printf("Score %d: %f\n", i+1, *pDoubleScores);
//    pDoubleScores++;
    
    printf("Element address: %p\n", &pDoubleScores[i]);
    printf("Score %d: %f\n", i + 1, pDoubleScores[i]);
  }
}
