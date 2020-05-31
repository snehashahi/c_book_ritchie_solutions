/**
File         : main.c
Description  : This program implements the use of Arrays 
Author       : sneha
Date         : 05/31/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define COUNT_DIGITS_SPACES    0 //Count spaces digit and others
/*****************************************************/

int main()
{
#if COUNT_DIGITS_SPACES

int nSpaces, nOthers, c;
nSpaces = nOthers = c = 0;
int nDigits[10];

//Initialise the array with 0
for(int i = 0; i < 10; i++)
{
  nDigits[i] = 0;
}

while ((c = getchar()) != EOF)
{
  if(c >= '0'  && c <= '9')
    ++nDigits[c - '0'];
  else if(c == ' ' || c == '\n' || c == '\t')
    ++nSpaces;
  else
    ++nOthers;
}

printf ("/n digits =");
for(int i = 0; i < 10; i++)
  printf("%d",nDigits[i]);

printf("\nwhites spaces = %d others = %d\n ", nSpaces, nOthers);
#endif
  return 0;
}

