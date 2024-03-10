// // Create a function that displays a number in a base system in the terminal.
// // • This number is given in the shape of an int, and the radix in the shape of a string
// //                                                         of characters.
// // • The base - system contains all useable symbols to display that number :
// //  0123456789 is the commonly used base system to represent decimal numbers
// //  01 is a binary base system;
// //  0123456789ABCDEF an hexadecimal base system;
// //  poneyvif is an octal base system.
// // • The function must handle negative numbers.
// // • If there’s an invalid argument, nothing should be displayed.Examples of invalid
// //                                            arguments :
// //  base is empty or size of 1;
// //  base contains the same character twice;
// //  base contains + or -;
// // • Here’s how it should be prototyped:
// #include <unistd.h>
// #include <stdio.h>
// int str_len(char *s)
// {
//      int i = 0;
//      while (*s++)
//           i++;
//      return (i);
// }
// int ft_strcmp(char *s1, char *s2)
// {
//      int i = 0;
//      int s1_len = str_len(s1);
//      int s2_len = str_len(s1);
//      while (i < s1_len)
//      {
//           // printf("s1: %c\ns2: %c\n", *s1, *s2);
//           // printf("i =  %d\n  s1 %c\ns2: %c\n", i, s1[i], s2[i]);
//           i++;
//      }
//      // printf("i =  %d\n  s1 %c\ns2: %c\n", i, s1[i-1], s2[i-1]);
//      // printf("i =  %d\n  s1 %c\ns2: %c\n", i, );
//      return (s1[s1_len - 1] - s2[s2_len - 1]);
// }

// int ft_base(char *str)
// {

//      char *bs = "01";
//      if (!ft_strcmp(str, bs))
//           return (2);
//      else if (!ft_strcmp(str, "12345678"))
//           return (8);
//      else if (!ft_strcmp(str, "0123456789"))
//           return (9);
//      else if (!ft_strcmp(str, "0123456789ABCDEF"))
//           return (16);

//      return (0);
// }
// void ft_putnbr_base(int nbr, char *base)
// {
//      int number = nbr;
//      int i = 0;
//      char converted_num[nbr / 5];

//      int convert_base = ft_base(base);
//      // printf("%d", convert_base);
//      //  if (!convert_base)
//      //       return (0);
//      //  if (convert_base == 16)
//      //  {
//      //  }
//      // printf("number %d", number);
//      while (i < nbr / 5)
//      {

//           //
//           // i++;
//           // printf("%s", converted_num);
          
//           printf("number %d", number);
//           // printf("convert_base: %s\n", base);
//           // printf("number: %d\n", converted_num[i]);
//           converted_num[i++] = base[number % convert_base];
//           number = number / convert_base;
//           // printf("index: %d\n", number % convert_base);
//           // write(1, &base[number % convert_base], 1);
//      }
//      i = str_len(converted_num) - 1;
//      // printf("%d\n", i);
//      while (i >= 0)
//           printf("%c", converted_num[i--]);
// }

// int main()
// {
//      char *base = "012345678";
//      ft_putnbr_base(100, base);
// }