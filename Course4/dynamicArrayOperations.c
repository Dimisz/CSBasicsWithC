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

/* not implemented yet
int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound);
void printOperationMenu();
int getOperation();
*/

int addValue(int value);
int findValue(int value);
int removeValue(int value);
void printValues();


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
    if(operation == ADD_VALUE){
      int value = getValidInteger("Enter value to add (0 to 100): ",
                                  "Value mmust be between 0 and 100\n",
                                  0, 100);
      printf("\n");
      if(!addValue(value)){
        printf("Fatal error, unable to allocate memory for values\n");
        return (EXIT_FAILURE);
      }
      else{
        printf("%d added\n", values[count - 1]);
      }
    }
    else if(operation == REMOVE_VALUE){
      int value = getValidInteger("Enter value to add (0 to 100): ",
                                  "Value mmust be between 0 and 100\n",
                                  0, 100);
      printf("\n");
      if(!removeValue(value)){
        printf("%d not removed (not found)\n", value);
      }
      else {
        printf("%d removed\n", value);
      }
    }
    else if(operation == FIND_VALUE){
      int value = getValidInteger("Enter value to add (0 to 100): ",
                                  "Value must be between 0 and 100\n",
                                  0, 100);
      printf("\n");
      int result = findValue(value);
      if(result != VALUE_NOT_FOUND){
        printf("%d found at location %d\n", value, result + 1);
      }
      else {
        printf("%d not found\n", value);
      }
    }
    else if(operation == PRINT_COUNT){
      printf("\n");
      printf("You have %d values stored\n", count);
    }
    else if(operation == PRINT_VALUES){
      printValues();
    }
  }
  
  
  return (EXIT_SUCCESS);
}


int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound){
  
}
void printOperationMenu();
int getOperation();


int addValue(int value){
  // grow array if necessary
  if(count == capacity){
    capacity *= EXPAND_MULTIPLY_FACTOR;
    values = realloc(values, capacity * sizeof(int));
    if(values == NULL){
      return FUNCTION_FAIL;
    }
  }
  // add new value
  values[count] = value;
  count++;
  return FUNCTION_SUCCESS;
}


int findValue(int value){
  int index = -1;
  for(int i = 0; i < count; i++){
    if(values[i] == value){
      return i;
    }
  }
  return VALUE_NOT_FOUND;
}

int removeValue(int value){
  int result = findValue(value);
  if(result == VALUE_NOT_FOUND){
    return FUNCTION_FAIL;
  }
  else{
    values[result] = values[count - 1];
    count--;
    return FUNCTION_SUCCESS;
  }
}

void printValues(){
  printf("\n");
  printf("Values: ");
  for(int i = 0; i < count; i++){
    printf("%d", values[i]);
  }
  printf("\n");
}
