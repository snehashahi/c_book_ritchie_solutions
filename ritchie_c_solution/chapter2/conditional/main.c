/**
File         : main.c
Description  : This function converts upper case to lower case 
Author       : sneha
Date         : 09/16/2010
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_2_10            0 //Converts upper case to lower
/*****************************************************/
void lower(char s[])
{
  for(int i = 0; s[i] != '\0'; i++)
    s[i] = ((s[i] > 'A') && (s[i] < 'Z')) ? (s[i] + 32) : s[i];//32 = 'A' - 'a`'
  printf("The string output is %s \n",s);
}

int main()
{
#if EXERCISE_2_10
  char inputString[5] = "Sneha";
  printf("The input string is %s\n", inputString);
  lower(inputString);
#endif
  return 0;
}

