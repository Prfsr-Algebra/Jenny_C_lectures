#include <stdio.h>
/*this program is meant to practice enumerations*/
int main()
{
enum weekdays{sun, mon, tue, wed, thur, fri, sat};
enum weekdays today = wed;
printf("%d\n", today);
}
