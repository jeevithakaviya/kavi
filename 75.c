#include <stdio.h>

int main()
{
    int n;
    char a[10];
    printf("enter the string");
    scanf("%d",&a[10]);
    n=strlen(a);
    if(n=strlen(a)%2==0)
    {
        a[n/2]='*';
        a[n/2-1]='*';
    }
    else
    {
        a[n/2]='*';
        printf("%s",a[10]);
    }

    return 0;
}
