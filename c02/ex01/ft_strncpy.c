// Reproduce the behavior of the function strncpy(man strncpy).
// • Here’s how it should be prototyped :
// #include <stdio.h>
// #include <string.h>

char *ft_strncpy(char *dest, char *src, int n)
{
     char *ptr = dest;
     while (*src && n != 0)
     {
          *dest++ = *src++;
          n--;
     }
     while (*dest && n--)
          *dest++ = '\0';
     return (ptr);
}
// #include <string.h>
// int main(void)
// {
//      char *src = "Hello";
//      char *dest = "World1";
//      ft_strncpy(dest, src, 3);
//      printf("%s\n", dest);
//      printf("strn %s\n", strncpy(dest, src, 3));
//      // strncpy("World1", "Hello", 3);
//      return (0);
// }