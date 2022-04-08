#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  char message[] = "ftatrwsy";
  int i = 0;
  while(message[i] != '\0')
  {
    printf("message[%d] Address: %p Contents: %c\n", i, &message[i], message[i]);
    i++;
  }
  
  // print the message
  printf("Message: %s\n", message);
  
  return (EXIT_SUCCESS);
}
