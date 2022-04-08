#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  char data[100];
  // read in data from user
  printf("Enter x and y (no spaces, comma separated):\n");
  fgets(data, sizeof(data), stdin);
  // print out data
  printf("Data input: %s\n", data);
  return (EXIT_SUCCESS);
}
