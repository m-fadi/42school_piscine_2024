// Create a function ft_range which returns an array
// of ints. This int array should
//         contain all values between min and max.
// • Min included -
//     max excluded.
// • Here’s how it should be prototyped : ;
// • If min´value is greater or equal to max’s value,
//     a null pointer should be returned.
#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
     if (min >= max)
          return (NULL);
     int size = max - min;
     int *arr = (int *)malloc(sizeof(int) * (max - min));
     int *ptr = arr;
     while (size-- >= 1)
          *arr++ = min++;
     return ptr;
}
// int main()
// {
//      int min = 5;
//      int max = 10;
//      int *result = ft_range(min, max);

//      if (result == NULL)
//      {
//           printf("Error: Unable to create range array. min >= max.\n");
//           return 1;
//      }

//      printf("Range array: ");
//      for (int i = 0; i < max - min; i++)
//      {
//           printf("%d ", result[i]);
//      }
//      printf("\n");

//      // Free the allocated memory
//      free(result);

//      return 0;
// }