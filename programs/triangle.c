#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first angle:");
    scanf("%d",&a);
    printf("enter the second angle:");
    scanf("%d",&b);
    printf("enter the third angle:");
    scanf("%d",&c);
    if((a==b && b!=c)||(b==c && b!=a)||(c==a && a!=b))
    {
        printf("triangle is isosceles");
    }
    else if(a==b && b==c && c==a)
    {
        printf("triangle is equilateral");
    }
    else
    {
        printf("triangle is scalene");
    }
    return 0;
}
