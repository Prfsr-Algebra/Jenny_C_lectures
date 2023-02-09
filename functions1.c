#include <stdio.h>
/*this program is meant to practice ways of calling function*/
/*calling funtion by value*/
void fun(int x, int y)
{
int sum;
sum = x+y;
printf("%d", sum);
}
/*calling funtions by reference*/
void funa(int *p, int *q)
{
int suma;
suma = *p + *q;
printf("%d", suma);
}
void main()
{
/*the first function will be called by value*/
fun(2, 3);
/*the second function can be called by reference because it take pointer as value*/
int a, b;
a = 23;
b = 24;
funa(&a, &b);
}
