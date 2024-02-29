// Create a function that transforms every letter to uppercase.
// • Here’s how it should be prototyped :

char *ft_strlowcase(char *str)
{
     char *ptr = str;
     while (*str)
     {
          if (*str <= 'Z' && *str >= 'A')
               *str += 32;
          str++;
     }
     return (ptr);
}
