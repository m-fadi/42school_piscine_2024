// Create a recursive function that returns
// the factorial of the number given as a
//     parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled,
//     the function return will be undefined.
// • Here’s how it should be prototyped : ;

int ft_recursive_factorial(int nb)
{
     int nb_fac = 1;
     if ( nb == 0)
          return (1);
     if ( nb <= 0)
          return (0);
     nb_fac *= nb * ft_recursive_factorial(nb - 1);
     return (nb_fac);
}

// #include <stdio.h>
// int main()
// {
//      printf("%d\n", ft_recursive_factorial(5));
// }
