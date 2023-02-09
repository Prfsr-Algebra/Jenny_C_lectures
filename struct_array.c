#include <stdio.h>
/*this program is meant to practice how to initialize, declare and access objects of a structure using an array*/
int main()
{
/*defining the structure data type*/
struct student 
{
int rollno;
float mark;
char name[20];
};
/*initializing an array of structure object*/
struct student s[3];
/*prompting user to fill data for each of the object*/
for (int i = 0; i < 3; i++)
{
printf("enter the data of student %d roll number followed by marks then name\n", i+1);
scanf("%d %f %s", &s[i].rollno, &s[i].mark, s[i].name);
}
/*printing the data for each student on the screen*/
for (int i = 0; i < 3; i++)
{
printf("the student named %s sitting at roll number %d scored %f\n", s[i].name, s[i].rollno, s[i].mark);
}
}
