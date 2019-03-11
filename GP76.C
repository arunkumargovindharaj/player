#include<stdio.h>
#include<conio.h>
void main()
{
int n,k=0,i,j,m,a[100],max=0,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
c++;
}
if(a[i]%2!=0)
{
k++;
}
if(c>k)
{
if(a[i]%2!=0)
{
printf("%d",a[i]);
}}
if(k>c)
{
if(a[i]%2==0)
{
printf("%d",a[i]);
}}}
getch();
}

