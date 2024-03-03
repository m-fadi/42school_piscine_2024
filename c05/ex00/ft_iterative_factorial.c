// Create an iterated function that returns a number.
// This number is the result of a
// factorial operation based on the number given as a parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled,
//     the function return will be undefined.
// • Here’s how it should be prototyped :

int ft_iterative_factorial(int nb)
{
     int nb_fac = 1;
     while (nb)
          nb_fac = nb_fac * nb--;
     // nb--;
     return nb_fac;
}
// #include <stdio.h>
// int main()
// {
//      printf("%d\n", ft_iterative_factorial(5));
// }
