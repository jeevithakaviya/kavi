#include <stdio.h>

int main()
{
    int n,l,r;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the limit");
    scanf("%d%d",&l,&n);
    if(l<n<r)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
