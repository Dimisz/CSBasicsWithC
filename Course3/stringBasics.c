#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
  //showcase a string as ann array of characters
  /*
  char message[] = "ftatrwsy";
  int i = 0;
  while(message[i] != '\0')
  {
    printf("message[%d] Address: %p Contents: %c\n", i, &message[i], message[i]);
    i++;
  }
  
  // print the message
  printf("Message: %s\n", message);
  */
  
  // length of a string
  char message[] = "Def Leppard rocks!";
  
  // count and print length of the string
  int i = 0;
  while(message[i] != '\0')
  {
    i++;
  }
  printf("Length of the string is: %d\n", i);
  
  // print string length using function
  printf("Length of the string is: %zu\n", strlen(message));
  
  // a safer way - strNlen
  printf("Length of the string is: %zu\n", strnlen(message, sizeof(message)));
  
  
  
  return (EXIT_SUCCESS);
}
