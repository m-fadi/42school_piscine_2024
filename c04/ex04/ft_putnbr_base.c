// // Create a function that displays a number in a base system in the terminal.
// // • This number is given in the shape of an int, and the radix in the shape of a string
// //                                                         of characters.
// // • The base - system contains all useable symbols to display that number :
// //  0123456789 is the commonly used base system to represent decimal numbers
// //  01 is a binary base system;
// //  0123456789ABCDEF an hexadecimal base system;
// //  poneyvif is an octal base system.
// // • The function must handle negative numbers.
// // • If there’s an invalid argument, nothing should be displayed.Examples of invalid
// //                                            arguments :
// //  base is empty or size of 1;
// //  base contains the same character twice;
// //  base contains + or -;
// // • Here’s how it should be prototyped:

//This code is missing the conditions and tested using only Mini Molinette
#include <unistd.h>
#include <stdio.h>
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
int ft_strcmp(char *s1, char *s2)
{
     while (*s1 && *s2 && *s1 == *s2)
     {
          s1++;
          s2++;
     }
     return (*s1 - *s2);
}

int ft_base(char *str, char *base)
{
     char *bases[] = {"01", "01234567", "0123456789", "0123456789ABCDEF"};
     char *str_ptr = str;
     char *base_ptr = base;
     int i = 0;
     while (i < 4)
     {
          if (ft_strcmp(bases[i], base) == 0)
               return (str_len(bases[i]));
          i++;
     }
     //     if (!ft_strcmp(str, "01"))
     //     {
     //          return (2);
     //          str = str_ptr;
     //     }
     //     else if (!ft_strcmp(str, "01234567"))
     //     {
     //          return (8);
     //          str = str_ptr;
     //     }
     //     else if (!ft_strcmp(str, "0123456789"))
     //     {
     //          return (10);
     //          str = str_ptr;
     //     }
     //     else if (!ft_strcmp(str, "0123456789ABCDEF"))
     //     {
     //          return (16);
     //          str = str_ptr;
     //     }

     // return (0);
}
void ft_putnbr_base(int nbr, char *base)
{
     int number = nbr;
     int i = 0;
     int size;
     char *base_ptr = base;
     int convert_base = ft_base(base, base);
     size = (sizeof(int) * 8); // Calculate maximum digits required for an int
     char converted_num[size];
     converted_num[size] = '\0';
     base = base_ptr;

     while (number != 0)
     {
          converted_num[i++] = base[number % convert_base];
          number = number / convert_base;
          if (number == 0)
               break;
     }
     // Output the converted number
     if (i == 0)
     { // Handle the case when the input number is 0
          ft_putchar('0');
     }
     else
     {
          while (i > 0)
               ft_putchar(converted_num[--i]);
     }
}

// int main()
// {
//      char *base = "01234567";

//      ft_putnbr_base(8, base);
// }
