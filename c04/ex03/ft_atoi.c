// Write a function that converts the initial portion
//  of the string pointed by str to its int
//         representation
// • The string can start with an arbitray amount of white
//         space(as determined by isspace(3))
// • The string can be followed by an arbitrary amount of
//     + and-signs,
//     -sign will change
//             the sign of the int returned based on the number of
//             - is odd
//         or even.
// • Finally the string can be followed by any numbers of the base 10.
// • Your function should read the string until the string stop following the rules
//  and return the number found until now.
// • You should not take care of overflow or underflow.
// result can be undefined in that case.
// • Here’s an example of a program that prints the atoi  return value:
// $ >./ a.out " ---+--+1234ab567" - 1234
// • Here’s how it should be prototyped :
// #include <stdio.h>
int ft_atoi(char *str)
{
     int number = 0;
     int sign = 1;

     while (*str == ' ' || *str == '\t' || (*str > 9 && *str <= 13))
          str++;
     while (*str == '-' || *str == '+')
     {
          if (*str == '-')
               sign *= -1;
          str++;
     }
     while (*str <= '9' && *str >= '0')
          number = number * 10 + *str++ - '0';
     return (number * sign);
}

// int main()
// {
//      printf("%d", ft_atoi("--+123 4ab567"));
// }