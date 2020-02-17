/**
File         : 1.3_for_statement.c
Description  : This program prints the faremheit to celsius table using for loop
Author       : sneha
Date         : 02/17/2020 
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/

#define FAREN_2_CELSIUS    0  //This table prints farenheit to celsius table using for loop
#define EXERCISE_1_5       1  //This table prints farenhiet to celsius table in reverse order 
/*****************************************************/

int main()
{

#if FAREN_2_CELSIUS

  int fahr = 0;
  for(fahr = 0; fahr <= 300;fahr = fahr + 20)
    printf("Faren 2 celsius %6.1d %6.1f\n", fahr , (5.0/9.0) * (fahr - 32));

#endif

#if EXERCISE_1_5

  int fahr = 0;
  for(fahr = 300; fahr >= 0;fahr = fahr - 20)
    printf("Faren 2 celsius %6.1d %6.1f\n", fahr , (5.0/9.0) * (fahr - 32));

#endif

  return 0;
}

