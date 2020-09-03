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
#define EXAMPLES_STRCAT      0   //Conctanate 2 strings
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

/**
Concatenate 2nd array at the end of first array
@input char [] InputArray1
@input char[] InputArray2
return none
*/
void strcatLocal(char inputArray1[], char inputArray2[])
{
  int index1, index2;
  index1 = index2 = 0;
  while(inputArray1[index1] != '\0')
   index1++;
  while((inputArray1[index1] = inputArray2[index2]) != '\0')
  {
    index1++; 
    index2++;
  }
  printf("concatenated str %s  \n", inputArray1);
}
int main()
{
#if EXAMPLES_SQUEEZE
  char inputArray[6] = "abcdef";
  squeeze(inputArray, 'c');
#endif

#if EXAMPLES_STRCAT
  char array1[11] = "abcdef";
  char array2[10] = "ghijk";
  strcatLocal(array1, array2);
#endif
  return 0;
}

