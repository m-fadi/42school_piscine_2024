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
int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
char *str_cpy(char *str, char *cpy)
{
     while (*str)
          *cpy++ = *str++;
     *cpy = '\0';
     return (cpy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
     struct s_stock_str *arr = malloc((ac+1) * sizeof(struct s_stock_str));
     if (arr == NULL)
     {
          printf("Memory allocation failed\n");
          return NULL;
     }
     int i = 1;
      while (i < ac)
     {
          int strlen = str_len(av[i]);
          char *strcpy=(char *)malloc(sizeof(char)*(strlen+1));
          str_cpy(av[i], strcpy);  
           arr[i].size = strlen;
           arr[i].str = av[i];
           arr[i].copy = strcpy;
           // t_stock_str new_str = {.size = strlen, .str = av[i], .copy = strcpy};
           printf("size:%d\n", arr[i].size);
           printf("str: %s\n", arr[i].str);
           printf("cpy: %s\n", arr[i].copy);

           i++;
     }
     arr[ac].size = 0;
     arr[ac].str = NULL;
     arr[ac].copy = NULL;
     return arr;
}

// int main(int ac, char **av)
// {
//      //printf("%s\n", av[1]);
//      ft_strs_to_tab(ac, av);
//          //printf("%d\n", ft_strs_to_tab(ac, av)[0].size);
// }