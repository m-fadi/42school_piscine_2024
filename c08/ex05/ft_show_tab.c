
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
void ft_put_str(char *s)
{
     write(1, s, str_len(s));
     write(1, "\n", 1);
}
// char *str_cpy(char *str, char *cpy)
// {
//      while (*str)
//           *cpy++ = *str++;
//      *cpy = '\0';
//      return (cpy);
// }

// struct s_stock_str *ft_strs_to_tab(int ac, char **av)
// {
//      struct s_stock_str *arr = malloc((ac + 1) * sizeof(struct s_stock_str));
//      if (arr == NULL)
//      {
//           printf("Memory allocation failed\n");
//           return NULL;
//      }
//      int i = 1;
//      int j = 0;
//      while (i < ac)
//      {
//           int strlen = str_len(av[i]);
//           char *strcpy = (char *)malloc(sizeof(char) * (strlen + 1));
//           str_cpy(av[i], strcpy);
//           arr[j].size = strlen;
//           arr[j].str = av[i];
//           arr[j].copy = strcpy;

//           // t_stock_str new_str = {.size = strlen, .str = av[i], .copy = strcpy};
//           j++;
//           i++;
//      }

//      return arr;
// }

void ft_show_tab(struct s_stock_str *par)
{
     // printf("String: %s\n", par->copy);
     while (par && par->str != NULL)
     {
          ft_put_str(par->str);
          ft_put_str(par->copy);
          // write(1,&(par->size+'0'),1);

          par++;
     }
}

// int main(int argc, char **argv)
// {
//      struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
//      if (arr == NULL)
//      {
//           printf("Error: Unable to create array.\n");
//           return 1;
//      }

//      // Display the content of the array
//      ft_show_tab(arr);

//      // Free allocated memory

//      return 0;
// }