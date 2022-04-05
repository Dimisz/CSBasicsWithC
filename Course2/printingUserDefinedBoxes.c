#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int width;
  int height;
  do
  {
    // prompt user for width and height
    printf("Enter the height of the box (from 3 to 20 inclusive):\n");
    scanf("%d", &height);
    printf("Enter the width of the box (from 3 to 20 inclusive):\n");
    scanf("%d", &width);
    
    if(height < 3 || height > 20 || width < 3 || width > 20)
    {
      printf("Both width and height should be between 3 and 20 innclusive.\n");
    }
   }while(height < 3 || height > 20 || width < 3 || width > 20);
  
  printf("Printing...\n");
  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < width; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  
  return (EXIT_SUCCESS);
}
