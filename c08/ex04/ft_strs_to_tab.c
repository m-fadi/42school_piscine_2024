// Create a function that takes an array of string as argument and the size of this array.
// • Here’s how it should be prototyped : struct s_stock_str *ft_strs_to_tab(int ac, char **av);
// • It will transform each element of av into a structure.
// • The structure will be defined in the ft_stock_str.h file that we will provided,
//  like this : typedef struct s_stock_str
// {
//      int size;
//      char *str;
//      char *copy;
// } t_stock_str;
//  size being the length of the string;
//  str being the string;
//  copy being a copy of the string;
// • It should keep the order of av.

//     The returned array should allocated in memory and its last element’s str set to 0,
//     this will mark the end of the array.
// • It should return a NULL pointer if an error occurs.
// • We’ll test your function with our ft_show_tab(next exercise).Make it work according to this !
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
int str_len(char *str)
{
     int i = 0;
     while (*str++)
          i++;
     return (i);
}
char *str_cpy(char *str, char *cpy, int strlen)
{
     
     int i = 0;
     while (*str)
          *cpy++ = *str++;
     *cpy = 0;
     return (cpy);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
     int i = 1;
     while (i < ac)
     {
          while (*av[i])
          {
               int strlen = str_len(av[i]);
               printf("%d", strlen);
               char strcpy= (char *)malloc(strlen * sizeof(char));
               str_cpy(av[i], strcpy, strlen);
               
          }
     }
}

int main (int ac, char **av)
{
     printf("%d\n", ft_strs_to_tab(ac, av));
}