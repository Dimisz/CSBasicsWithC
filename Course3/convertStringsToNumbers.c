#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  char floatStringData[100];
  float floatData;
  
  // read in float data
  printf("Eneter floating point data:\n");
  fgets(floatStringData, sizeof(floatStringData), stdin);
  
  printf("Float String Data: %s\n", floatStringData);
  
  // convert and print float data
  floatData = atof(floatStringData);
  printf("Float Data: %f\n", floatData);
  
  char intStringData[100];
  int intData;
  
  // read in int data
  printf("\n");
  printf("Enter integer data:\n");
  fgets(intStringData, sizeof(intStringData), stdin);
  printf("Integer String Data: %s\n", intStringData);
  
  // convert and print int data
  intData = atoi(intStringData);
  printf("Integer data: %d\n", intData);
  
  
  
  
  return (EXIT_SUCCESS);
}
