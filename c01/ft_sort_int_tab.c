// • Create a function which sorts an array of integers by ascending order.
// • The arguments are a pointer to int and the number of ints in the array.
// • Here’s how it should be prototyped :
#include <stdio.h>
#include <unistd.h>

// merge sort
void	ft_sort_int_tab(int *tab, int size)
{
	int	mid;

	mid = size / 2;
}

void	merge_sort(int *tab, int l, int r)
{
	int	m;

	if (l < r)
	{
		m = l + (r - l) / 2;
		merge_sort(tab, l, m);
		merge_sort(tab, m, r);
	}
}

// int main(void)
// {
//      int tab[] = {0, 1, 2, 3, 4, 5, 6, 7};
//      int size = sizeof(tab) / sizeof(tab[0]);
//      int i = 0;
//      merge_sort(tab, 0, size - 1);
//      while (size)
//      {
//           printf("%d\n", tab[size--]);
//      }
// }