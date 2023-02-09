#include <stdio.h>
#include <string.h>
/*this program is meant to test the functional iperation on string*/
int main()
{
printf("enter string 1:\n");
char s1[30];
scanf("%s", s1);
printf("enter string 2:\n");
char s2[30];
scanf("%s", s2);
int i = strlen(s1);
printf("%d\n", i);
int r= strcmp (s1, s2);
printf("%d\n", r);
strcat(s1, s2);
printf("%s\n", s1);
/*char m[] = strrev(s2);
printf("%s\n", m);*/
}
