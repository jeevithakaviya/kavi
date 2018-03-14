#include<stdio.h>
void main()
{
	int b,j;
	printf("Enter the number:");
	scanf("%d",&b);
	for(j=1;j<=b;j++)
	{
		if(b%j==0)
		{
			printf("%d\t",j);
		}
