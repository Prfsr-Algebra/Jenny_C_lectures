#include <stdio.h>
int main()
{
typedef enum weekdays{sun = 45, mon, tue, wed, thur, fri, sat}days;
printf("the size of the enumeration is: %ld\n", sizeof(days));
printf("the value of sun is %d and the value of tuesday is %d\n", sun, tue);
enum months{jan, feb, march, april, weekdays};
printf("the size of the second enum is %ld\n", sizeof(enum months));
}
