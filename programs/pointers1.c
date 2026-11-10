#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    int s=0,i;
    printf("Enter the string:");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    for(i=0;*(ch+i)!='\0';i++)
        s++;
    printf("%d",s);
    return 0;
}

