#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input num1: ");
    scanf("%d",&a);
    printf("Input num2: ");
    scanf("%d",&b);
    printf("Input num3: ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("Maximum= %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum= %d",b);
    }
    else
    {
        printf("Maximum= %d",c);
    }
    return 0;
}