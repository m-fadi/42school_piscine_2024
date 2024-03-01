// Create a function that displays a string of characters onscreen.If this string contains
//     characters that aren’t printable,
//     they’ll have to be displayed in the shape of
//         hexadecimals(lowercase),
//     preceeded by a "backslash".
// • For example : Coucou\ntu vas bien ?
// • The function should display : Coucou\0atu vas bien ?
// • Here’s how it should be prototyped

#include <unistd.h>
void ft_putstr_non_printable(char *str)
{
     char *hex_char = "0123456789abcdef";

     while (*str)
     {
          if (*str >= 32 && *str <= 126)
               write(1, str, 1);
          else
          {
               write(1, "\\", 1);
               unsigned char x = hex_char[*str / 16];
               write(1, &x, 1);
               x = hex_char[*str % 16];
               write(1, &x, 1);
          }
          str++;
     }
}
// int main(void)
// {
//      char *str = "Coucou\ntu vas bien ?";
//      ft_putstr_non_printable(str);
// }