#include <stdio.h>
/*this program is meant to print the transpose of a user given matrix*/
int main()
{
int i, j, m, n;
printf("enter the number of rows and columns of the matrix one  by one\n");
scanf("%d %d", &m, &n);
int p[m][n];
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
printf("a%d%d\n", i, j);
scanf("%d", &p[i][j]);
}
}
printf("the transpose of the matrix you entered will be displayed below\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
printf("%d\t", p[j][i]);
}
printf("\n");
}
}
