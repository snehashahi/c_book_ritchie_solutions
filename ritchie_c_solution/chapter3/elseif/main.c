/**
File         : main.c
Description  : This program illustrate the use of else if for binary search 
Author       : sneha
Date         : 09/17/2020
Version      : 1.0.0
*/

#include "stdio.h"
#include "time.h"
/*****************************************************/
/*Select the follwing flag to run the particular test*/
#define BINARY_SEARCH     1 //Does binary search to find an element
#define BINARY_SEARCH_OPT 1 //optimize the binary function by just using 2 tests
/*****************************************************/
/**
Binary search
1.Happens in sorted array
2.Divide the array
3.Find if the element lies in lower or upper half 
4.Search in that region. The process continues untill you find the element
*/

/**
binary search:Find an element is present in the array or not
@input element:the element
@input arr
@length of the array
return position of the element if found else return -1
*/
int binary_search(int arr[], int element, int length)
{
  int low, high, mid;
  low = 0;
  high = length - 1;
  while(low <= high)
  {
    mid = (low + high) / 2;
    if(element < arr[mid])
      high = mid - 1;
    else if(element > arr[mid])
      low = mid + 1;
    else //match happens
      return mid;
  }

  return -1;
}

/**
Binary search optimized using 2 tests
@input arr
@input elemnt
@input length
return position  
*/
int binary_search_opt(int arr[], int element, int length)
{
  int low, high, mid;
  low = 0;
  high = length;
  mid = (low + high) / 2;
  while(low <= high && (element != arr[mid]))
  {
    if(element < arr[mid])
      high = mid - 1;
    else
      low = mid + 1;
    mid  = (low + high) / 2;
  }
  return (element == arr[mid]) ? mid : -1;
}
int main()
{
#if BINARY_SEARCH
  int inputArry1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  clock_t time_taken1 = clock();
  int position1 = binary_search(inputArry1, 1, 10);
  time_taken1 = clock() -  time_taken1;
  printf("The position of the element is %d %lu\n", position1,(unsigned long)time_taken1 / CLOCKS_PER_SEC);
#endif

#if BINARY_SEARCH_OPT
 int inputArry2[10] = {1, 2, 3, 4, 5, 6, 7, 8,  9, 10};
 clock_t time_taken2 = clock();
 int position2 = binary_search_opt(inputArry2, 1, 10);
 time_taken2 =  clock() - time_taken2;
 printf("The position of the element is %d %lu\n", position2, (unsigned long)time_taken2 / CLOCKS_PER_SEC);
#endif
  return 0;
}

