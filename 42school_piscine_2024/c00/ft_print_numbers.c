#include <unistd.h>

void ft_putchar(char c)
{
     write(1, &c, 1);
}

void ft_print_numbers(void)
{
     int i = 0;

     while (i <= 9)
     {
          ft_putchar(i + '0');
          i++;
     }
     write(1, "\n", 1);
}

int main(void)
{
     ft_print_numbers();
}