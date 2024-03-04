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
int str_comb(char *s1, char *s2)
{
     while (*s1 || *s2)
          if (*s1++ != *s2++)
               return (*s1 - *s2);
     return (*s1 - *s2);
}
void put_str(char *str)
{
     while (*str)
          write(1, str++, str_len(str));
}

void swap(char *s1, char *s2)
{
     char tmp = *s1;
     *s1 = *s2;
     *s2 = tmp;
}
void sort(char **s, int count)
{

     char *ptr = *s;
     int i = 2;

     while (i < count)
     {
          // printf("%s", s[i]);
          while (*s[i])
          {
               // printf("%s ", s[3]);
               if (str_comb(s[i - 1], s[i]))
               {
                    swap(s[i - 1], s[i]);
                    // printf("%s", s[i]);
               }
               s[i]++;
          }
          // write(1, "\n", 1);
          // printf("%s", s[i]);
          // put_str(s[i]);
          i++;
     }
     // while(i < count)
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
     // str_len("123");
     // put_str("str");
     sort(av, ac);
     //return (0);
     while (i < ac)
     {
          // sort(av);
          while (*av[i])
               write(1, av[i]++, 1);
          write(1, "\n", 1);
          i++;
     }
}