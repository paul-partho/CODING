#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the base of triangle: ");
    scanf("%f",&a);
    printf("Enter the height of triangle: ");
    scanf("%f",&b);
    printf("The area of triangle is: %.2f",(a*b)/2);
    return 0;
}
