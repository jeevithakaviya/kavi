#include <stdio.h>
int main()
{
    int n,m,p,i;
    printf("enter the number");
    scanf("%d%d",&n,&m);
    p=n*m;
    for(i=1;i<p;i++)
    if(i*i==p)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
