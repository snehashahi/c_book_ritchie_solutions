/**
File         :1.1_Getting_Started.c
Description  :This file prints hello world
Author       :sneha
Date         :02/15/2020
Version      :1.0.0
*/

#include "stdio.h"

#define EXPERIMENT_1_1 0
#define EXPERIMENT_1_2 0

/**
EXPERIMENT 1_1
This experiment prints hello world
*/

/**
There are total 5 following escape sequence
1. \n   New line
2. \t   Tab
3. \b   backspace
4. \"   double quotes
5. \\   backslash

If we use any other escape sequence like /c it will warning undefined escape sequence
*/
int main()
{

#if EXPERIMENT_1_1
  printf("Hello world\n");
#endif

#if EXPERIMENT_1_2
  printf("\c");
#endif

}
