#include <stdio.h>
/*this program is meant to practice predefined macro*/
int main()
{
printf("the current date is %s\n", __DATE__);
printf("the current time is %s\n", __TIME__);
printf("the current file name is %s\n", __FILE__);
}
