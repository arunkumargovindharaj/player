#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],max=0,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
c++;
}}}
printf("%d",c);
getch();
}

