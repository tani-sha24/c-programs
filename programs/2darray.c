#include<stdio.h>
void main()
{
    int r,c;
    int mat[10][10],i,j;
    printf("\n Enter the number of rows:");
    scanf("%d",&r);
    printf("\n Enter the number of columns:");
    scanf("%d",&c);
    printf("\n Enter the matrix: \n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           printf("Element %d-",j+1);
           scanf("%d",&mat[i][j]);
       }
    }
    printf("\n Entered matrix is- \n");
    for(i=0;i<r;i++)s
    {
       for(j=0;j<c;j++)
       {
           printf(" %d",mat[i][j]);
       }
       printf("\n");
    }
    printf("Transpose of a matrix is- \n");
    for(j=0;j<c;j++)
    {
       for(i=0;i<r;i++)
       {
           printf(" %d",mat[i][j]);
       }
       printf("\n");
    }
}
