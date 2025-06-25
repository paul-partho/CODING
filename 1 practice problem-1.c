#include<stdio.h>
int main()
{
    float a;
    printf("Enter the length in centimeter: ");
    scanf("%f",&a);
    printf("Length in meter: %.0f\n",a/100);
    printf("Length in kilometer: %.1f",a/100000);
    return 0;
}
