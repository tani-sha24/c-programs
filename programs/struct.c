#include <stdio.h>
struct arithmetic
{
    int n1;
    int n2;
    char op;
};
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
float divide(int n1, int n2);
int main()
{
    struct arithmetic art;
    printf("Enter two numbers: ");
    scanf("%d%d",&art.n1,&art.n2);
    printf("Enter operator: ");
    scanf(" %c",&art.op);
    float result;
    switch (art.op)
    {
        case '+':
            result = add(art.n1,art.n2);
            break;
        case '-':
            result = subtract(art.n1, art.n2);
            break;
        case '*':
            result = multiply(art.n1, art.n2);
            break;
        case '/':
            result = divide(art.n1, art.n2);
            break;
        default:
            printf("Invalid operator");
            return 0;
    }
    printf("The result is %.2f",result);
    return 0;
}
int add(int n1, int n2)
{
    return n1 + n2;
}
int subtract(int n1, int n2)
{
    return n1 - n2;
}
int multiply(int n1, int n2)
{
    return n1 * n2;
}
float divide(int n1, int n2)
{
    if (n2 != 0)
        return n1/n2;
    else
    {
        printf("Division by zero is not allowed.");
        return 0;
    }
}



