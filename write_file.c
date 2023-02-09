#include <stdio.h>
#include <string.h>
int main ()
{
FILE *fptr;
fptr = fopen("file.txt", "w");
char *str = "you're welcome to this file";
/*writing str to the file using fputc function*/
int i = 0;
for(;i < strlen(str);)
{
fputc(str[i], fptr);
i++;
}
}
