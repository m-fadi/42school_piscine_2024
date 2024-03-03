// Create a function that counts
//  and returns the number of characters in a string.
// • Here’s how it should be prototyped :

int ft_strlen(char *str)
{
     int i = 0;
     while (*str++)
          i++;
     return i;
}