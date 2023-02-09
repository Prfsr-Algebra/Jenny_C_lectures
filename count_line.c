#include <stdio.h>
int main()
{
FILE *fptr = fopen("array3.c", "r");
int count = 0;
char ch;
while ((ch = fgetc(fptr)) != EOF)
{
if (ch == '\n')
	count++;
}
fclose(fptr);
printf("number of lines is : %d\n", count);
}
