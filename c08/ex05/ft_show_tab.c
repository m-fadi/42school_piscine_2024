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
// • We’ll test your function with our ft_strs_to_tab(previous exercise).Make it work according to this !
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
char *str_cpy(char *str, char *cpy)
{
     while (*str)
          *cpy++ = *str++;
     *cpy = '\0';
     return (cpy);
}
//****************************
void ft_putchar(char c)
{

     write(1, &c, 1);
}
//****************************
void ft_putnbr(int nb)
{
     // if (nb < 0)
     // {
     //      ft_putchar('-');
     //      nb *= -1;
     // }
     if (nb >= 10)
          ft_putnbr(nb / 10);

     ft_putchar(nb % 10 + '0');
}



//*****************************************************

// NOTE saying (struct s_stock_str *ft_strs_to_tab() is same as t_stock_str *ft_strs_to_tab())

//*****************************************************



// t_stock_str *ft_strs_to_tab(int ac, char **av)
// {
//      struct s_stock_str *arr = malloc((ac + 1) * sizeof(struct s_stock_str));
//      if (arr == NULL)
//        return NULL;
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

void ft_show_tab(t_stock_str *par)
{
     printf("String: %s\n", par->copy);
     while (par && par->str != NULL)
     {
          ft_put_str(par->str);
          ft_put_str(par->copy);
          //printf("String: %d\n", par->size);
              ft_putnbr(par->size);
           write(1,"\n",1);

          par++;
     }
}
libft_creator.sh, 
                 // int main(int argc, char **argv)
                 // {
                 //      struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
                 //      if (arr == NULL)
                 //           return 1;
                 //      }

                 //      ft_show_tab(arr);

                 //      return 0;
                 // }