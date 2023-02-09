#include <stdio.h>
#include <stdlib.h>
/*this program is meant for practicing all modes in file handling*/
int main()
{
/*opening a file in write mode*/
FILE *fptr = NULL;
fptr = fopen("practice.txt", "w");
/*using fputc and fputs*/
if(fptr == NULL)
{
printf("the file doesn't exist but don't worry, we'll create new file for you");
}
int j = 23;
float u = 2.8;
char c = 'i';
char str[60] = "this file is use for practicing modes in filehandling";
fputc(c, fptr);
fputs(str, fptr);
/*using fprintf*/
fprintf(fptr, "%f\n%d\n%c%s", u, j, c, str);
/*opening file in read mode*/
FILE *fptr10 = NULL;
fptr3 = fopen("file.txt", "r");
if (fptr3 == NULL)
{
printf("error 405 : can't read from a file that doesn't exist\n");
exit(2);
}
/*using fgetc and fgets functions*/
char ch;
ch = fgetc(fptr);

printf("%c\n", ch);
char str3[34];
fgets(str3, 5, fptr2);
printf("%s\n", str3);

fclose(fptr3);
}
