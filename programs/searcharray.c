#include<stdio.h>
#include <strings.h>
void main()
{
    char city[10][100],sr[100];
    int i,f=0;
    printf("Enter 10 cities name:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",city[i]);
    }
    printf("Enter the city name you want to search:\n");
    scanf("%s",sr);
    for(i=0;i<10;i++)
    {
        if(strcasecmp(city[i],sr)==0)
        {
            f=1;
        }
    }
    if(f=1)
    {
        printf("City name found.");
    }
    else
    {
        printf("City name not found.");
    }
}
