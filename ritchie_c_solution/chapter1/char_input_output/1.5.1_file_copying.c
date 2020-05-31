/**
File         : 1.5.1_file_copying.c
Description  : This file copies input to output
Author       : sneha
Date         : 02/19/2020
Version      : 1.0.0
*/

#include "stdio.h"
#include "stdbool.h"
/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define COPIES_IN_OUT     0 //Copies input to output
#define EXERCISE_1_6      0 //Verify that c!=EOF is 0 or 1
#define EXERCISE_1_7      0 ///Print EOF
#define COUNT_CHAR        0 ///count character until eof is detected
#define EXERCISE_1_8      0 //COUNT LINES, TABS and blank spaces
#define EXERCISE_1_9      0 //copies input to output and replace 2 blanks by 1 blank
#define EXERCISE_1_10     0 //copies input to output and replace special characters
#define COUNT_WORD        0 //calculate line, character and words
#define EXERCISE_1_12     0 //Print one word per line


/* COUNT_WORD Starts*/
#if COUNT_WORD
#define OUT 0  //Outside of word
#define IN  1  //Inside of word
#endif
/* COUNT_WORD Ends*/

/*****************************************************/

int main()
{

#if COPIES_IN_OUT
  int c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
  }
#endif

#if EXERCISE_1_6
  while((getchar() != EOF))
  { 
    printf("the expression is not EOF  0\n");
  }

  printf("the expression is EOF 1\n");
#endif

#if EXERCISE_1_7
  int c = getchar();
  while(c != EOF)
  {
    c = getchar();
  }
  printf("The value of EOF is %d\n",c);
#endif

#if COUNT_CHAR
  int nc = 0;

  while(getchar() != EOF)  
    ++nc;
 
 printf("Number of character is %1d\n", nc);
#endif

#if EXERCISE_1_8
  int nL = 0;
  int nB = 0;
  int nT = 0;
  int c  = 0;
  while((c = getchar()) != EOF)
  {
    if(c == '\n')
      nL++;
    if(c == '\t')
      nT++;
    if(c == ' ')
      nB++;
     
  }

  printf("number of lines =%d, tab=%d, blank=%d\n", nL,nT, nB);
#endif

#if EXERCISE_1_9
  int c = 0;
  bool spacePresent = false;
  while( (c = getchar()) != EOF)
  { 
    if(c == ' ')
    {
      if(!spacePresent)
      {
        spacePresent = true;
        putchar(c);
      }
    }
    else
    {
      putchar(c);
      spacePresent = false;
    }

  }
#endif

#if EXERCISE_1_10
  int slash = '\\';
  int tab = 't';
  int backspace = 'b';
  int c = 0;
  while((c = getchar()) != EOF)
  {
   if(c == '\t')
   {
     putchar(slash);
     putchar(tab);
   }
   if(c == '\b')
   {
     putchar(slash);
     putchar(backspace);
   }
   if( c == '\\')
   {
     putchar(slash);
     putchar(slash);
   }
   if((c != '\t') && (c != 'b') && (c != '\\'))
   {
     putchar(c);
   } 
  }
#endif
#if COUNT_WORD
 int nC, nL, nW, state, c;
 nC = nL = nW = c = 0;
 state = OUT;
 while((c = getchar()) != EOF)
 {
   nC++;
   
   if(c == '\n')
     nL++;
   
   if(c == '\n' || c == '\t' || c == ' ')
   state =  OUT;
   else if(state == OUT)
   {
     state = IN;
     nW++;
   } 
 }

 printf("\nchar =%d, lines =%d word=%d\n", nC, nL, nW);

#endif 

#if EXERCISE_1_12

 int c, printL;
 c = printL = 0;
 while((c = getchar()) != EOF)
 {
   if((c == '\n' || c == '\t' || c == ' '))
   {
     if(printL == 0)
       printf("\n");
     printL = 1;
   }
   else
   { 
     printf("%c", c);
     printL = 0;
   } 
 }

#endif
 return 0;
}

