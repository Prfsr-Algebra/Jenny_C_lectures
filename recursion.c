#include <stdio.h>
/*this program is to be used to practice simple recursion in c*/
int recursion(int n)
{
if (n == 0)
	return n;
printf("%d", n);
recursion(n-1);
printf("%d", n);
}
int main ()
{
recursion(5);
printf("\n");
}
