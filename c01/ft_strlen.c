// Create a function that displays a string of
//  characters on the standard output.
// • Here’s how it should be prototyped :
#include <unistd.h>
int ft_strlen(char *str)
{
     int i = 0;
     char c;
     while (*str)
     {
          str++;
          i++;
     }
     return i;
}

int main(void)
{
     char *str = "helloo";
     int l = ft_strlen(str) + '0';
     write(1, &l, 1);
     write(1, "\n", 1);
}