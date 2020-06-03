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
#define EXERCISE_1_15       0 //Print farenhiet to celsius table
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

#if EXERCISE_1_15
void faren_2_celsius_table()
{
  int lower = 0;
  int upper = 300;
  float celsius = 0;
  printf("Faren\t\tCelsius\n");
  for(int i = lower; i< upper ; i+=20)
  {
    celsius = ((i - 32) * 5.0f) /9.0f;
    printf("%3d\t\t%2f\n", i, celsius);
  }
}
#endif
int main()
{
#if CACLCULATE_POWER
  int pow = power (5, 2);
  printf("power is %d\n", pow);
#endif

#if EXERCISE_1_15
  faren_2_celsius_table();
#endif
  return 0;
}

