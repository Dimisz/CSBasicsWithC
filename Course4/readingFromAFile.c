#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STRING_LENGTH 100

typedef struct Student Student;

struct Student {
  int number;
  float percent;
  char grade;
};

void getStudentFromString(char string[], Student *student);

int main(int argc, char** argv){
  
  char currentLine[MAX_STRING_LENGTH];
  int numLines = 0;
  
  // open file for reading
  FILE *inputFile = fopen("data.txt", "r");
  if(inputFile == NULL){
    printf("Failed opening file\n");
    return (EXIT_FAILURE);
  }
  
  // count lines in file
  while(!feof(inputFile)){
    fgets(currentLine, MAX_STRING_LENGTH, inputFile);
    numLines++;
  }
  
  rewind(inputFile);
  
  
  Student* students = malloc(numLines * sizeof(Student));
  for(int i = 0; i < numLines; i++){
    fgets(currentLine, MAX_STRING_LENGTH, inputFile);
    getStudentFromString(currentLine, &students[i]);
  }
  
  // close file
  fclose(inputFile);
  
  // print student data
  // for (int i = 0; i < sizeof(students)/ sizeof(students[0]); i++)
  for(int i = 0; i < numLines; i++){
    printf("Student %d\n", i+1);
    printf("%09d\n", students[i].number);
    printf("%.2f\n", students[i].percent);
    printf("%c\n", students[i].grade);
    printf("\n");
  }
  
  // free memory
  free(students);
  students = NULL;
  
  return (EXIT_SUCCESS);
}


void getStudentFromString(char string[], Student *student){
  // find first comma index
  int commaIndex = -1;
  char *result = NULL;
  result = strchr(string, ',');
  char *stringStart = &string[0];
  commaIndex = result - stringStart;
  
  // extract student name from string
  char *numberString = malloc((commaIndex + 1) * sizeof(char));
  strncpy(numberString, string, commaIndex);
  numberString[commaIndex] = '\0';
  student->number = atoi(numberString);
  
  // find second comma index
  string = &string[0] + commaIndex + 1;
  result = strchr(string, ',');
  stringStart = &string[0];
  commaIndex = result - stringStart;
  
  // extract student percent from string
  char* percentString = malloc((commaIndex + 1) * sizeof(char));
  strncpy(percentString, string, commaIndex);
  percentString[commaIndex] = '\0';
  student->percent = atof(percentString);
  
  // extract student grade from string
  student->grade = string[commaIndex + 1];
  
  // free memory
  free(numberString);
  numberString = NULL;
  free(percentString);
  percentString = NULL;
}
