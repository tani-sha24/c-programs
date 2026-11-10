#include<stdio.h>
void main()
{
    int ar[10],i,avg;
    int sum=0;
    printf("\n Enter the marks of 10 students:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    avg=sum/10;
    printf("The average of marks are:%d \n",avg);
}
