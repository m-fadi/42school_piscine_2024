// Create a function that displays all different combinations
// of three different digits in ascending order,
// listed by ascending order - yes, repetition is voluntary.
// • Here’s the intended output : $ >./ a.out | cat - e 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789 $ >
// • 987 isn’t there because 789 already is.
// • 999 isn’t there because the digit 9 is present more than once.
// • Here’s how it should be prototyped :
#include <unistd.h>
void ft_putchar(char c)
{
     write(1, &c, 1);
}
void ft_print_comb(void)
{
     int i = 0;
     int j = i + 1;
     int w = j + 1;
     while (i <= 9)
     {
          j = i + 1;
          while (j <= 9)
          {
               w = j + 1;
               while (w <= 9)
               {
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(w + '0');
                    ft_putchar(' ');

                    w++;
               }
               j++;
          }
          i++;
     }
}
int main(void)
{
     ft_print_comb();
}