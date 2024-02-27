// Create a function which reverses a given array of integer
//  (first goes last, etc).
// • The arguments are a pointer to int and the number of ints in the array.
// • Here’s how it should be prototyped :
#include <stdio.h>
#include <unistd.h>
void ft_rev_int_tab(int *tab, int size)
{
     int temp = 0;
     int i = 0;
     int last = size - 1;
     while (i < last)
     {
          temp = tab[i];
          tab[i] = tab[last];
          tab[last] = temp;
          i++;
          last--;
     }
}

int main(void)
{
     int tab[] = {1, 2, 3, 4, 5, 6, 7};
     int size = 7;

     ft_rev_int_tab(tab, size);
     int i = 0;
     while (i < size)
     {
          printf("%d", tab[i]);
          i++;
     }
     return (0);
}