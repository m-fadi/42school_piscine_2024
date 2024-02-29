// Reproduce the behavior of the function strncpy(man strncpy).
// • Here’s how it should be prototyped :
// #include <stdio.h>
// #include <string.h>
char *ft_strncpy(char *dest, char *src, int n)
{
     while (*src && n--)
     {
          //  printf("n1 = %d\n", n);
          *dest++ = *src++;
          //  n--;
     }
     while (*dest && n--)
     {
          // printf("n2 = %d\n", n);
          *dest++ = '\0';
          //  n--;
     }
     return (dest);
}

// int main(void)
// {
//      char *src = "Hello";
//      char dest[10];
//      ft_strncpy(dest, src, 3);
//      printf("%s\n", dest);
//      printf("strn %s\n", strncpy(dest, src, 3));
//      // strncpy("World1", "Hello", 3);
//      return (0);
// }