#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
 // declare and initialize matrices
  int first_matrix[2][3] = {{1, 2, 3},
                            {4, 5, 6}};
  int second_matrix[3][2] = {{7,8},
                            {9, 10},
                            {11, 12}};
  
  int result[2][2] = {0};
  
  // multiply the matrices
  for(int i = 0; i < sizeof(first_matrix) / sizeof(first_matrix[0]); i++)
  {
    for(int j = 0; j < sizeof(second_matrix[0]) / sizeof(second_matrix[0][0]); j++)
    {
      // i is the row for the first matrix
      int first_matrix_column = 0;
      int second_matrix_row = 0;
      
      // iterate however many columns are in the first matrix or
      // however many rows are in the second matrix
      // these numbers have to be the same for matrix multiplication to work
      for(int n = 0; n < sizeof(first_matrix[0])/ sizeof(first_matrix[0][0]); n++)
      {
        result[i][j] += (first_matrix[i][first_matrix_column] * second_matrix[second_matrix_row][j]);
        printf("Added: %d * %d = %d\n", first_matrix[i][first_matrix_column], second_matrix[second_matrix_row][j],
               (first_matrix[i][first_matrix_column] * second_matrix[second_matrix_row][j]));
        printf("Result[%d][%d]: %d\n", i, j, result[i][j]);
        
        first_matrix_column++;
        second_matrix_row++;
      }
    }
  }
  
  // output the answer
  printf("\n");
  printf("Result\n");
  for(int i = 0; i < sizeof(result) / sizeof(result[0]); i++)
  {
    for(int j = 0; j < sizeof(result[0]) / sizeof(result[0][0]); j++)
    {
      printf("%5d", result[i][j]);
    }
    printf("\n");
  }
  
  
  return (EXIT_SUCCESS);
}
