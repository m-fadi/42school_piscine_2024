// Reproduce the behavior of the function strlcat(man strlcat).
// • Here’s how it should be prototyped : unsigned ;
#include <stdio.h>
int str_len(char *str)
{
     int i = 0;
     while (*str++)
          i++;
     return (i);
}
int ft_strlcat(char *dest, char *src, unsigned int size)
{

     int n = size;
     while (*dest)
          dest++;
     while (*src && n--)
     {
          *dest++ = *src++;
          // n--;
     }
     // while (*dest)
     *dest++ = '\0';
     return (str_len(dest) + str_len(src));
}

int main()
{
     char *str = "345";
     char dest[4] = "12";
     ft_strlcat(dest, str, 2);
     printf("%s", dest);
     return 0;
}