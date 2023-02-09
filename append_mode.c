#include <stdio.h>
int main()
{
FILE *fptr = fopen("file.txt", "a");
fprintf(fptr, "\nthis line is just appended to this file\n");
}
