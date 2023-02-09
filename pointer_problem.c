#include <stdio.h>
void main()
{
int a = 23;
const int *p = &a;
*p = 34;
printf("%d\n", a);
}
