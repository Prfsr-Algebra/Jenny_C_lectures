#include <stdio.h>
#include <stdlib.h>
/*this program is meant to practice how to use maloc function to allocate memory dynamically*/
int main()
{
int n, *p;
printf("enter the size of the array\n");
scanf("%d", &n);
p = (int *)malloc(n*sizeof(int));
/*printing the default values in the memory before initialization*/
for (int i = 0; i < n; i++)
{
printf("%d\t", *(p + i));
}
printf("\n");
/*initializing the allocated memory*/
printf("enter the numbers one by one\n");
for (int i = 0; i < n; i++)
{
scanf("%d", (p + i));
}
printf("printing the values after initialization\n");
for(int i =0; i< n; i++)
{
printf("%d\t", *(p + i));
}
printf("\n");
printf("the size of the pointer before freeing the memory is : %ld\n", sizeof(p));
free(p);
printf("the size of the pointer after freeing it is : %ld\n", sizeof(p));
}
