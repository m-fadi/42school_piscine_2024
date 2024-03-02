// Reproduce the behavior of the function strstr(man strstr).
// • Here’s how it should be prototyped :
#include <stdio.h>
// #include <string.h>
int str_len(char *str)
{
     int len = 0;
     while (*str++)
          len++;
     return (len);
}
char *ft_strstr(char *str, char *to_find)
{
     char *ptr = to_find;
     char *mark = str;
     int len_to_find = str_len(to_find);
     int i = len_to_find;
     while (*str != *to_find && *str && i)
          str++;
     while (*str == *to_find && *str && *to_find && i)
     {
          if (i == len_to_find)
               mark = str;
          str++;
          to_find++;
          i--;
     }

     if (*str != *to_find && i)
     {
          to_find = ptr;
          i = len_to_find;
     }
     if (!i)
          return (mark);
     return (NULL);
}

// int main()
// {
//      char *str = "1245345";
//      char *needle = "35";
//      printf("%s\n", ft_strstr(str, needle));
//      return 0;
// }