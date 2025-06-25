#include<stdio.h>
int main()
{
    float a;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&a);
    printf("Temperature in Celsius: %.2f",((a-32)*5)/9);
    return 0;
}
