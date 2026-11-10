#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack_arr[MAX];
int top=-1;
void push(int item)
{
    if (isfull())
    {
        printf("stack overflow");
        return;
    }
    top++;
    stack_arr[top]=item;
}
int pop()
{
    int item;
    if (isempty())
    {
        printf("stack underflow");
        return -1;
    }
    item=stack_arr[top];
    top--;
    return item;
}
int peek()
{
    if (isempty())
    {
        printf("underflow");
        return -1;
    }
    return stack_arr[top];
}
int isfull()
{
    if (top==MAX-1)
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top==-1)
        return 1;
    else
        return 0;
}
int main()
{
    int ch,item;
    while(1)
    {
        printf("\n 1.push \n 2.pop \n 3.display top \n 4.exit \n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the element you want to insert:");
            scanf("%d",&item);
            push(item);
            printf("item inserted");
            break;
        case 2:
            item=pop();
            printf("popped element: %d",item);
            break;
        case 3:
            printf("element at top is: %d",peek());
            break;
        case 4:
            exit(0);
        default:
            printf("wrong choice");
        }
    }
    return 0;
}
