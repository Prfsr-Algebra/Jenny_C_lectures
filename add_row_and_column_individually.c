#include <stdio.h>
/*this program will add rows and column of a given matrix separately*/
int main()
{
int i, j, m, n, SR, SC;
printf("enter the number of rows and columns of the matrix one by one");
scanf("%d %d", &m, &n);
int p[m][n];
/*SR means sum of row while SC means sum of columns*/
printf("enter the rows and columns of the matrix one by one\n");
for (i = 0; i < m; i++)
{

for (j = 0; j < n; j++)
{
scanf("%d", &p[i][j]);
}
}
printf("the sum of the matrix rows and columns individually will be listed below\n");
for (i = 0; i < m; i++)
{
SR = 0; 
SC = 0;
for (j = 0; j < n; j++)
{
SR = SR + p[i][j];
SC = SC + p[j][i];
}
printf("SR = %d\n SC = %d\n", SR, SC);
}

}
