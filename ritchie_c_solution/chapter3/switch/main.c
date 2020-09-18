/**
File         : main.c
Description  : This program illustrate the uses of switch statement 
Author       : sneha
Date         : 09/18/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*select the follwing flag to run the particular test*/
#define COUNT_CHAR       0 //this count digits spaces, newline and tabs
#define EXERCISE_3_2     1 //copies char to other 
/*****************************************************/
/*Define global variables*/
#define MAXLINE       10
/*****************************************************/

/**
count : count character for digits, spaces newline and tabs
@void
@return none
*/
void count(void)
{
  int ndigits[10] = {0};
  int nwhtes = 0;
  char c;
  while((c = getchar()) != EOF)
  {
    switch(c)
    {
      case '0': case '1': case '2': case '3': case '4': 
      case '5': case '6': case '7': case '8': case '9':
        ndigits[c - '0']++;
        break;
      case '\n':
      case '\t':
      case ' ' :
        nwhtes++;
        break;
      default:
        break;
    }
  }

  /*Print the array*/
  for(int i = 0;i < 10; i++)
    printf("Index %d Occurence %d\n", i, ndigits[i]);

  printf("white spaces%d \n", nwhtes);
}

/**
escape:Copies string t to s
       replace newline by '\n'
       replace tab by '\t'
@input string s
@input string t
@return none
*/
void escape(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while(t[i] != '\0')
  {
    switch(t[i])
    {
      case '\n':
       s[j] = '\\';
       ++j;
       s[j] = 'n';
       break;
      case '\t':
       s[j] = '\\';
       ++j;
       s[j] = 't';
       break;
      default:
       s[j] = t[i];
       break;
    }
    ++i;
    ++j;
  }
  s[j] = '\0';
  printf("string is %s %s\n",s, t);
}
int main()
{
#if COUNT_CHAR
  count();
#endif

#if EXERCISE_3_2
  char inputChar[MAXLINE], outputChar[MAXLINE];
  printf("Please eneter character \n");
  scanf("%s", outputChar); 
  escape(inputChar, outputChar);
#endif

  return 0;
}

