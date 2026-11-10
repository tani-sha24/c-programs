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
    for(int gap=n/2;gap>=1;gap=gap/2)
    {
        for(j=gap;j<n;j++)
        {
            for(i=j-gap;i>=0;i=i-gap)
            {
                if(ar[i+gap]>ar[i])
                {
                    break;
                }
                else
                {
                    int t=ar[i+gap];
                    ar[i+gap]=ar[i];
                    ar[i]=t;
                }
            }
        }
    }
    printf("after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",ar[i]);
    }
}
