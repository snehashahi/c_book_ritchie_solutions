/**
File         : main.c
Description  : This files does the program for type conversion 
Author       : sneha
Date         : 08/06/2020
Version      : 1.0.0
*/

#include "stdio.h"
#include "string.h"
/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define EXERCISE_2_3         0 /*Program to convert hexedecimal to integers*/
/*****************************************************/

/**
Program to convert hexadecimal to integer values
@input char hex[] : This is the array which has the hexadecimal value
return num:       : The decimal equivalent of the the hexadecimal number
*/
int hex_2_decimal(char hex[])
{
  int length = strlen(hex);
  int base = 1;
  int decimal_val = 0;
  for(int i = (length - 1); i >= 0; i--)
  {
    if(hex[i] >= '0' && hex[i] <= '9')
      decimal_val  +=  (hex[i] - 48) * base;
    else if(hex[i] >= 'A' && hex[i] <= 'F')
      decimal_val += (hex[i] - 55) * base;
    base = base * 16;
  }

  return decimal_val;
}

int main()
{
#if EXERCISE_2_3
  char inputString[10];
  printf("Enter hex");
  scanf("%s", inputString);
  printf("the user entered %s\n", inputString);
  int hex2dec = hex_2_decimal(inputString);
  printf("hex to decimal %d\n", hex2dec);
#endif
  return 0;
}

