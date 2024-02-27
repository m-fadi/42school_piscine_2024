
// Create a function that counts and
//  returns the number of characters in a string.
// • Here’s how it should be prototyped :

#include <unistd.h>
int ft_strlen(char *str)
{
     int i = 0;
     char c;
     while (*str++)
          i++;
     return i;
}

int main(void)
{
     char *str = "helloo7";
     int l = ft_strlen(str) + '0';
     write(1, &l, 1);
     write(1, "\n", 1);
}