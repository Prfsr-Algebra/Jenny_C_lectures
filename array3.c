#include <stdio.h>
/*program to count the numbers of even and odd numbers in an integer array*/
int main()
{
int array[10];
int i, j, count_even = 0, count_odd = 0;
printf("enter the number of the array one by one\n");
for (i = 0; i < 10; i++)
{
scanf("%d", &array[i]);
}
for (j = 0; j < 10; j++)
{
if (array[j] % 2 == 0)
{
count_even++;
}
else
{
count_odd++;
}
}
printf("the number of odd numbers in the array is: %d\n", count_odd);
printf("the number of even numbers in the given array is: %d:\n", count_even);
}
