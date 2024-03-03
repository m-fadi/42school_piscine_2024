// Create an iterated function that returns
// the value of a power applied to a number.
// • A power lower than 0 returns 0.
// • Overflows must not be handled.
// • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :

int ft_iterative_power(int nb, int power)
{
     if (power < 0)
          return (0);
     if (power == 0)
          return (1);
     int result = 1;
     while (power--)
          result *= nb;
     return result;
}

// #include <stdio.h>
// int main()
// {
//      printf("%d\n", ft_iterative_power(-5, 3));
// }