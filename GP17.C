#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,len=0,g=0,i;
clrscr();
scanf("%d%d",&n,&m);
if(n>m)
{
len=n;
}
else
{
len=m;
}
for(i=2;i<=len;i++)
{
if((i%n==0)&&(i%m==0))
{
g=i;
break;
}}
printf("%d",i);


getch();
}
