/**
File         : main.c
Description  : This file does the questions for increment and decremenet operator 
Author       : sneha
Date         : 09/02/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXAMPLES_SQUEEZE     0   //Squeeze the character from array
/*****************************************************/
/**
Remove the character from the array
@input s[] input array
@input c   The character which needs to be removed
return void
*/
void squeeze(char s[], char c)
{
  int i, j = 0;
  for(i = 0; s[i] != '\0'; i++)
  {
    if(s[i] != 'c')
      s[j++] = s[i]; 
  }
  s[j] = '\0';
  printf("the string is %s\n", s);
}
int main()
{
#if EXAMPLES_SQUEEZE
  char inputArray[6] = "abcdef";
  squeeze(inputArray, 'c');
#endif
  return 0;
}

