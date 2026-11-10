#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
int main()
{
    struct student std[5];
    int i, sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("Enter name of student %d: ",i+1);
        fgets(std[i].name,sizeof(std[i].name),stdin);
        printf("Enter roll number: ");
        scanf("%d",&std[i].rollno);
        printf("Enter marks: ");
        scanf("%d",&std[i].marks);
        sum=sum+std[i].marks;
        getchar();
    }
    avg = sum/5.0;
    printf("Average marks of students is %.2f",avg);
}
