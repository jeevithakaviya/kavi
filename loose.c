#include<stdio.h>
void main()
{
int n,sum=0,digit=0,i;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
sum+=digit;
n/=10;
}
printf("\nsum of digits are %d",sum);
}
