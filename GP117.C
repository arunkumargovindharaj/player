#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
int i,j,l=0;
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
l=i;
}
for(i=l;i>=0;i--)
{
printf("%c",str[i]);
if(i!=0)
{
printf("-"); }
}
return 0;
}