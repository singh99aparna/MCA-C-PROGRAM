#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("The value of a is %d and the value of b is %d before swapping\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The value of a is %d and the value of b is %d after swapping\n",a,b);

}