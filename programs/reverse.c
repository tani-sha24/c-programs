#include<stdio.h>
void main()
{
    int n;
    int s=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        n=n/10;
        s=s*10+d;
    }
    printf("reverse is %d",s);
}

