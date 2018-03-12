#include <stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,f=0;
    printf("enter the string");
    scanf("%s",&a[10]);
    for(i=0;i<strlen(a);i++)
    {
        
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        f++;
    }
    if(f!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

