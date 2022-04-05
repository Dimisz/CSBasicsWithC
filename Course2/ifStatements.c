#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  char answer;
  
  // prompt for an answer
 /*
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
  */
  printf("Do you like pizza? (y or n)\n");
  scanf("%c", &answer);
  //answer = tolower(answer);
  switch (answer) {
    case 'y':
      printf("Great! I also like pizza!\n\n");
      break;
    case 'n':
      printf("That's ok, I'll eat enough for both of us.\n\n");
      break;
      
    default:
      printf("You should enter either 'y' or 'n'\n\n");
      break;
  }
  
  return (EXIT_SUCCESS);
}
