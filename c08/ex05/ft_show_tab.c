// Create a function that displays the content of the array created by the previous
//     function.
// • Here’s how it should be prototyped : void
//                                         ft_show_tab(struct s_stock_str *par);
// • The structure will be the same as the previous exercise and will be defined in the
//     ft_stock_str.h file
// • For each element,
//     we’ll display :
//  the string followed by a ’\n’
//  the size followed by a ’\n’
//  the copy of the string(that could have been modified) followed by a ’\n’
// • We’ll test your function with our ft_strs_to_tab(previous exercise).
// Make it work according to this !

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void ft_putchar(char *s)
{
     while (*s++)
          write(1, s, str_ren(s));
}

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
     struct s_stock_str *arr = malloc((ac + 1) * sizeof(struct s_stock_str));
     if (arr == NULL)
     {
          printf("Memory allocation failed\n");
          return NULL;
     }
     int i = 1;
     while (i < ac)
     {
          int strlen = str_len(av[i]);
          char *strcpy = (char *)malloc(sizeof(char) * (strlen + 1));
          str_cpy(av[i], strcpy);
          arr[i].size = strlen;
          arr[i].str = av[i];
          arr[i].copy = strcpy;
          // t_stock_str new_str = {.size = strlen, .str = av[i], .copy = strcpy};
          // printf("size:%d\n", arr[i].size);
          // printf("str: %s\n", arr[i].str);
          // printf("cpy: %s\n", arr[i].copy);

          i++;
     }
     // arr[ac].size = 0;
     // arr[ac].str = NULL;
     // arr[ac].copy = NULL;
     return arr;
}

void ft_show_tab(struct s_stock_str *par)
{
     int i = 0;
     int par_len = strlen(par);
     while(i < par_len -1)
     ft_putchar(par[i].size + '0');
}

int main(int ac, char **av)
{
     //printf("%s\n", av[1]);
     ft_strs_to_tab(ac, av);
         //printf("%d\n", ft_strs_to_tab(ac, av)[0].size);
}