#include<stdio.h>
int main()
{
    int a,b;
    printf("Input num1: ");
    scanf("%d", &a);
    printf("Input num2: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("Maximum: %d", a);
    }
    else if (b > a)
    {
        printf("Maximum: %d", b);
    }
    return 0;
}
    