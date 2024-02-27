// Create a function that displays the number entered as a parameter.The function
//     has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
#include <unistd.h>
void ft_putchar(char c)
{
     write(1, &c, 1);
}
void ft_putnbr(int nb)
{

     if (nb == -2147483648)
     {
          ft_putchar('-');
          ft_putchar('2');
          ft_putnbr(147483648);
     }
     else if (nb > 9)
     {
          ft_putnbr(nb / 10);
          ft_putnbr(nb % 10);
     }
     else if (nb < 0)
     {
          ft_putchar('-');
          ft_putnbr(-nb);
     }
     else
          ft_putchar(nb + '0');
}

int main(void)
{
     ft_putnbr(-2147483648);
     write(1, "\n", 1);
}