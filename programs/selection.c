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
        int min =i;
        for(j=i+1;j<n;j++)
        {
            if (ar[j]<ar[min])
            {
                min=j;
            }
        }
        int t=ar[i];
        ar[i]=ar[min];
        ar[min]= t;
    }
    printf("after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",ar[i]);
    }
}

