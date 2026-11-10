
#include<stdio.h>
int main (){
int a, b, temp;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
//display values before swapping
printf("before swapping: a=%d b=%d\n",a,b);
//swapping process
temp=a;//store the value of a in temp
a=b;//assign value of b to a
b=temp;//assign value of temp (original a) to b
//display values after swapping
printf("after swapping: a=%d b=%d\n",a,b);
return 0;

}
