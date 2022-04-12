#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_STUDENTS 3

typedef struct Student Student;
struct Student{
  int number;
  float percent;
  char grade;
};

int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound);
float getValidFloat(char promptString[], char errorString[],
                    float lowerBound, float upperBound);
char getValidChar(char promptString[], char errorString[],
                    char validValues[], int count);
bool isValid(char character, char validValues[], int count);
void getValidStudentData(Student *student, char validValues[], int      count);
void writeStudentToFile(Student student, FILE *file);


int main(int argc, char** argv){
  Student students[NUM_STUDENTS];
  char validGrades[] = {'A', 'B', 'C', 'D', 'F'};
  
  // read in student data
  for(int i = 0; i < NUM_STUDENTS; i++){
    getValidStudentData(&students[i], validGrades,
                        sizeof(validGrades)/sizeof(validGrades[0]));
  }
  
  // open file for writing
  FILE *outputFile = fopen("studentData.txt", "w");
  if(outputFile == NULL){
    printf("File open failed\n");
    return (EXIT_FAILURE);
  }
  
  // write sudent data to a file
  for(int i = 0; i < NUM_STUDENTS; i++){
    writeStudentToFile(students[i], outputFile);
  }
  
  // close file
  fclose(outputFile);
  printf("\n");
  
  return (EXIT_SUCCESS);
}


void writeStudentToFile(Student student, FILE *file){
  fprintf(file, "%09d,%.2f,%c\n", student.number, student.percent,
          student.grade);
}



float getValidFloat(char promptString[], char errorString[],
                    float lowerBound, float upperBound){
  float input;
  
  printf("%s", promptString);
  scanf("%f", &input);
  
  while(input < lowerBound || input > upperBound){
    printf("%s", errorString);
    printf("%s", promptString);
    scanf("%f", &input);
  }
  return input;
}


int getValidInteger(char promptString[], char errorString[],
                    int lowerBound, int upperBound){
  int input;
  
  printf("%s", promptString);
  scanf("%d", &input);
  
  while(input < lowerBound || input > upperBound){
    printf("%s", errorString);
    printf("%s", promptString);
    scanf("%d", &input);
  }
  return input;
}



void getValidStudentData(Student *student, char validValues[], int      count){
  student->number = getValidInteger("Enter 9-digit student number:\n",
                                    "Student nnumber must be 9 integers\n",
                                    0, 999999999);
  student->percent = getValidFloat("Enter percentage (0-100):\n",
                                   "Percentage must be between 0 and 100",
                                   0, 100);
  getchar();
  student->grade = getValidChar("Enter letter grade (A, B, C, D, or F)\n",
                                "Letter grade must be A to F\n",
                                validValues, count);
}


char getValidChar(char promptString[], char errorString[],
                  char validValues[], int count){
  char input;
  
  // prompt for and get input
  printf("%s", promptString);
  scanf("%c", &input);
  
  // validate input
  while(!isValid(input, validValues, count)){
    printf("\n");
    printf("%s", errorString);
    printf("\n");
    printf("%s", promptString);
    scanf("%c", &input);
  }
  return input;
}

bool isValid(char character, char validValues[], int count){
  for(int i = 0; i < count; i++){
    if(character == validValues[i]){
      return true;
    }
  }
  return false;
}
