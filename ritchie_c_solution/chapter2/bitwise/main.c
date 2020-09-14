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
#define EXERCISE_2_7          0 //Invert the number
/*****************************************************/
/**
setbits it returns x with n bits  starting at posiion p with n bits
*/
int setbits(int x , int p, int n, int y)
{
  return (x & ~(~(~0 << n) << (p + 1 - n))) | (y & ~(~(~0 << n) << (p + 1- n))) ;
}

/**
Invert :Return x with n bits that begins at position p and inverted
@int x :the number
@int p :position
@int n :number of bits
return inverted number
*/
int invert(int x, int p, int n)
{
  return x ^ (~(~0 << n) << (p + 1 - n));
}

int main()
{
#if EXERCISE_2_6
  int setNum = setbits(10, 1, 2, 5);
  printf("The number is %d\n", setNum);
#endif
#if EXERCISE_2_7
  int invertedNum = invert(8, 3, 3);
  printf("The inverted number is %d\n", invertedNum);
#endif
  return 0;
}

