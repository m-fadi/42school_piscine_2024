// Create a function that returns the square root of
// a number(if it exists), or 0 if the
//  square root is an irrational number.
// • Here’s how it should be prototyped : int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
     if (nb < 0)
          return (0);
     int sqrt = 0;
     while (sqrt++ <= 46340)// over flow case
          if (sqrt * sqrt == nb)
               return sqrt;
     return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//      (void)argc;
//      printf("%d\n", ft_sqrt(atoi(argv[1])));
//      // printf("stoi : %d\n", atoi(argv[1]));
// }
