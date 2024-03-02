// Reproduce the behavior of the function strncmp(man strncmp).
// • Here’s how it should be prototyped :
// #include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
     if (!n)
          return (0);
     int i = n - 1;
     while ((*s1 || *s2) && i-- && *s1 == *s2)
     {
          s1++;
          s2++;
     }
     return (*s1 - *s2);
}
// #include <stdio.h>
// int main()
// {
//      char *s1 = "hello";
//      char *s2 = "hell0";
//      printf("%s\n", s2);
//      printf("%d\n", ft_strncmp(s1, s2, 5));
//      // printf("%d\n", ft_strncmp(s1, s2, 3));
// }