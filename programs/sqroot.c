#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    int a,b,c,m;
    printf("enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    m=(pow(b,2))-4*a*c;
    x=(-b+(sqrt(m)))/2*a;
    y=(-b-(sqrt(m)))/2*a;
    if(m>0)
    {
        printf("\n roots are real and unequal");
        printf("roots are %.2f and %.2f",x,y);
    }
    else if (m=0)
    {
        printf("\n roots are equal and real");
        printf("roots are %.2f and %.2f",x,y);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}
