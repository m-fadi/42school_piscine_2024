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

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <string.h>
#include <stdio.h>

int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
void ft_putchar(char *s)
{
     while (*s++)
          write(1, s, str_len(s));
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

          i++;
     }
     // arr[ac].size = 0;
     // arr[ac].str = NULL;
     // arr[ac].copy = NULL;

     return arr;
}

#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par)
{
     while (par && par->str != NULL)
     {
          printf("String: %s\n", par->str);
          printf("Size: %d\n", par->size);
          printf("Copy: %s\n", par->copy);
          par++;
     }
}

int main(int argc, char **argv)
{
     struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
     if (arr == NULL)
     {
          printf("Error: Unable to create array.\n");
          return 1;
     }

     // Display the content of the array
     ft_show_tab(arr);

     // Free allocated memory
     for (int i = 0; arr[i].str != NULL; i++)
     {
          free(arr[i].copy);
     }
     free(arr);

     return 0;
}