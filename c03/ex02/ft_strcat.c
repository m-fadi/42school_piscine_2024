// Reproduce the behavior of the function strcat (man strcat).
// • Here’s how it should be prototyped :
char *ft_strcat(char *dest, char *src)
{
     char *ptr = dest;
     while (*dest)
          dest++;
     while (*src)
          *dest++ = *src++;
     *dest = '\0';
     return (ptr);
}