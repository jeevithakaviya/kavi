#include <stdio.h>
#include<string.h>
void main()
{ 
    char b[100];
	int n,l,i,c=0;
	scanf("%s",b);
	scanf("%d",&l);
	n=strlen(b);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",b[i]);
	    c++;
	    if(l==c)
	    {
	        break;
	    }
	    
	}
	getch();
}
