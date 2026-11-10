#include<stdio.h>
void main()
{
    int ar[20],i,j,n;
    printf("enter the size of element:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        int key=ar[i];
        j=i-1;
        while(j>=0 && key<ar[j])
        {
            ar[j+1]=ar[j];
            --j;
        }
        ar[j+1]=key;
    }
    printf("after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",ar[i]);
    }
}
