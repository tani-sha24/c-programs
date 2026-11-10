#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void begininsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main()
{
    int choice=0;
    while (choice!=0)
    {
        printf("\n choose one option from the list\n");
        printf("\n 1. insert in beginning \n 2. insert at last \n 3. insert at random location \n 4. delete from beginning \n 5.delete from last \n 6. delete node after specific location \n 7. search for an element \n 8. show \n 9. exit \n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            begininsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("please enter valid choice");
        }
    }
}
void begininsert()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if (ptr==NULL)
    {
        printf(" \n OVERFLOW");
    }
    else
    {
        printf("\n enter value \n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n node inserted");

    }
}
void lastinsert()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if (ptr==NULL)
    {
        printf(" \n OVERFLOW");
    }
    else
    {
        printf("\n enter value \n");
        scanf("%d",&item);
        ptr->data=item;
        if (head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("\n node inserted");
        }
        else
        {
            temp=head;
            while
        }
}
