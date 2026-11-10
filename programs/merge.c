#include<stdio.h>
void merge(int ar[],int st,int mid,int end);
void mergesort(int ar[],int st,int end)
{
    if (st<end)
    {
        int mid= st+(end-st)/2;
        mergesort(ar,st,mid);
        mergesort(ar,mid+1,end);
        merge(ar,st,mid,end);
    }

}
void merge(int ar[],int st,int mid,int end)
{
    int temp[20],k=st;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end)
    {
        if (ar[i]<=ar[j])
        {
            temp[k]=ar[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=ar[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=ar[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        temp[k]=ar[j];
        j++;
        k++;
    }
    for(i=st;i<=end;i++)
    {
        ar[i]=temp[i];
    }
}
void main()
{
    int ar[20],i,a;
    int start=0;
    printf("enter the size of element:");
    scanf("%d",&a);
    int end= a-1;
    printf("enter elements:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    mergesort(ar,start,end);
    printf("after sorting:");
    for(i=0;i<a;i++)
    {
        printf("%d \n",ar[i]);
    }
}

