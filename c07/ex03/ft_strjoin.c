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

int strs_len(char **strs, int size, char *sep)
{
     int i = 0;
     int total_length = 0;
     int sep_length = str_len(sep);
     {
          total_length += str_len(strs[i]);
          if (i < size - 1) // Add separator length for all but the last string
               total_length += sep_length;
          i++;
     }
     return (total_length);
}
char *strs_cat(int size, char *str_cat, char **strs, char *sep)
{
     char *ptr_str_cat = str_cat;
     int i = 0;
     // Copy strings and separators into the concatenated string
     while (i < size)
     {
          char *ptr_str = strs[i];
          while (*ptr_str)
          {
               *str_cat = *ptr_str;
               ptr_str++;
               str_cat++;
          }
          if (i < size - 1)
          {
               char *ptr_sep = sep;
               while (*ptr_sep)
                    *str_cat++ = *ptr_sep++;
          }
          i++;
     }
     *str_cat = '\0';
     return ptr_str_cat;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
     if (size == 0)
     {// if size =0 allocate a string with size one char and put \0 in it
          char *empty_string = (char *)malloc(sizeof(char));
          *empty_string = '\0';
          return empty_string;
     }//strs_length = the length of every str in strs + (the length of the sep * number of sep needed  )
     int strs_total_length = strs_len(strs, size, sep);
     char *str_cat = (char *)malloc(sizeof(char) * (strs_total_length + 1));
     if (str_cat == NULL)
          return NULL;
     return strs_cat(size, str_cat, strs, sep);
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
