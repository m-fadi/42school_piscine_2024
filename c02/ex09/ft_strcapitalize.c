// Create a function that capitalizes the first letter of each word
//  and transforms all other letters to lowercase.
// • A word is a string of alphanumeric characters.
// • Here’s how it should be prototyped : char *  ft_strcapitalize(char *str);
// • It should return str.
// • For example : salut, comment tu vas ? 42mots quarante - deux;
// cinquante + et + un
// • Becomes : Salut, Comment Tu Vas     ? 42mots Quarante - Deux;
// Cinquante + Et + Un
// #include <stdio.h>
int is_alpha(char c)
{
     if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
          return (1);
     return (0);
}
int is_numeric(char c)
{
     if (c <= '9' && c >= '0')
          return (1);
     return (0);
}
int is_lowercase(char c)
{
     if (c <= 'z' && c >= 'a')
          return (1);
     return (0);
}
int is_uppercase(char c)
{
     if (c <= 'Z' && c >= 'A')
          return (1);
     return (0);
}
char *ft_strcapitalize(char *str)
{
     char *ptr = str;
     int new_word = 1;
     while (*str)
     {
          if (new_word && is_lowercase(*str))
          {
               *str -= 32;
               new_word = 0;
          }
          else if (!new_word && is_uppercase(*str))
               *str += 32;
          else if (!new_word && !is_alpha(*str) && !is_numeric(*str))
               new_word = 1;
          else if (new_word && (is_numeric(*str) || is_uppercase(*str)))
               new_word = 0;
          str++;
     }
     return ptr;
}
// int main(void)
// {
//      char str[] = "HeLLO";
//      printf("%s\n", str);
//      // ft_strcapitalize(str);
//      printf("%s\n", ft_strcapitalize(str));
// }