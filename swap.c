#include<stdio.h>
#include<conio.h>
void swap()
{
int c,d;
{
t=c;
c=d;
d=t;
}
printf("enter the value of c");
scanf("%d",&c);
printf("enter the value of d");
scanf("%d",&d);
swap(c,d);
printf("swap of two numbers ");
}
