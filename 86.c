#include<stdio.h>
#include<string.h>
int main()
{
  char ch[30];
  int h,i,j,c=0;
  printf("Enter the string");
  scanf("%s",ch);
  h=strlen(ch);
  for(i=0;i<=h-1;i++)
  {
    for(j=i+1;j<=h;j++)
    {
    if(ch[i]==ch[j])
    {
       c=1;
    }
  }
  }
   if(c==1)
   {
      printf("NO");
   }
      else
      {
      printf("YES");
      }
