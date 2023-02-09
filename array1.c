#include <stdio.h>
/*program to collect array data and print it*/
int main()
{
int i, j;
int array[8];
printf("enter the elements of the array one after the other\n");
for(i = 0; i < 8; i++)
{
scanf("%d", &array[i]);
}
for (j = 0; j < 8; j++)
{
printf("array[%d] = %d\n", j, array[j]);
}
}
