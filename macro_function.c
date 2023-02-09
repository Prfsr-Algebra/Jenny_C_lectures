#include <stdio.h>
/*fthis program is meant to practice how to use macros to define multiple lines functions*/
#define max() printf("enter two numbers\n");\
	int a, b;\
	scanf("%d %d", &a, &b);\
	if(a > b);\
		printf("%d is greater than %d\n", a, b);\
	printf("%d is greater than %d", b, a);
int main()
{
max();
}
