#include <stdio.h>
int main()
{
int r;
printf("Enter any year value: ");
scanf("%d",&r);
if( ( (r%4 == 0) && (r%100 !=0) ) || (r%400 == 0))
{
printf("This is a leap year");
}
else
{
printf("This is not  leap year");
}
return 0;
}