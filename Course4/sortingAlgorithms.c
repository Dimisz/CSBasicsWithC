#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_VALUES 8
#define PRINT_DEBUG_INFO true


void bubbleSort(int array[], int count);
void selectionSort(int array[], int count);
//void insertionSort(int array[], int count);

void getRandomArray(int array[]);
void printArray(char heading[], int array[], int count);
void printArrayElements(int array[], int count);

void swapElements(int firstLocation, int secondLocation, int array[]);


int main(int argc, char** argv){
  
  int values[NUM_VALUES];
  
  /*
  //unsorted array
  getRandomArray(values);
  printArray("Unsorted array", values, NUM_VALUES);
  
  //bubble sort
  bubbleSort(values, NUM_VALUES);
  printf("\n");
  printArray("Bubble sort results", values, NUM_VALUES);
   */
  
  // selection sort
  getRandomArray(values);
  printf("\n");
  printArray("Unsorted array", values, NUM_VALUES);
  selectionSort(values, NUM_VALUES);
  printf("\n");
  printArray("Selection sort results", values, NUM_VALUES);
  
  
  return (EXIT_SUCCESS);
}

void bubbleSort(int array[], int count){
  if(PRINT_DEBUG_INFO){
    printf("\n");
    printf("Bubble sort\n");
    printf("--------------\n");
    printf("\n");
  }
  // work from right to left
  for(int k = count - 1; k > 0; k--){
    
    // traverse unsorted portion of the array
    for(int i = 0; i < k; i++){
      if(PRINT_DEBUG_INFO){
        printf("Comparing array[%d] (%d) to array[%d] (%d)\n", i,
               array[i], i + 1, array[i+1]);
      }
      
      // check for swap
      if(array[i] > array[i + 1]){
        swapElements(i, i + 1, array);
      }
    }
  }
}


void selectionSort(int array[], int count){
  
  if(PRINT_DEBUG_INFO){
    printf("\n");
    printf("Bubble sort\n");
    printf("--------------\n");
    printf("\n");
  }
  
  // work from left to right
  for(int k = 0; k < count; k++){
    int minLocation = k;
    
    // traverse unsorted portion of the array
    for(int i = k+1; i < count; i++){
      if(PRINT_DEBUG_INFO){
        printf("Comparing array[%d] (%d) to array[%d] (%d)\n", i,
               array[i], minLocation, array[minLocation]);
      }
      
      // check for swap
      if(array[i] < array[minLocation]){
        minLocation = i;
        
        if(PRINT_DEBUG_INFO){
          printf("New min location: %d\n", minLocation);
        }
      }
    }
    // swap elements
    swapElements(k, minLocation, array);
    
    if(PRINT_DEBUG_INFO){
      printf("\n");
      printf("After iteration %d: ", k + 1);
      printArrayElements(array, count);
    }
  }
}


