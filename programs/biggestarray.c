#include<stdio.h>
void main()
{
    int ar[10],key,i,l;
    printf("Enter 10 elements for array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter key to insert");
    scanf("%d",&key);
    printf("Enter location to insert");
    scanf("%d",&l);
    for(i=8;i>l;i--)
    {
        ar[i+1]=ar[i];
    }
    ar[l]=key;
    for(i=0;i<=9;i++)
    {
        printf("\n %d",ar[i]);
    }
}
