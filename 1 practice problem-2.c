#include<stdio.h>
int main()
{
    float a;
    printf("Enter the radius: ");
    scanf("%f",&a);
    printf("Diameter of the circle: %.0f\n",2*a);
    printf("Circumference of the circle: %.2f\n",2*a*3.1416);
    printf("Area of the circle: %.2f",3.1416*a*a);
    return 0;
}
