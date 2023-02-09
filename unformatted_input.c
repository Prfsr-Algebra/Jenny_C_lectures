#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("enter 3 characters\n");
char a, b, c;
a = getchar();
b = getch();
c = getche();
printf("%c\n %c\n %c\n", a, b, c);
printf("enter a sentence\n");
char d[90];
gets(d);
printf("%s\n", d);
}
