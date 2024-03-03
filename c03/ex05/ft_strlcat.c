// Reproduce the behavior of the function strlcat(man strlcat).
// • Here’s how it should be prototyped : unsigned ;
// #include <stdio.h>
int str_len(char *str)
{
     int i = 0;
     while (*str++)
          i++;
     return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
     unsigned int dest_len = str_len(dest);
     int src_len = str_len(src);
     int total_len = dest_len + src_len;
     unsigned int remaining_space = size > dest_len ? size - dest_len - 1 : 0;

     if (dest_len >= size)
          return size + src_len; // If dest is already full, return required length without copying src.

     dest += dest_len;
     while (*src && remaining_space > 1)
     {
          *dest++ = *src++;
          remaining_space--;
     }
     *dest = '\0';
     return total_len;
}

// int main()
// {
//      char *str = "345";
//      char dest[4] = "";
//      ft_strlcat(dest, str, 2);
//      printf("%s", dest);
//      return 0;
// }