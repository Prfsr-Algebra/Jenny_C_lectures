#include <stdio.h>
int main()
{
int a, b;
float c, f;
int sum;
float add;
printf("enter any three numbers\n");
scanf("%2d %d %f", &a, &b, &f);
printf("%1d\n %3.1f\n", a, f);
printf("%-1d\n %-10.2f\n", a, f);
}
