#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SHIFT_AMOUNT 5


int main(int argc, char** argv)
{
  char originalMessage[100];
  
  // prompt for and get valid string to be encrypted
  bool validMessage = false;
  printf("Enter message to be encrypted (upper case alphabetic characters only):\n");
  fgets(originalMessage, sizeof(originalMessage), stdin);
  int originalMessageLength = strnlen(originalMessage, sizeof(originalMessage)) - 1;
  
  while(!validMessage)
  {
    // invalid if non-uppercase alpha characters in messsage
    validMessage = true;
    for(int i = 0; i < originalMessageLength; i++)
    {
      
    }
  }
  
  
  return (EXIT_SUCCESS);
}

