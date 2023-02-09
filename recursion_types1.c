#include <stdio.h>
/*this program is meant to learn direct and indirect type of recursion using the factorial program*/
/*indirect recursion*/
int f2 (int n)
{
if (n <= 1)
	return n;
static int factorial = 0;
factorial = n * f1(n-1);
return factorial;
}
int f1 (int n)
{
if (n <= 1)
	return n;
static int factorial = 0;
factorial = n * f2(n - 1);
return factorial;
}
/*direct recursion*/
int f3(int n)
{
if (n <= 1)
	return n;
static int factorial = 0;
factorial = n * f3(n-1);
return factorial;
}
void main()
{
/*int r = f1(5);*/
int s = f3(5);
printf("f3(5) = %d\n", s);
}
