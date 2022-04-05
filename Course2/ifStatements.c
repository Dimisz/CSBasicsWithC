#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  char answer;
  
  // prompt for an answer
 
  while(1)
  {
    printf("Do you like pizza? (y or n)\n");
    scanf("%c", &answer);
    
    if(answer == 'y')
    {
      printf("Great! I also like pizza!\n");
      break;
    }
    else if(answer == 'n')
    {
      printf("That's a pity. I do like pizza.\n");
      break;
    }
    else
    {
      printf("You should enter either 'y' or 'n'\n");
    }
  }
  
  
  return (EXIT_SUCCESS);
}
