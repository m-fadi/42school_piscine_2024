// • Reproduce the behavior of the function strncat(man strncat).
// • Here’s how it should be prototyped :

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
     char *ptr = dest;
     while (*dest)
          dest++;
     while (*src && nb--)
          *dest++ = *src++;
     *dest = '\0';
     return (ptr);
}