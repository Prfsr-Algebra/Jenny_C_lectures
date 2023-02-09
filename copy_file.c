#include <stdio.h>
int main ()
{
FILE *fptr1, *fptr2;
fptr1 = fopen("practice.txt", "r");
fptr2 = fopen("file.txt", "a");
char ch;
while((ch = fgetc(fptr1)) != EOF)
{

fputc(ch, fptr2);
}
fclose(fptr1);
fclose(fptr2);
}
