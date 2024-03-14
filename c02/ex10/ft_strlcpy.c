// Reproduce the behavior of the function strlcpy(man strlcpy).
// • Here’s how it should be prototyped :


// did not pas mini Mollinette even though the result same as strlcpy
int str_len(char *str)
{
     int i = 0;
     while (*str)
     {
          i++;
          str++;
     }
     return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
     unsigned int n = size;
     char *ptr = src;
     if (size == 0)
          return (str_len(src));
     while (*src && n-1)
     {
          *dest++ = *src++;
          n--;
     }
     *dest = '\0';
     return (str_len(ptr));
}
// #include <bsd/string.h>
// #include <stdio.h>
// int main(void)
// {
//      char src[] = "HeLLO";
//      char dest1[4];
//      char dest2[5];

//      // ft_strcapitalize(str);
//     // printf("%li\n", strlcpy(dest1, "Hello, World!", 1));
//      //printf("%s\n", dest1);
//      printf("%i\n", ft_strlcpy(dest2, "Hello, World!", 2));
//      printf("%s\n", dest2);
// }