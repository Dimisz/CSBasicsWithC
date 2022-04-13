#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

#define EXPAND_MULTIPLY_FACTOR 2

#define ADD_VALUE 1
#define REMOVE_VALUE 2
#define FIND_VALUE 3
#define PRINT_COUNT 4
#define PRINT_VALUES 5
#define QUIT 6

#define FUNCTION_FAIL 0
#define FUNCTION_SUCCESS 1
#define VALUE_NOT_FOUND -1

//dynamic array data
int* values;
int count = 0;
int capacity = 4;

int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound);
void printOperationMenu();
int getOperation();
int addValue(int value);



int main(int argc, char** argv){
  // create initial array
  values = malloc(capacity * sizeof(int));
  if(values == NULL){
    printf("Fatal error, unable to allocate memory for values\n");
    return (EXIT_FAILURE);
  }
  
  // loop untill user decides to quit
  int operation = -1;
  while(operation != QUIT){
    operation = getOperation();
  }
  
  
  return (EXIT_SUCCESS);
}
