#include <stdio.h>
#include <string.h>
/*this program is meant to practice how to pass an array and string as argument to a function*/
/*passing array into a functon*/
void passing_array(int m[], int a)
{
int sum = 0;
for (int i = 0; i < a; i++)
{
sum = sum + m[i];
}
int average = sum / a;
printf("%d\n", average);
}
/*passing string*/
void passing_string(char s1[], char s2[])
{
strcat(s1, s2);
printf("%s\n", s1);
}
int main()
{
int p[] = {12, 13, 12, 15, 134, 124, 13455, 898};
passing_array(p, 8);
char s1[] = "hello";
char s2[] = "world";
passing_string(s1, s2);
}
