#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    printf("Sum: %.0f\n",a+b);
    printf("Difference: %.0f\n",a-b);
    printf("Multiplication: %.0f\n",a*b);
    printf("Division: %.2f",a/b);
    return 0;
}
