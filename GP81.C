#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j=0,a[100],max=0,res=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
res=a[i]&a[j];
if(res>max)
{
max=res;
}}}
printf("%d",max);
getch();
}



