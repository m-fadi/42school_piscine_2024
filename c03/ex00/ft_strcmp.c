// Reproduce the behavior of the function strcmp(man strcmp).
// • Here’s how it should be prototyped :;

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
     while (*s1 == *s2 && (*s1 || *s2))
     {
          s1++;
          s2++;
     }
     return (*s1 - *s2);
}
// #include <stdio.h>
// int main(void)
// {
//      char *s1 = "hello";
//      char *s2 = "ha";
//      // ft_strcmp(s1, s2);
//      printf("%d", ft_strcmp(s1, s2));
// }