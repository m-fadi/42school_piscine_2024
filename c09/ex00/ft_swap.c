#include <unistd.h>

void ft_putchar(int *s1, int *s2)
{
     int temp = *s1;
     *s1 = *s2;
     *s1 = temp;
}