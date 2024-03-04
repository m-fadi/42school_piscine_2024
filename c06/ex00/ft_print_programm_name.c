// • We’re dealing with a program here,
// you should therefore have a function main in
//                                                  your.c file.
// • Create a program that displays its own name followed by a new line.
// • Example : $ >./ a.out | cat - e
// ./a.out$
// $ >
#include <unistd.h>
int main(int ac, char **av)
{
     (void)ac;
     while (*av[0])
          write(1, av[0]++, 1);
     write(1, "\n", 1);
}