#include <stdio.h>

int main()
{
    char str[50];
    int i,n;
    
    printf("enter the string");
    scanf("%c",&str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c",str[i]);
        }
    }
    
    printf(" ");
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf("%c",str[i]);
        }
    }

    return 0;
}
