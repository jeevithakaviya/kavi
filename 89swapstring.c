#include<stdio.h>
#include<conio.h>
void swap()
{
int *a,*b;
{
t=*a;
*a=*b;
*b=t;
}
printf("enter the value of *a");
scanf("%d",&*a);
printf("enter the value of *b");
scanf("%d",&*b);
swap(*a,*b);
printf("swap  numbers ");
}
