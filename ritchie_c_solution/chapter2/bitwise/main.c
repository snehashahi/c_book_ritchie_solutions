/**
File         : main.c
Description  : This program does bitwise operation  
Author       : sneha
Date         : 14/9/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_2_6          0 //Set bits from one position
/*****************************************************/
int setbits(int x , int p, int n, int y)
{
  return (x & ~(~(~0 << n) << (p + 1 - n))) | (y & ~(~(~0 << n) << (p + 1- n))) ;
}

int main()
{
#if EXERCISE_2_6
  int num = setbits(10, 1, 2, 5);
  printf("The number is %d\n", num);
#endif
  return 0;
}

