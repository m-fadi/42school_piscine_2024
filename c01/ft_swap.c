// Create a function that swaps the value of two integers
//  whose addresses are entered
//     as parameters.
// • Here’s how it should be prototyped :
#include <stdio.h>
void ft_swap(int *a, int *b)
{
     int temp = *a;

     *a = *b;
     *b = temp;
}
int main(void)
{
     int a = 2;
     int b = 5;
     ft_swap(&a, &b);
     printf("a = %d, b = %d\n", a, b);
}
