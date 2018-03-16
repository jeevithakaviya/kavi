include<stdio.h>
#include<string.h>
int main()
 {
 char str[10][20],temp[20];
 int a=0,b=0,c;
 printf("Enter the number of items\n");
 scanf("%d",&c);
 printf("Enter the items\n");
 while(a<c)
 scanf("%s",str[a++]);
 for(a=1;a<c;a++)
  {
  for(b=1;b<=c-a;b++)
   {
   if(strcmp(str[b-1],str[b])>0)
    {
    strcpy(temp,str[b-1]); 
    strcpy(str[b-1],str[b]);
    strcpy(str[b],temp);
    }
   }
  }
 printf(" \nSorted Items\n");
 for(a=0;a<n;a++)
 printf(" %s\n",str[a]);
 }
