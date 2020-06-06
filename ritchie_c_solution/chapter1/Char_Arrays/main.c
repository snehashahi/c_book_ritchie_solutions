/**
File         : main.c
Description  : Completes the examples problems in character arrays  
Author       : sneha
Date         : 06/03/2020
Version      : 1.0.0
*/

#include "stdio.h"
#include "string.h"
/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define COPY_LONGEST_LINE   0 //Finds the getline and copy the maximum line
#define EXERCISE_1_18       0 //Print all the input line that are greater than 80 character
#define EXERCISE_1_19       0 //Removing trailing lines and tabs from a line
/*****************************************************/

int getlineL(char line[], int max_length);
void copy(char dest[], char src[]);
int removeTrailingBlanksTabs(char line[], char FilteredLine[],  int max_length);
#define MAX_SIZE 1000 //maximumsize of the array

int main()
{
#if COPY_LONGEST_LINE
  char line[MAX_SIZE];
  char longestLine[MAX_SIZE];
  int length, max;
  length = max = 0;
  while((length = getlineL(line, MAX_SIZE)) > 0)
  { 
    if(length > max)
    { 
      max = length;
      copy(longestLine, line);
    }
  }
  if(max > 0)
    printf("length of line =%d line =%s \n", max, longestLine); 
#endif

#if EXERCISE_1_18
  char curr_line[MAX_SIZE];
  
  int length;
  length = 0;
  
  while((length = getlineL(curr_line, MAX_SIZE)) > 0)
  {
    if(length > 80)
      printf("array = %s length of array = %d",curr_line, length);
  }
   
#endif   

#if EXERCISE_1_19
  char curr_line[MAX_SIZE];
  char FilteredLine[MAX_SIZE];
  while (removeTrailingBlanksTabs(curr_line, FilteredLine,  MAX_SIZE) > 0)
    printf("Final line = %s\n",FilteredLine);
#endif         
  return 0;
}

/**
Removes the trailing
1.tabs
2.blanks
*/
int removeTrailingBlanksTabs(char line[], char FilteredLine[],  int max_length)
{
  int c, i, j, removetrail;
  c = i = removetrail = 0;
  for(i = 0; i < max_length && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i]  = c ;
  
  for(j = i - 1; j > 0 ; j--)
  {
    if(line[j] == '\t' || line[j] == ' ')
      removetrail = 1;
    else
    {
      if(removetrail)
        j++; 
      break;
    }
  }
  if(removetrail)
  {
    for(int k = 0; k < j ; k++)
      FilteredLine[k] = line[k];
  }
  else
  {
    for(int k = 0; k < i ; k++)
      FilteredLine[k] = line[k];
  }

 return i ;
}
/**
Returns the line length
*/
int getlineL(char line[], int max_length)
{
  int c , i;
  c = i = 0; 
  for(i = 0; i < max_length && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if(c == '\n')
  {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

/*
Copy source to destination
*/
void copy(char dest[], char src[])
{
  int  i = 0;
  while((dest[i] = src[i]) != '\0')
   i++;
}
