#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of 1st subject: ");
    scanf("%d",&a);
    printf("Enter marks of 2nd subject: ");
    scanf("%d",&b);
    printf("Enter marks of 3rd subject: ");
    scanf("%d",&c);
    printf("Enter marks of 4th subject: ");
    scanf("%d",&d);
    printf("Enter marks of 5th subject: ");
    scanf("%d",&e);
    printf("total marks: %d\n",a+b+c+d+e);
    printf("Average marks: %d",(a+b+c+d+e)/5);
    return 0;
}
