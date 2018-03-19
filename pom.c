include<stdio.h>
void main()
{
	int b[8],k,j;
	char a[4];
	for(k=0,j=4;k<4&&j<8;k++,j++)
	{
		scanf("%d %c %d",&b[k],&b[k],&a[j]);
	}
	for(k=0,j=4,k<4;k++,j++)
	{
		switch(b[i])
		{
			case '+':
				printf("\n%d",b[k]+b[j]);
				break;
			case '/':
				printf("\n%d",b[k]/b[j]);
				break;
			case '%':
			    printf("\n%d",b[k]%b[j]);	
			    break;
			default:
				printf("nofunction");
		}
	}
}
