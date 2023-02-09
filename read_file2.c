#include <stdio.h>
int main()
{
FILE *fptr;
fptr = fopen("practice.txt", "r");
while (!feof(fptr))
{
char ch = fgetc(fptr);
putchar(ch);
}
putchar('\n');
}
