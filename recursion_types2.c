#include <stdio.h>
/*this program is meant to practice tail and non tail types of recursion*/
/*tail recursion*/
void tail(int n)
{
printf("%d\n", n);
n--;
if (n != 0)
	tail(n);
printf("%d\n", n);
}
/*non tail recursion*/
void non_tail(int n)
{
if (n != 0)
{
printf("%d\n", n);
n--;
non_tail(n);
}
}
void main()
{
printf("the tail example starts from here\n");
tail(5);
printf("the non-tail example starts from here\n");
non_tail(5);
}

