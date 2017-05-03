#include <cs50.h>
#include <stdio.h>

#include "helpers.h"



bool 
search(int value, int array[], int n)
{
  int start = 0;
  int end = n-1 ; 
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

void 
sort(int values[], int n)
{
  int in, out;
  for (out = 0; out < n-1; out++) {
    int check = 0;
    for (in = out; in < n; in++) {
    
      if (values[in] < values[out])
        {
          int temp = values[in];
	  values[in] = values[out];
          values[out] = temp;
          check = 1;
        }
    }
    if (check == 0)
      break;
  }
  for (int i = 0; i < n; i++)
    printf("%d\n", values[i]);
    return;
}

