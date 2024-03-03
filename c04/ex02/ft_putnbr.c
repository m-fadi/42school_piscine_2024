// Create a function that displays the number entered as a parameter.The function
//     has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
// • For example :
#include <unistd.h>
void ft_putstr(char c)
{

     write(1, &c, 1);
}

void ft_putnbr(int nb)
{

     if (nb == -2147483648)
     {
          ft_putstr('-');
          ft_putstr('2');
          ft_putnbr(147483648);
     }
     else if (nb < 0)
     {
          ft_putstr('-');
          ft_putnbr(-nb);
     }
     else if (nb > 9)
     {
          ft_putnbr(nb / 10);
          ft_putnbr(nb % 10);
     }
     else
          ft_putstr(nb + '0');
}
// int main()
// {
//      ft_putnbr(-2147483648);
// }