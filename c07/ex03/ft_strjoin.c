// Write a function that will concatenate all the strings pointed by strs separated by
//     sep.
// • size is the number of strings in strs
// • if size is 0,
//     you must return an empty string that you can free().
// • Here’s how it should be prototyped :;
#include <stdio.h>
#include <stdlib.h>
int str_len(char *s)
{
     int i = 0;
     while (*s++)
          i++;
     return (i);
}
char *ft_strcat(char *dest, char *src, char *sep)
{
     char *ptr_dest = dest;

     while (*dest)
          dest++;
     while (*sep)
          *dest++ = *sep++;

     while (*src)
          *dest++ = *src++;
     return (ptr_dest);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
     int len = 0;
     while (*strs)
          len += str_len(*strs++);
     printf("%d", len);
     // if (size <= 0)
     //      return (NULL);
     // char *conc_str = (char *)malloc(sizeof(char) * size);
}
int main()
{
     int main()
     {
          // char *s1 = "123";
          char *strs[] = {"456", "123"};
          char *sep = ", ";
          printf("Result of ft_strjoin: ");
          for (int i = 0; i < 2; i++)
          {
               printf("%s", strs[i]); // Print each string in the array
               if (i < 2 - 1)
               {
                    printf("%s", sep); // Print the separator except for the last string
               }
          }
          printf("\n");

          ft_strjoin(2, strs, sep);
     }
     //      char *s1 = "123";
     //      char s2[10] = "";
     //      char *sep = ", ";
     //      printf("%s", ft_strcat(s2, s1, sep));
}

// #include <unistd.h>
// int main(int ac, char **av)
// {
//      if (ac == 1)
//           return (0);
//      int i = 1;
//      while (i < ac)
//      {
//           ft_strcat(av[1], av[2], ", ");
//      }
// }
