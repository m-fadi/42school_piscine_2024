// • Create a function which sorts an array of integers by ascending order.
// • The arguments are a pointer to int and the number of ints in the array.
// • Here’s how it should be prototyped :
#include <stdio.h>
#include <unistd.h>
void ft_sort_int_tab(int *tab, int size)
{
     
}

int main(void)
{
     int tab[] = {0, 1, 2, 3, 4, 5, 6, 7};
     int size = 7;
     int i = 0;
     ft_sort_int_tab(tab, size);
     while (size)
     {
          printf("%d\n", tab[size--]);
     }
}