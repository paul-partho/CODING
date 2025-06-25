#include<stdio.h>
int main()
{
    float Height,Width;
    printf("Enter Height= ");
    scanf("%f",&Height);
    printf("Enter Width= ");
    scanf("%f",&Width);
    printf("Perimeter= %.2f",2*(Height+Width));
    return 0;
}

