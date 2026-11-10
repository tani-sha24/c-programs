#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int push()
{
    int d;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
        printf("no able to push");
    else
    {
        printf("enter element to be inserted:");
        scanf("%d",&d);
        if(head==NULL)
        {
            ptr->data=d;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->data=d;
            ptr->next=head;
            head=ptr;
        }
    }
}
int pop()
{
    int d;
    struct node *ptr=head;
    if (head==NULL)
        printf("underflow");
    else
    {
        d=head->data;
        head=head->next;
        free(ptr);
    }
    return d;
}
int display()
{
    struct node *ptr=head;
    int i;
    if(ptr==NULL)
        printf("empty");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
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
            push(item);
            printf("item inserted");
            break;
        case 2:
            pop();
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
