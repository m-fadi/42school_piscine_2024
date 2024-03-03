// Create a function ft_fibonacci that returns the n - th element
// of the Fibonacci sequence
//     the first element being at the 0 index.We’ll consider that the Fibonacci
//         sequence starts like this : 0,
//     1, 1, 2.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// • Obviously, ft_fibonacci has to be recursive.
// • If the index is less than 0, the function should return -1. 10

int ft_fibonacci(int index)
{
     if (index < 0)
          return (-1);
     if (index == 0)
          return (0);
     if (index == 1 || index == 2)
          return (1);
     return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); // Fn = Fn-1 + Fn-2
}
// #include <stdio.h>
// int main()
// {
//      printf("%d\n", ft_fibonacci(9));
// }