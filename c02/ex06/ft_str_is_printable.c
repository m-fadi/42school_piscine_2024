// Create a function that returns 1 if the string
// given as a parameter contains only
//     printable characters,
//     and0 if it contains any other character.
// • Here’s how it should be prototyped :

int ft_str_is_printable(char *str)
{
     while (*str)
          if (*str >= 32 && *str <= 126)
               str++;
          else
               return (0);
     return (1);
}
