
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n,max;
clrscr();
scanf("%d",&n);
scanf("%d",&m);

for(i=0;i<=m;i++)
{
for(j=0;j<=m;j++)
{
if(n==i*j)
{
max=1;
}
else
max=0;}}
if(max==1)
{
printf("yes");
}
else
printf("no");
getch();
}