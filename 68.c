#include <stdio.h>
int main
{
	char b[10];
	int count=0,j;
	printf("enter the string ");
	scanf("%[^\n]s",b);
	for(j=0;j!='\0';j++)
	{
		if(b[j]==' ')
		count++;
	}
	printf("%d",count+1);
	return 0;
  }
