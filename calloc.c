#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, *ptr;
printf("enter the number of needed space\n");
scanf("%d", &n);
ptr = (int *)calloc(n, sizeof(int));
/*printing the default values before initialization*/
for (int i = 0; i < n; i++)
{
printf("%d\t", *(ptr + i));
}
printf("\n");
/*initilizating the spaces allocated with values*/
printf("enter the values one  by one\n");
for (int j = 0; j < n; j++)
{
scanf("%d", (ptr + j));
}
/*printing the values after initialization*/
for (int i = 0; i < n; i++)
{
printf("%d\t", *(ptr + i));
}
printf("\n");
int sum = 0;
for (int k = 0; k < n; k++)
{
sum = sum + *(ptr + k);
}
float r = sum / n;
printf("the average values of the numbers you entered is %f\n", r);
}
