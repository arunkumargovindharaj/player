#include<stdio.h>
void main()
{
int i,j=0,k=0,n=0,l=0,a[100];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0)
{
l=i;
}}
for(i=0;i<l;i++)
{
if(a[i]!=0)
{
 printf("%d",a[i]); }}

getch();
}

