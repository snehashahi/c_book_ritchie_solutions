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
#define COUNT_DIGITS_SPACES       0 //Count spaces digit and others
#define EXERCISE_1_13             0 //Print histogram of length of words


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

#if EXERCISE_1_13
int wordLength, c, resetWordLength;
wordLength = c = resetWordLength = 0;
int nWord[11];
int wordSize = 11;
for(int i = 0; i < 10 ; i++)
{
  nWord[i] = 0;
}
while((c = getchar()) != EOF)
{
  if(c == ' ' || c == '\n' || c == '\t')
  {
    resetWordLength = 1;
  }
  else
  {
    resetWordLength = 0;
    wordLength++;
  }

  if(resetWordLength)
  {
    for(int i = 0; i < wordSize; i++)
    {
      if(wordLength == i)
        nWord[i] = wordLength; 
      if(wordLength > (wordSize - 1))
        nWord[wordSize - 1] = wordLength; 
    }
    wordLength  = 0;
  }
}
for(int i = 0; i < wordSize; i++)
  printf("%d ", nWord[i]);
printf("\n");

for(int i = 1; i < wordSize; i++)
{
  printf("%2d", i);
  printf("|");
  if(nWord[i] == i || (nWord[i] > (wordSize - 1)))
  {
    for(int j = 0;j < nWord[i]; j++)
      printf("X");
  }
  printf("\n");
}
#endif
  return 0;
}

