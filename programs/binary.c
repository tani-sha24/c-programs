#include<stdio.h>
void main()
{
    int ar[20],i,n,key,flag=0,mid=0;
    printf("enter the size of element:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter element you want to search:");
    scanf("%d",&key);
    int st=0;
    int end=n-1;
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if (key==ar[mid])
        {
            flag=1;
            break;
        }
        else if (ar[mid]>key)
            end=mid-1;
        else
            st=mid+1;
    }
    if(flag==1)
    {
        printf("Element found at index %d",mid);
    }
    else
        printf("element not found");
}
