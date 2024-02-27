// Create a function that displays all different combination
//  of two two digits numbers(XX XX) between 00 and 99,
//  listed by ascending order.
// • Here’s the expected output : $
//  >./ a.out | cat - e 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99 $ >
// • Here’s how it should be prototyped :

#include <unistd.h>
void ft_putchar(char c)
{
     write(1, &c, 1);
}
void ft_print_comb2(void)
{
     int i = 0;
     int j = 1;
     int w = 0;
     int k = 0;
     while (i <= 9)
     {
          j = 0;
          while (j <= 8)
          {
               w = 0;
               while (w <= 9)
               {
                    k = 0;
                    while (k <= 9)
                    {
                         ft_putchar(i + '0');
                         ft_putchar(j + '0');
                         ft_putchar(' ');
                         ft_putchar(w + '0');
                         ft_putchar(k + '0');
                         // if (i != 9 && j != 8 && w != 9 && k != 9)
                         write(1, ", ", 2);

                         k++;
                    }
                    w++;
               }
               j++;
          }
          i++;
     }
}
int main(void)
{
     ft_print_comb2();
}