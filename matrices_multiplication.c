#include <stdio.h>
/*program to multiply two given matrices together*/
int main()
{
printf("enter the number of rows then column of the first matrix\nnote: multiplication of matrices is not commutative\n");
int p, q;
scanf("%d %d", &p, &q);
int m[p][q];
printf("enter the element of the first matrix row by row\n");
int i, j;
for(i = 0; i < p; i++)
{
for (j = 0; j < q; j++)
{
scanf("%d", &m[i][j]);
}
}
printf("you've just given the following data\n");
for(i = 0; i < p; i++)
{
for (j = 0; j < q; j++)
{
printf("%d\t", m[i][j]);
printf(" ");
}
printf("\n");
}
printf("enter the number of rows then columns of the second matrix\nnote: in matrix multiplication, the columns of the first matrix must be equal to rows of the second\n");
int r, s;
scanf("%d %d", &r, &s);
int n[r][s];
printf("enter the elements of the second matrix row by row\n");
for(i = 0; i < r; i++)
{
for (j = 0; j < s; j++)
{
scanf("%d", &n[i][j]);
}
}
printf("you've just given the following data\n");
for(i = 0; i < r; i++)
{
for (j = 0; j < s; j++)
{
printf("%d\t", n[i][j]);
printf(" ");
}
printf("\n");
}
printf("the result of the multiplication will be printed below\n");
int mul[r][s];
for (i = 0; i < p; i++)
{
for (j = 0; j < s; j++)
{
int sum = 0;
for (int k = 0; k < s; k++)
{
int u = m[i][k] * n[k][j];
sum = sum + u;
mul[i][j] = sum;

}
}
}
for (i = 0; i < p; i++)
{
for (j = 0; j < s; j++)
{
printf("%d\t", mul[i][j]);
}
printf("\n");
}
}
