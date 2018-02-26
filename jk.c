nclude<stdio.h>
void main()
{
int t,b=0,y=1,i;
scanf("%d",&t);
while(t!=1)
{
t=t/2;
b++;
}
for(i=0;i<b+1;i++)
y=y*2;
printf("%d",y);
}
