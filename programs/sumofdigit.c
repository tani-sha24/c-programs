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
        s=s+d;
    }
    printf("sum is %d",s);
}
