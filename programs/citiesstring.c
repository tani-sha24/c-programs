#include<stdio.h>
void main()
{
    char city[10][100];
    int i;
    printf("Enter the names of 10 cities:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",city[i]);
    }
    printf("\n Cities name are:");
    for(i=0;i<10;i++)
    {
        printf("\n %s",city[i]);
    }
}
