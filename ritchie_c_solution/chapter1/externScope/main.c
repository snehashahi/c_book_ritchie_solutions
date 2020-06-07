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
#define EXERCISE_1_21        0//entab spaces to tab
/*****************************************************/

void detab(char inp[], int length);
void entab(char inp[], int length);
#define MAX_LENGTH  1000
char inp[MAX_LENGTH];
int main()
{
#if EXERCISE_1_20
  detab(inp, MAX_LENGTH);
  printf("the string is %s\n", inp);
#endif

#if EXERCISE_1_21
  entab(inp, MAX_LENGTH);
  printf("the string is %s\n", inp);
#endif
  return 0;
}
/**
Detab :This function replaces tabs by spaces
inp[]  input array
length length of array
return none
*/
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

/**
entab  :This converts 4 spaces into tab
inp[]  input array
length length of array
return none
*/
void entab(char inp[], int length)
{
  int inputChar, index, spaces;
  inputChar = index = spaces = 0;
  while((inputChar = getchar()) != EOF && index < length)
  {
    if(inputChar == ' ')
    {
      spaces++;
      if(spaces == 4)
      {
        inp[index] = '\t';
        index++;
        spaces = 0;
      }
    }
    else
    {
      if(spaces > 0 && spaces < 4)
      {
        for(int i = 0; i < spaces; i++)
        {
          inp[index] = ' ';
          index++;
        }
        spaces = 0;
      }
      inp[index] = inputChar;
      index++;
    }
  }

}
