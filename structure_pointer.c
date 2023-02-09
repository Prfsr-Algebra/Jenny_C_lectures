#include <stdio.h>
/*this program is meant to practice structure pointers*/
int main()
{
struct student
{
int rollno;
float marks;
char name[20];
};
struct student s1 = {100, 92.5, "jenny"};
struct student s2 = s1;
/*initializing pointer to a structure*/
struct student *sptr = &s1;
struct student *sptr2 = &s2;
/*accessing structure objects with it's pointer*/
printf("the student named %s sitting at roll number %d scored %f\n", (*sptr).name, (*sptr).rollno, (*sptr).marks);
printf("the student named %s sitting at roll number %d scored %f\n", sptr2->name, sptr2->rollno, sptr2->marks);
}
