#include <stdio.h>
/*this program is meant to practice the use of function pointers*/
void sum(int a, int b)
{
printf("%d\n", a+b);
}
/*creating a pointer to function sum*/
void (*pointer)(int a, int b) = sum;
int main()
{
/*calling function sum in two different ways*/
(*pointer)(2, 3);
pointer(4, 6);
}
