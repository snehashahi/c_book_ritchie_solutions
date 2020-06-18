/**
File         : main.c
Description  : This file implements the uses of relatinal and logical operators 
Author       : sneha
Date         : 06/18/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_2_2      0 //Replace && and || operator
/*****************************************************/

int main()
{
char s[10];
int c;
int lim = 10;
int i;
#if EXERCISE_2_2
for(i = 0; i < lim - 1 ; ++i)
{
  c = getchar();
  if( c == EOF)
   break;
  else if(c == '\n')
   break;
  else
   s[i] = c;
}
s[i] = '\0';
printf("string is %s\n",s);

#endif
  return 0;
}

