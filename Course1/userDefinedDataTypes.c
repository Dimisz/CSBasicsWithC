
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  typedef struct Student Student;
  
  struct Student
  {
    int number;
    float percent;
    char grade;
  };
  
  Student student0 = {101010101, 89.5, 'B'};
  printf("Student 0\n");
  printf("------------\n");
  printf("Number: %d", student0.number);
  printf("\nPercent: %.1f", student0.percent);
  printf("\nLetter grade: %c", student0.grade);
  
  return (EXIT_SUCCESS);
}
