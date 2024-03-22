#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{

     struct person
     {
          char *name;
          int *age;
     } my;
 char *n = "Fadi Marouf";
 int a = 26;
 my.name = n;

 my.age = &a;

     printf("%s\n", my.name);
     printf("%d\n", *my.age);
}
// char a = 0;;
// char *x = &a;
// int b = 1;;
// int *y = &b;
// printf("a: %p\n", &a);
// printf("p: %p\n", &b);
// printf("x: %p\n", x);
// printf("y: %p\n", y);
// printf("*x: %d\n", *x);
// printf("*y: %d\n", *y);
// int arr[] = {10, 20, 30, 40, 50};
// int *p1;
// int *p2 = arr + 3;
// int diff = p2 - p1;
// printf("Element difference between p1 and p2: %d\n", diff);

// printf("arr: %d\n", *arr);
// printf("arr: %p\n", arr);
// printf("arr: %p\n", p1);
// printf("*p1 = arr: %d\n", *p1);
// printf("*p2 = arr +3: %d\n", *p2);
