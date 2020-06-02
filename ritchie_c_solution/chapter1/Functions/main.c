/**
File         : main.c
Description  : This files illustrates the use of functions in c language 
Author       : sneha
Date         : 06/02/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define CACLCULATE_POWER    0 // calculate power i
/*****************************************************/
#if CACLCULATE_POWER
int power(int base, int exp);

int power(int base, int exp)
{
int pow = 1;
  for (int i = 0; i < exp ; i++)
  {
    pow = pow * base;  
  }
 return pow;
}
#endif
int main()
{
#if CACLCULATE_POWER
  int pow = power (5, 2);
  printf("power is %d\n", pow);
#endif
  return 0;
}

