#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue[MAX];
int front=-1,rear=-1;
int insert(int item)
{
    if ((front==-1) && (rear==-1))
        front=rear=0;
    else if (rear==MAX-1)
        printf("overflow");
    else
        rear++;
        queue[rear]=item;
}
int delete_()
{
    if ((front==-1) && (rear==-1))
        printf("underflow");
    else
    {
        int item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front=front+1;
    }
    printf("value deleted");
}
int display()
{
    if ((front==-1) && (rear==-1))
        printf("underflow");
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("elements are:");
            printf("%d \n",queue[i]);
        }
    }
}
int main()
{
    int ch,item;
    while(1)
    {
        printf("\n 1.insert \n 2.delete \n 3.display \n 4.exit \n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the element you want to insert:");
            scanf("%d",&item);
            insert(item);
            printf("item inserted");
            break;
        case 2:
            delete_();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("wrong choice");
        }
    }
    return 0;
}
