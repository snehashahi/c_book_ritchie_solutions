/**
File         : main.c
Description  : This file completes program for extern and scopes
Author       : sneha
Date         : 
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_1_20        0//Detab program replaces tabs with spacces
/*****************************************************/

void detab(char inp[], int length);
#define MAX_LENGTH  1000
int main()
{
#if EXERCISE_1_20
  char inp[MAX_LENGTH];
  detab(inp, MAX_LENGTH);
  printf("the string is %s\n", inp);
#endif
  return 0;
}


void detab(char inp[], int length)
{
  int inputChar, index ;
  inputChar = index = 0;
  while((inputChar = getchar()) != EOF && index < length)
  {
    if(inputChar == '\t')
      inputChar = ' ';
    inp[index] = inputChar;
    index++;
  }
}
