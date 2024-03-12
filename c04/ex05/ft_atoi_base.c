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

int ft_atoi(char *str)
{
     int number = 0;
     int sign = 1;
     char *str_ptr = str;
     while (*str == ' ' || *str == '\t' || (*str > 9 && *str <= 13))
          str++;
     while (*str == '-' || *str == '+')
     {
          if (*str == '-')
               sign *= -1;
          str++;
     }
    // printf("%d", num)
     //     str = str_ptr;
     //      while ((*str <= '9' && *str >= '0' ))
     //           number = number * 10+ *str++ - '0';
     //      return (number * sign);
     while ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'f') || (*str >= 'A' && *str <= 'F'))
     {
          if (*str >= '0' && *str <= '9')
          {
               number = number * 16 + (*str - '0');
          }
          else if (*str >= 'a' && *str <= 'f')
          {
               number = number * 16 + (*str - 'a' + 10);
          }
          else if (*str >= 'A' && *str <= 'F')
          {
               number = number * 16 + (*str - 'A' + 10);
          }
          str++;
     }
     return (number*sign);
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

int ft_atoi_base(char *str, char *base)
{
     if (!base_is_valid(base))
          return (0);
     int num = ft_atoi(str);
     // printf("%d", num);
     return num;
}
int main()
{
     char *str = "  +---1242ABss";
     char *base = "01234567";
     printf("%x", ft_atoi(str));
}