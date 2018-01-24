#include<stdio.h>
#include<string.h>
int main(int s,char*a[i])
{
char*str=a[1];
size_t span=strspn(str,"012");
if(str[span]=='\0')
{
printf(" string is number");
}
else
{
printf(" the string has not numbers");
