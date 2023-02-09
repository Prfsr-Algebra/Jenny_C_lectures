#include <stdio.h>
int main()
{
printf("enter the number you want to get it's multuiplication table\n");
	int number, i, mul;
scanf("%d", &number);
for(i = 1; i <= 12; i++)
{
mul = number * i;
printf("%d x %d = %d\n", number, i, mul);
}
}
