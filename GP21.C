#include<stdio.h>
#include<conio.h>
void main()
{
char s[2],t[2],u[2];
int i,n,f=0;
clrscr();
for(i=0;i<2;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&t[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&u[i]);
}
for(i=0;i<2;i++)
{
if(s[i]==t[i]&&t[i]==u[i])
{
f=1;
}}
if(f==1)
{
printf("yes");
}
else
printf("no");

getch();
}