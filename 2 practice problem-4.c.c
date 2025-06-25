#include<stdio.h>
int main()
{
    char a;
    printf("Input character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("'%c' is alphabet",a);
    }
    else if (a>='A' && a<='Z')
    {
        printf("'%c' is alphabet",a);
    }
    else if (a>='0' && a<='9')
    {
        printf("'%c' is number",a);
    }
    else
    {
        printf("'%c' is special character",a);
    }
    return 0;
}