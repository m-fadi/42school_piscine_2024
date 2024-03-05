// Reproduce the behavior of the function strdup(man strdup).
// • Here’s how it should be prototyped :
#include <string.h>
#include <stdlib.h>
// #include <stdio.h>
int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
char *ft_strdup(char *src)
{
     char *dest = (char *)malloc(str_len(src) * sizeof(char));
     char *ptr = dest;
     while (*src)
          *dest++ = *src++;
     *dest = '\0';
     return (ptr);
}
// #include <unistd.h>
// int main(int ac, char **av)
// {

//      printf("%s", ft_strdup(av[1]));
// }