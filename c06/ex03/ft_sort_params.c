// We’re dealing with a program here,
//  you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments sorted by ascii order.
// • It should display all arguments, except for argv[0].
// • One argument per line.
#include <stdio.h>
#include <unistd.h>
int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
void put_str(char *str)
{
     while (*str)
     {
          write(1, str, str_len(str));
          str++;
     }
}

int str_comb(char *s1, char *s2)
{
     while ((*s1 || *s2) && *s1 == *s2)
     {
          s1++;
          s2++;
     }
     return (*s1 - *s2);
}

void swap(char **s1, char **s2)
{
     char *tmp = *s1;
     *s1 = *s2;
     *s2 = tmp;
}

void sort(char **s, int count)
{

     // char *ptr = *s;
     int i = 1;
     while (i < count)
     {

          while (s[i])
          {
               // printf("%s ", s[3]);
               if (str_comb(s[i - 1], s[i]) > 0)
                    swap(&s[i - 1], &s[i]);
               i++;
          }
          count--;
          i = 1;
     }
}

int main(int ac, char **av)
{
     int i = 1;
     if (ac <= 2)
     {
          if (ac == 2)
               write(1, av[1], str_len(av[1]));
          write(1, "\n", 1);
          return (0);
     }
     sort(av, ac);
     while (i < ac)
     {
          while (*av[i])
               write(1, av[i]++, 1);
          write(1, "\n", 1);
          i++;
     }
}