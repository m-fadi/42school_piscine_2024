// Write a function that will concatenate all the strings pointed by strs separated by
//     sep.
// • size is the number of strings in strs
// • if size is 0,
//     you must return an empty string that you can free().
// • Here’s how it should be prototyped :;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int str_len(char *s)
{
     int i = 0;
     while (s[i] != '\0')
          i++;
     return i;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
     if (size == 0)
     {
          char *empty_string = (char *)malloc(sizeof(char));
          *empty_string = '\0';
          return empty_string;
     }

     int i = 0;
     int total_length = 0;
     int sep_length = str_len(sep);
     {
          total_length += str_len(strs[i]);
          if (i < size - 1) // Add separator length for all but the last string
               total_length += sep_length;
          i++;
     }

   
     char *conc_str = (char *)malloc(sizeof(char) * (total_length + 1));
     if (conc_str == NULL)
          return NULL; 

     char *ptr_conc_str = conc_str;
     i = 0;

     // Copy strings and separators into the concatenated string
     while (i < size)
     {
          char *ptr_str = strs[i];
          while (*ptr_str)
          {
               *conc_str = *ptr_str;
               ptr_str++;
               conc_str++;
          }
          if (i < size - 1)
          {
               char *ptr_sep = sep;
               while (*ptr_sep)
               {
                    *conc_str = *ptr_sep;
                    ptr_sep++;
                    conc_str++;
               }
          }
          i++;
     }

     *conc_str = '\0';    
     return ptr_conc_str;
}

// int main()
// {
//      char *s1 = "1234";
//      char *s2 = "4567";
//      char *s3 = "7891";
//      char *strs[] = {s1, s2, s3, NULL};
//      char *sep = ", ";

//      char *result = ft_strjoin(3, strs, sep); 
//      printf("Concatenated string: %s\n", result);

//      free(result);

//      return 0;
// }
