#include <stdio.h>
/*this program is meant to practice the use of static keyword*/
int incr_static(int i)
{
static int count = 0;
count = count + i;
return(count);
}
int incr(int i)
{
int increment = 0;
increment = increment + i;
return(increment);
}
int main ()
{
int i, j, k;
for(i = 0; i < 4; i++)
{
j = incr_static(i);
k = incr(i);
printf("%d\t %d\n", j, k);
}
}
