#include <stdio.h>
int main()
{
/*how to return a string from a function*/
char * my_function()
{
return "you're welcome\n";
}
char *my_function2()
{
/*how to modify a string that's returned from a function using static keyword*/
static char you[] = "you're highly welcome\n";
return you;
}
char *l = my_function();
printf("%s", l);
char *k = my_function2();
printf("%s", k);
k[3] = ',';
printf("the value of k after modification is %s\n", k);
}
