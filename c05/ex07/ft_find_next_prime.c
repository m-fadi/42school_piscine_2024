// Create a function that returns the next prime number
// greater or equal to the number                                                                    given as argument.
// • Here’s how it should be prototyped :
int ft_is_prime(int nb)
{
     if (nb < 2)
          return (0);
     int i = 2;
     while (i * i <= nb)
          if (nb % i++ == 0)
               return (0);
     return (1);
}

int ft_find_next_prime(int nb)
{
     if (nb <= 2)
          return (2);
     while (nb++)
          if (ft_is_prime(nb))
               return (nb);
     return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//      (void)argc;
//      printf("%d\n", ft_find_next_prime(atoi(argv[1])));
//      // printf("stoi : %d\n", atoi(argv[1]));
// }