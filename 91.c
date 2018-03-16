include<stdio.h>
void main()
{
int l,w,h,sarea,v;
scanf("%d %d %d",&l,&w,&h);
area=(2*l*h)+(2*l*w)+(2*h*w);
v=(l*w*h);
printf("Surface area of cuboid is:%d\n",area);
printf("Volume of cuboid is:%d",v);
}
