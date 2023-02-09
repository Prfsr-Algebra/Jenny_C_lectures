#include <stdio.h>
int main()
{
/*how to return pointer from a function*/
int * my_function(int *a)
{
return ( a+ 3);
}
int b[] = {12, 13, 14, 21, 31, 42};
int *p = my_function(b);
printf("%d\n", *p);
}
