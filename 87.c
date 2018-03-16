#include <stdio.h>

int main()
{
	int n,m,h,j;
	scanf("%d %d",&n,&m);
	for(j=1;j<=n&&j<=m;j++)
	{
		if(n%j==0 && m%j==0)
		{
			h=j;
		}
	}
	printf("%d",h);
	return 0;
}
