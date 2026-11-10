#include <stdio.h>
void find(int arr[10]);
void main()
{
    int arr[10],i;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    find(arr);
 }
 void find(int arr[10])
 {
    int j;
    int l = arr[0] , s = arr[0];
    int lp = 0, sp =0;
    for(j = 1; j < 10; j++)
    {
        if(arr[j]>l)
            {
                l = arr[j];
                lp = j+1;
            }
        if(arr[j]<s)
            {
                s = arr[j];
                sp = j+1;
            }
    }
    printf("Smallest number is %d at %d\n",s,sp);
    printf("Largest number is %d at %d",l,lp);
 }
