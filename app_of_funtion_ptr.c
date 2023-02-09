#include <stdio.h>
/*this program is meant to practice how to use function pointer to replace switch statement*/
/*to write a program that can perform 4 arithmetic operation depending on the user's choice*/
/*writting the individual function of the arithmetic operators*/
void sum (int a, int b)
{
printf("the addition of the two numbers you entered is: %d\n", a+b);
}
void sub (int a, int b)
{
printf("the subtraction of the two numbers you entered is: %d\n", a-b);
}
void mul (int a, int b)
{
printf("the multiplication of the two numbers you entered is: %d\n", a*b);
}
void div (int a, int b)
{
printf("the division of the two numbers you entered is: %d\n", a/b);
}
/*writting the main function*/
int main()
{
/*to use use function_pointer in place of switch statement, we declare an array of function pointers*/
int m, n, ch;
/*declaring an array of function pointer*/
void (*fptr[4])(int, int) = {sum, sub, mul, div};
/*prompting the user to enter two numbers for the arithmetic operation*/
printf("enter two numbers one by one\n");
scanf("%d %d", &m, &n);
/*prompting the user for the operation to be performed on the two numbers*/
printf("enter the operation you want to perform on the two number\n0 for addition\n1 for subtraction\n2 for multiplication\n3 for division\n");
scanf("%d", &ch);
/*now finally using the array declared above to perform the operation*/
(*fptr[ch])(m, n);
}
