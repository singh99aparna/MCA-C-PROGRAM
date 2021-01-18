#include<stdio.h>
int main()
{
    int i,j,sum=0,num;
    float average;
    printf("enter the number of students in class");
    scanf("%d",&num);
    int marks[num];
    printf("enter marks of all students");
    for(i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
        sum=marks[i];
    }
    average=(float)sum/num;
    printf("average of class is %f",average);
}