#include<stdio.h>
void main()
{
    int ar[10],i;
    printf("\n Enter 10 elements for the array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("\n %d",ar[i]);
    }
}
