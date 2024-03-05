// • Create a function ft_ultimate_range which allocates and assigns an array of ints.
// This int array should contain all values between min and max.
// • Min included - max excluded.
// • Here’s how it should be prototyped :;
// • The size of range should be returned(or -1 on error).
// • If the value of min is greater or equal to max’s value,
// range will point on NULL
//                  and it should return 0.

#include <stdio.h>
#include <stdlib.h>
int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}

int ft_ultimate_range(int **range, int min, int max)
{

     if (min >= max)
     {
          *range = NULL;
          return 0;
     }
     int size = max - min;
     int n = size;
     int *arr = (int *)malloc(sizeof(int) * (max - min));
     *range = arr;
     while (size-- >= 1)
          *arr++ = min++;

     return n;
}
