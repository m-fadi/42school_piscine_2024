// Create a function that transforms every letter to uppercase.
// • Here’s how it should be prototyped :

    char *
    ft_strupcase(char *str);
{
     while (*str)
          if (*str <= 'Z' && *str >= 'A')
               str++;
          else
               return (0);
     return (1);
}
