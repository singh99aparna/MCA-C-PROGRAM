#include<stdio.h>
int main()
{
    int num;
    int i;
    printf("Enter any number");
    scanf("%d",&num);
    while(num>0)
    {
        i=num%10;
        printf("%d",i);
        num=num/10;
    }
    return 0;
}