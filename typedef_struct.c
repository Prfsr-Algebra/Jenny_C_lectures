#include <stdio.h>
/*this program is meant to practice type defined structures*/
typedef struct student
{
int a;
float b;
}study;
study u ={12, 12.12};
int main()
{
printf("%d\n", u.a);
}
