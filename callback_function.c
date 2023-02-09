#include <stdio.h>
/*this program is meant to practice one of the applications of function pointers- callback function*/
/*declaring two function sum and sub for adition and subtraction respectively*/
int sum(int a, int b)
{
/*printf("%d\n", a+b);*/
return (a + b);
}
int sub(int a, int b)
{
/*printf("%d\n", a-b);*/
return (a -  b);
}
/*call back functions are functions that is capable of taking another function as an argument*/
/*creating a call back function*/
int call_function(int (*fptr)(int a, int b))
{
return (*fptr)(16, 7);
}
int main()
{
/*invoking the call_function function with sum and sub as argument*/
int summation = call_function(sum);
printf("the addition of 16 and 7 is: %d\n", summation);
int subtraction = call_function(sub);
printf("the subtraction of 7 from 16 is: %d\n", subtraction);
}
