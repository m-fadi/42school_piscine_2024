// Reproduce the behavior of the function strcpy(man strcpy).
// • Here’s how it should be prototyped :

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char *src = "12345600";
// 	char dest[8];
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }