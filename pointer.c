#include <stdio.h>
/*this program is meant to practice pointers in c*/
int main()
{
int a = 43;
int *p = &a;
int **q = &p;
int ***r = &q;
/*the use of indirection operation*/
printf("%d\n", a);
*p = 10;
printf("*p = a = %d\n", a);
**q = 27;
printf("**q = a = %d\n", a);
***r = 90;
printf("***r = a = %d\n", a);
/*pointer arithmetic, using pointers on array*/
int array[] = {1, 11, 12, 13, 14, 15, 16, 23, 24, 22, 23};
printf("address of the array is the address of it's first element: %p\n", &array[1] );
/*when declaring a pointer to an array, the syntax is*/
int *s = array;
/*automatically, s is pointing to the first element of the array*/
*s = 123;
printf("the new value of the array at index 0 is now: %d\n", array[0]);
printf("%d %d %d\n", (*s)++, *++s, *s++);
}
