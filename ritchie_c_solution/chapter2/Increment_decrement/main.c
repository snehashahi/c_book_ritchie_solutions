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
#define EXERCISE_2_4         0   //Squeeze array if the element matches with other array
#define EXERCISE_2_5         0   //Returns the first location of array1 where the character matches
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
Remove the character of s1 if the character of s1 matches with s2
@input s1    First array 
@input s2    Second array whose character needs to be checked
@return      none
*/
void squeezeMatchCharacter(char s1[], char s2[])
{
  int k = 0;
  for(int i = 0; s2[i] != '\0'; i++)
  {
    for(int j = k = 0; s1[j] != '\0'; j++)
    {
      if(s1[j] != s2[i])
        s1[k++] = s1[j];
    }
    s1[k] = '\0';
  }
  printf("The string is %s %s\n", s1, s2);
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
/**
any:It returns first location where the character from second array matches first array
    If there is no character matching , it returns -1
@input s1 First array
@input s2 Second array
return length
*/
int any(char s1[], char s2[])
{
  for(int i = 0; s2[i] != '\0'; i++)
  {
    for(int j = 0; s1[j] != '\0';j++)
    {
      if(s1[j] == s2[i])
        return j;
    }
  }

  return -1;
}

int main()
{
#if EXAMPLES_SQUEEZE
  char inputArray[] = "abcdef";
  squeeze(inputArray, 'c');
#endif

#if EXAMPLES_STRCAT
  char array1[] = "abcdef";
  char array2[] = "ghijk";
  strcatLocal(array1, array2);
#endif

#if EXERCISE_2_4
  char inputArray1[] = "abcdef";
  char inputArray2[] = "ab";
  squeezeMatchCharacter(inputArray1, inputArray2);
#endif

#if EXERCISE_2_5
 char inputArray1[] = "abcdef";
 char inputArray2[] = "ggd";
 int length = any(inputArray1, inputArray2);
 printf("The length where the character matched at location  %d\n", length);
#endif
  return 0;
}

