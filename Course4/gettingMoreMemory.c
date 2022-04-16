#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  
  const int GROW_AMOUNT = 2;
  
  // initialize count and capacity and allocate memory
  int count = 0;
  int capacity = 2;
  int* pNumbers = malloc(capacity * sizeof(int));
  
  // check for alllocation failure
  if(pNumbers == NULL){
    return (EXIT_FAILURE);
  }
  
  // get numbers from user until they enter -1
  int n = 0;
  while(n != -1){
  
    printf("Please enter an integer or -1 to quit: ");
    scanf("%d", &n);
    if(n != -1){
      // check for need to allocate more memory
      if(count == capacity){
        //increase capacity and get more memory
        capacity *= GROW_AMOUNT;
        pNumbers = realloc(pNumbers, capacity * sizeof(int));
        
        // check for allocation failure
        if(pNumbers == NULL){
          return (EXIT_FAILURE);
        }
        
        // output for demonstation purposes
        printf("\nReallocated, new capacity: %d\n", capacity);
      }
      
      *(pNumbers + count) = n;
      count++;
    }
  }
  
  
  free(pNumbers);
  pNumbers = NULL;
  
  
  
  
  return (EXIT_SUCCESS);
}
