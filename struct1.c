#include <stdio.h>
/*this program is meant to practice syntax, initializing, declaring and accessing structure*/
int main()
{
/*structure synatax: defining the datatype*/
struct student
{
int rollno;
float marks;
char name[20];
}s1 = {12, 90.87, "hims"};
/*declaring and initializing the objects of a structure*/
struct student s2 = {10, 37.1, "john"};
struct student s3;
s3.rollno = 23;
s3.marks = 49.5;
struct student s4 = s1;
/*accessing structures in c*/
printf("a student name %s sitting at roll number %d scored %f\n", s1.name, s1.rollno, s1.marks);
printf("a student name %s sitting at roll number %d scored %f\n", s2.name, s2.rollno, s2.marks);
printf("a student name %s sitting at roll number %d scored %f\n", s3.name, s3.rollno, s3.marks);
}
