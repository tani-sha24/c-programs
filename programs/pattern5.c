#include<stdio.h>
void main()
{
    int i,j,k,n;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=3;k>=1;k--)
    {
        for(n=1;n<=k;n++)
        {
            printf("*");
        }
        printf("\n");
    }
}
