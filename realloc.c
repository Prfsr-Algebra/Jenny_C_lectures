#include <stdio.h>
#include <stdlib.h>
/*this program is meant to practice how to reallocate the dynamicaly allocated memory*/
int main()
{
int n, *ptr;
/*using realloc on malloc*/
printf("enter the number of needed spaces\n");
scanf("%d", &n);
ptr = (int *)malloc(n*sizeof(int));
/*collecting values*/
printf("enter the values one by one\n");
for (int i = 0; i < n; i++)
{
scanf("%d", (ptr + i));
}
printf("do you need more space?, if yes, press 1\n");
int more;
scanf("%d", &more);
if (more == 1)
{
printf("enter the number of more spaces needed\n");
int extra;
scanf("%d",& extra);
ptr = (int *)realloc(ptr, (n + extra)*sizeof(int));
printf("enter the values for the newly added space\n");
for(int i = 0; i < extra; i++)
{
scanf("%d", (ptr + n +i));
}
/*printing the values*/
for (int i = 0; i < (n + extra); i++)
{
printf("%d\t", *(ptr + i));
}
printf("\n");
}
}
