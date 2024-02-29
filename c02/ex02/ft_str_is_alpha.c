// Create a function that returns 1
// if the string given as a parameter contains only
//     alphabetical characters,
//     and0 if it contains any other character.
// • Here’s how it should be prototyped :;
// • It should return 1 if str is empty.

int ft_str_is_alpha(char *str)
{

     while (*str)
          if ((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A'))
               str++;
          else
               return (0);
     return (1);
}
// #include <stdio.h>
// int main(void)
// {
//      char *str = "";
//      printf("%d\n", ft_str_is_alpha(str));

// }