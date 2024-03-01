// Create a function that transforms every letter to uppercase.
// • Here’s how it should be prototyped :

char *ft_strupcase(char *str)
{
     char *ptr = str;
     while (*str)
     {
          if (*str <= 'z' && *str >= 'a')
               *str -= 32;
          str++;
     }
     return (ptr);
}
// #include <stdio.h>
// int main(void)
// {
//      char *str = "sAlut, comment tu vas";
//      ft_strupcase(str);
//      // printf("%s", str);
// }
