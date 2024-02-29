// Create a function that displays a string of
//  characters on the standard output.

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char *str = "helloo";
	ft_putstr(str);
}