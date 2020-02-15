/**
File         : 1.2_variables_ArithmeticExp.c
Description  : This file has examples to print table showing celsius-Farenheit table
               showing the use of how variables & arithemetic expession are assigned
Author       : sneha
Date         : 15/02/2020
Version      : 1.0.0
*/

#include "stdio.h"

/*****************************************************/
/*Select the follwing flag to run the particular test*/

/*Farenhiet to celsius table for 0,20,..........300*/
/*This is book sample program which prints table for farenheit-celsius  with int type*/
#define INT_F2C       0 

/*This is book sample program which prints table for farenheit-celsius  with float type*/
#define FLOAT_F2C     0

/*Print a heading before table*/
#define EXERCISE_1_3  0

/*Print Celsius-Farenheit table*/
#define EXERCISE_1_4  0

/*****************************************************/

int main()
{

#if INT_F2C

  int lower = 0, upper = 300, step = 20;
  int faren, celsius;

  faren = lower;
  while(faren < upper) {
    celsius = 5 * (faren - 32) / 9;
    printf("%d\t%d \n", faren, celsius);
    faren = faren + step; 
  } 

#endif

#if FLOAT_F2C

  int lower = 0, upper = 300, step = 20;
  float faren, celsius;

  faren = lower;
  while(faren < upper) {
    celsius = (5.0/9.0) * (faren - 32);
    printf("%f\t%f \n", faren, celsius);
    faren = faren + step; 
  } 

#endif

#if EXERCISE_1_3

  int lower = 0, upper = 300, step = 20;
  float faren, celsius;

  faren = lower;
  printf("***********************************\n");
  printf("Faren\t\t\tCelsius\t\t\t \n");
  printf("***********************************\n");
  while(faren < upper) {
    celsius = (5.0/9.0) * (faren - 32);
    printf("%f\t\t%f \n", faren, celsius);
    faren = faren + step; 
  } 

#endif

#if EXERCISE_1_4

  int lower = 0, upper = 300, step = 20;
  float faren, celsius;

  celsius = lower;
  printf("***********************************\n");
  printf("Celsius\t\t\tFaren\t\t\t \n");
  printf("***********************************\n");
  while(celsius < upper) {
    faren = ((9.0/5.0) * celsius) + 32.0;
    printf("%f\t\t%f \n", celsius, faren);
    celsius = celsius + step; 
  } 

#endif

  return 0;
}

