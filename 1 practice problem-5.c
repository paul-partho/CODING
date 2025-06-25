#include<stdio.h>
int main()
{
    float a;
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&a);
    printf("Temperature in Fahrenheit: %.1f",((9*a)/5)+32);
    return 0;
}
