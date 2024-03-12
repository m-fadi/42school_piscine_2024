// Write a function that converts the initial portion of the string pointed by str to int
//     representation.
// • str is in a specific base given as a second parameter.
// • excepted the base rule,
//     the function should work exactly like ft_atoi.
// • If there’s an invalid argument, the function should return 0. Examples of invalid arguments :
//  base is empty or size of 1;
//  base contains the same character twice;
//  base contains + or - or whitespaces;
// • Here’s how it should be prototyped : ;

// this code is only tested using Mini molinette
#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
     write(1, &c, 1);
}

int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}

int base_is_valid(char *str)
{
     int i = 1;
     if (str_len(str) == 0 || !*str)
          return (0);
     while (*str)
     {
          while (*str != str[i] && i < str_len(str) && *str != '-' && *str != '+')
               i++;
          if (*str == str[i] || *str == '-' || *str == '+')
               return (0);
          str++;
     }
     return (1);
}
// should work for any base smaller than base 10
int atoi_smaller_10(char *str, int number, int base_len, char *base)
{

     while ((*str <= base[base_len - 1] && *str >= base[0]))
     {
          number = number * base_len + *str++ - '0';
     }
     return (number);
}
// for Hex numbers
int atoi_16(char *str, int number)
{

     while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'F') || (*str >= 'a' && *str <= 'f'))
     {
          if (*str >= '0' && *str <= '9')
               number = number * 16 + (*str - '0');
          else if (*str >= 'A' && *str <= 'F')
               number = number * 16 + (*str - 'A' + 10);
          else if (*str >= 'a' && *str <= 'f')
               number = number * 16 + (*str - 'a' + 10);
          str++;
     }

     return (number);
}
int ft_atoi_base(char *str, char *base)
{
     if (!base_is_valid(base))
          return (0);
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
     int base_len = str_len(base);

     if (base_len <= 10)
          number = atoi_smaller_10(str, number, base_len, base);
     else if (base_len == 16)
          number = atoi_16(str, number);
     return (number * sign);
}
// int main()
// {
//      char *str = "-17";
//      char *base = "0123456789abcdef";
//      int number = ft_atoi_base(str, base);
//      // printf("%s\n", str);
//      printf("%d\n", number);
// }