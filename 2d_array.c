#include <stdio.h>
/*program to collect data for 2 dimensional array and print it*/
int main()
{
int i, j, m, n;
printf("enter the size of the size of the row and column\n");
scanf("%d %d", &m, &n);
int p[m][n];
printf("enter the data of the array one by one\n");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &p[i][j]);
}
}
printf("see the data you entered below\n");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\n", p[i][j]);
}
}
}
