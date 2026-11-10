#include<stdio.h>
void main()
{
    int r1,c1,c2,r2,i,j,r3,c3;
    int a[10][10],b[10][10],n[10][10];
    printf("\n Enter the number of rows for first matrix:");
    scanf("%d",&r1);
    printf("\n Enter the number of columns for first matrix:");
    scanf("%d",&c1);
    printf("\n Enter first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element %d - ",j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter the number of rows for second matrix:");
    scanf("%d",&r2);
    printf("\n Enter the number of columns for second matrix:");
    scanf("%d",&c2);
    printf("\n Enter second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Element %d - ",j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n After addition matrix will be:\n");
    r3=r1;
    c3=c1;
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r3;i++)        {
            for(j=0;j<c3;j++)
            {
                n[i][j]=a[i][j]+b[i][j];
                printf("%d ",n[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition is not possible.");
    }
}
