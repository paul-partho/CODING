#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the first angel of triangle: ");
    scanf("%f",&a);
    printf("Enter the second angel of triangle: ");
    scanf("%f",&b);
    printf("The third angel is: %.1f",180-(a+b));
    return 0;
}
