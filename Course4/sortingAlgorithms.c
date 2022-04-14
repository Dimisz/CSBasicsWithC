#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_VALUES 8
#define PRINT_DEBUG_INFO true


void bubbleSort(int array[], int count);
//void selectionSort(int array[], int count);
//void insertionSort(int array[], int count);

void getRandomArray(int array[]);
void printArray(char heading[], int array[], int count);
void printArrayElements(int array[], int count);

void swapElements(int firstLocation, int secondLocation, int array[]);


int main(int argc, char** argv){
  
  int values[NUM_VALUES];
  
  //unsorted array
  getRandomArray(values);
  printArray("Unsorted array", values, NUM_VALUES);
  
  //bubble sort
  bubbleSort(values, NUM_VALUES);
  printf("\n");
  printArray("Bubble sort results", values, NUM_VALUES);
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
