#include <stdio.h>
int main()
{
FILE *fptr = NULL;
fptr = fopen("practice.txt", "r");
char ch;
char str2[23];
ch = fgetc(fptr);
printf("%c\n", ch);
fgets(str2, 6, fptr);
printf("%s\n", str2);
}
