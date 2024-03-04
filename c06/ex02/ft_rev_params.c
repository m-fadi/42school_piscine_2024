// We’re dealing with a program here,
// you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments.
// • One per line, in the reverse order of the command line.
// • It should display all arguments, except for argv[0].
#include <unistd.h>
int main(int ac, char **av)
{
     if (ac == 1)
          return (0);
     int i = ac - 1;
     while (i > 0)
     {
          while (*av[i])
               write(1, av[i]++, 1);
          i--;
          write(1, "\n", 1);
     }
}