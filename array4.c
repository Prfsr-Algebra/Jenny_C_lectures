#include <stdio.h>
/*program to take two arrays of size 5 each and store their sum in another array*/
int main()
{
int array1[5], array2[5], array3[5], i, j, k, sum;
printf("enter five elements for the first array\n");
for (i = 0; i < 5; i++)
{
scanf("%d", &array1[i]);
}
printf("enter the elements of the second array\n");
for (j = 0; j < 5; j++)
{
scanf("%d", &array2[j]);
}
for (i = 0,j = 0,k = 0; i,j < 5, k < 5; i++, j++,k++)
{
sum = array1[i] + array2[j];
int *p;
p = &array3[k];
*p = sum;
printf("the sum of the array at index %d is: %d\n", k, sum); 
}
for (k = 0; k < 5; k++)
{
printf("%d\n", array3[k]);
}
}

