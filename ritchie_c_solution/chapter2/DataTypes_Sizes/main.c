/**
File         : main.c
Description  : Prints the size of the datatypes 
Author       : sneha
Date         : 06.09.2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_2_1       0 //Deterine the size of the datatypes
/*****************************************************/

int main()
{
#if EXERCISE_2_1
  int num = 0;
  char inpuChar;
  short int num_short = 0;
  long int num_long = 0;
  signed int signed_num = 0;
  unsigned int unsigned_num = 0;
  printf("size of integer = %lu\n", sizeof(num));
  printf("size of char = %lu\n", sizeof(inpuChar));
  printf("size of short intr = %lu\n", sizeof(num_short));
  printf("size of long intr = %lu\n", sizeof(num_long));
  printf("size of signed intr = %lu\n", sizeof(signed_num));
  printf("size of unsigned intr = %lu\n", sizeof(unsigned_num));

#endif
  return 0;
}

