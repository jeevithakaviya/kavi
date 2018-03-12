#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int c;
    printf("enter the string");
    scanf("%s%s",&a[10],&b[10]);
    strcpy(b,a);
    a=strrev(b);

    c=strcmp(a,b);
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
