// Create a function that displays a string of
//  characters on the standard output.
// • Here’s how it should be prototyped :
#include <unistd.h>
void ft_putstr(char *str)
{
     int i = 0;
     char c;
     while (*str)
     {
          str++;
          i++;
     }
     c = i + '0';
     write(1, &c, 1);
     write(1, "\n", 1);
}

int main(void)
{
     char *str = "helloo";
     ft_putstr(str);
}