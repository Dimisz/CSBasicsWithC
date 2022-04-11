#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
  struct Vector
  {
    float x;
    float y;
  }
  typedef struct Vector Vector;
  
  Vector point;
  
  // read in point string from user
  char pointString[100];
  printf("Enter x and y for point (no spaces, comma-separated): ");
  fgets(pointString, sizeof(pointString), stdin);
  
  // find comma index
  int commaIndex = -1;
  char* result = NULL;
  while(commaIndex == -1)
  {
    result = strchr(pointString, ',');
    if(result != NULL)
    {
      char* pointStringStart = &pointString[0];
      commaIndex = result - pointStringStart;
    }
    else
    {
      printf("\n");
      printf("Invalid innput: comma not found\n");
      printf("Enter x and y for point (no spaces, comma-separated): ");
      fgets(pointString, sizeof(pointString), stdin);
    }
  }
  
  // extract x from point string
  // char xString[commaIndex + 1]
  char* xString = mmalloc((commaIndex + 1) * sizeof(char));
  strncpy(xString, pointString, commaIndex);
  xString[commaIndex] = '\0';
  point.x = atof(xString);
  
  // free memory
  free(xString);
  xString = NULL;
  
  
  return (EXIT_SUCCESS);
}
