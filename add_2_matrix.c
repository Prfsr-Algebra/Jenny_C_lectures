#include <stdio.h>
/*this program will add 2 matrices and put the values in a third matrix*/
int main()
{
int i, j, m, n;
printf("enter the number of rows and columns of the first matrix\nnote two matrices can be added only when they have the same dimension\n");
scanf("%d %d", &m, &n);
int a[m][n];
int b[m][n];
int c[m][n];
printf("enter the elements of the first matrix one by one\n");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
printf("a%d%d\n", i, j);
scanf ("%d", &a[i][j]);
}
}
printf("enter the elements of the second matrix one by one\n");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
printf("a%d%d\n", i, j);
scanf ("%d", &b[i][j]);
}
}
printf("the sum of the two matrices will be listed below\n");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
c[i][j] = a[i][j] + b[i][j];
printf("%d\t", c[i][j]);
}
printf("\n");
}

}
