#include <stdio.h>
/*program to collect numbers of an array and sum it*/
int main()
{
printf("enter 5 numbers one after the other\n");
int i, j, array[5];
int sum = 0;
for (i =0; i < 5; i++)
{
scanf("%d", & array[i]);
}
for (j = 0; j < 5; j++)
{
sum = sum + array[j];
}
printf("%d\n", sum);
}
