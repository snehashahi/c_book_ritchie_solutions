/**
File         : 1.5.1_file_copying.c
Description  : This file copies input to output
Author       : sneha
Date         : 02/19/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define COPIES_IN_OUT      0 //Copies input to output
#define EXERCISE_1_6       0 //Verify that c!=EOF is 0 or 1
#define EXERCISE_1_7       0 ///Print EOF
#define COUNT_CHAR         0 ///count character until eof is detected
/*****************************************************/

int main()
{

#if COPIES_IN_OUT
  int c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
  }
#endif

#if EXERCISE_1_6
  while((getchar() != EOF))
  { 
    printf("the expression is not EOF  0\n");
  }

  printf("the expression is EOF 1\n");
#endif

#if EXERCISE_1_7
  int c = getchar();
  while(c != EOF)
  {
    c = getchar();
  }
  printf("The value of EOF is %d\n",c);
#endif

#if COUNT_CHAR
  int nc = 0;

  while(getchar() != EOF)  
    ++nc;
 
 printf("Number of character is %1d\n", nc);
#endif
  return 0;
}

