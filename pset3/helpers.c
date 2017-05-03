#include <cs50.h>
#include <stdio.h>

#include "helpers.h"


/*
 * bool
 * search(int value, int array[], int n)
 *
 * Returns true if value is in array of n values, else false.
 */

bool 
search(int value, int array[], int n)
{
  int start = 0;
  int end = n ; 
  int mid = (start + end) / 2;

  while (start <= end)
 {
    if (array[mid] == value)
      return true;
    else if (value < array[mid])
        {
          end = mid - 1;
          mid = (start + end) / 2;
          
        }
    else if (value > array[mid])
        {
          start = mid + 1;
          mid = (start + end) / 2;
          
        }
      else 
        break;
  }
  return false;
}



