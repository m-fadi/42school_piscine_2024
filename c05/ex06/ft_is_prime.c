// • Create a function that returns 1 if the number
// given as a parameter is a prime
//     number,
//     and0 if it isn’t.
// 0 and 1 are not prime numbers.
// • Here’s how it should be prototyped :

int ft_is_prime(int nb)
{
     if (nb < 2)
          return (0);
     int i = 2;
     while (i <= nb / 2)
          if (nb % i++ == 0)
               return (0);
     return (1);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//      (void)argc;
//      printf("%d\n", ft_is_prime(atoi(argv[1])));
//      // printf("stoi : %d\n", atoi(argv[1]));
// }