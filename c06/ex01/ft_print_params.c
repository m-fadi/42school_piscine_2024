// • We’re dealing with a program here, you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments.
// • One per line, in the same order as in the command line.
// • It should display all arguments, except for argv[0].
// • Example :
// $>./a.out test1 test2 test3 | cat -e
// test1$
// test2$
// test3$
#include <unistd.h>
int main(int ac, char **av)
{
     if (ac == 1)
          return (0);
     int i = 1;
     while (i < ac)
     {
          while (*av[i])
               write(1, av[i]++, 1);
          write(1, "\n", 1);
          i++;
     }
     
}