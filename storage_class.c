#include <stdio.h>
/*this program is meant to practice static storage class*/
int storage()
{
static int num = 16;
return num--;
}
int main()
{
for(storage(); storage(); storage())
{
printf("%d\n", storage());
}
return 0;
}
