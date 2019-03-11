#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100],max=0,c;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i==k)
{
printf("%d",i);
getch();
}

