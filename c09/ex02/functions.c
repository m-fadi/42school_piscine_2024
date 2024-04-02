// We’re dealing with a program here,
//  you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments sorted by ascii order.
// • It should display all arguments, except for argv[0].
// • One argument per line.
#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
void ft_putstr(char *str)
{
     while (*str)
     {
          write(1, str, ft_strlen(str));
          str++;
     }
}

int ft_strcomb(char *s1, char *s2)
{
     while ((*s1 || *s2) && *s1 == *s2)
     {
          s1++;
          s2++;
     }
     return (*s1 - *s2);
}

void ft_strswap(char **s1, char **s2)
{
     char *tmp = *s1;
     *s1 = *s2;
     *s2 = tmp;
}


// int main(int ac, char **av)
// {
//      int i = 1;
//      if (ac <= 2)
//      {
//           if (ac == 2)
//                write(1, av[1], str_len(av[1]));
//           write(1, "\n", 1);
//           return (0);
//      }
//      sort(av, ac);
//      while (i < ac)
//      {
//           while (*av[i])
//                write(1, av[i]++, 1);
//           write(1, "\n", 1);
//           i++;
//      }
// }