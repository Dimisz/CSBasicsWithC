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
      if(!isupper(originalMessage[i]))
      {
        printf("\n");
        printf("Message must contain only uppercase alphabetic characters!\n");
        printf("Enter message to be encrypted (upper case alphabetic characters only):\n");
        fgets(originalMessage, sizeof(originalMessage), stdin);
        originalMessageLength = strnlen(originalMessage, sizeof(originalMessage)) - 1;
        
        // reset the flag and exit the for loop
        validMessage = false;
        break;
      }
    }
  }
  
  // build encrypted string (make sure it's null terminated)
  // char encryptedMessage[originalMessageLength + 1]
  char* encryptedMessage = malloc((originalMessageLength + 1) * sizeof(char));
  for(int i = 0; i < originalMessageLength; i++)
  {
    encryptedMessage[i] = originalMessage[i] + SHIFT_AMOUNT;
    if(encryptedMessage[i] > 'Z')
    {
      encryptedMessage[i] -= 'Z' - 'A' + 1;
    }
  }
  encryptedMessage[originalMessageLength] = '\0';
  
  // build decrypted string (make sure it's null-terminated)
  int encryptedMessageLength = originalMessageLength;
  char* decryptedMessage = malloc((encryptedMessageLength + 1) * sizeof(char));
  for(int i = 0; i < encryptedMessageLength; i++)
  {
    decryptedMessage[i] = encryptedMessage[i] - SHIFT_AMOUNT;
    if(decryptedMessage[i] < 'A')
    {
      decryptedMessage[i] += 'Z' - 'A' + 1;
    }
  }
  decryptedMessage[encryptedMessageLength] = '\0';
  
  
  printf("\n");
  printf("Original message: %s\n", originalMessage);
  printf("Encrypted message: %s\n", encryptedMessage);
  printf("Decrypted message: %s\n", decryptedMessage);
  
  free(encryptedMessage);
  encryptedMessage = NULL;
  free(decryptedMessage);
  decryptedMessage = NULL;
  
  return (EXIT_SUCCESS);
}

